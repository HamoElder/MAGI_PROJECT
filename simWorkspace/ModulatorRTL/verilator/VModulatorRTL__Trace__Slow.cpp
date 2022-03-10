// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VModulatorRTL__Syms.h"


//======================

void VModulatorRTL::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VModulatorRTL::traceInit, &VModulatorRTL::traceFull, &VModulatorRTL::traceChg, this);
}
void VModulatorRTL::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VModulatorRTL* t = (VModulatorRTL*)userthis;
    VModulatorRTL__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VModulatorRTL::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VModulatorRTL* t = (VModulatorRTL*)userthis;
    VModulatorRTL__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VModulatorRTL::traceInitThis(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VModulatorRTL::traceFullThis(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VModulatorRTL::traceInitThis__1(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+457,"data_flow_unit_data_valid", false,-1);
        vcdp->declBit(c+465,"data_flow_unit_data_payload_last", false,-1);
        vcdp->declBus(c+473,"data_flow_unit_data_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+481,"data_flow_mod_iq_valid", false,-1);
        vcdp->declBit(c+489,"data_flow_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+497,"data_flow_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+505,"data_flow_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBus(c+513,"w_en", false,-1, 1,0);
        vcdp->declBus(c+521,"w_addr", false,-1, 31,0);
        vcdp->declBus(c+529,"w_data", false,-1, 31,0);
        vcdp->declBus(c+537,"cnt_limit", false,-1, 31,0);
        vcdp->declBus(c+545,"select_1", false,-1, 2,0);
        vcdp->declBit(c+553,"clk", false,-1);
        vcdp->declBit(c+561,"reset", false,-1);
        vcdp->declBit(c+457,"ModulatorRTL data_flow_unit_data_valid", false,-1);
        vcdp->declBit(c+465,"ModulatorRTL data_flow_unit_data_payload_last", false,-1);
        vcdp->declBus(c+473,"ModulatorRTL data_flow_unit_data_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+481,"ModulatorRTL data_flow_mod_iq_valid", false,-1);
        vcdp->declBit(c+489,"ModulatorRTL data_flow_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+497,"ModulatorRTL data_flow_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+505,"ModulatorRTL data_flow_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBus(c+513,"ModulatorRTL w_en", false,-1, 1,0);
        vcdp->declBus(c+521,"ModulatorRTL w_addr", false,-1, 31,0);
        vcdp->declBus(c+529,"ModulatorRTL w_data", false,-1, 31,0);
        vcdp->declBus(c+537,"ModulatorRTL cnt_limit", false,-1, 31,0);
        vcdp->declBus(c+545,"ModulatorRTL select_1", false,-1, 2,0);
        vcdp->declBit(c+553,"ModulatorRTL clk", false,-1);
        vcdp->declBit(c+561,"ModulatorRTL reset", false,-1);
        vcdp->declBus(c+569,"ModulatorRTL mPSK_Modulator_Extension_mod_unit_data_payload_fragment", false,-1, 0,0);
        vcdp->declBus(c+577,"ModulatorRTL mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment", false,-1, 1,0);
        vcdp->declBus(c+585,"ModulatorRTL mQAM_Modulator_Extension_mod_unit_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+593,"ModulatorRTL mod_1_w_en", false,-1);
        vcdp->declBus(c+601,"ModulatorRTL mod_1_w_addr", false,-1, 7,0);
        vcdp->declBus(c+609,"ModulatorRTL mod_1_w_data", false,-1, 23,0);
        vcdp->declBit(c+617,"ModulatorRTL mod_2_w_en", false,-1);
        vcdp->declBus(c+625,"ModulatorRTL mod_2_w_addr", false,-1, 6,0);
        vcdp->declBus(c+609,"ModulatorRTL mod_2_w_data", false,-1, 23,0);
        vcdp->declBus(c+633,"ModulatorRTL mod_2_cnt_limit", false,-1, 2,0);
        vcdp->declBus(c+641,"ModulatorRTL mod_2_data_flow_unit_data_payload_fragment", false,-1, 6,0);
        vcdp->declBit(c+649,"ModulatorRTL flowDeMux_1_outputs_0_valid", false,-1);
        vcdp->declBit(c+89,"ModulatorRTL flowDeMux_1_outputs_0_payload_last", false,-1);
        vcdp->declBus(c+657,"ModulatorRTL flowDeMux_1_outputs_0_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+665,"ModulatorRTL flowDeMux_1_outputs_1_valid", false,-1);
        vcdp->declBit(c+97,"ModulatorRTL flowDeMux_1_outputs_1_payload_last", false,-1);
        vcdp->declBus(c+673,"ModulatorRTL flowDeMux_1_outputs_1_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+681,"ModulatorRTL flowDeMux_1_outputs_2_valid", false,-1);
        vcdp->declBit(c+105,"ModulatorRTL flowDeMux_1_outputs_2_payload_last", false,-1);
        vcdp->declBus(c+689,"ModulatorRTL flowDeMux_1_outputs_2_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+697,"ModulatorRTL flowDeMux_1_outputs_3_valid", false,-1);
        vcdp->declBit(c+113,"ModulatorRTL flowDeMux_1_outputs_3_payload_last", false,-1);
        vcdp->declBus(c+705,"ModulatorRTL flowDeMux_1_outputs_3_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+121,"ModulatorRTL flowDeMux_1_outputs_4_valid", false,-1);
        vcdp->declBit(c+129,"ModulatorRTL flowDeMux_1_outputs_4_payload_last", false,-1);
        vcdp->declBus(c+713,"ModulatorRTL flowDeMux_1_outputs_4_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+209,"ModulatorRTL mPSK_Modulator_Extension_mod_mod_iq_valid", false,-1);
        vcdp->declBit(c+217,"ModulatorRTL mPSK_Modulator_Extension_mod_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+225,"ModulatorRTL mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+233,"ModulatorRTL mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+241,"ModulatorRTL mPSK_Modulator_Extension_mod_1_mod_iq_valid", false,-1);
        vcdp->declBit(c+249,"ModulatorRTL mPSK_Modulator_Extension_mod_1_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+41,"ModulatorRTL mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+257,"ModulatorRTL mQAM_Modulator_Extension_mod_mod_iq_valid", false,-1);
        vcdp->declBit(c+265,"ModulatorRTL mQAM_Modulator_Extension_mod_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+273,"ModulatorRTL mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+281,"ModulatorRTL mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+137,"ModulatorRTL mod_1_data_flow_mod_iq_valid", false,-1);
        vcdp->declBit(c+65,"ModulatorRTL mod_1_data_flow_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL mod_1_data_flow_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+9,"ModulatorRTL mod_1_data_flow_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+289,"ModulatorRTL mod_2_data_in_ready", false,-1);
        vcdp->declBit(c+145,"ModulatorRTL mod_2_data_flow_mod_iq_valid", false,-1);
        vcdp->declBit(c+73,"ModulatorRTL mod_2_data_flow_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL mod_2_data_flow_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"ModulatorRTL mod_2_data_flow_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+721,"ModulatorRTL flowMux_1_output_valid", false,-1);
        vcdp->declBit(c+729,"ModulatorRTL flowMux_1_output_payload_last", false,-1);
        vcdp->declBus(c+737,"ModulatorRTL flowMux_1_output_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+745,"ModulatorRTL flowMux_1_output_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+457,"ModulatorRTL flowDeMux_1 input_valid", false,-1);
        vcdp->declBit(c+465,"ModulatorRTL flowDeMux_1 input_payload_last", false,-1);
        vcdp->declBus(c+473,"ModulatorRTL flowDeMux_1 input_payload_fragment", false,-1, 7,0);
        vcdp->declBus(c+545,"ModulatorRTL flowDeMux_1 select_1", false,-1, 2,0);
        vcdp->declBit(c+649,"ModulatorRTL flowDeMux_1 outputs_0_valid", false,-1);
        vcdp->declBit(c+89,"ModulatorRTL flowDeMux_1 outputs_0_payload_last", false,-1);
        vcdp->declBus(c+657,"ModulatorRTL flowDeMux_1 outputs_0_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+665,"ModulatorRTL flowDeMux_1 outputs_1_valid", false,-1);
        vcdp->declBit(c+97,"ModulatorRTL flowDeMux_1 outputs_1_payload_last", false,-1);
        vcdp->declBus(c+673,"ModulatorRTL flowDeMux_1 outputs_1_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+681,"ModulatorRTL flowDeMux_1 outputs_2_valid", false,-1);
        vcdp->declBit(c+105,"ModulatorRTL flowDeMux_1 outputs_2_payload_last", false,-1);
        vcdp->declBus(c+689,"ModulatorRTL flowDeMux_1 outputs_2_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+697,"ModulatorRTL flowDeMux_1 outputs_3_valid", false,-1);
        vcdp->declBit(c+113,"ModulatorRTL flowDeMux_1 outputs_3_payload_last", false,-1);
        vcdp->declBus(c+705,"ModulatorRTL flowDeMux_1 outputs_3_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+121,"ModulatorRTL flowDeMux_1 outputs_4_valid", false,-1);
        vcdp->declBit(c+129,"ModulatorRTL flowDeMux_1 outputs_4_payload_last", false,-1);
        vcdp->declBus(c+713,"ModulatorRTL flowDeMux_1 outputs_4_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+753,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l16", false,-1);
        vcdp->declBit(c+761,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l16_1", false,-1);
        vcdp->declBit(c+769,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l16_2", false,-1);
        vcdp->declBit(c+777,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l16_3", false,-1);
        vcdp->declBit(c+785,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l16_4", false,-1);
        vcdp->declBit(c+649,"ModulatorRTL mPSK_Modulator_Extension_mod unit_data_valid", false,-1);
        vcdp->declBit(c+89,"ModulatorRTL mPSK_Modulator_Extension_mod unit_data_payload_last", false,-1);
        vcdp->declBus(c+569,"ModulatorRTL mPSK_Modulator_Extension_mod unit_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+209,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_valid", false,-1);
        vcdp->declBit(c+217,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_payload_last", false,-1);
        vcdp->declBus(c+225,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+233,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+553,"ModulatorRTL mPSK_Modulator_Extension_mod clk", false,-1);
        vcdp->declBit(c+561,"ModulatorRTL mPSK_Modulator_Extension_mod reset", false,-1);
        vcdp->declBus(c+793,"ModulatorRTL mPSK_Modulator_Extension_mod codeTable_0", false,-1, 23,0);
        vcdp->declBus(c+801,"ModulatorRTL mPSK_Modulator_Extension_mod codeTable_1", false,-1, 23,0);
        vcdp->declBit(c+169,"ModulatorRTL mPSK_Modulator_Extension_mod unit_data_payload_regNext_last", false,-1);
        vcdp->declBus(c+297,"ModulatorRTL mPSK_Modulator_Extension_mod unit_data_payload_regNext_fragment", false,-1, 0,0);
        vcdp->declBit(c+305,"ModulatorRTL mPSK_Modulator_Extension_mod unit_valid", false,-1);
        vcdp->declBit(c+313,"ModulatorRTL mPSK_Modulator_Extension_mod unit_last", false,-1);
        vcdp->declBus(c+321,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_0", false,-1, 11,0);
        vcdp->declBus(c+329,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_1", false,-1, 11,0);
        vcdp->declBit(c+665,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_data_valid", false,-1);
        vcdp->declBit(c+97,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_data_payload_last", false,-1);
        vcdp->declBus(c+577,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+241,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_valid", false,-1);
        vcdp->declBit(c+249,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_payload_last", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+41,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+553,"ModulatorRTL mPSK_Modulator_Extension_mod_1 clk", false,-1);
        vcdp->declBit(c+561,"ModulatorRTL mPSK_Modulator_Extension_mod_1 reset", false,-1);
        vcdp->declBus(c+809,"ModulatorRTL mPSK_Modulator_Extension_mod_1 codeTable_0", false,-1, 23,0);
        vcdp->declBus(c+817,"ModulatorRTL mPSK_Modulator_Extension_mod_1 codeTable_1", false,-1, 23,0);
        vcdp->declBus(c+825,"ModulatorRTL mPSK_Modulator_Extension_mod_1 codeTable_2", false,-1, 23,0);
        vcdp->declBus(c+833,"ModulatorRTL mPSK_Modulator_Extension_mod_1 codeTable_3", false,-1, 23,0);
        vcdp->declBit(c+177,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_data_payload_regNext_last", false,-1);
        vcdp->declBus(c+337,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_data_payload_regNext_fragment", false,-1, 1,0);
        vcdp->declBit(c+345,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_valid", false,-1);
        vcdp->declBit(c+353,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_last", false,-1);
        vcdp->declBus(c+49,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_0", false,-1, 11,0);
        vcdp->declBus(c+57,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_1", false,-1, 11,0);
        vcdp->declBit(c+681,"ModulatorRTL mQAM_Modulator_Extension_mod unit_data_valid", false,-1);
        vcdp->declBit(c+105,"ModulatorRTL mQAM_Modulator_Extension_mod unit_data_payload_last", false,-1);
        vcdp->declBus(c+585,"ModulatorRTL mQAM_Modulator_Extension_mod unit_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+257,"ModulatorRTL mQAM_Modulator_Extension_mod mod_iq_valid", false,-1);
        vcdp->declBit(c+265,"ModulatorRTL mQAM_Modulator_Extension_mod mod_iq_payload_last", false,-1);
        vcdp->declBus(c+273,"ModulatorRTL mQAM_Modulator_Extension_mod mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+281,"ModulatorRTL mQAM_Modulator_Extension_mod mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+553,"ModulatorRTL mQAM_Modulator_Extension_mod clk", false,-1);
        vcdp->declBit(c+561,"ModulatorRTL mQAM_Modulator_Extension_mod reset", false,-1);
        vcdp->declBus(c+841,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableI_0", false,-1, 11,0);
        vcdp->declBus(c+849,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableI_1", false,-1, 11,0);
        vcdp->declBus(c+857,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableI_2", false,-1, 11,0);
        vcdp->declBus(c+865,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableI_3", false,-1, 11,0);
        vcdp->declBus(c+841,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableQ_0", false,-1, 11,0);
        vcdp->declBus(c+849,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableQ_1", false,-1, 11,0);
        vcdp->declBus(c+857,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableQ_2", false,-1, 11,0);
        vcdp->declBus(c+865,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableQ_3", false,-1, 11,0);
        vcdp->declBit(c+185,"ModulatorRTL mQAM_Modulator_Extension_mod unit_data_payload_regNext_last", false,-1);
        vcdp->declBus(c+361,"ModulatorRTL mQAM_Modulator_Extension_mod unit_data_payload_regNext_fragment", false,-1, 3,0);
        vcdp->declBit(c+369,"ModulatorRTL mQAM_Modulator_Extension_mod unit_valid", false,-1);
        vcdp->declBit(c+377,"ModulatorRTL mQAM_Modulator_Extension_mod unit_last", false,-1);
        vcdp->declBus(c+385,"ModulatorRTL mQAM_Modulator_Extension_mod data_div_0", false,-1, 1,0);
        vcdp->declBus(c+393,"ModulatorRTL mQAM_Modulator_Extension_mod data_div_1", false,-1, 1,0);
        vcdp->declBit(c+593,"ModulatorRTL mod_1 w_en", false,-1);
        vcdp->declBus(c+601,"ModulatorRTL mod_1 w_addr", false,-1, 7,0);
        vcdp->declBus(c+609,"ModulatorRTL mod_1 w_data", false,-1, 23,0);
        vcdp->declBit(c+697,"ModulatorRTL mod_1 data_flow_unit_data_valid", false,-1);
        vcdp->declBit(c+113,"ModulatorRTL mod_1 data_flow_unit_data_payload_last", false,-1);
        vcdp->declBus(c+705,"ModulatorRTL mod_1 data_flow_unit_data_payload_fragment", false,-1, 7,0);
        vcdp->declBit(c+137,"ModulatorRTL mod_1 data_flow_mod_iq_valid", false,-1);
        vcdp->declBit(c+65,"ModulatorRTL mod_1 data_flow_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL mod_1 data_flow_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+9,"ModulatorRTL mod_1 data_flow_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+553,"ModulatorRTL mod_1 clk", false,-1);
        vcdp->declBit(c+561,"ModulatorRTL mod_1 reset", false,-1);
        vcdp->declBit(c+193,"ModulatorRTL mod_1 data_flow_unit_data_payload_regNext_last", false,-1);
        vcdp->declBus(c+401,"ModulatorRTL mod_1 data_flow_unit_data_payload_regNext_fragment", false,-1, 7,0);
        vcdp->declBit(c+409,"ModulatorRTL mod_1 unit_valid", false,-1);
        vcdp->declBit(c+417,"ModulatorRTL mod_1 unit_last", false,-1);
        vcdp->declBit(c+153,"ModulatorRTL mod_1 when_lookUpMod_l87", false,-1);
        vcdp->declBit(c+617,"ModulatorRTL mod_2 w_en", false,-1);
        vcdp->declBus(c+625,"ModulatorRTL mod_2 w_addr", false,-1, 6,0);
        vcdp->declBus(c+609,"ModulatorRTL mod_2 w_data", false,-1, 23,0);
        vcdp->declBus(c+633,"ModulatorRTL mod_2 cnt_limit", false,-1, 2,0);
        vcdp->declBit(c+289,"ModulatorRTL mod_2 data_in_ready", false,-1);
        vcdp->declBit(c+121,"ModulatorRTL mod_2 data_flow_unit_data_valid", false,-1);
        vcdp->declBit(c+129,"ModulatorRTL mod_2 data_flow_unit_data_payload_last", false,-1);
        vcdp->declBus(c+641,"ModulatorRTL mod_2 data_flow_unit_data_payload_fragment", false,-1, 6,0);
        vcdp->declBit(c+145,"ModulatorRTL mod_2 data_flow_mod_iq_valid", false,-1);
        vcdp->declBit(c+73,"ModulatorRTL mod_2 data_flow_mod_iq_payload_last", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL mod_2 data_flow_mod_iq_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"ModulatorRTL mod_2 data_flow_mod_iq_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+553,"ModulatorRTL mod_2 clk", false,-1);
        vcdp->declBit(c+561,"ModulatorRTL mod_2 reset", false,-1);
        vcdp->declBit(c+201,"ModulatorRTL mod_2 data_flow_unit_data_payload_regNext_last", false,-1);
        vcdp->declBus(c+425,"ModulatorRTL mod_2 data_flow_unit_data_payload_regNext_fragment", false,-1, 6,0);
        vcdp->declBit(c+433,"ModulatorRTL mod_2 unit_valid", false,-1);
        vcdp->declBit(c+441,"ModulatorRTL mod_2 unit_last", false,-1);
        vcdp->declBit(c+81,"ModulatorRTL mod_2 when_lookUpMod_l58", false,-1);
        vcdp->declBit(c+449,"ModulatorRTL mod_2 when_lookUpMod_l61", false,-1);
        vcdp->declBit(c+161,"ModulatorRTL mod_2 when_lookUpMod_l70", false,-1);
        vcdp->declBit(c+209,"ModulatorRTL flowMux_1 inputs_0_valid", false,-1);
        vcdp->declBit(c+217,"ModulatorRTL flowMux_1 inputs_0_payload_last", false,-1);
        vcdp->declBus(c+225,"ModulatorRTL flowMux_1 inputs_0_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+233,"ModulatorRTL flowMux_1 inputs_0_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+241,"ModulatorRTL flowMux_1 inputs_1_valid", false,-1);
        vcdp->declBit(c+249,"ModulatorRTL flowMux_1 inputs_1_payload_last", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL flowMux_1 inputs_1_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+41,"ModulatorRTL flowMux_1 inputs_1_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+257,"ModulatorRTL flowMux_1 inputs_2_valid", false,-1);
        vcdp->declBit(c+265,"ModulatorRTL flowMux_1 inputs_2_payload_last", false,-1);
        vcdp->declBus(c+273,"ModulatorRTL flowMux_1 inputs_2_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+281,"ModulatorRTL flowMux_1 inputs_2_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+137,"ModulatorRTL flowMux_1 inputs_3_valid", false,-1);
        vcdp->declBit(c+65,"ModulatorRTL flowMux_1 inputs_3_payload_last", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL flowMux_1 inputs_3_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+9,"ModulatorRTL flowMux_1 inputs_3_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBit(c+145,"ModulatorRTL flowMux_1 inputs_4_valid", false,-1);
        vcdp->declBit(c+73,"ModulatorRTL flowMux_1 inputs_4_payload_last", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL flowMux_1 inputs_4_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"ModulatorRTL flowMux_1 inputs_4_payload_fragment_cha_q", false,-1, 11,0);
        vcdp->declBus(c+545,"ModulatorRTL flowMux_1 select_1", false,-1, 2,0);
        vcdp->declBit(c+721,"ModulatorRTL flowMux_1 output_valid", false,-1);
        vcdp->declBit(c+729,"ModulatorRTL flowMux_1 output_payload_last", false,-1);
        vcdp->declBus(c+737,"ModulatorRTL flowMux_1 output_payload_fragment_cha_i", false,-1, 11,0);
        vcdp->declBus(c+745,"ModulatorRTL flowMux_1 output_payload_fragment_cha_q", false,-1, 11,0);
    }
}

void VModulatorRTL::traceFullThis__1(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                             ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                          >> 0xcU))
                             : 0U)),12);
        vcdp->fullBus(c+9,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                             ? (0xfffU & vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1)
                             : 0U)),12);
        vcdp->fullBus(c+17,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                              ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                                           >> 0xcU))
                              : 0U)),12);
        vcdp->fullBus(c+25,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                              ? (0xfffU & vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1)
                              : 0U)),12);
        vcdp->fullBus(c+33,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                              ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                           >> 0xcU))
                              : 0U)),12);
        vcdp->fullBus(c+41,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                              ? (0xfffU & vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)
                              : 0U)),12);
        vcdp->fullBus(c+49,((0xfffU & vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)),12);
        vcdp->fullBus(c+57,((0xfffU & (vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                       >> 0xcU))),12);
        vcdp->fullBit(c+65,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87) 
                             & (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_last))));
        vcdp->fullBit(c+73,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70) 
                             & (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_last))));
        vcdp->fullBit(c+81,(((IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid) 
                             & (0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready)))));
        vcdp->fullBit(c+89,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_0_payload_last));
        vcdp->fullBit(c+97,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_1_payload_last));
        vcdp->fullBit(c+105,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_2_payload_last));
        vcdp->fullBit(c+113,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_3_payload_last));
        vcdp->fullBit(c+121,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid));
        vcdp->fullBit(c+129,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_payload_last));
        vcdp->fullBit(c+137,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87));
        vcdp->fullBit(c+145,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70));
        vcdp->fullBit(c+153,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87));
        vcdp->fullBit(c+161,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70));
        vcdp->fullBit(c+169,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last));
        vcdp->fullBit(c+177,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last));
        vcdp->fullBit(c+185,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last));
        vcdp->fullBit(c+193,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_last));
        vcdp->fullBit(c+201,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_last));
        vcdp->fullBit(c+209,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBit(c+217,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                              & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last))));
        vcdp->fullBus(c+225,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                               ? (0xfffU & (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                              ? 0x7ff000U
                                              : 0x801000U) 
                                            >> 0xcU))
                               : 0U)),12);
        vcdp->fullBus(c+233,(0U),12);
        vcdp->fullBit(c+241,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->fullBit(c+249,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                              & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))));
        vcdp->fullBit(c+257,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBit(c+265,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                              & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last))));
        vcdp->fullBus(c+273,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                               ? ((0U == (3U & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                >> 2U)))
                                   ? 0xc35U : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                    >> 2U)))
                                                ? 0xebcU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                        >> 2U)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                               : 0U)),12);
        vcdp->fullBus(c+281,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                               ? ((0U == (3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                   ? 0xc35U : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                ? 0xebcU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                               : 0U)),12);
        vcdp->fullBit(c+289,((0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))));
        vcdp->fullBit(c+297,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment));
        vcdp->fullBit(c+305,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBit(c+313,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last));
        vcdp->fullBus(c+321,(0U),12);
        vcdp->fullBus(c+329,((0xfffU & (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                          ? 0x7ff000U
                                          : 0x801000U) 
                                        >> 0xcU))),12);
        vcdp->fullBus(c+337,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment),2);
        vcdp->fullBit(c+345,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->fullBit(c+353,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last));
        vcdp->fullBus(c+361,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment),4);
        vcdp->fullBit(c+369,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBit(c+377,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last));
        vcdp->fullBus(c+385,((3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment))),2);
        vcdp->fullBus(c+393,((3U & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                    >> 2U))),2);
        vcdp->fullBus(c+401,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_fragment),8);
        vcdp->fullBit(c+409,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_valid));
        vcdp->fullBit(c+417,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_last));
        vcdp->fullBus(c+425,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_fragment),7);
        vcdp->fullBit(c+433,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_valid));
        vcdp->fullBit(c+441,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_last));
        vcdp->fullBit(c+449,((0U != (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))));
        vcdp->fullBit(c+457,(vlTOPp->data_flow_unit_data_valid));
        vcdp->fullBit(c+465,(vlTOPp->data_flow_unit_data_payload_last));
        vcdp->fullBus(c+473,(vlTOPp->data_flow_unit_data_payload_fragment),8);
        vcdp->fullBit(c+481,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->fullBit(c+489,(vlTOPp->data_flow_mod_iq_payload_last));
        vcdp->fullBus(c+497,(vlTOPp->data_flow_mod_iq_payload_fragment_cha_i),12);
        vcdp->fullBus(c+505,(vlTOPp->data_flow_mod_iq_payload_fragment_cha_q),12);
        vcdp->fullBus(c+513,(vlTOPp->w_en),2);
        vcdp->fullBus(c+521,(vlTOPp->w_addr),32);
        vcdp->fullBus(c+529,(vlTOPp->w_data),32);
        vcdp->fullBus(c+537,(vlTOPp->cnt_limit),32);
        vcdp->fullBus(c+545,(vlTOPp->select_1),3);
        vcdp->fullBit(c+553,(vlTOPp->clk));
        vcdp->fullBit(c+561,(vlTOPp->reset));
        vcdp->fullBit(c+569,(((0U != (IData)(vlTOPp->select_1))
                               ? 0U : (1U & (IData)(vlTOPp->data_flow_unit_data_payload_fragment)))));
        vcdp->fullBus(c+577,(((1U != (IData)(vlTOPp->select_1))
                               ? 0U : (3U & (IData)(vlTOPp->data_flow_unit_data_payload_fragment)))),2);
        vcdp->fullBus(c+585,(((2U != (IData)(vlTOPp->select_1))
                               ? 0U : (0xfU & (IData)(vlTOPp->data_flow_unit_data_payload_fragment)))),4);
        vcdp->fullBit(c+593,((0U == (IData)(vlTOPp->w_en))));
        vcdp->fullBus(c+601,((0xffU & vlTOPp->w_addr)),8);
        vcdp->fullBus(c+609,((0xffffffU & vlTOPp->w_data)),24);
        vcdp->fullBit(c+617,((1U == (IData)(vlTOPp->w_en))));
        vcdp->fullBus(c+625,((0x7fU & vlTOPp->w_addr)),7);
        vcdp->fullBus(c+633,((7U & vlTOPp->cnt_limit)),3);
        vcdp->fullBus(c+641,(((4U != (IData)(vlTOPp->select_1))
                               ? 0U : (0x7fU & (IData)(vlTOPp->data_flow_unit_data_payload_fragment)))),7);
        vcdp->fullBit(c+649,(((0U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+657,(((0U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->fullBit(c+665,(((1U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+673,(((1U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->fullBit(c+681,(((2U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+689,(((2U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->fullBit(c+697,(((3U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+705,(((3U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->fullBus(c+713,(((4U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))),8);
        vcdp->fullBit(c+721,(((4U & (IData)(vlTOPp->select_1))
                               ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                               : ((2U & (IData)(vlTOPp->select_1))
                                   ? ((1U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                       : (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))
                                   : ((1U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                       : (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid))))));
        vcdp->fullBit(c+729,(((4U & (IData)(vlTOPp->select_1))
                               ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70) 
                                  & (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_last))
                               : ((2U & (IData)(vlTOPp->select_1))
                                   ? ((1U & (IData)(vlTOPp->select_1))
                                       ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87) 
                                          & (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_last))
                                       : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                          & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last)))
                                   : ((1U & (IData)(vlTOPp->select_1))
                                       ? ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                          & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                       : ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                          & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last)))))));
        vcdp->fullBus(c+737,((0xfffU & ((4U & (IData)(vlTOPp->select_1))
                                         ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                                             ? (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                                                >> 0xcU)
                                             : 0U) : 
                                        ((2U & (IData)(vlTOPp->select_1))
                                          ? ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                                  ? 
                                                 (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                                  >> 0xcU)
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                       >> 2U)))
                                                   ? 0xc35U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                        >> 2U)))
                                                    ? 0xebcU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                         >> 2U)))
                                                     ? 0x3caU
                                                     : 0x143U)))
                                                  : 0U))
                                          : ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                  ? 
                                                 (vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                  >> 0xcU)
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                  ? 
                                                 (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                    ? 0x7ff000U
                                                    : 0x801000U) 
                                                  >> 0xcU)
                                                  : 0U)))))),12);
    }
}

void VModulatorRTL::traceFullThis__9(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+745,((0xfffU & ((4U & (IData)(vlTOPp->select_1))
                                         ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                                             ? vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1
                                             : 0U) : 
                                        ((2U & (IData)(vlTOPp->select_1))
                                          ? ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                                  ? vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                   ? 0xc35U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                    ? 0xebcU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                     ? 0x3caU
                                                     : 0x143U)))
                                                  : 0U))
                                          : ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                  ? vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                   ? 0x7ff000U
                                                   : 0x801000U)
                                                  : 0U)))))),12);
        vcdp->fullBit(c+753,((0U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+761,((1U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+769,((2U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+777,((3U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+785,((4U != (IData)(vlTOPp->select_1))));
        vcdp->fullBus(c+793,(0x801000U),24);
        vcdp->fullBus(c+801,(0x7ff000U),24);
        vcdp->fullBus(c+809,(0xa59a59U),24);
        vcdp->fullBus(c+817,(0xa595a7U),24);
        vcdp->fullBus(c+825,(0x5a7a59U),24);
        vcdp->fullBus(c+833,(0x5a75a7U),24);
        vcdp->fullBus(c+841,(0xc35U),12);
        vcdp->fullBus(c+849,(0xebcU),12);
        vcdp->fullBus(c+857,(0x3caU),12);
        vcdp->fullBus(c+865,(0x143U),12);
    }
}
