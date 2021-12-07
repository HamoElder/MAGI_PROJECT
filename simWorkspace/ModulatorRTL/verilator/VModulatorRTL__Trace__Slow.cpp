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
        vlTOPp->traceFullThis__8(vlSymsp, vcdp, code);
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
        vcdp->declBit(c+297,"data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+305,"data_flow_unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+313,"data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+321,"data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+329,"data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBus(c+337,"w_en", false,-1, 1,0);
        vcdp->declBus(c+345,"w_addr", false,-1, 31,0);
        vcdp->declBus(c+353,"w_data", false,-1, 31,0);
        vcdp->declBus(c+361,"cnt_limit", false,-1, 31,0);
        vcdp->declBus(c+369,"select_1", false,-1, 2,0);
        vcdp->declBit(c+377,"clk", false,-1);
        vcdp->declBit(c+385,"reset", false,-1);
        vcdp->declBit(c+297,"ModulatorRTL data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+305,"ModulatorRTL data_flow_unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+313,"ModulatorRTL data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+321,"ModulatorRTL data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+329,"ModulatorRTL data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBus(c+337,"ModulatorRTL w_en", false,-1, 1,0);
        vcdp->declBus(c+345,"ModulatorRTL w_addr", false,-1, 31,0);
        vcdp->declBus(c+353,"ModulatorRTL w_data", false,-1, 31,0);
        vcdp->declBus(c+361,"ModulatorRTL cnt_limit", false,-1, 31,0);
        vcdp->declBus(c+369,"ModulatorRTL select_1", false,-1, 2,0);
        vcdp->declBit(c+377,"ModulatorRTL clk", false,-1);
        vcdp->declBit(c+385,"ModulatorRTL reset", false,-1);
        vcdp->declBus(c+393,"ModulatorRTL mPSK_Modulator_Extension_mod_unit_data_payload", false,-1, 0,0);
        vcdp->declBus(c+401,"ModulatorRTL mPSK_Modulator_Extension_mod_1_unit_data_payload", false,-1, 1,0);
        vcdp->declBus(c+409,"ModulatorRTL mQAM_Modulator_Extension_mod_unit_data_payload", false,-1, 3,0);
        vcdp->declBit(c+417,"ModulatorRTL mod_1_w_en", false,-1);
        vcdp->declBus(c+425,"ModulatorRTL mod_1_w_addr", false,-1, 7,0);
        vcdp->declBus(c+433,"ModulatorRTL mod_1_w_data", false,-1, 23,0);
        vcdp->declBit(c+441,"ModulatorRTL mod_2_w_en", false,-1);
        vcdp->declBus(c+449,"ModulatorRTL mod_2_w_addr", false,-1, 6,0);
        vcdp->declBus(c+433,"ModulatorRTL mod_2_w_data", false,-1, 23,0);
        vcdp->declBus(c+457,"ModulatorRTL mod_2_cnt_limit", false,-1, 2,0);
        vcdp->declBus(c+465,"ModulatorRTL mod_2_data_flow_unit_data_payload", false,-1, 6,0);
        vcdp->declBit(c+473,"ModulatorRTL flowDeMux_1_outputs_0_valid", false,-1);
        vcdp->declBus(c+481,"ModulatorRTL flowDeMux_1_outputs_0_payload", false,-1, 7,0);
        vcdp->declBit(c+489,"ModulatorRTL flowDeMux_1_outputs_1_valid", false,-1);
        vcdp->declBus(c+497,"ModulatorRTL flowDeMux_1_outputs_1_payload", false,-1, 7,0);
        vcdp->declBit(c+505,"ModulatorRTL flowDeMux_1_outputs_2_valid", false,-1);
        vcdp->declBus(c+513,"ModulatorRTL flowDeMux_1_outputs_2_payload", false,-1, 7,0);
        vcdp->declBit(c+521,"ModulatorRTL flowDeMux_1_outputs_3_valid", false,-1);
        vcdp->declBus(c+529,"ModulatorRTL flowDeMux_1_outputs_3_payload", false,-1, 7,0);
        vcdp->declBit(c+73,"ModulatorRTL flowDeMux_1_outputs_4_valid", false,-1);
        vcdp->declBus(c+537,"ModulatorRTL flowDeMux_1_outputs_4_payload", false,-1, 7,0);
        vcdp->declBit(c+113,"ModulatorRTL mPSK_Modulator_Extension_mod_mod_iq_valid", false,-1);
        vcdp->declBus(c+121,"ModulatorRTL mPSK_Modulator_Extension_mod_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+129,"ModulatorRTL mPSK_Modulator_Extension_mod_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+137,"ModulatorRTL mPSK_Modulator_Extension_mod_1_mod_iq_valid", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+41,"ModulatorRTL mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+145,"ModulatorRTL mQAM_Modulator_Extension_mod_mod_iq_valid", false,-1);
        vcdp->declBus(c+153,"ModulatorRTL mQAM_Modulator_Extension_mod_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+161,"ModulatorRTL mQAM_Modulator_Extension_mod_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+81,"ModulatorRTL mod_1_data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL mod_1_data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+9,"ModulatorRTL mod_1_data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+169,"ModulatorRTL mod_2_data_in_ready", false,-1);
        vcdp->declBit(c+89,"ModulatorRTL mod_2_data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL mod_2_data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"ModulatorRTL mod_2_data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+545,"ModulatorRTL flowMux_1_output_valid", false,-1);
        vcdp->declBus(c+553,"ModulatorRTL flowMux_1_output_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+561,"ModulatorRTL flowMux_1_output_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+297,"ModulatorRTL flowDeMux_1 input_valid", false,-1);
        vcdp->declBus(c+305,"ModulatorRTL flowDeMux_1 input_payload", false,-1, 7,0);
        vcdp->declBus(c+369,"ModulatorRTL flowDeMux_1 select_1", false,-1, 2,0);
        vcdp->declBit(c+473,"ModulatorRTL flowDeMux_1 outputs_0_valid", false,-1);
        vcdp->declBus(c+481,"ModulatorRTL flowDeMux_1 outputs_0_payload", false,-1, 7,0);
        vcdp->declBit(c+489,"ModulatorRTL flowDeMux_1 outputs_1_valid", false,-1);
        vcdp->declBus(c+497,"ModulatorRTL flowDeMux_1 outputs_1_payload", false,-1, 7,0);
        vcdp->declBit(c+505,"ModulatorRTL flowDeMux_1 outputs_2_valid", false,-1);
        vcdp->declBus(c+513,"ModulatorRTL flowDeMux_1 outputs_2_payload", false,-1, 7,0);
        vcdp->declBit(c+521,"ModulatorRTL flowDeMux_1 outputs_3_valid", false,-1);
        vcdp->declBus(c+529,"ModulatorRTL flowDeMux_1 outputs_3_payload", false,-1, 7,0);
        vcdp->declBit(c+73,"ModulatorRTL flowDeMux_1 outputs_4_valid", false,-1);
        vcdp->declBus(c+537,"ModulatorRTL flowDeMux_1 outputs_4_payload", false,-1, 7,0);
        vcdp->declBit(c+569,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15", false,-1);
        vcdp->declBit(c+577,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15_1", false,-1);
        vcdp->declBit(c+585,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15_2", false,-1);
        vcdp->declBit(c+593,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15_3", false,-1);
        vcdp->declBit(c+601,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15_4", false,-1);
        vcdp->declBit(c+473,"ModulatorRTL mPSK_Modulator_Extension_mod unit_data_valid", false,-1);
        vcdp->declBus(c+393,"ModulatorRTL mPSK_Modulator_Extension_mod unit_data_payload", false,-1, 0,0);
        vcdp->declBit(c+113,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_valid", false,-1);
        vcdp->declBus(c+121,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+129,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+377,"ModulatorRTL mPSK_Modulator_Extension_mod clk", false,-1);
        vcdp->declBit(c+385,"ModulatorRTL mPSK_Modulator_Extension_mod reset", false,-1);
        vcdp->declBus(c+609,"ModulatorRTL mPSK_Modulator_Extension_mod codeTable_0", false,-1, 23,0);
        vcdp->declBus(c+617,"ModulatorRTL mPSK_Modulator_Extension_mod codeTable_1", false,-1, 23,0);
        vcdp->declBus(c+177,"ModulatorRTL mPSK_Modulator_Extension_mod unit_data", false,-1, 0,0);
        vcdp->declBit(c+185,"ModulatorRTL mPSK_Modulator_Extension_mod unit_valid", false,-1);
        vcdp->declBus(c+193,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_0", false,-1, 11,0);
        vcdp->declBus(c+201,"ModulatorRTL mPSK_Modulator_Extension_mod mod_iq_1", false,-1, 11,0);
        vcdp->declBit(c+489,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_data_valid", false,-1);
        vcdp->declBus(c+401,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_data_payload", false,-1, 1,0);
        vcdp->declBit(c+137,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_valid", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+41,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+377,"ModulatorRTL mPSK_Modulator_Extension_mod_1 clk", false,-1);
        vcdp->declBit(c+385,"ModulatorRTL mPSK_Modulator_Extension_mod_1 reset", false,-1);
        vcdp->declBus(c+625,"ModulatorRTL mPSK_Modulator_Extension_mod_1 codeTable_0", false,-1, 23,0);
        vcdp->declBus(c+633,"ModulatorRTL mPSK_Modulator_Extension_mod_1 codeTable_1", false,-1, 23,0);
        vcdp->declBus(c+641,"ModulatorRTL mPSK_Modulator_Extension_mod_1 codeTable_2", false,-1, 23,0);
        vcdp->declBus(c+649,"ModulatorRTL mPSK_Modulator_Extension_mod_1 codeTable_3", false,-1, 23,0);
        vcdp->declBus(c+209,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_data", false,-1, 1,0);
        vcdp->declBit(c+217,"ModulatorRTL mPSK_Modulator_Extension_mod_1 unit_valid", false,-1);
        vcdp->declBus(c+49,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_0", false,-1, 11,0);
        vcdp->declBus(c+57,"ModulatorRTL mPSK_Modulator_Extension_mod_1 mod_iq_1", false,-1, 11,0);
        vcdp->declBit(c+505,"ModulatorRTL mQAM_Modulator_Extension_mod unit_data_valid", false,-1);
        vcdp->declBus(c+409,"ModulatorRTL mQAM_Modulator_Extension_mod unit_data_payload", false,-1, 3,0);
        vcdp->declBit(c+145,"ModulatorRTL mQAM_Modulator_Extension_mod mod_iq_valid", false,-1);
        vcdp->declBus(c+153,"ModulatorRTL mQAM_Modulator_Extension_mod mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+161,"ModulatorRTL mQAM_Modulator_Extension_mod mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+377,"ModulatorRTL mQAM_Modulator_Extension_mod clk", false,-1);
        vcdp->declBit(c+385,"ModulatorRTL mQAM_Modulator_Extension_mod reset", false,-1);
        vcdp->declBus(c+657,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableI_0", false,-1, 11,0);
        vcdp->declBus(c+665,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableI_1", false,-1, 11,0);
        vcdp->declBus(c+673,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableI_2", false,-1, 11,0);
        vcdp->declBus(c+681,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableI_3", false,-1, 11,0);
        vcdp->declBus(c+657,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableQ_0", false,-1, 11,0);
        vcdp->declBus(c+665,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableQ_1", false,-1, 11,0);
        vcdp->declBus(c+673,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableQ_2", false,-1, 11,0);
        vcdp->declBus(c+681,"ModulatorRTL mQAM_Modulator_Extension_mod codeTableQ_3", false,-1, 11,0);
        vcdp->declBus(c+225,"ModulatorRTL mQAM_Modulator_Extension_mod unit_data", false,-1, 3,0);
        vcdp->declBit(c+233,"ModulatorRTL mQAM_Modulator_Extension_mod unit_valid", false,-1);
        vcdp->declBus(c+241,"ModulatorRTL mQAM_Modulator_Extension_mod data_div_0", false,-1, 1,0);
        vcdp->declBus(c+249,"ModulatorRTL mQAM_Modulator_Extension_mod data_div_1", false,-1, 1,0);
        vcdp->declBit(c+417,"ModulatorRTL mod_1 w_en", false,-1);
        vcdp->declBus(c+425,"ModulatorRTL mod_1 w_addr", false,-1, 7,0);
        vcdp->declBus(c+433,"ModulatorRTL mod_1 w_data", false,-1, 23,0);
        vcdp->declBit(c+521,"ModulatorRTL mod_1 data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+529,"ModulatorRTL mod_1 data_flow_unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+81,"ModulatorRTL mod_1 data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL mod_1 data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+9,"ModulatorRTL mod_1 data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+377,"ModulatorRTL mod_1 clk", false,-1);
        vcdp->declBit(c+385,"ModulatorRTL mod_1 reset", false,-1);
        vcdp->declBus(c+257,"ModulatorRTL mod_1 unit_data", false,-1, 7,0);
        vcdp->declBit(c+265,"ModulatorRTL mod_1 unit_valid", false,-1);
        vcdp->declBit(c+97,"ModulatorRTL mod_1 when_lookUpMod_l84", false,-1);
        vcdp->declBit(c+441,"ModulatorRTL mod_2 w_en", false,-1);
        vcdp->declBus(c+449,"ModulatorRTL mod_2 w_addr", false,-1, 6,0);
        vcdp->declBus(c+433,"ModulatorRTL mod_2 w_data", false,-1, 23,0);
        vcdp->declBus(c+457,"ModulatorRTL mod_2 cnt_limit", false,-1, 2,0);
        vcdp->declBit(c+169,"ModulatorRTL mod_2 data_in_ready", false,-1);
        vcdp->declBit(c+73,"ModulatorRTL mod_2 data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+465,"ModulatorRTL mod_2 data_flow_unit_data_payload", false,-1, 6,0);
        vcdp->declBit(c+89,"ModulatorRTL mod_2 data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL mod_2 data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"ModulatorRTL mod_2 data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+377,"ModulatorRTL mod_2 clk", false,-1);
        vcdp->declBit(c+385,"ModulatorRTL mod_2 reset", false,-1);
        vcdp->declBus(c+273,"ModulatorRTL mod_2 unit_data", false,-1, 6,0);
        vcdp->declBit(c+281,"ModulatorRTL mod_2 unit_valid", false,-1);
        vcdp->declBit(c+65,"ModulatorRTL mod_2 when_lookUpMod_l57", false,-1);
        vcdp->declBit(c+289,"ModulatorRTL mod_2 when_lookUpMod_l60", false,-1);
        vcdp->declBit(c+105,"ModulatorRTL mod_2 when_lookUpMod_l69", false,-1);
        vcdp->declBit(c+113,"ModulatorRTL flowMux_1 inputs_0_valid", false,-1);
        vcdp->declBus(c+121,"ModulatorRTL flowMux_1 inputs_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+129,"ModulatorRTL flowMux_1 inputs_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+137,"ModulatorRTL flowMux_1 inputs_1_valid", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL flowMux_1 inputs_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+41,"ModulatorRTL flowMux_1 inputs_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+145,"ModulatorRTL flowMux_1 inputs_2_valid", false,-1);
        vcdp->declBus(c+153,"ModulatorRTL flowMux_1 inputs_2_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+161,"ModulatorRTL flowMux_1 inputs_2_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+81,"ModulatorRTL flowMux_1 inputs_3_valid", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL flowMux_1 inputs_3_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+9,"ModulatorRTL flowMux_1 inputs_3_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+89,"ModulatorRTL flowMux_1 inputs_4_valid", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL flowMux_1 inputs_4_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"ModulatorRTL flowMux_1 inputs_4_payload_cha_q", false,-1, 11,0);
        vcdp->declBus(c+369,"ModulatorRTL flowMux_1 select_1", false,-1, 2,0);
        vcdp->declBit(c+545,"ModulatorRTL flowMux_1 output_valid", false,-1);
        vcdp->declBus(c+553,"ModulatorRTL flowMux_1 output_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+561,"ModulatorRTL flowMux_1 output_payload_cha_q", false,-1, 11,0);
    }
}

void VModulatorRTL::traceFullThis__1(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                             ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                          >> 0xcU))
                             : 0U)),12);
        vcdp->fullBus(c+9,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                             ? (0xfffU & vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1)
                             : 0U)),12);
        vcdp->fullBus(c+17,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                              ? (0xfffU & (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                                           >> 0xcU))
                              : 0U)),12);
        vcdp->fullBus(c+25,(((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
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
        vcdp->fullBit(c+65,(((IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid) 
                             & (0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready)))));
        vcdp->fullBit(c+73,(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid));
        vcdp->fullBit(c+81,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84));
        vcdp->fullBit(c+89,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69));
        vcdp->fullBit(c+97,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84));
        vcdp->fullBit(c+105,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69));
        vcdp->fullBit(c+113,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBus(c+121,(((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                               ? (0xfffU & (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                              ? 0x7ff000U
                                              : 0x801000U) 
                                            >> 0xcU))
                               : 0U)),12);
        vcdp->fullBus(c+129,(0U),12);
        vcdp->fullBit(c+137,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->fullBit(c+145,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBus(c+153,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                               ? ((0U == (3U & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                >> 2U)))
                                   ? 0xc35U : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                    >> 2U)))
                                                ? 0xebcU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                               : 0U)),12);
        vcdp->fullBus(c+161,(((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                               ? ((0U == (3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                   ? 0xc35U : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                ? 0xebcU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                               : 0U)),12);
        vcdp->fullBit(c+169,((0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))));
        vcdp->fullBit(c+177,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data));
        vcdp->fullBit(c+185,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBus(c+193,(0U),12);
        vcdp->fullBus(c+201,((0xfffU & (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                          ? 0x7ff000U
                                          : 0x801000U) 
                                        >> 0xcU))),12);
        vcdp->fullBus(c+209,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data),2);
        vcdp->fullBit(c+217,(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->fullBus(c+225,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data),4);
        vcdp->fullBit(c+233,(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBus(c+241,((3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data))),2);
        vcdp->fullBus(c+249,((3U & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                    >> 2U))),2);
        vcdp->fullBus(c+257,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_data),8);
        vcdp->fullBit(c+265,(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_valid));
        vcdp->fullBus(c+273,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_data),7);
        vcdp->fullBit(c+281,(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_valid));
        vcdp->fullBit(c+289,((0U != (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))));
        vcdp->fullBit(c+297,(vlTOPp->data_flow_unit_data_valid));
        vcdp->fullBus(c+305,(vlTOPp->data_flow_unit_data_payload),8);
        vcdp->fullBit(c+313,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->fullBus(c+321,(vlTOPp->data_flow_mod_iq_payload_cha_i),12);
        vcdp->fullBus(c+329,(vlTOPp->data_flow_mod_iq_payload_cha_q),12);
        vcdp->fullBus(c+337,(vlTOPp->w_en),2);
        vcdp->fullBus(c+345,(vlTOPp->w_addr),32);
        vcdp->fullBus(c+353,(vlTOPp->w_data),32);
        vcdp->fullBus(c+361,(vlTOPp->cnt_limit),32);
        vcdp->fullBus(c+369,(vlTOPp->select_1),3);
        vcdp->fullBit(c+377,(vlTOPp->clk));
        vcdp->fullBit(c+385,(vlTOPp->reset));
        vcdp->fullBit(c+393,(((0U != (IData)(vlTOPp->select_1))
                               ? 0U : (1U & (IData)(vlTOPp->data_flow_unit_data_payload)))));
        vcdp->fullBus(c+401,(((1U != (IData)(vlTOPp->select_1))
                               ? 0U : (3U & (IData)(vlTOPp->data_flow_unit_data_payload)))),2);
        vcdp->fullBus(c+409,(((2U != (IData)(vlTOPp->select_1))
                               ? 0U : (0xfU & (IData)(vlTOPp->data_flow_unit_data_payload)))),4);
        vcdp->fullBit(c+417,((0U == (IData)(vlTOPp->w_en))));
        vcdp->fullBus(c+425,((0xffU & vlTOPp->w_addr)),8);
        vcdp->fullBus(c+433,((0xffffffU & vlTOPp->w_data)),24);
        vcdp->fullBit(c+441,((1U == (IData)(vlTOPp->w_en))));
        vcdp->fullBus(c+449,((0x7fU & vlTOPp->w_addr)),7);
        vcdp->fullBus(c+457,((7U & vlTOPp->cnt_limit)),3);
        vcdp->fullBus(c+465,(((4U != (IData)(vlTOPp->select_1))
                               ? 0U : (0x7fU & (IData)(vlTOPp->data_flow_unit_data_payload)))),7);
        vcdp->fullBit(c+473,(((0U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+481,(((0U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->fullBit(c+489,(((1U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+497,(((1U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->fullBit(c+505,(((2U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+513,(((2U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->fullBit(c+521,(((3U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+529,(((3U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->fullBus(c+537,(((4U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload))),8);
        vcdp->fullBit(c+545,(((4U & (IData)(vlTOPp->select_1))
                               ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                               : ((2U & (IData)(vlTOPp->select_1))
                                   ? ((1U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                                       : (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))
                                   : ((1U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                       : (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid))))));
        vcdp->fullBus(c+553,((0xfffU & ((4U & (IData)(vlTOPp->select_1))
                                         ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                                             ? (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                                                >> 0xcU)
                                             : 0U) : 
                                        ((2U & (IData)(vlTOPp->select_1))
                                          ? ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                                                  ? 
                                                 (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                                  >> 0xcU)
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                       >> 2U)))
                                                   ? 0xc35U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0xebcU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
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
                                                 (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                    ? 0x7ff000U
                                                    : 0x801000U) 
                                                  >> 0xcU)
                                                  : 0U)))))),12);
        vcdp->fullBus(c+561,((0xfffU & ((4U & (IData)(vlTOPp->select_1))
                                         ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l69)
                                             ? vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1
                                             : 0U) : 
                                        ((2U & (IData)(vlTOPp->select_1))
                                          ? ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l84)
                                                  ? vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                   ? 0xc35U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                    ? 0xebcU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                     ? 0x3caU
                                                     : 0x143U)))
                                                  : 0U))
                                          : ((1U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                  ? vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                                  : 0U)
                                              : ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                   ? 0x7ff000U
                                                   : 0x801000U)
                                                  : 0U)))))),12);
    }
}

void VModulatorRTL::traceFullThis__8(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+569,((0U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+577,((1U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+585,((2U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+593,((3U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+601,((4U != (IData)(vlTOPp->select_1))));
        vcdp->fullBus(c+609,(0x801000U),24);
        vcdp->fullBus(c+617,(0x7ff000U),24);
        vcdp->fullBus(c+625,(0xa59a59U),24);
        vcdp->fullBus(c+633,(0xa595a7U),24);
        vcdp->fullBus(c+641,(0x5a7a59U),24);
        vcdp->fullBus(c+649,(0x5a75a7U),24);
        vcdp->fullBus(c+657,(0xc35U),12);
        vcdp->fullBus(c+665,(0xebcU),12);
        vcdp->fullBus(c+673,(0x3caU),12);
        vcdp->fullBus(c+681,(0x143U),12);
    }
}
