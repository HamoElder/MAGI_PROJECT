// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDemodulatorRTL__Syms.h"


//======================

void VDemodulatorRTL::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VDemodulatorRTL::traceInit, &VDemodulatorRTL::traceFull, &VDemodulatorRTL::traceChg, this);
}
void VDemodulatorRTL::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDemodulatorRTL* t = (VDemodulatorRTL*)userthis;
    VDemodulatorRTL__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDemodulatorRTL::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDemodulatorRTL* t = (VDemodulatorRTL*)userthis;
    VDemodulatorRTL__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VDemodulatorRTL::traceInitThis(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDemodulatorRTL::traceFullThis(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDemodulatorRTL::traceInitThis__1(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+289,"select_1", false,-1, 1,0);
        vcdp->declBit(c+297,"data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+305,"data_flow_unit_data_payload", false,-1, 11,0);
        vcdp->declBit(c+313,"data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+321,"data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+329,"data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+337,"clk", false,-1);
        vcdp->declBit(c+345,"reset", false,-1);
        vcdp->declBus(c+289,"DemodulatorRTL select_1", false,-1, 1,0);
        vcdp->declBit(c+297,"DemodulatorRTL data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+305,"DemodulatorRTL data_flow_unit_data_payload", false,-1, 11,0);
        vcdp->declBit(c+313,"DemodulatorRTL data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+321,"DemodulatorRTL data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+329,"DemodulatorRTL data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+337,"DemodulatorRTL clk", false,-1);
        vcdp->declBit(c+345,"DemodulatorRTL reset", false,-1);
        vcdp->declBit(c+353,"DemodulatorRTL flowDeMux_1_outputs_0_valid", false,-1);
        vcdp->declBus(c+361,"DemodulatorRTL flowDeMux_1_outputs_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+369,"DemodulatorRTL flowDeMux_1_outputs_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1,"DemodulatorRTL flowDeMux_1_outputs_1_valid", false,-1);
        vcdp->declBus(c+377,"DemodulatorRTL flowDeMux_1_outputs_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+385,"DemodulatorRTL flowDeMux_1_outputs_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+9,"DemodulatorRTL flowDeMux_1_outputs_2_valid", false,-1);
        vcdp->declBus(c+393,"DemodulatorRTL flowDeMux_1_outputs_2_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+401,"DemodulatorRTL flowDeMux_1_outputs_2_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+33,"DemodulatorRTL demod_unit_data_valid", false,-1);
        vcdp->declBus(c+73,"DemodulatorRTL demod_unit_data_payload", false,-1, 11,0);
        vcdp->declBit(c+41,"DemodulatorRTL demod_1_unit_data_valid", false,-1);
        vcdp->declBus(c+81,"DemodulatorRTL demod_1_unit_data_payload", false,-1, 11,0);
        vcdp->declBit(c+49,"DemodulatorRTL demod_2_unit_data_valid", false,-1);
        vcdp->declBus(c+89,"DemodulatorRTL demod_2_unit_data_payload", false,-1, 11,0);
        vcdp->declBit(c+409,"DemodulatorRTL flowMux_1_output_valid", false,-1);
        vcdp->declBus(c+417,"DemodulatorRTL flowMux_1_output_payload", false,-1, 11,0);
        vcdp->declBit(c+313,"DemodulatorRTL flowDeMux_1 input_valid", false,-1);
        vcdp->declBus(c+321,"DemodulatorRTL flowDeMux_1 input_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+329,"DemodulatorRTL flowDeMux_1 input_payload_cha_q", false,-1, 11,0);
        vcdp->declBus(c+289,"DemodulatorRTL flowDeMux_1 select_1", false,-1, 1,0);
        vcdp->declBit(c+353,"DemodulatorRTL flowDeMux_1 outputs_0_valid", false,-1);
        vcdp->declBus(c+361,"DemodulatorRTL flowDeMux_1 outputs_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+369,"DemodulatorRTL flowDeMux_1 outputs_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+1,"DemodulatorRTL flowDeMux_1 outputs_1_valid", false,-1);
        vcdp->declBus(c+377,"DemodulatorRTL flowDeMux_1 outputs_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+385,"DemodulatorRTL flowDeMux_1 outputs_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+9,"DemodulatorRTL flowDeMux_1 outputs_2_valid", false,-1);
        vcdp->declBus(c+393,"DemodulatorRTL flowDeMux_1 outputs_2_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+401,"DemodulatorRTL flowDeMux_1 outputs_2_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+425,"DemodulatorRTL flowDeMux_1 when_FlowDeMux_l15", false,-1);
        vcdp->declBit(c+433,"DemodulatorRTL flowDeMux_1 when_FlowDeMux_l15_1", false,-1);
        vcdp->declBit(c+441,"DemodulatorRTL flowDeMux_1 when_FlowDeMux_l15_2", false,-1);
        vcdp->declBit(c+33,"DemodulatorRTL demod unit_data_valid", false,-1);
        vcdp->declBus(c+73,"DemodulatorRTL demod unit_data_payload", false,-1, 11,0);
        vcdp->declBit(c+353,"DemodulatorRTL demod mod_iq_valid", false,-1);
        vcdp->declBus(c+361,"DemodulatorRTL demod mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+369,"DemodulatorRTL demod mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+337,"DemodulatorRTL demod clk", false,-1);
        vcdp->declBit(c+345,"DemodulatorRTL demod reset", false,-1);
        vcdp->declBus(c+145,"DemodulatorRTL demod demod_data_i", false,-1, 11,0);
        vcdp->declBit(c+153,"DemodulatorRTL demod demod_valid_i", false,-1);
        vcdp->declBus(c+161,"DemodulatorRTL demod comp_cmp_i", false,-1, 0,0);
        vcdp->declBus(c+169,"DemodulatorRTL demod compTable_i", false,-1, 0,0);
        vcdp->declBit(c+97,"DemodulatorRTL demod demod_valid", false,-1);
        vcdp->declBus(c+105,"DemodulatorRTL demod unit_data_i", false,-1, 0,0);
        vcdp->declBit(c+33,"DemodulatorRTL demod unit_valid", false,-1);
        vcdp->declBit(c+41,"DemodulatorRTL demod_1 unit_data_valid", false,-1);
        vcdp->declBus(c+81,"DemodulatorRTL demod_1 unit_data_payload", false,-1, 11,0);
        vcdp->declBit(c+1,"DemodulatorRTL demod_1 mod_iq_valid", false,-1);
        vcdp->declBus(c+377,"DemodulatorRTL demod_1 mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+385,"DemodulatorRTL demod_1 mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+337,"DemodulatorRTL demod_1 clk", false,-1);
        vcdp->declBit(c+345,"DemodulatorRTL demod_1 reset", false,-1);
        vcdp->declBus(c+177,"DemodulatorRTL demod_1 demod_data_i", false,-1, 11,0);
        vcdp->declBit(c+185,"DemodulatorRTL demod_1 demod_valid_i", false,-1);
        vcdp->declBus(c+193,"DemodulatorRTL demod_1 demod_data_q", false,-1, 11,0);
        vcdp->declBit(c+201,"DemodulatorRTL demod_1 demod_valid_q", false,-1);
        vcdp->declBus(c+209,"DemodulatorRTL demod_1 comp_cmp_i", false,-1, 0,0);
        vcdp->declBus(c+217,"DemodulatorRTL demod_1 comp_cmp_q", false,-1, 0,0);
        vcdp->declBus(c+225,"DemodulatorRTL demod_1 compTable_i", false,-1, 0,0);
        vcdp->declBus(c+233,"DemodulatorRTL demod_1 codeTable_q", false,-1, 0,0);
        vcdp->declBit(c+241,"DemodulatorRTL demod_1 demod_valid", false,-1);
        vcdp->declBus(c+113,"DemodulatorRTL demod_1 unit_data_i", false,-1, 0,0);
        vcdp->declBus(c+121,"DemodulatorRTL demod_1 unit_data_q", false,-1, 0,0);
        vcdp->declBit(c+41,"DemodulatorRTL demod_1 unit_valid", false,-1);
        vcdp->declBit(c+49,"DemodulatorRTL demod_2 unit_data_valid", false,-1);
        vcdp->declBus(c+89,"DemodulatorRTL demod_2 unit_data_payload", false,-1, 11,0);
        vcdp->declBit(c+9,"DemodulatorRTL demod_2 mod_iq_valid", false,-1);
        vcdp->declBus(c+393,"DemodulatorRTL demod_2 mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+401,"DemodulatorRTL demod_2 mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+337,"DemodulatorRTL demod_2 clk", false,-1);
        vcdp->declBit(c+345,"DemodulatorRTL demod_2 reset", false,-1);
        vcdp->declBus(c+57,"DemodulatorRTL demod_2 demod_data_i", false,-1, 11,0);
        vcdp->declBit(c+249,"DemodulatorRTL demod_2 demod_valid_i", false,-1);
        vcdp->declBus(c+65,"DemodulatorRTL demod_2 demod_data_q", false,-1, 11,0);
        vcdp->declBit(c+257,"DemodulatorRTL demod_2 demod_valid_q", false,-1);
        vcdp->declBus(c+17,"DemodulatorRTL demod_2 comp_cmp_i", false,-1, 2,0);
        vcdp->declBus(c+25,"DemodulatorRTL demod_2 comp_cmp_q", false,-1, 2,0);
        vcdp->declBus(c+265,"DemodulatorRTL demod_2 compTable_i", false,-1, 2,0);
        vcdp->declBus(c+273,"DemodulatorRTL demod_2 codeTable_q", false,-1, 2,0);
        vcdp->declBit(c+281,"DemodulatorRTL demod_2 demod_valid", false,-1);
        vcdp->declBus(c+129,"DemodulatorRTL demod_2 unit_data_i", false,-1, 1,0);
        vcdp->declBus(c+137,"DemodulatorRTL demod_2 unit_data_q", false,-1, 1,0);
        vcdp->declBit(c+49,"DemodulatorRTL demod_2 unit_valid", false,-1);
        vcdp->declBit(c+33,"DemodulatorRTL flowMux_1 inputs_0_valid", false,-1);
        vcdp->declBus(c+73,"DemodulatorRTL flowMux_1 inputs_0_payload", false,-1, 11,0);
        vcdp->declBit(c+41,"DemodulatorRTL flowMux_1 inputs_1_valid", false,-1);
        vcdp->declBus(c+81,"DemodulatorRTL flowMux_1 inputs_1_payload", false,-1, 11,0);
        vcdp->declBit(c+49,"DemodulatorRTL flowMux_1 inputs_2_valid", false,-1);
        vcdp->declBus(c+89,"DemodulatorRTL flowMux_1 inputs_2_payload", false,-1, 11,0);
        vcdp->declBus(c+289,"DemodulatorRTL flowMux_1 select_1", false,-1, 1,0);
        vcdp->declBit(c+409,"DemodulatorRTL flowMux_1 output_valid", false,-1);
        vcdp->declBus(c+417,"DemodulatorRTL flowMux_1 output_payload", false,-1, 11,0);
    }
}

void VDemodulatorRTL::traceFullThis__1(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_1_valid));
        vcdp->fullBit(c+9,(vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_2_valid));
        vcdp->fullBus(c+17,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i),3);
        vcdp->fullBus(c+25,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q),3);
        vcdp->fullBit(c+33,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_valid));
        vcdp->fullBit(c+41,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_valid));
        vcdp->fullBit(c+49,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_valid));
        vcdp->fullBus(c+57,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_i),12);
        vcdp->fullBus(c+65,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_q),12);
        vcdp->fullBus(c+73,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_data_i),12);
        vcdp->fullBus(c+81,((((IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_i) 
                              << 1U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_q))),12);
        vcdp->fullBus(c+89,((((IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_i) 
                              << 2U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_q))),12);
        vcdp->fullBit(c+97,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid));
        vcdp->fullBit(c+105,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_data_i));
        vcdp->fullBit(c+113,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_i));
        vcdp->fullBit(c+121,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_q));
        vcdp->fullBus(c+129,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_i),2);
        vcdp->fullBus(c+137,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_q),2);
        vcdp->fullBus(c+145,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_data_i),12);
        vcdp->fullBit(c+153,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid_i));
        vcdp->fullBit(c+161,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_data_i))));
        vcdp->fullBit(c+169,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__compTable_i));
        vcdp->fullBus(c+177,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_i),12);
        vcdp->fullBit(c+185,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid_i));
        vcdp->fullBus(c+193,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_q),12);
        vcdp->fullBit(c+201,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid_q));
        vcdp->fullBit(c+209,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_i))));
        vcdp->fullBit(c+217,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_q))));
        vcdp->fullBit(c+225,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__compTable_i));
        vcdp->fullBit(c+233,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__codeTable_q));
        vcdp->fullBit(c+241,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid));
        vcdp->fullBit(c+249,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid_i));
        vcdp->fullBit(c+257,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid_q));
        vcdp->fullBus(c+265,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__compTable_i),3);
        vcdp->fullBus(c+273,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__codeTable_q),3);
        vcdp->fullBit(c+281,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid));
        vcdp->fullBus(c+289,(vlTOPp->select_1),2);
        vcdp->fullBit(c+297,(vlTOPp->data_flow_unit_data_valid));
        vcdp->fullBus(c+305,(vlTOPp->data_flow_unit_data_payload),12);
        vcdp->fullBit(c+313,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->fullBus(c+321,(vlTOPp->data_flow_mod_iq_payload_cha_i),12);
        vcdp->fullBus(c+329,(vlTOPp->data_flow_mod_iq_payload_cha_q),12);
        vcdp->fullBit(c+337,(vlTOPp->clk));
        vcdp->fullBit(c+345,(vlTOPp->reset));
        vcdp->fullBit(c+353,(((0U == (IData)(vlTOPp->select_1)) 
                              & (IData)(vlTOPp->data_flow_mod_iq_valid))));
        vcdp->fullBus(c+361,(((0U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i))),12);
        vcdp->fullBus(c+369,(((0U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q))),12);
        vcdp->fullBus(c+377,(((1U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i))),12);
        vcdp->fullBus(c+385,(((1U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q))),12);
        vcdp->fullBus(c+393,(((2U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i))),12);
        vcdp->fullBus(c+401,(((2U != (IData)(vlTOPp->select_1))
                               ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q))),12);
        vcdp->fullBit(c+409,(((0U == (IData)(vlTOPp->select_1))
                               ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_valid)
                               : ((1U == (IData)(vlTOPp->select_1))
                                   ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_valid)
                                   : (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_valid)))));
        vcdp->fullBus(c+417,(((0U == (IData)(vlTOPp->select_1))
                               ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_data_i)
                               : ((1U == (IData)(vlTOPp->select_1))
                                   ? (((IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_i) 
                                       << 1U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_q))
                                   : (((IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_i) 
                                       << 2U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_q))))),12);
        vcdp->fullBit(c+425,((0U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+433,((1U != (IData)(vlTOPp->select_1))));
        vcdp->fullBit(c+441,((2U != (IData)(vlTOPp->select_1))));
    }
}
