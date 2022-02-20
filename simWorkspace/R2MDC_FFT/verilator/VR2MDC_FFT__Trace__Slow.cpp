// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VR2MDC_FFT__Syms.h"


//======================

void VR2MDC_FFT::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VR2MDC_FFT::traceInit, &VR2MDC_FFT::traceFull, &VR2MDC_FFT::traceChg, this);
}
void VR2MDC_FFT::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VR2MDC_FFT* t = (VR2MDC_FFT*)userthis;
    VR2MDC_FFT__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VR2MDC_FFT::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VR2MDC_FFT* t = (VR2MDC_FFT*)userthis;
    VR2MDC_FFT__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VR2MDC_FFT::traceInitThis(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
    }
}

void VR2MDC_FFT::traceFullThis(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__10(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__14(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VR2MDC_FFT::traceInitThis__1(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+3473,"mode", false,-1);
        vcdp->declBit(c+3481,"raw_data_iq_valid", false,-1);
        vcdp->declBit(c+3489,"raw_data_iq_ready", false,-1);
        vcdp->declBus(c+3497,"raw_data_iq_payload_cha_i", false,-1, 23,0);
        vcdp->declBus(c+3505,"raw_data_iq_payload_cha_q", false,-1, 23,0);
        vcdp->declBit(c+3513,"result_iq_valid", false,-1);
        vcdp->declBit(c+3521,"result_iq_payload_last", false,-1);
        vcdp->declBus(c+3529,"result_iq_payload_fragment_cha_i", false,-1, 23,0);
        vcdp->declBus(c+3537,"result_iq_payload_fragment_cha_q", false,-1, 23,0);
        vcdp->declBit(c+3545,"clk", false,-1);
        vcdp->declBit(c+3553,"reset", false,-1);
        vcdp->declBit(c+3473,"R2MDC_FFT mode", false,-1);
        vcdp->declBit(c+3481,"R2MDC_FFT raw_data_iq_valid", false,-1);
        vcdp->declBit(c+3489,"R2MDC_FFT raw_data_iq_ready", false,-1);
        vcdp->declBus(c+3497,"R2MDC_FFT raw_data_iq_payload_cha_i", false,-1, 23,0);
        vcdp->declBus(c+3505,"R2MDC_FFT raw_data_iq_payload_cha_q", false,-1, 23,0);
        vcdp->declBit(c+3513,"R2MDC_FFT result_iq_valid", false,-1);
        vcdp->declBit(c+3521,"R2MDC_FFT result_iq_payload_last", false,-1);
        vcdp->declBus(c+3529,"R2MDC_FFT result_iq_payload_fragment_cha_i", false,-1, 23,0);
        vcdp->declBus(c+3537,"R2MDC_FFT result_iq_payload_fragment_cha_q", false,-1, 23,0);
        vcdp->declBit(c+3545,"R2MDC_FFT clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT reset", false,-1);
        vcdp->declBit(c+193,"R2MDC_FFT raw_data_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+201,"R2MDC_FFT fft_core_raw_data_valid", false,-1);
        vcdp->declBit(c+209,"R2MDC_FFT raw_data_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+217,"R2MDC_FFT raw_data_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+665,"R2MDC_FFT raw_data_fifo_io_pop_payload_re", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC_FFT raw_data_fifo_io_pop_payload_im", false,-1, 23,0);
        vcdp->declBus(c+225,"R2MDC_FFT raw_data_fifo_io_occupancy", false,-1, 7,0);
        vcdp->declBus(c+233,"R2MDC_FFT raw_data_fifo_io_availability", false,-1, 7,0);
        vcdp->declBit(c+3313,"R2MDC_FFT fft_core_raw_data_ready", false,-1);
        vcdp->declBit(c+681,"R2MDC_FFT fft_core_result_valid", false,-1);
        vcdp->declBit(c+3305,"R2MDC_FFT fft_core_result_payload_last", false,-1);
        vcdp->declBus(c+689,"R2MDC_FFT fft_core_result_payload_fragment_re", false,-1, 23,0);
        vcdp->declBus(c+697,"R2MDC_FFT fft_core_result_payload_fragment_im", false,-1, 23,0);
        vcdp->declBit(c+3321,"R2MDC_FFT fifo_pop_en", false,-1);
        vcdp->declBus(c+3329,"R2MDC_FFT pop_cnt", false,-1, 5,0);
        vcdp->declBit(c+241,"R2MDC_FFT raw_data_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+3337,"R2MDC_FFT when_R2MDC_FFT_l28", false,-1);
        vcdp->declBit(c+249,"R2MDC_FFT when_R2MDC_FFT_l31", false,-1);
        vcdp->declBit(c+3481,"R2MDC_FFT raw_data_fifo io_push_valid", false,-1);
        vcdp->declBit(c+209,"R2MDC_FFT raw_data_fifo io_push_ready", false,-1);
        vcdp->declBus(c+3497,"R2MDC_FFT raw_data_fifo io_push_payload_re", false,-1, 23,0);
        vcdp->declBus(c+3505,"R2MDC_FFT raw_data_fifo io_push_payload_im", false,-1, 23,0);
        vcdp->declBit(c+217,"R2MDC_FFT raw_data_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+193,"R2MDC_FFT raw_data_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+665,"R2MDC_FFT raw_data_fifo io_pop_payload_re", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC_FFT raw_data_fifo io_pop_payload_im", false,-1, 23,0);
        vcdp->declBit(c+3593,"R2MDC_FFT raw_data_fifo io_flush", false,-1);
        vcdp->declBus(c+225,"R2MDC_FFT raw_data_fifo io_occupancy", false,-1, 7,0);
        vcdp->declBus(c+233,"R2MDC_FFT raw_data_fifo io_availability", false,-1, 7,0);
        vcdp->declBit(c+3545,"R2MDC_FFT raw_data_fifo clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT raw_data_fifo reset", false,-1);
        vcdp->declBit(c+601,"R2MDC_FFT raw_data_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+3593,"R2MDC_FFT raw_data_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+609,"R2MDC_FFT raw_data_fifo logic_pushPtr_valueNext", false,-1, 6,0);
        vcdp->declBus(c+3345,"R2MDC_FFT raw_data_fifo logic_pushPtr_value", false,-1, 6,0);
        vcdp->declBit(c+3353,"R2MDC_FFT raw_data_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+585,"R2MDC_FFT raw_data_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+257,"R2MDC_FFT raw_data_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+3593,"R2MDC_FFT raw_data_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+265,"R2MDC_FFT raw_data_fifo logic_popPtr_valueNext", false,-1, 6,0);
        vcdp->declBus(c+3361,"R2MDC_FFT raw_data_fifo logic_popPtr_value", false,-1, 6,0);
        vcdp->declBit(c+3369,"R2MDC_FFT raw_data_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+273,"R2MDC_FFT raw_data_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+281,"R2MDC_FFT raw_data_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+3377,"R2MDC_FFT raw_data_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+617,"R2MDC_FFT raw_data_fifo logic_pushing", false,-1);
        vcdp->declBit(c+289,"R2MDC_FFT raw_data_fifo logic_popping", false,-1);
        vcdp->declBit(c+297,"R2MDC_FFT raw_data_fifo logic_empty", false,-1);
        vcdp->declBit(c+305,"R2MDC_FFT raw_data_fifo logic_full", false,-1);
        vcdp->declBit(c+593,"R2MDC_FFT raw_data_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+3385,"R2MDC_FFT raw_data_fifo logic_ptrDif", false,-1, 6,0);
        vcdp->declBit(c+3473,"R2MDC_FFT fft_core mode", false,-1);
        vcdp->declBit(c+201,"R2MDC_FFT fft_core raw_data_valid", false,-1);
        vcdp->declBit(c+3313,"R2MDC_FFT fft_core raw_data_ready", false,-1);
        vcdp->declBus(c+665,"R2MDC_FFT fft_core raw_data_payload_re", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC_FFT fft_core raw_data_payload_im", false,-1, 23,0);
        vcdp->declBit(c+681,"R2MDC_FFT fft_core result_valid", false,-1);
        vcdp->declBit(c+3305,"R2MDC_FFT fft_core result_payload_last", false,-1);
        vcdp->declBus(c+689,"R2MDC_FFT fft_core result_payload_fragment_re", false,-1, 23,0);
        vcdp->declBus(c+697,"R2MDC_FFT fft_core result_payload_fragment_im", false,-1, 23,0);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core reset", false,-1);
        vcdp->declBus(c+705,"R2MDC_FFT fft_core r2Butterfly_5_wn_re", false,-1, 23,0);
        vcdp->declBus(c+625,"R2MDC_FFT fft_core r2Butterfly_5_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3393,"R2MDC_FFT fft_core r2Switch_5_sel", false,-1);
        vcdp->declBus(c+713,"R2MDC_FFT fft_core r2Butterfly_6_wn_re", false,-1, 23,0);
        vcdp->declBus(c+633,"R2MDC_FFT fft_core r2Butterfly_6_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3401,"R2MDC_FFT fft_core r2Switch_6_sel", false,-1);
        vcdp->declBus(c+721,"R2MDC_FFT fft_core r2Butterfly_7_wn_re", false,-1, 23,0);
        vcdp->declBus(c+641,"R2MDC_FFT fft_core r2Butterfly_7_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3409,"R2MDC_FFT fft_core r2Switch_7_sel", false,-1);
        vcdp->declBus(c+729,"R2MDC_FFT fft_core r2Butterfly_8_wn_re", false,-1, 23,0);
        vcdp->declBus(c+649,"R2MDC_FFT fft_core r2Butterfly_8_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3417,"R2MDC_FFT fft_core r2Switch_8_sel", false,-1);
        vcdp->declBus(c+737,"R2MDC_FFT fft_core r2Butterfly_9_wn_re", false,-1, 23,0);
        vcdp->declBus(c+657,"R2MDC_FFT fft_core r2Butterfly_9_wn_im", false,-1, 23,0);
        vcdp->declBit(c+3425,"R2MDC_FFT fft_core r2Switch_9_sel", false,-1);
        vcdp->declBit(c+3433,"R2MDC_FFT fft_core reorder_1_unsorted_valid", false,-1);
        vcdp->declBus(c+745,"R2MDC_FFT fft_core shiftRegister_10_output_re", false,-1, 23,0);
        vcdp->declBus(c+753,"R2MDC_FFT fft_core shiftRegister_10_output_im", false,-1, 23,0);
        vcdp->declBus(c+1,"R2MDC_FFT fft_core r2Butterfly_5_out1_re", false,-1, 23,0);
        vcdp->declBus(c+9,"R2MDC_FFT fft_core r2Butterfly_5_out1_im", false,-1, 23,0);
        vcdp->declBus(c+177,"R2MDC_FFT fft_core r2Butterfly_5_out2_re", false,-1, 23,0);
        vcdp->declBus(c+185,"R2MDC_FFT fft_core r2Butterfly_5_out2_im", false,-1, 23,0);
        vcdp->declBus(c+761,"R2MDC_FFT fft_core shiftRegister_11_output_re", false,-1, 23,0);
        vcdp->declBus(c+769,"R2MDC_FFT fft_core shiftRegister_11_output_im", false,-1, 23,0);
        vcdp->declBus(c+33,"R2MDC_FFT fft_core r2Switch_5_out1_re", false,-1, 23,0);
        vcdp->declBus(c+41,"R2MDC_FFT fft_core r2Switch_5_out1_im", false,-1, 23,0);
        vcdp->declBus(c+313,"R2MDC_FFT fft_core r2Switch_5_out2_re", false,-1, 23,0);
        vcdp->declBus(c+321,"R2MDC_FFT fft_core r2Switch_5_out2_im", false,-1, 23,0);
        vcdp->declBus(c+777,"R2MDC_FFT fft_core shiftRegister_12_output_re", false,-1, 23,0);
        vcdp->declBus(c+785,"R2MDC_FFT fft_core shiftRegister_12_output_im", false,-1, 23,0);
        vcdp->declBus(c+329,"R2MDC_FFT fft_core r2Butterfly_6_out1_re", false,-1, 23,0);
        vcdp->declBus(c+337,"R2MDC_FFT fft_core r2Butterfly_6_out1_im", false,-1, 23,0);
        vcdp->declBus(c+113,"R2MDC_FFT fft_core r2Butterfly_6_out2_re", false,-1, 23,0);
        vcdp->declBus(c+121,"R2MDC_FFT fft_core r2Butterfly_6_out2_im", false,-1, 23,0);
        vcdp->declBus(c+793,"R2MDC_FFT fft_core shiftRegister_13_output_re", false,-1, 23,0);
        vcdp->declBus(c+801,"R2MDC_FFT fft_core shiftRegister_13_output_im", false,-1, 23,0);
        vcdp->declBus(c+49,"R2MDC_FFT fft_core r2Switch_6_out1_re", false,-1, 23,0);
        vcdp->declBus(c+57,"R2MDC_FFT fft_core r2Switch_6_out1_im", false,-1, 23,0);
        vcdp->declBus(c+345,"R2MDC_FFT fft_core r2Switch_6_out2_re", false,-1, 23,0);
        vcdp->declBus(c+353,"R2MDC_FFT fft_core r2Switch_6_out2_im", false,-1, 23,0);
        vcdp->declBus(c+809,"R2MDC_FFT fft_core shiftRegister_14_output_re", false,-1, 23,0);
        vcdp->declBus(c+817,"R2MDC_FFT fft_core shiftRegister_14_output_im", false,-1, 23,0);
        vcdp->declBus(c+361,"R2MDC_FFT fft_core r2Butterfly_7_out1_re", false,-1, 23,0);
        vcdp->declBus(c+369,"R2MDC_FFT fft_core r2Butterfly_7_out1_im", false,-1, 23,0);
        vcdp->declBus(c+129,"R2MDC_FFT fft_core r2Butterfly_7_out2_re", false,-1, 23,0);
        vcdp->declBus(c+137,"R2MDC_FFT fft_core r2Butterfly_7_out2_im", false,-1, 23,0);
        vcdp->declBus(c+825,"R2MDC_FFT fft_core shiftRegister_15_output_re", false,-1, 23,0);
        vcdp->declBus(c+833,"R2MDC_FFT fft_core shiftRegister_15_output_im", false,-1, 23,0);
        vcdp->declBus(c+65,"R2MDC_FFT fft_core r2Switch_7_out1_re", false,-1, 23,0);
        vcdp->declBus(c+73,"R2MDC_FFT fft_core r2Switch_7_out1_im", false,-1, 23,0);
        vcdp->declBus(c+377,"R2MDC_FFT fft_core r2Switch_7_out2_re", false,-1, 23,0);
        vcdp->declBus(c+385,"R2MDC_FFT fft_core r2Switch_7_out2_im", false,-1, 23,0);
        vcdp->declBus(c+841,"R2MDC_FFT fft_core shiftRegister_16_output_re", false,-1, 23,0);
        vcdp->declBus(c+849,"R2MDC_FFT fft_core shiftRegister_16_output_im", false,-1, 23,0);
        vcdp->declBus(c+393,"R2MDC_FFT fft_core r2Butterfly_8_out1_re", false,-1, 23,0);
        vcdp->declBus(c+401,"R2MDC_FFT fft_core r2Butterfly_8_out1_im", false,-1, 23,0);
        vcdp->declBus(c+145,"R2MDC_FFT fft_core r2Butterfly_8_out2_re", false,-1, 23,0);
        vcdp->declBus(c+153,"R2MDC_FFT fft_core r2Butterfly_8_out2_im", false,-1, 23,0);
        vcdp->declBus(c+857,"R2MDC_FFT fft_core shiftRegister_17_output_re", false,-1, 23,0);
        vcdp->declBus(c+865,"R2MDC_FFT fft_core shiftRegister_17_output_im", false,-1, 23,0);
        vcdp->declBus(c+81,"R2MDC_FFT fft_core r2Switch_8_out1_re", false,-1, 23,0);
        vcdp->declBus(c+89,"R2MDC_FFT fft_core r2Switch_8_out1_im", false,-1, 23,0);
        vcdp->declBus(c+409,"R2MDC_FFT fft_core r2Switch_8_out2_re", false,-1, 23,0);
        vcdp->declBus(c+417,"R2MDC_FFT fft_core r2Switch_8_out2_im", false,-1, 23,0);
        vcdp->declBus(c+873,"R2MDC_FFT fft_core shiftRegister_18_output_re", false,-1, 23,0);
        vcdp->declBus(c+881,"R2MDC_FFT fft_core shiftRegister_18_output_im", false,-1, 23,0);
        vcdp->declBus(c+425,"R2MDC_FFT fft_core r2Butterfly_9_out1_re", false,-1, 23,0);
        vcdp->declBus(c+433,"R2MDC_FFT fft_core r2Butterfly_9_out1_im", false,-1, 23,0);
        vcdp->declBus(c+161,"R2MDC_FFT fft_core r2Butterfly_9_out2_re", false,-1, 23,0);
        vcdp->declBus(c+169,"R2MDC_FFT fft_core r2Butterfly_9_out2_im", false,-1, 23,0);
        vcdp->declBus(c+889,"R2MDC_FFT fft_core shiftRegister_19_output_re", false,-1, 23,0);
        vcdp->declBus(c+897,"R2MDC_FFT fft_core shiftRegister_19_output_im", false,-1, 23,0);
        vcdp->declBus(c+97,"R2MDC_FFT fft_core r2Switch_9_out1_re", false,-1, 23,0);
        vcdp->declBus(c+105,"R2MDC_FFT fft_core r2Switch_9_out1_im", false,-1, 23,0);
        vcdp->declBus(c+441,"R2MDC_FFT fft_core r2Switch_9_out2_re", false,-1, 23,0);
        vcdp->declBus(c+449,"R2MDC_FFT fft_core r2Switch_9_out2_im", false,-1, 23,0);
        vcdp->declBit(c+681,"R2MDC_FFT fft_core reorder_1_sorted_valid", false,-1);
        vcdp->declBit(c+3305,"R2MDC_FFT fft_core reorder_1_sorted_payload_last", false,-1);
        vcdp->declBus(c+689,"R2MDC_FFT fft_core reorder_1_sorted_payload_fragment_re", false,-1, 23,0);
        vcdp->declBus(c+697,"R2MDC_FFT fft_core reorder_1_sorted_payload_fragment_im", false,-1, 23,0);
        vcdp->declBus(c+3441,"R2MDC_FFT fft_core cnt", false,-1, 6,0);
        vcdp->declBit(c+457,"R2MDC_FFT fft_core raw_data_fire", false,-1);
        vcdp->declBit(c+465,"R2MDC_FFT fft_core when_R2MDC_l20", false,-1);
        vcdp->declBus(c+665,"R2MDC_FFT fft_core out0_buf_0_re", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC_FFT fft_core out0_buf_0_im", false,-1, 23,0);
        vcdp->declBus(c+33,"R2MDC_FFT fft_core out0_buf_1_re", false,-1, 23,0);
        vcdp->declBus(c+41,"R2MDC_FFT fft_core out0_buf_1_im", false,-1, 23,0);
        vcdp->declBus(c+49,"R2MDC_FFT fft_core out0_buf_2_re", false,-1, 23,0);
        vcdp->declBus(c+57,"R2MDC_FFT fft_core out0_buf_2_im", false,-1, 23,0);
        vcdp->declBus(c+65,"R2MDC_FFT fft_core out0_buf_3_re", false,-1, 23,0);
        vcdp->declBus(c+73,"R2MDC_FFT fft_core out0_buf_3_im", false,-1, 23,0);
        vcdp->declBus(c+81,"R2MDC_FFT fft_core out0_buf_4_re", false,-1, 23,0);
        vcdp->declBus(c+89,"R2MDC_FFT fft_core out0_buf_4_im", false,-1, 23,0);
        vcdp->declBus(c+97,"R2MDC_FFT fft_core out0_buf_5_re", false,-1, 23,0);
        vcdp->declBus(c+105,"R2MDC_FFT fft_core out0_buf_5_im", false,-1, 23,0);
        vcdp->declBus(c+473,"R2MDC_FFT fft_core out0_buf_6_re", false,-1, 23,0);
        vcdp->declBus(c+481,"R2MDC_FFT fft_core out0_buf_6_im", false,-1, 23,0);
        vcdp->declBus(c+665,"R2MDC_FFT fft_core out1_buf_0_re", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC_FFT fft_core out1_buf_0_im", false,-1, 23,0);
        vcdp->declBus(c+313,"R2MDC_FFT fft_core out1_buf_1_re", false,-1, 23,0);
        vcdp->declBus(c+321,"R2MDC_FFT fft_core out1_buf_1_im", false,-1, 23,0);
        vcdp->declBus(c+345,"R2MDC_FFT fft_core out1_buf_2_re", false,-1, 23,0);
        vcdp->declBus(c+353,"R2MDC_FFT fft_core out1_buf_2_im", false,-1, 23,0);
        vcdp->declBus(c+377,"R2MDC_FFT fft_core out1_buf_3_re", false,-1, 23,0);
        vcdp->declBus(c+385,"R2MDC_FFT fft_core out1_buf_3_im", false,-1, 23,0);
        vcdp->declBus(c+409,"R2MDC_FFT fft_core out1_buf_4_re", false,-1, 23,0);
        vcdp->declBus(c+417,"R2MDC_FFT fft_core out1_buf_4_im", false,-1, 23,0);
        vcdp->declBus(c+441,"R2MDC_FFT fft_core out1_buf_5_re", false,-1, 23,0);
        vcdp->declBus(c+449,"R2MDC_FFT fft_core out1_buf_5_im", false,-1, 23,0);
        vcdp->declBus(c+489,"R2MDC_FFT fft_core out1_buf_6_re", false,-1, 23,0);
        vcdp->declBus(c+497,"R2MDC_FFT fft_core out1_buf_6_im", false,-1, 23,0);
        vcdp->declBus(c+3449,"R2MDC_FFT fft_core cnt_p1", false,-1, 6,0);
        vcdp->declBus(c+905,"R2MDC_FFT fft_core out1D1_re", false,-1, 23,0);
        vcdp->declBus(c+913,"R2MDC_FFT fft_core out1D1_im", false,-1, 23,0);
        vcdp->declBus(c+3561,"R2MDC_FFT fft_core result_out1_re", false,-1, 23,0);
        vcdp->declBus(c+3569,"R2MDC_FFT fft_core result_out1_im", false,-1, 23,0);
        vcdp->declBus(c+3577,"R2MDC_FFT fft_core result_out2_re", false,-1, 23,0);
        vcdp->declBus(c+3585,"R2MDC_FFT fft_core result_out2_im", false,-1, 23,0);
        vcdp->declBus(c+921,"R2MDC_FFT fft_core result_out1_regNext_re", false,-1, 23,0);
        vcdp->declBus(c+929,"R2MDC_FFT fft_core result_out1_regNext_im", false,-1, 23,0);
        vcdp->declBus(c+937,"R2MDC_FFT fft_core result_out2_regNext_re", false,-1, 23,0);
        vcdp->declBus(c+945,"R2MDC_FFT fft_core result_out2_regNext_im", false,-1, 23,0);
        vcdp->declBus(c+665,"R2MDC_FFT fft_core shiftRegister_10 input_re", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC_FFT fft_core shiftRegister_10 input_im", false,-1, 23,0);
        vcdp->declBus(c+745,"R2MDC_FFT fft_core shiftRegister_10 output_re", false,-1, 23,0);
        vcdp->declBus(c+753,"R2MDC_FFT fft_core shiftRegister_10 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_10 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_10 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_10 reset", false,-1);
        vcdp->declBus(c+953,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+961,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+969,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+977,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+985,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+993,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+1001,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+1009,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+1017,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+1025,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+1033,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+1041,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+1049,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+1057,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+1065,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+1073,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+1081,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_8_re", false,-1, 23,0);
        vcdp->declBus(c+1089,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_8_im", false,-1, 23,0);
        vcdp->declBus(c+1097,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_9_re", false,-1, 23,0);
        vcdp->declBus(c+1105,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_9_im", false,-1, 23,0);
        vcdp->declBus(c+1113,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_10_re", false,-1, 23,0);
        vcdp->declBus(c+1121,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_10_im", false,-1, 23,0);
        vcdp->declBus(c+1129,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_11_re", false,-1, 23,0);
        vcdp->declBus(c+1137,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_11_im", false,-1, 23,0);
        vcdp->declBus(c+1145,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_12_re", false,-1, 23,0);
        vcdp->declBus(c+1153,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_12_im", false,-1, 23,0);
        vcdp->declBus(c+1161,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_13_re", false,-1, 23,0);
        vcdp->declBus(c+1169,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_13_im", false,-1, 23,0);
        vcdp->declBus(c+1177,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_14_re", false,-1, 23,0);
        vcdp->declBus(c+1185,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_14_im", false,-1, 23,0);
        vcdp->declBus(c+1193,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_15_re", false,-1, 23,0);
        vcdp->declBus(c+1201,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_15_im", false,-1, 23,0);
        vcdp->declBus(c+1209,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_16_re", false,-1, 23,0);
        vcdp->declBus(c+1217,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_16_im", false,-1, 23,0);
        vcdp->declBus(c+1225,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_17_re", false,-1, 23,0);
        vcdp->declBus(c+1233,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_17_im", false,-1, 23,0);
        vcdp->declBus(c+1241,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_18_re", false,-1, 23,0);
        vcdp->declBus(c+1249,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_18_im", false,-1, 23,0);
        vcdp->declBus(c+1257,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_19_re", false,-1, 23,0);
        vcdp->declBus(c+1265,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_19_im", false,-1, 23,0);
        vcdp->declBus(c+1273,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_20_re", false,-1, 23,0);
        vcdp->declBus(c+1281,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_20_im", false,-1, 23,0);
        vcdp->declBus(c+1289,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_21_re", false,-1, 23,0);
        vcdp->declBus(c+1297,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_21_im", false,-1, 23,0);
        vcdp->declBus(c+1305,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_22_re", false,-1, 23,0);
        vcdp->declBus(c+1313,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_22_im", false,-1, 23,0);
        vcdp->declBus(c+1321,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_23_re", false,-1, 23,0);
        vcdp->declBus(c+1329,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_23_im", false,-1, 23,0);
        vcdp->declBus(c+1337,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_24_re", false,-1, 23,0);
        vcdp->declBus(c+1345,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_24_im", false,-1, 23,0);
        vcdp->declBus(c+1353,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_25_re", false,-1, 23,0);
        vcdp->declBus(c+1361,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_25_im", false,-1, 23,0);
        vcdp->declBus(c+1369,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_26_re", false,-1, 23,0);
        vcdp->declBus(c+1377,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_26_im", false,-1, 23,0);
        vcdp->declBus(c+1385,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_27_re", false,-1, 23,0);
        vcdp->declBus(c+1393,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_27_im", false,-1, 23,0);
        vcdp->declBus(c+1401,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_28_re", false,-1, 23,0);
        vcdp->declBus(c+1409,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_28_im", false,-1, 23,0);
        vcdp->declBus(c+1417,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_29_re", false,-1, 23,0);
        vcdp->declBus(c+1425,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_29_im", false,-1, 23,0);
        vcdp->declBus(c+1433,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_30_re", false,-1, 23,0);
        vcdp->declBus(c+1441,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_30_im", false,-1, 23,0);
        vcdp->declBus(c+745,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_31_re", false,-1, 23,0);
        vcdp->declBus(c+753,"R2MDC_FFT fft_core shiftRegister_10 shift_reg_31_im", false,-1, 23,0);
        vcdp->declBus(c+745,"R2MDC_FFT fft_core r2Butterfly_5 in1_re", false,-1, 23,0);
        vcdp->declBus(c+753,"R2MDC_FFT fft_core r2Butterfly_5 in1_im", false,-1, 23,0);
        vcdp->declBus(c+665,"R2MDC_FFT fft_core r2Butterfly_5 in2_re", false,-1, 23,0);
        vcdp->declBus(c+673,"R2MDC_FFT fft_core r2Butterfly_5 in2_im", false,-1, 23,0);
        vcdp->declBus(c+705,"R2MDC_FFT fft_core r2Butterfly_5 wn_re", false,-1, 23,0);
        vcdp->declBus(c+625,"R2MDC_FFT fft_core r2Butterfly_5 wn_im", false,-1, 23,0);
        vcdp->declBus(c+1,"R2MDC_FFT fft_core r2Butterfly_5 out1_re", false,-1, 23,0);
        vcdp->declBus(c+9,"R2MDC_FFT fft_core r2Butterfly_5 out1_im", false,-1, 23,0);
        vcdp->declBus(c+177,"R2MDC_FFT fft_core r2Butterfly_5 out2_re", false,-1, 23,0);
        vcdp->declBus(c+185,"R2MDC_FFT fft_core r2Butterfly_5 out2_im", false,-1, 23,0);
        vcdp->declBus(c+1,"R2MDC_FFT fft_core r2Butterfly_5 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+9,"R2MDC_FFT fft_core r2Butterfly_5 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+17,"R2MDC_FFT fft_core r2Butterfly_5 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+25,"R2MDC_FFT fft_core r2Butterfly_5 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+177,"R2MDC_FFT fft_core r2Butterfly_5 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+185,"R2MDC_FFT fft_core r2Butterfly_5 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+177,"R2MDC_FFT fft_core shiftRegister_11 input_re", false,-1, 23,0);
        vcdp->declBus(c+185,"R2MDC_FFT fft_core shiftRegister_11 input_im", false,-1, 23,0);
        vcdp->declBus(c+761,"R2MDC_FFT fft_core shiftRegister_11 output_re", false,-1, 23,0);
        vcdp->declBus(c+769,"R2MDC_FFT fft_core shiftRegister_11 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_11 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_11 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_11 reset", false,-1);
        vcdp->declBus(c+1449,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+1457,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+1465,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+1473,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+1481,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+1489,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+1497,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+1505,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+1513,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+1521,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+1529,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+1537,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+1545,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+1553,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+1561,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+1569,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+1577,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_8_re", false,-1, 23,0);
        vcdp->declBus(c+1585,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_8_im", false,-1, 23,0);
        vcdp->declBus(c+1593,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_9_re", false,-1, 23,0);
        vcdp->declBus(c+1601,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_9_im", false,-1, 23,0);
        vcdp->declBus(c+1609,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_10_re", false,-1, 23,0);
        vcdp->declBus(c+1617,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_10_im", false,-1, 23,0);
        vcdp->declBus(c+1625,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_11_re", false,-1, 23,0);
        vcdp->declBus(c+1633,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_11_im", false,-1, 23,0);
        vcdp->declBus(c+1641,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_12_re", false,-1, 23,0);
        vcdp->declBus(c+1649,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_12_im", false,-1, 23,0);
        vcdp->declBus(c+1657,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_13_re", false,-1, 23,0);
        vcdp->declBus(c+1665,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_13_im", false,-1, 23,0);
        vcdp->declBus(c+1673,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_14_re", false,-1, 23,0);
        vcdp->declBus(c+1681,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_14_im", false,-1, 23,0);
        vcdp->declBus(c+761,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_15_re", false,-1, 23,0);
        vcdp->declBus(c+769,"R2MDC_FFT fft_core shiftRegister_11 shift_reg_15_im", false,-1, 23,0);
        vcdp->declBus(c+1,"R2MDC_FFT fft_core r2Switch_5 in1_re", false,-1, 23,0);
        vcdp->declBus(c+9,"R2MDC_FFT fft_core r2Switch_5 in1_im", false,-1, 23,0);
        vcdp->declBus(c+761,"R2MDC_FFT fft_core r2Switch_5 in2_re", false,-1, 23,0);
        vcdp->declBus(c+769,"R2MDC_FFT fft_core r2Switch_5 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3393,"R2MDC_FFT fft_core r2Switch_5 sel", false,-1);
        vcdp->declBus(c+33,"R2MDC_FFT fft_core r2Switch_5 out1_re", false,-1, 23,0);
        vcdp->declBus(c+41,"R2MDC_FFT fft_core r2Switch_5 out1_im", false,-1, 23,0);
        vcdp->declBus(c+313,"R2MDC_FFT fft_core r2Switch_5 out2_re", false,-1, 23,0);
        vcdp->declBus(c+321,"R2MDC_FFT fft_core r2Switch_5 out2_im", false,-1, 23,0);
        vcdp->declBus(c+33,"R2MDC_FFT fft_core shiftRegister_12 input_re", false,-1, 23,0);
        vcdp->declBus(c+41,"R2MDC_FFT fft_core shiftRegister_12 input_im", false,-1, 23,0);
        vcdp->declBus(c+777,"R2MDC_FFT fft_core shiftRegister_12 output_re", false,-1, 23,0);
        vcdp->declBus(c+785,"R2MDC_FFT fft_core shiftRegister_12 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_12 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_12 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_12 reset", false,-1);
        vcdp->declBus(c+1689,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+1697,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+1705,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+1713,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+1721,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+1729,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+1737,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+1745,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+1753,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+1761,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+1769,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+1777,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+1785,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+1793,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+1801,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+1809,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+1817,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_8_re", false,-1, 23,0);
        vcdp->declBus(c+1825,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_8_im", false,-1, 23,0);
        vcdp->declBus(c+1833,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_9_re", false,-1, 23,0);
        vcdp->declBus(c+1841,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_9_im", false,-1, 23,0);
        vcdp->declBus(c+1849,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_10_re", false,-1, 23,0);
        vcdp->declBus(c+1857,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_10_im", false,-1, 23,0);
        vcdp->declBus(c+1865,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_11_re", false,-1, 23,0);
        vcdp->declBus(c+1873,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_11_im", false,-1, 23,0);
        vcdp->declBus(c+1881,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_12_re", false,-1, 23,0);
        vcdp->declBus(c+1889,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_12_im", false,-1, 23,0);
        vcdp->declBus(c+1897,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_13_re", false,-1, 23,0);
        vcdp->declBus(c+1905,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_13_im", false,-1, 23,0);
        vcdp->declBus(c+1913,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_14_re", false,-1, 23,0);
        vcdp->declBus(c+1921,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_14_im", false,-1, 23,0);
        vcdp->declBus(c+777,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_15_re", false,-1, 23,0);
        vcdp->declBus(c+785,"R2MDC_FFT fft_core shiftRegister_12 shift_reg_15_im", false,-1, 23,0);
        vcdp->declBus(c+777,"R2MDC_FFT fft_core r2Butterfly_6 in1_re", false,-1, 23,0);
        vcdp->declBus(c+785,"R2MDC_FFT fft_core r2Butterfly_6 in1_im", false,-1, 23,0);
        vcdp->declBus(c+313,"R2MDC_FFT fft_core r2Butterfly_6 in2_re", false,-1, 23,0);
        vcdp->declBus(c+321,"R2MDC_FFT fft_core r2Butterfly_6 in2_im", false,-1, 23,0);
        vcdp->declBus(c+713,"R2MDC_FFT fft_core r2Butterfly_6 wn_re", false,-1, 23,0);
        vcdp->declBus(c+633,"R2MDC_FFT fft_core r2Butterfly_6 wn_im", false,-1, 23,0);
        vcdp->declBus(c+329,"R2MDC_FFT fft_core r2Butterfly_6 out1_re", false,-1, 23,0);
        vcdp->declBus(c+337,"R2MDC_FFT fft_core r2Butterfly_6 out1_im", false,-1, 23,0);
        vcdp->declBus(c+113,"R2MDC_FFT fft_core r2Butterfly_6 out2_re", false,-1, 23,0);
        vcdp->declBus(c+121,"R2MDC_FFT fft_core r2Butterfly_6 out2_im", false,-1, 23,0);
        vcdp->declBus(c+329,"R2MDC_FFT fft_core r2Butterfly_6 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+337,"R2MDC_FFT fft_core r2Butterfly_6 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+505,"R2MDC_FFT fft_core r2Butterfly_6 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+513,"R2MDC_FFT fft_core r2Butterfly_6 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+113,"R2MDC_FFT fft_core r2Butterfly_6 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+121,"R2MDC_FFT fft_core r2Butterfly_6 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+113,"R2MDC_FFT fft_core shiftRegister_13 input_re", false,-1, 23,0);
        vcdp->declBus(c+121,"R2MDC_FFT fft_core shiftRegister_13 input_im", false,-1, 23,0);
        vcdp->declBus(c+793,"R2MDC_FFT fft_core shiftRegister_13 output_re", false,-1, 23,0);
        vcdp->declBus(c+801,"R2MDC_FFT fft_core shiftRegister_13 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_13 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_13 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_13 reset", false,-1);
        vcdp->declBus(c+1929,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+1937,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+1945,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+1953,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+1961,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+1969,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+1977,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+1985,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+1993,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+2001,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+2009,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+2017,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+2025,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+2033,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+793,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+801,"R2MDC_FFT fft_core shiftRegister_13 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+329,"R2MDC_FFT fft_core r2Switch_6 in1_re", false,-1, 23,0);
        vcdp->declBus(c+337,"R2MDC_FFT fft_core r2Switch_6 in1_im", false,-1, 23,0);
        vcdp->declBus(c+793,"R2MDC_FFT fft_core r2Switch_6 in2_re", false,-1, 23,0);
        vcdp->declBus(c+801,"R2MDC_FFT fft_core r2Switch_6 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3401,"R2MDC_FFT fft_core r2Switch_6 sel", false,-1);
        vcdp->declBus(c+49,"R2MDC_FFT fft_core r2Switch_6 out1_re", false,-1, 23,0);
        vcdp->declBus(c+57,"R2MDC_FFT fft_core r2Switch_6 out1_im", false,-1, 23,0);
        vcdp->declBus(c+345,"R2MDC_FFT fft_core r2Switch_6 out2_re", false,-1, 23,0);
        vcdp->declBus(c+353,"R2MDC_FFT fft_core r2Switch_6 out2_im", false,-1, 23,0);
        vcdp->declBus(c+49,"R2MDC_FFT fft_core shiftRegister_14 input_re", false,-1, 23,0);
        vcdp->declBus(c+57,"R2MDC_FFT fft_core shiftRegister_14 input_im", false,-1, 23,0);
        vcdp->declBus(c+809,"R2MDC_FFT fft_core shiftRegister_14 output_re", false,-1, 23,0);
        vcdp->declBus(c+817,"R2MDC_FFT fft_core shiftRegister_14 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_14 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_14 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_14 reset", false,-1);
        vcdp->declBus(c+2041,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+2049,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+2057,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+2065,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+2073,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+2081,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+2089,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+2097,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+2105,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_4_re", false,-1, 23,0);
        vcdp->declBus(c+2113,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_4_im", false,-1, 23,0);
        vcdp->declBus(c+2121,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_5_re", false,-1, 23,0);
        vcdp->declBus(c+2129,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_5_im", false,-1, 23,0);
        vcdp->declBus(c+2137,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_6_re", false,-1, 23,0);
        vcdp->declBus(c+2145,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_6_im", false,-1, 23,0);
        vcdp->declBus(c+809,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_7_re", false,-1, 23,0);
        vcdp->declBus(c+817,"R2MDC_FFT fft_core shiftRegister_14 shift_reg_7_im", false,-1, 23,0);
        vcdp->declBus(c+809,"R2MDC_FFT fft_core r2Butterfly_7 in1_re", false,-1, 23,0);
        vcdp->declBus(c+817,"R2MDC_FFT fft_core r2Butterfly_7 in1_im", false,-1, 23,0);
        vcdp->declBus(c+345,"R2MDC_FFT fft_core r2Butterfly_7 in2_re", false,-1, 23,0);
        vcdp->declBus(c+353,"R2MDC_FFT fft_core r2Butterfly_7 in2_im", false,-1, 23,0);
        vcdp->declBus(c+721,"R2MDC_FFT fft_core r2Butterfly_7 wn_re", false,-1, 23,0);
        vcdp->declBus(c+641,"R2MDC_FFT fft_core r2Butterfly_7 wn_im", false,-1, 23,0);
        vcdp->declBus(c+361,"R2MDC_FFT fft_core r2Butterfly_7 out1_re", false,-1, 23,0);
        vcdp->declBus(c+369,"R2MDC_FFT fft_core r2Butterfly_7 out1_im", false,-1, 23,0);
        vcdp->declBus(c+129,"R2MDC_FFT fft_core r2Butterfly_7 out2_re", false,-1, 23,0);
        vcdp->declBus(c+137,"R2MDC_FFT fft_core r2Butterfly_7 out2_im", false,-1, 23,0);
        vcdp->declBus(c+361,"R2MDC_FFT fft_core r2Butterfly_7 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+369,"R2MDC_FFT fft_core r2Butterfly_7 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+521,"R2MDC_FFT fft_core r2Butterfly_7 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+529,"R2MDC_FFT fft_core r2Butterfly_7 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+129,"R2MDC_FFT fft_core r2Butterfly_7 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+137,"R2MDC_FFT fft_core r2Butterfly_7 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+129,"R2MDC_FFT fft_core shiftRegister_15 input_re", false,-1, 23,0);
        vcdp->declBus(c+137,"R2MDC_FFT fft_core shiftRegister_15 input_im", false,-1, 23,0);
        vcdp->declBus(c+825,"R2MDC_FFT fft_core shiftRegister_15 output_re", false,-1, 23,0);
        vcdp->declBus(c+833,"R2MDC_FFT fft_core shiftRegister_15 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_15 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_15 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_15 reset", false,-1);
        vcdp->declBus(c+2153,"R2MDC_FFT fft_core shiftRegister_15 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+2161,"R2MDC_FFT fft_core shiftRegister_15 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+2169,"R2MDC_FFT fft_core shiftRegister_15 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+2177,"R2MDC_FFT fft_core shiftRegister_15 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+2185,"R2MDC_FFT fft_core shiftRegister_15 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+2193,"R2MDC_FFT fft_core shiftRegister_15 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+825,"R2MDC_FFT fft_core shiftRegister_15 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+833,"R2MDC_FFT fft_core shiftRegister_15 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+361,"R2MDC_FFT fft_core r2Switch_7 in1_re", false,-1, 23,0);
        vcdp->declBus(c+369,"R2MDC_FFT fft_core r2Switch_7 in1_im", false,-1, 23,0);
        vcdp->declBus(c+825,"R2MDC_FFT fft_core r2Switch_7 in2_re", false,-1, 23,0);
        vcdp->declBus(c+833,"R2MDC_FFT fft_core r2Switch_7 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3409,"R2MDC_FFT fft_core r2Switch_7 sel", false,-1);
        vcdp->declBus(c+65,"R2MDC_FFT fft_core r2Switch_7 out1_re", false,-1, 23,0);
        vcdp->declBus(c+73,"R2MDC_FFT fft_core r2Switch_7 out1_im", false,-1, 23,0);
        vcdp->declBus(c+377,"R2MDC_FFT fft_core r2Switch_7 out2_re", false,-1, 23,0);
        vcdp->declBus(c+385,"R2MDC_FFT fft_core r2Switch_7 out2_im", false,-1, 23,0);
        vcdp->declBus(c+65,"R2MDC_FFT fft_core shiftRegister_16 input_re", false,-1, 23,0);
        vcdp->declBus(c+73,"R2MDC_FFT fft_core shiftRegister_16 input_im", false,-1, 23,0);
        vcdp->declBus(c+841,"R2MDC_FFT fft_core shiftRegister_16 output_re", false,-1, 23,0);
        vcdp->declBus(c+849,"R2MDC_FFT fft_core shiftRegister_16 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_16 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_16 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_16 reset", false,-1);
        vcdp->declBus(c+2201,"R2MDC_FFT fft_core shiftRegister_16 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+2209,"R2MDC_FFT fft_core shiftRegister_16 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+2217,"R2MDC_FFT fft_core shiftRegister_16 shift_reg_1_re", false,-1, 23,0);
    }
}

void VR2MDC_FFT::traceInitThis__2(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+2225,"R2MDC_FFT fft_core shiftRegister_16 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+2233,"R2MDC_FFT fft_core shiftRegister_16 shift_reg_2_re", false,-1, 23,0);
        vcdp->declBus(c+2241,"R2MDC_FFT fft_core shiftRegister_16 shift_reg_2_im", false,-1, 23,0);
        vcdp->declBus(c+841,"R2MDC_FFT fft_core shiftRegister_16 shift_reg_3_re", false,-1, 23,0);
        vcdp->declBus(c+849,"R2MDC_FFT fft_core shiftRegister_16 shift_reg_3_im", false,-1, 23,0);
        vcdp->declBus(c+841,"R2MDC_FFT fft_core r2Butterfly_8 in1_re", false,-1, 23,0);
        vcdp->declBus(c+849,"R2MDC_FFT fft_core r2Butterfly_8 in1_im", false,-1, 23,0);
        vcdp->declBus(c+377,"R2MDC_FFT fft_core r2Butterfly_8 in2_re", false,-1, 23,0);
        vcdp->declBus(c+385,"R2MDC_FFT fft_core r2Butterfly_8 in2_im", false,-1, 23,0);
        vcdp->declBus(c+729,"R2MDC_FFT fft_core r2Butterfly_8 wn_re", false,-1, 23,0);
        vcdp->declBus(c+649,"R2MDC_FFT fft_core r2Butterfly_8 wn_im", false,-1, 23,0);
        vcdp->declBus(c+393,"R2MDC_FFT fft_core r2Butterfly_8 out1_re", false,-1, 23,0);
        vcdp->declBus(c+401,"R2MDC_FFT fft_core r2Butterfly_8 out1_im", false,-1, 23,0);
        vcdp->declBus(c+145,"R2MDC_FFT fft_core r2Butterfly_8 out2_re", false,-1, 23,0);
        vcdp->declBus(c+153,"R2MDC_FFT fft_core r2Butterfly_8 out2_im", false,-1, 23,0);
        vcdp->declBus(c+393,"R2MDC_FFT fft_core r2Butterfly_8 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+401,"R2MDC_FFT fft_core r2Butterfly_8 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+537,"R2MDC_FFT fft_core r2Butterfly_8 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+545,"R2MDC_FFT fft_core r2Butterfly_8 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+145,"R2MDC_FFT fft_core r2Butterfly_8 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+153,"R2MDC_FFT fft_core r2Butterfly_8 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+145,"R2MDC_FFT fft_core shiftRegister_17 input_re", false,-1, 23,0);
        vcdp->declBus(c+153,"R2MDC_FFT fft_core shiftRegister_17 input_im", false,-1, 23,0);
        vcdp->declBus(c+857,"R2MDC_FFT fft_core shiftRegister_17 output_re", false,-1, 23,0);
        vcdp->declBus(c+865,"R2MDC_FFT fft_core shiftRegister_17 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_17 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_17 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_17 reset", false,-1);
        vcdp->declBus(c+2249,"R2MDC_FFT fft_core shiftRegister_17 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+2257,"R2MDC_FFT fft_core shiftRegister_17 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+857,"R2MDC_FFT fft_core shiftRegister_17 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+865,"R2MDC_FFT fft_core shiftRegister_17 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+393,"R2MDC_FFT fft_core r2Switch_8 in1_re", false,-1, 23,0);
        vcdp->declBus(c+401,"R2MDC_FFT fft_core r2Switch_8 in1_im", false,-1, 23,0);
        vcdp->declBus(c+857,"R2MDC_FFT fft_core r2Switch_8 in2_re", false,-1, 23,0);
        vcdp->declBus(c+865,"R2MDC_FFT fft_core r2Switch_8 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3417,"R2MDC_FFT fft_core r2Switch_8 sel", false,-1);
        vcdp->declBus(c+81,"R2MDC_FFT fft_core r2Switch_8 out1_re", false,-1, 23,0);
        vcdp->declBus(c+89,"R2MDC_FFT fft_core r2Switch_8 out1_im", false,-1, 23,0);
        vcdp->declBus(c+409,"R2MDC_FFT fft_core r2Switch_8 out2_re", false,-1, 23,0);
        vcdp->declBus(c+417,"R2MDC_FFT fft_core r2Switch_8 out2_im", false,-1, 23,0);
        vcdp->declBus(c+81,"R2MDC_FFT fft_core shiftRegister_18 input_re", false,-1, 23,0);
        vcdp->declBus(c+89,"R2MDC_FFT fft_core shiftRegister_18 input_im", false,-1, 23,0);
        vcdp->declBus(c+873,"R2MDC_FFT fft_core shiftRegister_18 output_re", false,-1, 23,0);
        vcdp->declBus(c+881,"R2MDC_FFT fft_core shiftRegister_18 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_18 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_18 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_18 reset", false,-1);
        vcdp->declBus(c+2265,"R2MDC_FFT fft_core shiftRegister_18 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+2273,"R2MDC_FFT fft_core shiftRegister_18 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+873,"R2MDC_FFT fft_core shiftRegister_18 shift_reg_1_re", false,-1, 23,0);
        vcdp->declBus(c+881,"R2MDC_FFT fft_core shiftRegister_18 shift_reg_1_im", false,-1, 23,0);
        vcdp->declBus(c+873,"R2MDC_FFT fft_core r2Butterfly_9 in1_re", false,-1, 23,0);
        vcdp->declBus(c+881,"R2MDC_FFT fft_core r2Butterfly_9 in1_im", false,-1, 23,0);
        vcdp->declBus(c+409,"R2MDC_FFT fft_core r2Butterfly_9 in2_re", false,-1, 23,0);
        vcdp->declBus(c+417,"R2MDC_FFT fft_core r2Butterfly_9 in2_im", false,-1, 23,0);
        vcdp->declBus(c+737,"R2MDC_FFT fft_core r2Butterfly_9 wn_re", false,-1, 23,0);
        vcdp->declBus(c+657,"R2MDC_FFT fft_core r2Butterfly_9 wn_im", false,-1, 23,0);
        vcdp->declBus(c+425,"R2MDC_FFT fft_core r2Butterfly_9 out1_re", false,-1, 23,0);
        vcdp->declBus(c+433,"R2MDC_FFT fft_core r2Butterfly_9 out1_im", false,-1, 23,0);
        vcdp->declBus(c+161,"R2MDC_FFT fft_core r2Butterfly_9 out2_re", false,-1, 23,0);
        vcdp->declBus(c+169,"R2MDC_FFT fft_core r2Butterfly_9 out2_im", false,-1, 23,0);
        vcdp->declBus(c+425,"R2MDC_FFT fft_core r2Butterfly_9 add_result_re", false,-1, 23,0);
        vcdp->declBus(c+433,"R2MDC_FFT fft_core r2Butterfly_9 add_result_im", false,-1, 23,0);
        vcdp->declBus(c+553,"R2MDC_FFT fft_core r2Butterfly_9 sub_result_re", false,-1, 23,0);
        vcdp->declBus(c+561,"R2MDC_FFT fft_core r2Butterfly_9 sub_result_im", false,-1, 23,0);
        vcdp->declBus(c+161,"R2MDC_FFT fft_core r2Butterfly_9 mul_result_re", false,-1, 23,0);
        vcdp->declBus(c+169,"R2MDC_FFT fft_core r2Butterfly_9 mul_result_im", false,-1, 23,0);
        vcdp->declBus(c+161,"R2MDC_FFT fft_core shiftRegister_19 input_re", false,-1, 23,0);
        vcdp->declBus(c+169,"R2MDC_FFT fft_core shiftRegister_19 input_im", false,-1, 23,0);
        vcdp->declBus(c+889,"R2MDC_FFT fft_core shiftRegister_19 output_re", false,-1, 23,0);
        vcdp->declBus(c+897,"R2MDC_FFT fft_core shiftRegister_19 output_im", false,-1, 23,0);
        vcdp->declBit(c+3601,"R2MDC_FFT fft_core shiftRegister_19 enable", false,-1);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core shiftRegister_19 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core shiftRegister_19 reset", false,-1);
        vcdp->declBus(c+889,"R2MDC_FFT fft_core shiftRegister_19 shift_reg_0_re", false,-1, 23,0);
        vcdp->declBus(c+897,"R2MDC_FFT fft_core shiftRegister_19 shift_reg_0_im", false,-1, 23,0);
        vcdp->declBus(c+425,"R2MDC_FFT fft_core r2Switch_9 in1_re", false,-1, 23,0);
        vcdp->declBus(c+433,"R2MDC_FFT fft_core r2Switch_9 in1_im", false,-1, 23,0);
        vcdp->declBus(c+889,"R2MDC_FFT fft_core r2Switch_9 in2_re", false,-1, 23,0);
        vcdp->declBus(c+897,"R2MDC_FFT fft_core r2Switch_9 in2_im", false,-1, 23,0);
        vcdp->declBit(c+3425,"R2MDC_FFT fft_core r2Switch_9 sel", false,-1);
        vcdp->declBus(c+97,"R2MDC_FFT fft_core r2Switch_9 out1_re", false,-1, 23,0);
        vcdp->declBus(c+105,"R2MDC_FFT fft_core r2Switch_9 out1_im", false,-1, 23,0);
        vcdp->declBus(c+441,"R2MDC_FFT fft_core r2Switch_9 out2_re", false,-1, 23,0);
        vcdp->declBus(c+449,"R2MDC_FFT fft_core r2Switch_9 out2_im", false,-1, 23,0);
        vcdp->declBit(c+3433,"R2MDC_FFT fft_core reorder_1 unsorted_valid", false,-1);
        vcdp->declBus(c+921,"R2MDC_FFT fft_core reorder_1 unsorted_payload_in0_re", false,-1, 23,0);
        vcdp->declBus(c+929,"R2MDC_FFT fft_core reorder_1 unsorted_payload_in0_im", false,-1, 23,0);
        vcdp->declBus(c+937,"R2MDC_FFT fft_core reorder_1 unsorted_payload_in1_re", false,-1, 23,0);
        vcdp->declBus(c+945,"R2MDC_FFT fft_core reorder_1 unsorted_payload_in1_im", false,-1, 23,0);
        vcdp->declBit(c+681,"R2MDC_FFT fft_core reorder_1 sorted_valid", false,-1);
        vcdp->declBit(c+3305,"R2MDC_FFT fft_core reorder_1 sorted_payload_last", false,-1);
        vcdp->declBus(c+689,"R2MDC_FFT fft_core reorder_1 sorted_payload_fragment_re", false,-1, 23,0);
        vcdp->declBus(c+697,"R2MDC_FFT fft_core reorder_1 sorted_payload_fragment_im", false,-1, 23,0);
        vcdp->declBit(c+3545,"R2MDC_FFT fft_core reorder_1 clk", false,-1);
        vcdp->declBit(c+3553,"R2MDC_FFT fft_core reorder_1 reset", false,-1);
        vcdp->declBus(c+3457,"R2MDC_FFT fft_core reorder_1 in_cnt", false,-1, 4,0);
        vcdp->declBus(c+3465,"R2MDC_FFT fft_core reorder_1 out_cnt", false,-1, 5,0);
        vcdp->declBus(c+569,"R2MDC_FFT fft_core reorder_1 in_cnt_index", false,-1, 4,0);
        vcdp->declBit(c+577,"R2MDC_FFT fft_core reorder_1 sorted_valid_1", false,-1);
        vcdp->declBit(c+681,"R2MDC_FFT fft_core reorder_1 sorted_valid_1_regNext", false,-1);
        {int i; for (i=0; i<32; i++) {
                vcdp->declQuad(c+2281+i*2,"R2MDC_FFT fft_core reorder_1 ram_low", true,(i+0), 47,0);}}
        {int i; for (i=0; i<32; i++) {
                vcdp->declQuad(c+2793+i*2,"R2MDC_FFT fft_core reorder_1 ram_high", true,(i+0), 47,0);}}
    }
}

void VR2MDC_FFT::traceFullThis__1(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_re),24);
        vcdp->fullBus(c+9,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_im),24);
        vcdp->fullBus(c+17,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re),24);
        vcdp->fullBus(c+25,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im),24);
        vcdp->fullBus(c+33,(((0x10U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_re
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_re)),24);
        vcdp->fullBus(c+41,(((0x10U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_im
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__add_result_im)),24);
        vcdp->fullBus(c+49,(((8U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_re
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_re)),24);
        vcdp->fullBus(c+57,(((8U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_im
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_im)),24);
        vcdp->fullBus(c+65,(((4U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_re
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_re)),24);
        vcdp->fullBus(c+73,(((4U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_im
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_im)),24);
        vcdp->fullBus(c+81,(((2U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_re
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_re)),24);
        vcdp->fullBus(c+89,(((2U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_im
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_im)),24);
        vcdp->fullBus(c+97,(((1U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                              ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_re
                              : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_re)),24);
        vcdp->fullBus(c+105,(((1U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))
                               ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_im
                               : vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_im)),24);
        vcdp->fullBus(c+113,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0))))) 
                                                       - 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im)))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+121,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+129,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0))))) 
                                                       - 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im)))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+137,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+145,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0))))) 
                                                       - 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im)))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+153,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+161,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0))))) 
                                                       - 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im)))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+169,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+177,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0))))) 
                                                       - 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im)))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBus(c+185,((0xffffffU & (IData)((VL_ULL(0x1fffffffff) 
                                                   & ((VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_re)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im))) 
                                                       + 
                                                       VL_MULS_QQQ(48,48,48, 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5__DOT__sub_result_im)), 
                                                                   (VL_ULL(0xffffffffffff) 
                                                                    & VL_EXTENDS_QI(48,24, 
                                                                                (0xffffffU 
                                                                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0)))))) 
                                                      >> 0xbU))))),24);
        vcdp->fullBit(c+193,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_ready));
        vcdp->fullBit(c+201,(((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en))));
        vcdp->fullBit(c+209,((1U & (~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+217,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid));
        vcdp->fullBus(c+225,(((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch)) 
                               << 7U) | (0x7fU & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value) 
                                                  - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value))))),8);
        vcdp->fullBus(c+233,(((((~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch)) 
                               << 7U) | (0x7fU & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value))))),8);
        vcdp->fullBit(c+241,(((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_ready))));
        vcdp->fullBit(c+249,((0x40U <= ((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy) 
                                          & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch)) 
                                         << 7U) | (0x7fU 
                                                   & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value) 
                                                      - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value)))))));
        vcdp->fullBit(c+257,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+265,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_valueNext),7);
        vcdp->fullBit(c+273,(((0x7fU == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+281,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+289,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popping));
        vcdp->fullBit(c+297,(((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+305,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_full));
        vcdp->fullBus(c+313,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_re),24);
        vcdp->fullBus(c+321,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_5_out2_im),24);
        vcdp->fullBus(c+329,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_re),24);
        vcdp->fullBus(c+337,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__add_result_im),24);
        vcdp->fullBus(c+345,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_re),24);
        vcdp->fullBus(c+353,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_6_out2_im),24);
        vcdp->fullBus(c+361,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_re),24);
        vcdp->fullBus(c+369,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__add_result_im),24);
        vcdp->fullBus(c+377,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_re),24);
        vcdp->fullBus(c+385,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_7_out2_im),24);
        vcdp->fullBus(c+393,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_re),24);
        vcdp->fullBus(c+401,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__add_result_im),24);
        vcdp->fullBus(c+409,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_re),24);
        vcdp->fullBus(c+417,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_8_out2_im),24);
        vcdp->fullBus(c+425,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_re),24);
        vcdp->fullBus(c+433,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__add_result_im),24);
        vcdp->fullBus(c+441,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_re),24);
        vcdp->fullBus(c+449,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Switch_9_out2_im),24);
        vcdp->fullBit(c+457,((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en)) 
                              & (0x40U > (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)))));
        vcdp->fullBit(c+465,(((((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo_io_pop_valid) 
                                & (IData)(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en)) 
                               & (0x40U > (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))) 
                              | (0x40U <= (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)))));
        vcdp->fullBus(c+473,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re),24);
        vcdp->fullBus(c+481,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im),24);
        vcdp->fullBus(c+489,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re),24);
        vcdp->fullBus(c+497,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im),24);
        vcdp->fullBus(c+505,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_re),24);
        vcdp->fullBus(c+513,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6__DOT__sub_result_im),24);
        vcdp->fullBus(c+521,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_re),24);
        vcdp->fullBus(c+529,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7__DOT__sub_result_im),24);
        vcdp->fullBus(c+537,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_re),24);
        vcdp->fullBus(c+545,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8__DOT__sub_result_im),24);
        vcdp->fullBus(c+553,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_re),24);
        vcdp->fullBus(c+561,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9__DOT__sub_result_im),24);
        vcdp->fullBus(c+569,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt_index),5);
        vcdp->fullBit(c+577,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1));
        vcdp->fullBit(c+585,(((0x7fU == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+593,(((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+601,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+609,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_valueNext),7);
        vcdp->fullBit(c+617,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushing));
        vcdp->fullBus(c+625,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_5_wn_im),24);
        vcdp->fullBus(c+633,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_6_wn_im),24);
        vcdp->fullBus(c+641,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_7_wn_im),24);
        vcdp->fullBus(c+649,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_8_wn_im),24);
        vcdp->fullBus(c+657,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__r2Butterfly_9_wn_im),24);
        vcdp->fullBus(c+665,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0))),24);
        vcdp->fullBus(c+673,((0xffffffU & (IData)((vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT___zz_logic_ram_port0 
                                                   >> 0x18U)))),24);
        vcdp->fullBit(c+681,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1_regNext));
        vcdp->fullBus(c+689,((0xffffffU & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_3)
                                            ? (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_low_port1)
                                            : (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_high_port1)))),24);
        vcdp->fullBus(c+697,((0xffffffU & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_3)
                                            ? (IData)(
                                                      (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_low_port1 
                                                       >> 0x18U))
                                            : (IData)(
                                                      (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT___zz_ram_high_port1 
                                                       >> 0x18U))))),24);
        vcdp->fullBus(c+705,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_1_port0))),24);
        vcdp->fullBus(c+713,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_2_port0))),24);
        vcdp->fullBus(c+721,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_3_port0))),24);
        vcdp->fullBus(c+729,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_4_port0))),24);
        vcdp->fullBus(c+737,((0xffffffU & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT___zz___05Fzz_5_port0))),24);
        vcdp->fullBus(c+745,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_re),24);
    }
}

