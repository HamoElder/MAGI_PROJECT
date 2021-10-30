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
        vcdp->declBit(c+289,"data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+297,"data_flow_unit_data_payload", false,-1, 31,0);
        vcdp->declBit(c+305,"data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+313,"data_flow_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+321,"data_flow_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+329,"w_en", false,-1);
        vcdp->declBus(c+337,"w_addr", false,-1, 10,0);
        vcdp->declBus(c+345,"w_data", false,-1, 31,0);
        vcdp->declBus(c+353,"select_1", false,-1, 2,0);
        vcdp->declBit(c+361,"clk", false,-1);
        vcdp->declBit(c+369,"reset", false,-1);
        vcdp->declBit(c+289,"ModulatorRTL data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+297,"ModulatorRTL data_flow_unit_data_payload", false,-1, 31,0);
        vcdp->declBit(c+305,"ModulatorRTL data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+313,"ModulatorRTL data_flow_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+321,"ModulatorRTL data_flow_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+329,"ModulatorRTL w_en", false,-1);
        vcdp->declBus(c+337,"ModulatorRTL w_addr", false,-1, 10,0);
        vcdp->declBus(c+345,"ModulatorRTL w_data", false,-1, 31,0);
        vcdp->declBus(c+353,"ModulatorRTL select_1", false,-1, 2,0);
        vcdp->declBit(c+361,"ModulatorRTL clk", false,-1);
        vcdp->declBit(c+369,"ModulatorRTL reset", false,-1);
        vcdp->declBus(c+377,"ModulatorRTL bpsk_mod_unit_data_payload", false,-1, 0,0);
        vcdp->declBus(c+385,"ModulatorRTL qpsk_mod_unit_data_payload", false,-1, 1,0);
        vcdp->declBus(c+393,"ModulatorRTL qam16_mod_unit_data_payload", false,-1, 3,0);
        vcdp->declBus(c+401,"ModulatorRTL qam64_mod_unit_data_payload", false,-1, 5,0);
        vcdp->declBus(c+409,"ModulatorRTL lookup_mod_data_flow_unit_data_payload", false,-1, 10,0);
        vcdp->declBit(c+417,"ModulatorRTL flowDeMux_1_outputs_0_valid", false,-1);
        vcdp->declBus(c+425,"ModulatorRTL flowDeMux_1_outputs_0_payload", false,-1, 31,0);
        vcdp->declBit(c+433,"ModulatorRTL flowDeMux_1_outputs_1_valid", false,-1);
        vcdp->declBus(c+441,"ModulatorRTL flowDeMux_1_outputs_1_payload", false,-1, 31,0);
        vcdp->declBit(c+449,"ModulatorRTL flowDeMux_1_outputs_2_valid", false,-1);
        vcdp->declBus(c+457,"ModulatorRTL flowDeMux_1_outputs_2_payload", false,-1, 31,0);
        vcdp->declBit(c+465,"ModulatorRTL flowDeMux_1_outputs_3_valid", false,-1);
        vcdp->declBus(c+473,"ModulatorRTL flowDeMux_1_outputs_3_payload", false,-1, 31,0);
        vcdp->declBit(c+481,"ModulatorRTL flowDeMux_1_outputs_4_valid", false,-1);
        vcdp->declBus(c+489,"ModulatorRTL flowDeMux_1_outputs_4_payload", false,-1, 31,0);
        vcdp->declBit(c+97,"ModulatorRTL bpsk_mod_mod_iq_valid", false,-1);
        vcdp->declBus(c+105,"ModulatorRTL bpsk_mod_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+113,"ModulatorRTL bpsk_mod_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+121,"ModulatorRTL qpsk_mod_mod_iq_valid", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL qpsk_mod_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+25,"ModulatorRTL qpsk_mod_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+129,"ModulatorRTL qam16_mod_mod_iq_valid", false,-1);
        vcdp->declBus(c+137,"ModulatorRTL qam16_mod_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+145,"ModulatorRTL qam16_mod_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+153,"ModulatorRTL qam64_mod_mod_iq_valid", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL qam64_mod_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+41,"ModulatorRTL qam64_mod_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+65,"ModulatorRTL lookup_mod_data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL lookup_mod_data_flow_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+9,"ModulatorRTL lookup_mod_data_flow_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+497,"ModulatorRTL flowMux_1_output_valid", false,-1);
        vcdp->declBus(c+505,"ModulatorRTL flowMux_1_output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+513,"ModulatorRTL flowMux_1_output_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+289,"ModulatorRTL flowDeMux_1 input_valid", false,-1);
        vcdp->declBus(c+297,"ModulatorRTL flowDeMux_1 input_payload", false,-1, 31,0);
        vcdp->declBus(c+353,"ModulatorRTL flowDeMux_1 select_1", false,-1, 2,0);
        vcdp->declBit(c+417,"ModulatorRTL flowDeMux_1 outputs_0_valid", false,-1);
        vcdp->declBus(c+425,"ModulatorRTL flowDeMux_1 outputs_0_payload", false,-1, 31,0);
        vcdp->declBit(c+433,"ModulatorRTL flowDeMux_1 outputs_1_valid", false,-1);
        vcdp->declBus(c+441,"ModulatorRTL flowDeMux_1 outputs_1_payload", false,-1, 31,0);
        vcdp->declBit(c+449,"ModulatorRTL flowDeMux_1 outputs_2_valid", false,-1);
        vcdp->declBus(c+457,"ModulatorRTL flowDeMux_1 outputs_2_payload", false,-1, 31,0);
        vcdp->declBit(c+465,"ModulatorRTL flowDeMux_1 outputs_3_valid", false,-1);
        vcdp->declBus(c+473,"ModulatorRTL flowDeMux_1 outputs_3_payload", false,-1, 31,0);
        vcdp->declBit(c+481,"ModulatorRTL flowDeMux_1 outputs_4_valid", false,-1);
        vcdp->declBus(c+489,"ModulatorRTL flowDeMux_1 outputs_4_payload", false,-1, 31,0);
        vcdp->declBit(c+521,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15", false,-1);
        vcdp->declBit(c+529,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15_1", false,-1);
        vcdp->declBit(c+537,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15_2", false,-1);
        vcdp->declBit(c+545,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15_3", false,-1);
        vcdp->declBit(c+553,"ModulatorRTL flowDeMux_1 when_FlowDeMux_l15_4", false,-1);
        vcdp->declBit(c+417,"ModulatorRTL bpsk_mod unit_data_valid", false,-1);
        vcdp->declBus(c+377,"ModulatorRTL bpsk_mod unit_data_payload", false,-1, 0,0);
        vcdp->declBit(c+97,"ModulatorRTL bpsk_mod mod_iq_valid", false,-1);
        vcdp->declBus(c+105,"ModulatorRTL bpsk_mod mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+113,"ModulatorRTL bpsk_mod mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+361,"ModulatorRTL bpsk_mod clk", false,-1);
        vcdp->declBit(c+369,"ModulatorRTL bpsk_mod reset", false,-1);
        vcdp->declBus(c+561,"ModulatorRTL bpsk_mod codeTable_0", false,-1, 31,0);
        vcdp->declBus(c+569,"ModulatorRTL bpsk_mod codeTable_1", false,-1, 31,0);
        vcdp->declBus(c+161,"ModulatorRTL bpsk_mod unit_data", false,-1, 0,0);
        vcdp->declBit(c+169,"ModulatorRTL bpsk_mod unit_valid", false,-1);
        vcdp->declBus(c+177,"ModulatorRTL bpsk_mod mod_iq_0", false,-1, 15,0);
        vcdp->declBus(c+185,"ModulatorRTL bpsk_mod mod_iq_1", false,-1, 15,0);
        vcdp->declBit(c+433,"ModulatorRTL qpsk_mod unit_data_valid", false,-1);
        vcdp->declBus(c+385,"ModulatorRTL qpsk_mod unit_data_payload", false,-1, 1,0);
        vcdp->declBit(c+121,"ModulatorRTL qpsk_mod mod_iq_valid", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL qpsk_mod mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+25,"ModulatorRTL qpsk_mod mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+361,"ModulatorRTL qpsk_mod clk", false,-1);
        vcdp->declBit(c+369,"ModulatorRTL qpsk_mod reset", false,-1);
        vcdp->declBus(c+577,"ModulatorRTL qpsk_mod codeTable_0", false,-1, 31,0);
        vcdp->declBus(c+585,"ModulatorRTL qpsk_mod codeTable_1", false,-1, 31,0);
        vcdp->declBus(c+593,"ModulatorRTL qpsk_mod codeTable_2", false,-1, 31,0);
        vcdp->declBus(c+601,"ModulatorRTL qpsk_mod codeTable_3", false,-1, 31,0);
        vcdp->declBus(c+193,"ModulatorRTL qpsk_mod unit_data", false,-1, 1,0);
        vcdp->declBit(c+201,"ModulatorRTL qpsk_mod unit_valid", false,-1);
        vcdp->declBus(c+49,"ModulatorRTL qpsk_mod mod_iq_0", false,-1, 15,0);
        vcdp->declBus(c+57,"ModulatorRTL qpsk_mod mod_iq_1", false,-1, 15,0);
        vcdp->declBit(c+449,"ModulatorRTL qam16_mod unit_data_valid", false,-1);
        vcdp->declBus(c+393,"ModulatorRTL qam16_mod unit_data_payload", false,-1, 3,0);
        vcdp->declBit(c+129,"ModulatorRTL qam16_mod mod_iq_valid", false,-1);
        vcdp->declBus(c+137,"ModulatorRTL qam16_mod mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+145,"ModulatorRTL qam16_mod mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+361,"ModulatorRTL qam16_mod clk", false,-1);
        vcdp->declBit(c+369,"ModulatorRTL qam16_mod reset", false,-1);
        vcdp->declBus(c+609,"ModulatorRTL qam16_mod codeTableI_0", false,-1, 15,0);
        vcdp->declBus(c+617,"ModulatorRTL qam16_mod codeTableI_1", false,-1, 15,0);
        vcdp->declBus(c+625,"ModulatorRTL qam16_mod codeTableI_2", false,-1, 15,0);
        vcdp->declBus(c+633,"ModulatorRTL qam16_mod codeTableI_3", false,-1, 15,0);
        vcdp->declBus(c+609,"ModulatorRTL qam16_mod codeTableQ_0", false,-1, 15,0);
        vcdp->declBus(c+617,"ModulatorRTL qam16_mod codeTableQ_1", false,-1, 15,0);
        vcdp->declBus(c+625,"ModulatorRTL qam16_mod codeTableQ_2", false,-1, 15,0);
        vcdp->declBus(c+633,"ModulatorRTL qam16_mod codeTableQ_3", false,-1, 15,0);
        vcdp->declBus(c+209,"ModulatorRTL qam16_mod unit_data", false,-1, 3,0);
        vcdp->declBit(c+217,"ModulatorRTL qam16_mod unit_valid", false,-1);
        vcdp->declBus(c+225,"ModulatorRTL qam16_mod data_div_0", false,-1, 1,0);
        vcdp->declBus(c+233,"ModulatorRTL qam16_mod data_div_1", false,-1, 1,0);
        vcdp->declBit(c+465,"ModulatorRTL qam64_mod unit_data_valid", false,-1);
        vcdp->declBus(c+401,"ModulatorRTL qam64_mod unit_data_payload", false,-1, 5,0);
        vcdp->declBit(c+153,"ModulatorRTL qam64_mod mod_iq_valid", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL qam64_mod mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+41,"ModulatorRTL qam64_mod mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+361,"ModulatorRTL qam64_mod clk", false,-1);
        vcdp->declBit(c+369,"ModulatorRTL qam64_mod reset", false,-1);
        vcdp->declBus(c+641,"ModulatorRTL qam64_mod codeTableI_0", false,-1, 15,0);
        vcdp->declBus(c+649,"ModulatorRTL qam64_mod codeTableI_1", false,-1, 15,0);
        vcdp->declBus(c+657,"ModulatorRTL qam64_mod codeTableI_2", false,-1, 15,0);
        vcdp->declBus(c+665,"ModulatorRTL qam64_mod codeTableI_3", false,-1, 15,0);
        vcdp->declBus(c+673,"ModulatorRTL qam64_mod codeTableI_4", false,-1, 15,0);
        vcdp->declBus(c+681,"ModulatorRTL qam64_mod codeTableI_5", false,-1, 15,0);
        vcdp->declBus(c+641,"ModulatorRTL qam64_mod codeTableQ_0", false,-1, 15,0);
        vcdp->declBus(c+649,"ModulatorRTL qam64_mod codeTableQ_1", false,-1, 15,0);
        vcdp->declBus(c+657,"ModulatorRTL qam64_mod codeTableQ_2", false,-1, 15,0);
        vcdp->declBus(c+665,"ModulatorRTL qam64_mod codeTableQ_3", false,-1, 15,0);
        vcdp->declBus(c+673,"ModulatorRTL qam64_mod codeTableQ_4", false,-1, 15,0);
        vcdp->declBus(c+681,"ModulatorRTL qam64_mod codeTableQ_5", false,-1, 15,0);
        vcdp->declBus(c+241,"ModulatorRTL qam64_mod unit_data", false,-1, 5,0);
        vcdp->declBit(c+249,"ModulatorRTL qam64_mod unit_valid", false,-1);
        vcdp->declBus(c+257,"ModulatorRTL qam64_mod data_div_0", false,-1, 2,0);
        vcdp->declBus(c+265,"ModulatorRTL qam64_mod data_div_1", false,-1, 2,0);
        vcdp->declBit(c+329,"ModulatorRTL lookup_mod w_en", false,-1);
        vcdp->declBus(c+337,"ModulatorRTL lookup_mod w_addr", false,-1, 10,0);
        vcdp->declBus(c+345,"ModulatorRTL lookup_mod w_data", false,-1, 31,0);
        vcdp->declBit(c+481,"ModulatorRTL lookup_mod data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+409,"ModulatorRTL lookup_mod data_flow_unit_data_payload", false,-1, 10,0);
        vcdp->declBit(c+65,"ModulatorRTL lookup_mod data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL lookup_mod data_flow_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+9,"ModulatorRTL lookup_mod data_flow_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+361,"ModulatorRTL lookup_mod clk", false,-1);
        vcdp->declBit(c+369,"ModulatorRTL lookup_mod reset", false,-1);
        vcdp->declBus(c+273,"ModulatorRTL lookup_mod unit_data", false,-1, 10,0);
        vcdp->declBit(c+281,"ModulatorRTL lookup_mod unit_valid", false,-1);
        vcdp->declBus(c+81,"ModulatorRTL lookup_mod iq_mod_div_0", false,-1, 15,0);
        vcdp->declBus(c+89,"ModulatorRTL lookup_mod iq_mod_div_1", false,-1, 15,0);
        vcdp->declBit(c+73,"ModulatorRTL lookup_mod when_lookUpMod_l56", false,-1);
        vcdp->declBit(c+97,"ModulatorRTL flowMux_1 inputs_0_valid", false,-1);
        vcdp->declBus(c+105,"ModulatorRTL flowMux_1 inputs_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+113,"ModulatorRTL flowMux_1 inputs_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+121,"ModulatorRTL flowMux_1 inputs_1_valid", false,-1);
        vcdp->declBus(c+17,"ModulatorRTL flowMux_1 inputs_1_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+25,"ModulatorRTL flowMux_1 inputs_1_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+129,"ModulatorRTL flowMux_1 inputs_2_valid", false,-1);
        vcdp->declBus(c+137,"ModulatorRTL flowMux_1 inputs_2_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+145,"ModulatorRTL flowMux_1 inputs_2_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+153,"ModulatorRTL flowMux_1 inputs_3_valid", false,-1);
        vcdp->declBus(c+33,"ModulatorRTL flowMux_1 inputs_3_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+41,"ModulatorRTL flowMux_1 inputs_3_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+65,"ModulatorRTL flowMux_1 inputs_4_valid", false,-1);
        vcdp->declBus(c+1,"ModulatorRTL flowMux_1 inputs_4_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+9,"ModulatorRTL flowMux_1 inputs_4_payload_cha_q", false,-1, 15,0);
        vcdp->declBus(c+353,"ModulatorRTL flowMux_1 select_1", false,-1, 2,0);
        vcdp->declBit(c+497,"ModulatorRTL flowMux_1 output_valid", false,-1);
        vcdp->declBus(c+505,"ModulatorRTL flowMux_1 output_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+513,"ModulatorRTL flowMux_1 output_payload_cha_q", false,-1, 15,0);
    }
}

void VModulatorRTL::traceFullThis__1(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                             ? (0xffffU & (vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
                                           >> 0x10U))
                             : 0U)),16);
        vcdp->fullBus(c+9,(((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                             ? (0xffffU & vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1)
                             : 0U)),16);
        vcdp->fullBus(c+17,(((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                              ? (0xffffU & (vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                            >> 0x10U))
                              : 0U)),16);
        vcdp->fullBus(c+25,(((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                              ? (0xffffU & vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0)
                              : 0U)),16);
        vcdp->fullBus(c+33,(((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                              ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                              : 0U)),16);
        vcdp->fullBus(c+41,(((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                              ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                              : 0U)),16);
        vcdp->fullBus(c+49,((0xffffU & vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0)),16);
        vcdp->fullBus(c+57,((0xffffU & (vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                        >> 0x10U))),16);
        vcdp->fullBit(c+65,(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56));
        vcdp->fullBit(c+73,(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56));
        vcdp->fullBus(c+81,((0xffffU & vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1)),16);
        vcdp->fullBus(c+89,((0xffffU & (vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
                                        >> 0x10U))),16);
        vcdp->fullBit(c+97,(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid));
        vcdp->fullBus(c+105,(((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                               ? (0xffffU & (((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                               ? 0x7fff0000U
                                               : 0x80010000U) 
                                             >> 0x10U))
                               : 0U)),16);
        vcdp->fullBus(c+113,(0U),16);
        vcdp->fullBit(c+121,(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid));
        vcdp->fullBit(c+129,(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid));
        vcdp->fullBus(c+137,(((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                               ? ((0U == (3U & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                >> 2U)))
                                   ? 0xc349U : ((1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                     >> 2U)))
                                                 ? 0xebc3U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                      >> 2U)))
                                                  ? 0x3cb6U
                                                  : 0x143cU)))
                               : 0U)),16);
        vcdp->fullBus(c+145,(((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                               ? ((0U == (3U & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                   ? 0xc349U : ((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                 ? 0xebc3U
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                  ? 0x3cb6U
                                                  : 0x143cU)))
                               : 0U)),16);
        vcdp->fullBit(c+153,(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid));
        vcdp->fullBit(c+161,(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data));
        vcdp->fullBit(c+169,(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid));
        vcdp->fullBus(c+177,(0U),16);
        vcdp->fullBus(c+185,((0xffffU & (((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                           ? 0x7fff0000U
                                           : 0x80010000U) 
                                         >> 0x10U))),16);
        vcdp->fullBus(c+193,(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data),2);
        vcdp->fullBit(c+201,(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid));
        vcdp->fullBus(c+209,(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data),4);
        vcdp->fullBit(c+217,(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid));
        vcdp->fullBus(c+225,((3U & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data))),2);
        vcdp->fullBus(c+233,((3U & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                    >> 2U))),2);
        vcdp->fullBus(c+241,(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data),6);
        vcdp->fullBit(c+249,(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid));
        vcdp->fullBus(c+257,((7U & (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data))),3);
        vcdp->fullBus(c+265,((7U & ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data) 
                                    >> 3U))),3);
        vcdp->fullBus(c+273,(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_data),11);
        vcdp->fullBit(c+281,(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_valid));
        vcdp->fullBit(c+289,(vlTOPp->data_flow_unit_data_valid));
        vcdp->fullBus(c+297,(vlTOPp->data_flow_unit_data_payload),32);
        vcdp->fullBit(c+305,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->fullBus(c+313,(vlTOPp->data_flow_mod_iq_payload_cha_i),16);
        vcdp->fullBus(c+321,(vlTOPp->data_flow_mod_iq_payload_cha_q),16);
        vcdp->fullBit(c+329,(vlTOPp->w_en));
        vcdp->fullBus(c+337,(vlTOPp->w_addr),11);
        vcdp->fullBus(c+345,(vlTOPp->w_data),32);
        vcdp->fullBus(c+353,(vlTOPp->select_1),3);
        vcdp->fullBit(c+361,(vlTOPp->clk));
        vcdp->fullBit(c+369,(vlTOPp->reset));
        vcdp->fullBit(c+377,(((0U != (IData)(vlTOPp->select_1))
                               ? 0U : (1U & vlTOPp->data_flow_unit_data_payload))));
        vcdp->fullBus(c+385,(((1U != (IData)(vlTOPp->select_1))
                               ? 0U : (3U & vlTOPp->data_flow_unit_data_payload))),2);
        vcdp->fullBus(c+393,(((2U != (IData)(vlTOPp->select_1))
                               ? 0U : (0xfU & vlTOPp->data_flow_unit_data_payload))),4);
        vcdp->fullBus(c+401,(((3U != (IData)(vlTOPp->select_1))
                               ? 0U : (0x3fU & vlTOPp->data_flow_unit_data_payload))),6);
        vcdp->fullBus(c+409,(((4U != (IData)(vlTOPp->select_1))
                               ? 0U : (0x7ffU & vlTOPp->data_flow_unit_data_payload))),11);
        vcdp->fullBit(c+417,(((0U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+425,(((0U != (IData)(vlTOPp->select_1))
                               ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->fullBit(c+433,(((1U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+441,(((1U != (IData)(vlTOPp->select_1))
                               ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->fullBit(c+449,(((2U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+457,(((2U != (IData)(vlTOPp->select_1))
                               ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->fullBit(c+465,(((3U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+473,(((3U != (IData)(vlTOPp->select_1))
                               ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->fullBit(c+481,(((4U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_unit_data_valid))));
        vcdp->fullBus(c+489,(((4U != (IData)(vlTOPp->select_1))
                               ? 0U : vlTOPp->data_flow_unit_data_payload)),32);
        vcdp->fullBit(c+497,(((4U & (IData)(vlTOPp->select_1))
                               ? (IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                               : ((2U & (IData)(vlTOPp->select_1))
                                   ? ((1U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                       : (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid))
                                   : ((1U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                       : (IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid))))));
        vcdp->fullBus(c+505,((0xffffU & ((4U & (IData)(vlTOPp->select_1))
                                          ? ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                              ? (vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
                                                 >> 0x10U)
                                              : 0U)
                                          : ((2U & (IData)(vlTOPp->select_1))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                                   ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0xc349U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                         >> 2U)))
                                                     ? 0xebc3U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                          >> 2U)))
                                                      ? 0x3cb6U
                                                      : 0x143cU)))
                                                   : 0U))
                                              : ((1U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                                   ? 
                                                  (vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                                   >> 0x10U)
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                                                   ? 
                                                  (((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                                     ? 0x7fff0000U
                                                     : 0x80010000U) 
                                                   >> 0x10U)
                                                   : 0U)))))),16);
        vcdp->fullBus(c+513,((0xffffU & ((4U & (IData)(vlTOPp->select_1))
                                          ? ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                              ? vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1
                                              : 0U)
                                          : ((2U & (IData)(vlTOPp->select_1))
                                              ? ((1U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                                   ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                    ? 0xc349U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                     ? 0xebc3U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                      ? 0x3cb6U
                                                      : 0x143cU)))
                                                   : 0U))
                                              : ((1U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                                   ? vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                                                   ? 
                                                  ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                                    ? 0x7fff0000U
                                                    : 0x80010000U)
                                                   : 0U)))))),16);
    }
}

void VModulatorRTL::traceFullThis__8(VModulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+521,((0U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+529,((1U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+537,((2U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+545,((3U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+553,((4U != (IData)(vlTOPp->select_1))));
        vcdp->fullBus(c+561,(0x80010000U),32);
        vcdp->fullBus(c+569,(0x7fff0000U),32);
        vcdp->fullBus(c+577,(0xa57ea57eU),32);
        vcdp->fullBus(c+585,(0xa57e5a82U),32);
        vcdp->fullBus(c+593,(0x5a82a57eU),32);
        vcdp->fullBus(c+601,(0x5a825a82U),32);
        vcdp->fullBus(c+609,(0xc349U),16);
        vcdp->fullBus(c+617,(0xebc3U),16);
        vcdp->fullBus(c+625,(0x3cb6U),16);
        vcdp->fullBus(c+633,(0x143cU),16);
        vcdp->fullBus(c+641,(0xbae1U),16);
        vcdp->fullBus(c+649,(0xcea0U),16);
        vcdp->fullBus(c+657,(0xf620U),16);
        vcdp->fullBus(c+665,(0xe260U),16);
        vcdp->fullBus(c+673,(0x451fU),16);
        vcdp->fullBus(c+681,(0x3160U),16);
    }
}
