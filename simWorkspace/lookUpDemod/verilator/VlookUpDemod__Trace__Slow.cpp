// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VlookUpDemod__Syms.h"


//======================

void VlookUpDemod::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VlookUpDemod::traceInit, &VlookUpDemod::traceFull, &VlookUpDemod::traceChg, this);
}
void VlookUpDemod::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VlookUpDemod* t = (VlookUpDemod*)userthis;
    VlookUpDemod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VlookUpDemod::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VlookUpDemod* t = (VlookUpDemod*)userthis;
    VlookUpDemod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VlookUpDemod::traceInitThis(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VlookUpDemod::traceFullThis(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VlookUpDemod::traceInitThis__1(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+585,"w_en", false,-1);
        vcdp->declBus(c+593,"w_addr", false,-1, 3,0);
        vcdp->declBus(c+601,"w_data", false,-1, 31,0);
        vcdp->declBus(c+609,"w_sel", false,-1, 1,0);
        vcdp->declBus(c+617,"iq_shift", false,-1, 1,0);
        vcdp->declBit(c+625,"data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+633,"data_flow_unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+641,"data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+649,"data_flow_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+657,"data_flow_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+665,"clk", false,-1);
        vcdp->declBit(c+673,"reset", false,-1);
        vcdp->declBit(c+585,"lookUpDemod w_en", false,-1);
        vcdp->declBus(c+593,"lookUpDemod w_addr", false,-1, 3,0);
        vcdp->declBus(c+601,"lookUpDemod w_data", false,-1, 31,0);
        vcdp->declBus(c+609,"lookUpDemod w_sel", false,-1, 1,0);
        vcdp->declBus(c+617,"lookUpDemod iq_shift", false,-1, 1,0);
        vcdp->declBit(c+625,"lookUpDemod data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+633,"lookUpDemod data_flow_unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+641,"lookUpDemod data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+649,"lookUpDemod data_flow_mod_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+657,"lookUpDemod data_flow_mod_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+665,"lookUpDemod clk", false,-1);
        vcdp->declBit(c+673,"lookUpDemod reset", false,-1);
        vcdp->declBus(c+17,"lookUpDemod demod_data_i", false,-1, 15,0);
        vcdp->declBus(c+25,"lookUpDemod demod_data_q", false,-1, 15,0);
        vcdp->declBit(c+553,"lookUpDemod demod_valid_iq", false,-1);
        vcdp->declBus(c+41,"lookUpDemod comp_mem_i_0", false,-1, 15,0);
        vcdp->declBus(c+49,"lookUpDemod comp_mem_i_1", false,-1, 15,0);
        vcdp->declBus(c+57,"lookUpDemod comp_mem_i_2", false,-1, 15,0);
        vcdp->declBus(c+65,"lookUpDemod comp_mem_i_3", false,-1, 15,0);
        vcdp->declBus(c+73,"lookUpDemod comp_mem_i_4", false,-1, 15,0);
        vcdp->declBus(c+81,"lookUpDemod comp_mem_i_5", false,-1, 15,0);
        vcdp->declBus(c+89,"lookUpDemod comp_mem_i_6", false,-1, 15,0);
        vcdp->declBus(c+97,"lookUpDemod comp_mem_i_7", false,-1, 15,0);
        vcdp->declBus(c+105,"lookUpDemod comp_mem_i_8", false,-1, 15,0);
        vcdp->declBus(c+113,"lookUpDemod comp_mem_i_9", false,-1, 15,0);
        vcdp->declBus(c+121,"lookUpDemod comp_mem_i_10", false,-1, 15,0);
        vcdp->declBus(c+129,"lookUpDemod comp_mem_i_11", false,-1, 15,0);
        vcdp->declBus(c+137,"lookUpDemod comp_mem_i_12", false,-1, 15,0);
        vcdp->declBus(c+145,"lookUpDemod comp_mem_i_13", false,-1, 15,0);
        vcdp->declBus(c+153,"lookUpDemod comp_mem_i_14", false,-1, 15,0);
        vcdp->declBus(c+161,"lookUpDemod comp_mem_q_0", false,-1, 15,0);
        vcdp->declBus(c+169,"lookUpDemod comp_mem_q_1", false,-1, 15,0);
        vcdp->declBus(c+177,"lookUpDemod comp_mem_q_2", false,-1, 15,0);
        vcdp->declBus(c+185,"lookUpDemod comp_mem_q_3", false,-1, 15,0);
        vcdp->declBus(c+193,"lookUpDemod comp_mem_q_4", false,-1, 15,0);
        vcdp->declBus(c+201,"lookUpDemod comp_mem_q_5", false,-1, 15,0);
        vcdp->declBus(c+209,"lookUpDemod comp_mem_q_6", false,-1, 15,0);
        vcdp->declBus(c+217,"lookUpDemod comp_mem_q_7", false,-1, 15,0);
        vcdp->declBus(c+225,"lookUpDemod comp_mem_q_8", false,-1, 15,0);
        vcdp->declBus(c+233,"lookUpDemod comp_mem_q_9", false,-1, 15,0);
        vcdp->declBus(c+241,"lookUpDemod comp_mem_q_10", false,-1, 15,0);
        vcdp->declBus(c+249,"lookUpDemod comp_mem_q_11", false,-1, 15,0);
        vcdp->declBus(c+257,"lookUpDemod comp_mem_q_12", false,-1, 15,0);
        vcdp->declBus(c+265,"lookUpDemod comp_mem_q_13", false,-1, 15,0);
        vcdp->declBus(c+273,"lookUpDemod comp_mem_q_14", false,-1, 15,0);
        vcdp->declBus(c+281,"lookUpDemod code_mem_i_0", false,-1, 3,0);
        vcdp->declBus(c+289,"lookUpDemod code_mem_i_1", false,-1, 3,0);
        vcdp->declBus(c+297,"lookUpDemod code_mem_i_2", false,-1, 3,0);
        vcdp->declBus(c+305,"lookUpDemod code_mem_i_3", false,-1, 3,0);
        vcdp->declBus(c+313,"lookUpDemod code_mem_i_4", false,-1, 3,0);
        vcdp->declBus(c+321,"lookUpDemod code_mem_i_5", false,-1, 3,0);
        vcdp->declBus(c+329,"lookUpDemod code_mem_i_6", false,-1, 3,0);
        vcdp->declBus(c+337,"lookUpDemod code_mem_i_7", false,-1, 3,0);
        vcdp->declBus(c+345,"lookUpDemod code_mem_i_8", false,-1, 3,0);
        vcdp->declBus(c+353,"lookUpDemod code_mem_i_9", false,-1, 3,0);
        vcdp->declBus(c+361,"lookUpDemod code_mem_i_10", false,-1, 3,0);
        vcdp->declBus(c+369,"lookUpDemod code_mem_i_11", false,-1, 3,0);
        vcdp->declBus(c+377,"lookUpDemod code_mem_i_12", false,-1, 3,0);
        vcdp->declBus(c+385,"lookUpDemod code_mem_i_13", false,-1, 3,0);
        vcdp->declBus(c+393,"lookUpDemod code_mem_i_14", false,-1, 3,0);
        vcdp->declBus(c+401,"lookUpDemod code_mem_i_15", false,-1, 3,0);
        vcdp->declBus(c+409,"lookUpDemod code_mem_q_0", false,-1, 3,0);
        vcdp->declBus(c+417,"lookUpDemod code_mem_q_1", false,-1, 3,0);
        vcdp->declBus(c+425,"lookUpDemod code_mem_q_2", false,-1, 3,0);
        vcdp->declBus(c+433,"lookUpDemod code_mem_q_3", false,-1, 3,0);
        vcdp->declBus(c+441,"lookUpDemod code_mem_q_4", false,-1, 3,0);
        vcdp->declBus(c+449,"lookUpDemod code_mem_q_5", false,-1, 3,0);
        vcdp->declBus(c+457,"lookUpDemod code_mem_q_6", false,-1, 3,0);
        vcdp->declBus(c+465,"lookUpDemod code_mem_q_7", false,-1, 3,0);
        vcdp->declBus(c+473,"lookUpDemod code_mem_q_8", false,-1, 3,0);
        vcdp->declBus(c+481,"lookUpDemod code_mem_q_9", false,-1, 3,0);
        vcdp->declBus(c+489,"lookUpDemod code_mem_q_10", false,-1, 3,0);
        vcdp->declBus(c+497,"lookUpDemod code_mem_q_11", false,-1, 3,0);
        vcdp->declBus(c+505,"lookUpDemod code_mem_q_12", false,-1, 3,0);
        vcdp->declBus(c+513,"lookUpDemod code_mem_q_13", false,-1, 3,0);
        vcdp->declBus(c+521,"lookUpDemod code_mem_q_14", false,-1, 3,0);
        vcdp->declBus(c+529,"lookUpDemod code_mem_q_15", false,-1, 3,0);
        vcdp->declBus(c+1,"lookUpDemod comp_cmp_i", false,-1, 14,0);
        vcdp->declBus(c+9,"lookUpDemod comp_cmp_q", false,-1, 14,0);
        vcdp->declBus(c+561,"lookUpDemod compTable_i", false,-1, 14,0);
        vcdp->declBus(c+569,"lookUpDemod compTable_q", false,-1, 14,0);
        vcdp->declBit(c+577,"lookUpDemod demod_valid", false,-1);
        vcdp->declBus(c+537,"lookUpDemod unit_data_i", false,-1, 3,0);
        vcdp->declBus(c+545,"lookUpDemod unit_data_q", false,-1, 3,0);
        vcdp->declBit(c+33,"lookUpDemod unit_valid", false,-1);
    }
}

void VlookUpDemod::traceFullThis__1(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->lookUpDemod__DOT__comp_cmp_i),15);
        vcdp->fullBus(c+9,(vlTOPp->lookUpDemod__DOT__comp_cmp_q),15);
        vcdp->fullBus(c+17,(vlTOPp->lookUpDemod__DOT__demod_data_i),16);
        vcdp->fullBus(c+25,(vlTOPp->lookUpDemod__DOT__demod_data_q),16);
        vcdp->fullBit(c+33,(vlTOPp->lookUpDemod__DOT__unit_valid));
        vcdp->fullBus(c+41,(vlTOPp->lookUpDemod__DOT__comp_mem_i_0),16);
        vcdp->fullBus(c+49,(vlTOPp->lookUpDemod__DOT__comp_mem_i_1),16);
        vcdp->fullBus(c+57,(vlTOPp->lookUpDemod__DOT__comp_mem_i_2),16);
        vcdp->fullBus(c+65,(vlTOPp->lookUpDemod__DOT__comp_mem_i_3),16);
        vcdp->fullBus(c+73,(vlTOPp->lookUpDemod__DOT__comp_mem_i_4),16);
        vcdp->fullBus(c+81,(vlTOPp->lookUpDemod__DOT__comp_mem_i_5),16);
        vcdp->fullBus(c+89,(vlTOPp->lookUpDemod__DOT__comp_mem_i_6),16);
        vcdp->fullBus(c+97,(vlTOPp->lookUpDemod__DOT__comp_mem_i_7),16);
        vcdp->fullBus(c+105,(vlTOPp->lookUpDemod__DOT__comp_mem_i_8),16);
        vcdp->fullBus(c+113,(vlTOPp->lookUpDemod__DOT__comp_mem_i_9),16);
        vcdp->fullBus(c+121,(vlTOPp->lookUpDemod__DOT__comp_mem_i_10),16);
        vcdp->fullBus(c+129,(vlTOPp->lookUpDemod__DOT__comp_mem_i_11),16);
        vcdp->fullBus(c+137,(vlTOPp->lookUpDemod__DOT__comp_mem_i_12),16);
        vcdp->fullBus(c+145,(vlTOPp->lookUpDemod__DOT__comp_mem_i_13),16);
        vcdp->fullBus(c+153,(vlTOPp->lookUpDemod__DOT__comp_mem_i_14),16);
        vcdp->fullBus(c+161,(vlTOPp->lookUpDemod__DOT__comp_mem_q_0),16);
        vcdp->fullBus(c+169,(vlTOPp->lookUpDemod__DOT__comp_mem_q_1),16);
        vcdp->fullBus(c+177,(vlTOPp->lookUpDemod__DOT__comp_mem_q_2),16);
        vcdp->fullBus(c+185,(vlTOPp->lookUpDemod__DOT__comp_mem_q_3),16);
        vcdp->fullBus(c+193,(vlTOPp->lookUpDemod__DOT__comp_mem_q_4),16);
        vcdp->fullBus(c+201,(vlTOPp->lookUpDemod__DOT__comp_mem_q_5),16);
        vcdp->fullBus(c+209,(vlTOPp->lookUpDemod__DOT__comp_mem_q_6),16);
        vcdp->fullBus(c+217,(vlTOPp->lookUpDemod__DOT__comp_mem_q_7),16);
        vcdp->fullBus(c+225,(vlTOPp->lookUpDemod__DOT__comp_mem_q_8),16);
        vcdp->fullBus(c+233,(vlTOPp->lookUpDemod__DOT__comp_mem_q_9),16);
        vcdp->fullBus(c+241,(vlTOPp->lookUpDemod__DOT__comp_mem_q_10),16);
        vcdp->fullBus(c+249,(vlTOPp->lookUpDemod__DOT__comp_mem_q_11),16);
        vcdp->fullBus(c+257,(vlTOPp->lookUpDemod__DOT__comp_mem_q_12),16);
        vcdp->fullBus(c+265,(vlTOPp->lookUpDemod__DOT__comp_mem_q_13),16);
        vcdp->fullBus(c+273,(vlTOPp->lookUpDemod__DOT__comp_mem_q_14),16);
        vcdp->fullBus(c+281,(vlTOPp->lookUpDemod__DOT__code_mem_i_0),4);
        vcdp->fullBus(c+289,(vlTOPp->lookUpDemod__DOT__code_mem_i_1),4);
        vcdp->fullBus(c+297,(vlTOPp->lookUpDemod__DOT__code_mem_i_2),4);
        vcdp->fullBus(c+305,(vlTOPp->lookUpDemod__DOT__code_mem_i_3),4);
        vcdp->fullBus(c+313,(vlTOPp->lookUpDemod__DOT__code_mem_i_4),4);
        vcdp->fullBus(c+321,(vlTOPp->lookUpDemod__DOT__code_mem_i_5),4);
        vcdp->fullBus(c+329,(vlTOPp->lookUpDemod__DOT__code_mem_i_6),4);
        vcdp->fullBus(c+337,(vlTOPp->lookUpDemod__DOT__code_mem_i_7),4);
        vcdp->fullBus(c+345,(vlTOPp->lookUpDemod__DOT__code_mem_i_8),4);
        vcdp->fullBus(c+353,(vlTOPp->lookUpDemod__DOT__code_mem_i_9),4);
        vcdp->fullBus(c+361,(vlTOPp->lookUpDemod__DOT__code_mem_i_10),4);
        vcdp->fullBus(c+369,(vlTOPp->lookUpDemod__DOT__code_mem_i_11),4);
        vcdp->fullBus(c+377,(vlTOPp->lookUpDemod__DOT__code_mem_i_12),4);
        vcdp->fullBus(c+385,(vlTOPp->lookUpDemod__DOT__code_mem_i_13),4);
        vcdp->fullBus(c+393,(vlTOPp->lookUpDemod__DOT__code_mem_i_14),4);
        vcdp->fullBus(c+401,(vlTOPp->lookUpDemod__DOT__code_mem_i_15),4);
        vcdp->fullBus(c+409,(vlTOPp->lookUpDemod__DOT__code_mem_q_0),4);
        vcdp->fullBus(c+417,(vlTOPp->lookUpDemod__DOT__code_mem_q_1),4);
        vcdp->fullBus(c+425,(vlTOPp->lookUpDemod__DOT__code_mem_q_2),4);
        vcdp->fullBus(c+433,(vlTOPp->lookUpDemod__DOT__code_mem_q_3),4);
        vcdp->fullBus(c+441,(vlTOPp->lookUpDemod__DOT__code_mem_q_4),4);
        vcdp->fullBus(c+449,(vlTOPp->lookUpDemod__DOT__code_mem_q_5),4);
        vcdp->fullBus(c+457,(vlTOPp->lookUpDemod__DOT__code_mem_q_6),4);
        vcdp->fullBus(c+465,(vlTOPp->lookUpDemod__DOT__code_mem_q_7),4);
        vcdp->fullBus(c+473,(vlTOPp->lookUpDemod__DOT__code_mem_q_8),4);
        vcdp->fullBus(c+481,(vlTOPp->lookUpDemod__DOT__code_mem_q_9),4);
        vcdp->fullBus(c+489,(vlTOPp->lookUpDemod__DOT__code_mem_q_10),4);
        vcdp->fullBus(c+497,(vlTOPp->lookUpDemod__DOT__code_mem_q_11),4);
        vcdp->fullBus(c+505,(vlTOPp->lookUpDemod__DOT__code_mem_q_12),4);
        vcdp->fullBus(c+513,(vlTOPp->lookUpDemod__DOT__code_mem_q_13),4);
        vcdp->fullBus(c+521,(vlTOPp->lookUpDemod__DOT__code_mem_q_14),4);
        vcdp->fullBus(c+529,(vlTOPp->lookUpDemod__DOT__code_mem_q_15),4);
        vcdp->fullBus(c+537,(vlTOPp->lookUpDemod__DOT__unit_data_i),4);
        vcdp->fullBus(c+545,(vlTOPp->lookUpDemod__DOT__unit_data_q),4);
        vcdp->fullBit(c+553,(vlTOPp->lookUpDemod__DOT__demod_valid_iq));
        vcdp->fullBus(c+561,(vlTOPp->lookUpDemod__DOT__compTable_i),15);
        vcdp->fullBus(c+569,(vlTOPp->lookUpDemod__DOT__compTable_q),15);
        vcdp->fullBit(c+577,(vlTOPp->lookUpDemod__DOT__demod_valid));
        vcdp->fullBit(c+585,(vlTOPp->w_en));
        vcdp->fullBus(c+593,(vlTOPp->w_addr),4);
        vcdp->fullBus(c+601,(vlTOPp->w_data),32);
        vcdp->fullBus(c+609,(vlTOPp->w_sel),2);
        vcdp->fullBus(c+617,(vlTOPp->iq_shift),2);
        vcdp->fullBit(c+625,(vlTOPp->data_flow_unit_data_valid));
        vcdp->fullBus(c+633,(vlTOPp->data_flow_unit_data_payload),8);
        vcdp->fullBit(c+641,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->fullBus(c+649,(vlTOPp->data_flow_mod_iq_payload_cha_i),16);
        vcdp->fullBus(c+657,(vlTOPp->data_flow_mod_iq_payload_cha_q),16);
        vcdp->fullBit(c+665,(vlTOPp->clk));
        vcdp->fullBit(c+673,(vlTOPp->reset));
    }
}