void VR2MDC_FFT::traceFullThis__10(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+753,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_31_im),24);
        vcdp->fullBus(c+761,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_re),24);
        vcdp->fullBus(c+769,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_15_im),24);
        vcdp->fullBus(c+777,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_re),24);
        vcdp->fullBus(c+785,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_15_im),24);
        vcdp->fullBus(c+793,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+801,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+809,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+817,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+825,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+833,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+841,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+849,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+857,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+865,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+873,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+881,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+889,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+897,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_19__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+905,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1D1_re),24);
        vcdp->fullBus(c+913,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1D1_im),24);
        vcdp->fullBus(c+921,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__result_out1_regNext_re),24);
        vcdp->fullBus(c+929,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__result_out1_regNext_im),24);
        vcdp->fullBus(c+937,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__result_out2_regNext_re),24);
        vcdp->fullBus(c+945,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__result_out2_regNext_im),24);
        vcdp->fullBus(c+953,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+961,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+969,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+977,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+985,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+993,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+1001,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+1009,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+1017,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+1025,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+1033,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+1041,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+1049,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+1057,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+1065,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+1073,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+1081,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_8_re),24);
        vcdp->fullBus(c+1089,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_8_im),24);
        vcdp->fullBus(c+1097,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_9_re),24);
        vcdp->fullBus(c+1105,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_9_im),24);
        vcdp->fullBus(c+1113,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_10_re),24);
        vcdp->fullBus(c+1121,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_10_im),24);
        vcdp->fullBus(c+1129,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_11_re),24);
        vcdp->fullBus(c+1137,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_11_im),24);
        vcdp->fullBus(c+1145,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_12_re),24);
        vcdp->fullBus(c+1153,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_12_im),24);
        vcdp->fullBus(c+1161,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_13_re),24);
        vcdp->fullBus(c+1169,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_13_im),24);
        vcdp->fullBus(c+1177,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_14_re),24);
        vcdp->fullBus(c+1185,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_14_im),24);
        vcdp->fullBus(c+1193,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_15_re),24);
        vcdp->fullBus(c+1201,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_15_im),24);
        vcdp->fullBus(c+1209,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_16_re),24);
        vcdp->fullBus(c+1217,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_16_im),24);
        vcdp->fullBus(c+1225,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_17_re),24);
        vcdp->fullBus(c+1233,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_17_im),24);
        vcdp->fullBus(c+1241,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_18_re),24);
        vcdp->fullBus(c+1249,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_18_im),24);
        vcdp->fullBus(c+1257,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_19_re),24);
        vcdp->fullBus(c+1265,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_19_im),24);
        vcdp->fullBus(c+1273,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_20_re),24);
        vcdp->fullBus(c+1281,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_20_im),24);
        vcdp->fullBus(c+1289,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_21_re),24);
        vcdp->fullBus(c+1297,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_21_im),24);
        vcdp->fullBus(c+1305,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_22_re),24);
        vcdp->fullBus(c+1313,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_22_im),24);
        vcdp->fullBus(c+1321,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_23_re),24);
        vcdp->fullBus(c+1329,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_23_im),24);
        vcdp->fullBus(c+1337,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_24_re),24);
        vcdp->fullBus(c+1345,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_24_im),24);
        vcdp->fullBus(c+1353,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_25_re),24);
        vcdp->fullBus(c+1361,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_25_im),24);
        vcdp->fullBus(c+1369,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_26_re),24);
        vcdp->fullBus(c+1377,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_26_im),24);
        vcdp->fullBus(c+1385,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_27_re),24);
        vcdp->fullBus(c+1393,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_27_im),24);
        vcdp->fullBus(c+1401,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_28_re),24);
        vcdp->fullBus(c+1409,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_28_im),24);
        vcdp->fullBus(c+1417,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_29_re),24);
        vcdp->fullBus(c+1425,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_29_im),24);
        vcdp->fullBus(c+1433,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_30_re),24);
        vcdp->fullBus(c+1441,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_10__DOT__shift_reg_30_im),24);
        vcdp->fullBus(c+1449,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+1457,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+1465,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+1473,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+1481,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+1489,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+1497,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+1505,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+1513,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+1521,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+1529,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+1537,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+1545,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+1553,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+1561,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+1569,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+1577,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_8_re),24);
        vcdp->fullBus(c+1585,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_8_im),24);
        vcdp->fullBus(c+1593,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_9_re),24);
        vcdp->fullBus(c+1601,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_9_im),24);
        vcdp->fullBus(c+1609,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_10_re),24);
        vcdp->fullBus(c+1617,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_10_im),24);
        vcdp->fullBus(c+1625,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_11_re),24);
        vcdp->fullBus(c+1633,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_11_im),24);
        vcdp->fullBus(c+1641,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_12_re),24);
        vcdp->fullBus(c+1649,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_12_im),24);
        vcdp->fullBus(c+1657,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_13_re),24);
        vcdp->fullBus(c+1665,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_13_im),24);
        vcdp->fullBus(c+1673,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_14_re),24);
        vcdp->fullBus(c+1681,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_11__DOT__shift_reg_14_im),24);
        vcdp->fullBus(c+1689,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+1697,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+1705,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+1713,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+1721,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+1729,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+1737,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+1745,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+1753,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+1761,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+1769,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+1777,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+1785,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+1793,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+1801,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_7_re),24);
        vcdp->fullBus(c+1809,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_7_im),24);
        vcdp->fullBus(c+1817,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_8_re),24);
        vcdp->fullBus(c+1825,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_8_im),24);
        vcdp->fullBus(c+1833,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_9_re),24);
        vcdp->fullBus(c+1841,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_9_im),24);
        vcdp->fullBus(c+1849,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_10_re),24);
        vcdp->fullBus(c+1857,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_10_im),24);
        vcdp->fullBus(c+1865,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_11_re),24);
        vcdp->fullBus(c+1873,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_11_im),24);
        vcdp->fullBus(c+1881,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_12_re),24);
        vcdp->fullBus(c+1889,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_12_im),24);
        vcdp->fullBus(c+1897,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_13_re),24);
        vcdp->fullBus(c+1905,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_13_im),24);
        vcdp->fullBus(c+1913,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_14_re),24);
        vcdp->fullBus(c+1921,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_12__DOT__shift_reg_14_im),24);
        vcdp->fullBus(c+1929,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+1937,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+1945,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+1953,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+1961,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+1969,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+1977,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+1985,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+1993,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+2001,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+2009,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+2017,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+2025,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+2033,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_13__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+2041,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+2049,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+2057,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+2065,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+2073,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+2081,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+2089,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_3_re),24);
        vcdp->fullBus(c+2097,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_3_im),24);
        vcdp->fullBus(c+2105,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_4_re),24);
        vcdp->fullBus(c+2113,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_4_im),24);
        vcdp->fullBus(c+2121,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_5_re),24);
        vcdp->fullBus(c+2129,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_5_im),24);
        vcdp->fullBus(c+2137,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_6_re),24);
        vcdp->fullBus(c+2145,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_14__DOT__shift_reg_6_im),24);
        vcdp->fullBus(c+2153,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+2161,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+2169,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+2177,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+2185,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+2193,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_15__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+2201,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+2209,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+2217,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_1_re),24);
        vcdp->fullBus(c+2225,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_1_im),24);
        vcdp->fullBus(c+2233,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_2_re),24);
        vcdp->fullBus(c+2241,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_16__DOT__shift_reg_2_im),24);
        vcdp->fullBus(c+2249,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+2257,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_17__DOT__shift_reg_0_im),24);
        vcdp->fullBus(c+2265,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_0_re),24);
        vcdp->fullBus(c+2273,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__shiftRegister_18__DOT__shift_reg_0_im),24);
        vcdp->fullQuad(c+2281,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[0]),48);
        vcdp->fullQuad(c+2283,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[1]),48);
        vcdp->fullQuad(c+2285,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[2]),48);
        vcdp->fullQuad(c+2287,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[3]),48);
        vcdp->fullQuad(c+2289,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[4]),48);
        vcdp->fullQuad(c+2291,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[5]),48);
        vcdp->fullQuad(c+2293,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[6]),48);
        vcdp->fullQuad(c+2295,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[7]),48);
        vcdp->fullQuad(c+2297,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[8]),48);
        vcdp->fullQuad(c+2299,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[9]),48);
        vcdp->fullQuad(c+2301,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[10]),48);
        vcdp->fullQuad(c+2303,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[11]),48);
        vcdp->fullQuad(c+2305,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[12]),48);
        vcdp->fullQuad(c+2307,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[13]),48);
        vcdp->fullQuad(c+2309,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[14]),48);
        vcdp->fullQuad(c+2311,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[15]),48);
        vcdp->fullQuad(c+2313,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[16]),48);
        vcdp->fullQuad(c+2315,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[17]),48);
        vcdp->fullQuad(c+2317,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[18]),48);
        vcdp->fullQuad(c+2319,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[19]),48);
        vcdp->fullQuad(c+2321,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[20]),48);
        vcdp->fullQuad(c+2323,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[21]),48);
        vcdp->fullQuad(c+2325,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[22]),48);
        vcdp->fullQuad(c+2327,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[23]),48);
        vcdp->fullQuad(c+2329,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[24]),48);
        vcdp->fullQuad(c+2331,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[25]),48);
        vcdp->fullQuad(c+2333,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[26]),48);
        vcdp->fullQuad(c+2335,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[27]),48);
        vcdp->fullQuad(c+2337,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[28]),48);
        vcdp->fullQuad(c+2339,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[29]),48);
        vcdp->fullQuad(c+2341,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[30]),48);
        vcdp->fullQuad(c+2343,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_low[31]),48);
        vcdp->fullQuad(c+2793,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[0]),48);
        vcdp->fullQuad(c+2795,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[1]),48);
        vcdp->fullQuad(c+2797,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[2]),48);
        vcdp->fullQuad(c+2799,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[3]),48);
        vcdp->fullQuad(c+2801,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[4]),48);
        vcdp->fullQuad(c+2803,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[5]),48);
        vcdp->fullQuad(c+2805,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[6]),48);
        vcdp->fullQuad(c+2807,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[7]),48);
        vcdp->fullQuad(c+2809,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[8]),48);
        vcdp->fullQuad(c+2811,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[9]),48);
        vcdp->fullQuad(c+2813,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[10]),48);
        vcdp->fullQuad(c+2815,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[11]),48);
        vcdp->fullQuad(c+2817,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[12]),48);
        vcdp->fullQuad(c+2819,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[13]),48);
        vcdp->fullQuad(c+2821,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[14]),48);
        vcdp->fullQuad(c+2823,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[15]),48);
        vcdp->fullQuad(c+2825,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[16]),48);
        vcdp->fullQuad(c+2827,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[17]),48);
        vcdp->fullQuad(c+2829,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[18]),48);
        vcdp->fullQuad(c+2831,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[19]),48);
        vcdp->fullQuad(c+2833,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[20]),48);
        vcdp->fullQuad(c+2835,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[21]),48);
        vcdp->fullQuad(c+2837,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[22]),48);
        vcdp->fullQuad(c+2839,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[23]),48);
        vcdp->fullQuad(c+2841,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[24]),48);
        vcdp->fullQuad(c+2843,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[25]),48);
        vcdp->fullQuad(c+2845,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[26]),48);
        vcdp->fullQuad(c+2847,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[27]),48);
        vcdp->fullQuad(c+2849,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[28]),48);
        vcdp->fullQuad(c+2851,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[29]),48);
        vcdp->fullQuad(c+2853,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[30]),48);
        vcdp->fullQuad(c+2855,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__ram_high[31]),48);
        vcdp->fullBit(c+3305,(((0U == (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__out_cnt)) 
                               & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__sorted_valid_1_regNext))));
        vcdp->fullBit(c+3313,((0x40U > (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))));
        vcdp->fullBit(c+3321,(vlTOPp->R2MDC_FFT__DOT__fifo_pop_en));
        vcdp->fullBus(c+3329,(vlTOPp->R2MDC_FFT__DOT__pop_cnt),6);
        vcdp->fullBit(c+3337,((0x3fU == (IData)(vlTOPp->R2MDC_FFT__DOT__pop_cnt))));
        vcdp->fullBus(c+3345,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value),7);
        vcdp->fullBit(c+3353,((0x7fU == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+3361,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value),7);
        vcdp->fullBit(c+3369,((0x7fU == (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+3377,(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+3385,((0x7fU & ((IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->R2MDC_FFT__DOT__raw_data_fifo__DOT__logic_popPtr_value)))),7);
        vcdp->fullBit(c+3393,((1U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt) 
                                     >> 4U))));
        vcdp->fullBit(c+3401,((1U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt) 
                                     >> 3U))));
        vcdp->fullBit(c+3409,((1U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt) 
                                     >> 2U))));
        vcdp->fullBit(c+3417,((1U & ((IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt) 
                                     >> 1U))));
        vcdp->fullBit(c+3425,((1U & (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))));
        vcdp->fullBit(c+3433,((0x3fU < (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt))));
        vcdp->fullBus(c+3441,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt),7);
        vcdp->fullBus(c+3449,((0x7fU & ((IData)(1U) 
                                        + (IData)(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__cnt)))),7);
        vcdp->fullBus(c+3457,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__in_cnt),5);
        vcdp->fullBus(c+3465,(vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__reorder_1__DOT__out_cnt),6);
        vcdp->fullBit(c+3473,(vlTOPp->mode));
        vcdp->fullBit(c+3481,(vlTOPp->raw_data_iq_valid));
        vcdp->fullBit(c+3489,(vlTOPp->raw_data_iq_ready));
        vcdp->fullBus(c+3497,(vlTOPp->raw_data_iq_payload_cha_i),24);
        vcdp->fullBus(c+3505,(vlTOPp->raw_data_iq_payload_cha_q),24);
        vcdp->fullBit(c+3513,(vlTOPp->result_iq_valid));
        vcdp->fullBit(c+3521,(vlTOPp->result_iq_payload_last));
        vcdp->fullBus(c+3529,(vlTOPp->result_iq_payload_fragment_cha_i),24);
        vcdp->fullBus(c+3537,(vlTOPp->result_iq_payload_fragment_cha_q),24);
        vcdp->fullBit(c+3545,(vlTOPp->clk));
        vcdp->fullBit(c+3553,(vlTOPp->reset));
        vcdp->fullBus(c+3561,(((IData)(vlTOPp->mode)
                                ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re
                                : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re 
                                                                         >> 0x17U)))) 
                                                 << 0x12U)) 
                                   | (0x3ffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_re 
                                                  >> 6U))))),24);
        vcdp->fullBus(c+3569,(((IData)(vlTOPp->mode)
                                ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im
                                : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im 
                                                                         >> 0x17U)))) 
                                                 << 0x12U)) 
                                   | (0x3ffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out0_buf_6_im 
                                                  >> 6U))))),24);
    }
}

void VR2MDC_FFT::traceFullThis__14(VR2MDC_FFT__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VR2MDC_FFT* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+3577,(((IData)(vlTOPp->mode)
                                ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re
                                : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re 
                                                                         >> 0x17U)))) 
                                                 << 0x12U)) 
                                   | (0x3ffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_re 
                                                  >> 6U))))),24);
        vcdp->fullBus(c+3585,(((IData)(vlTOPp->mode)
                                ? vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im
                                : ((0xfc0000U & (VL_NEGATE_I((IData)(
                                                                     (1U 
                                                                      & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im 
                                                                         >> 0x17U)))) 
                                                 << 0x12U)) 
                                   | (0x3ffffU & (vlTOPp->R2MDC_FFT__DOT__fft_core__DOT__out1_buf_6_im 
                                                  >> 6U))))),24);
        vcdp->fullBit(c+3593,(0U));
        vcdp->fullBit(c+3601,(1U));
    }
}
