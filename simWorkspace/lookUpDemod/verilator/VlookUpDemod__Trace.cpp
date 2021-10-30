// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VlookUpDemod__Syms.h"


//======================

void VlookUpDemod::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VlookUpDemod* t = (VlookUpDemod*)userthis;
    VlookUpDemod__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VlookUpDemod::traceChgThis(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VlookUpDemod::traceChgThis__2(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->lookUpDemod__DOT__comp_cmp_i),15);
        vcdp->chgBus(c+9,(vlTOPp->lookUpDemod__DOT__comp_cmp_q),15);
    }
}

void VlookUpDemod::traceChgThis__3(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->lookUpDemod__DOT__demod_data_i),16);
        vcdp->chgBus(c+25,(vlTOPp->lookUpDemod__DOT__demod_data_q),16);
        vcdp->chgBit(c+33,(vlTOPp->lookUpDemod__DOT__unit_valid));
    }
}

void VlookUpDemod::traceChgThis__4(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+41,(vlTOPp->lookUpDemod__DOT__comp_mem_i_0),16);
        vcdp->chgBus(c+49,(vlTOPp->lookUpDemod__DOT__comp_mem_i_1),16);
        vcdp->chgBus(c+57,(vlTOPp->lookUpDemod__DOT__comp_mem_i_2),16);
        vcdp->chgBus(c+65,(vlTOPp->lookUpDemod__DOT__comp_mem_i_3),16);
        vcdp->chgBus(c+73,(vlTOPp->lookUpDemod__DOT__comp_mem_i_4),16);
        vcdp->chgBus(c+81,(vlTOPp->lookUpDemod__DOT__comp_mem_i_5),16);
        vcdp->chgBus(c+89,(vlTOPp->lookUpDemod__DOT__comp_mem_i_6),16);
        vcdp->chgBus(c+97,(vlTOPp->lookUpDemod__DOT__comp_mem_i_7),16);
        vcdp->chgBus(c+105,(vlTOPp->lookUpDemod__DOT__comp_mem_i_8),16);
        vcdp->chgBus(c+113,(vlTOPp->lookUpDemod__DOT__comp_mem_i_9),16);
        vcdp->chgBus(c+121,(vlTOPp->lookUpDemod__DOT__comp_mem_i_10),16);
        vcdp->chgBus(c+129,(vlTOPp->lookUpDemod__DOT__comp_mem_i_11),16);
        vcdp->chgBus(c+137,(vlTOPp->lookUpDemod__DOT__comp_mem_i_12),16);
        vcdp->chgBus(c+145,(vlTOPp->lookUpDemod__DOT__comp_mem_i_13),16);
        vcdp->chgBus(c+153,(vlTOPp->lookUpDemod__DOT__comp_mem_i_14),16);
        vcdp->chgBus(c+161,(vlTOPp->lookUpDemod__DOT__comp_mem_q_0),16);
        vcdp->chgBus(c+169,(vlTOPp->lookUpDemod__DOT__comp_mem_q_1),16);
        vcdp->chgBus(c+177,(vlTOPp->lookUpDemod__DOT__comp_mem_q_2),16);
        vcdp->chgBus(c+185,(vlTOPp->lookUpDemod__DOT__comp_mem_q_3),16);
        vcdp->chgBus(c+193,(vlTOPp->lookUpDemod__DOT__comp_mem_q_4),16);
        vcdp->chgBus(c+201,(vlTOPp->lookUpDemod__DOT__comp_mem_q_5),16);
        vcdp->chgBus(c+209,(vlTOPp->lookUpDemod__DOT__comp_mem_q_6),16);
        vcdp->chgBus(c+217,(vlTOPp->lookUpDemod__DOT__comp_mem_q_7),16);
        vcdp->chgBus(c+225,(vlTOPp->lookUpDemod__DOT__comp_mem_q_8),16);
        vcdp->chgBus(c+233,(vlTOPp->lookUpDemod__DOT__comp_mem_q_9),16);
        vcdp->chgBus(c+241,(vlTOPp->lookUpDemod__DOT__comp_mem_q_10),16);
        vcdp->chgBus(c+249,(vlTOPp->lookUpDemod__DOT__comp_mem_q_11),16);
        vcdp->chgBus(c+257,(vlTOPp->lookUpDemod__DOT__comp_mem_q_12),16);
        vcdp->chgBus(c+265,(vlTOPp->lookUpDemod__DOT__comp_mem_q_13),16);
        vcdp->chgBus(c+273,(vlTOPp->lookUpDemod__DOT__comp_mem_q_14),16);
        vcdp->chgBus(c+281,(vlTOPp->lookUpDemod__DOT__code_mem_i_0),4);
        vcdp->chgBus(c+289,(vlTOPp->lookUpDemod__DOT__code_mem_i_1),4);
        vcdp->chgBus(c+297,(vlTOPp->lookUpDemod__DOT__code_mem_i_2),4);
        vcdp->chgBus(c+305,(vlTOPp->lookUpDemod__DOT__code_mem_i_3),4);
        vcdp->chgBus(c+313,(vlTOPp->lookUpDemod__DOT__code_mem_i_4),4);
        vcdp->chgBus(c+321,(vlTOPp->lookUpDemod__DOT__code_mem_i_5),4);
        vcdp->chgBus(c+329,(vlTOPp->lookUpDemod__DOT__code_mem_i_6),4);
        vcdp->chgBus(c+337,(vlTOPp->lookUpDemod__DOT__code_mem_i_7),4);
        vcdp->chgBus(c+345,(vlTOPp->lookUpDemod__DOT__code_mem_i_8),4);
        vcdp->chgBus(c+353,(vlTOPp->lookUpDemod__DOT__code_mem_i_9),4);
        vcdp->chgBus(c+361,(vlTOPp->lookUpDemod__DOT__code_mem_i_10),4);
        vcdp->chgBus(c+369,(vlTOPp->lookUpDemod__DOT__code_mem_i_11),4);
        vcdp->chgBus(c+377,(vlTOPp->lookUpDemod__DOT__code_mem_i_12),4);
        vcdp->chgBus(c+385,(vlTOPp->lookUpDemod__DOT__code_mem_i_13),4);
        vcdp->chgBus(c+393,(vlTOPp->lookUpDemod__DOT__code_mem_i_14),4);
        vcdp->chgBus(c+401,(vlTOPp->lookUpDemod__DOT__code_mem_i_15),4);
        vcdp->chgBus(c+409,(vlTOPp->lookUpDemod__DOT__code_mem_q_0),4);
        vcdp->chgBus(c+417,(vlTOPp->lookUpDemod__DOT__code_mem_q_1),4);
        vcdp->chgBus(c+425,(vlTOPp->lookUpDemod__DOT__code_mem_q_2),4);
        vcdp->chgBus(c+433,(vlTOPp->lookUpDemod__DOT__code_mem_q_3),4);
        vcdp->chgBus(c+441,(vlTOPp->lookUpDemod__DOT__code_mem_q_4),4);
        vcdp->chgBus(c+449,(vlTOPp->lookUpDemod__DOT__code_mem_q_5),4);
        vcdp->chgBus(c+457,(vlTOPp->lookUpDemod__DOT__code_mem_q_6),4);
        vcdp->chgBus(c+465,(vlTOPp->lookUpDemod__DOT__code_mem_q_7),4);
        vcdp->chgBus(c+473,(vlTOPp->lookUpDemod__DOT__code_mem_q_8),4);
        vcdp->chgBus(c+481,(vlTOPp->lookUpDemod__DOT__code_mem_q_9),4);
        vcdp->chgBus(c+489,(vlTOPp->lookUpDemod__DOT__code_mem_q_10),4);
        vcdp->chgBus(c+497,(vlTOPp->lookUpDemod__DOT__code_mem_q_11),4);
        vcdp->chgBus(c+505,(vlTOPp->lookUpDemod__DOT__code_mem_q_12),4);
        vcdp->chgBus(c+513,(vlTOPp->lookUpDemod__DOT__code_mem_q_13),4);
        vcdp->chgBus(c+521,(vlTOPp->lookUpDemod__DOT__code_mem_q_14),4);
        vcdp->chgBus(c+529,(vlTOPp->lookUpDemod__DOT__code_mem_q_15),4);
        vcdp->chgBus(c+537,(vlTOPp->lookUpDemod__DOT__unit_data_i),4);
        vcdp->chgBus(c+545,(vlTOPp->lookUpDemod__DOT__unit_data_q),4);
    }
}

void VlookUpDemod::traceChgThis__5(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+553,(vlTOPp->lookUpDemod__DOT__demod_valid_iq));
        vcdp->chgBus(c+561,(vlTOPp->lookUpDemod__DOT__compTable_i),15);
        vcdp->chgBus(c+569,(vlTOPp->lookUpDemod__DOT__compTable_q),15);
        vcdp->chgBit(c+577,(vlTOPp->lookUpDemod__DOT__demod_valid));
    }
}

void VlookUpDemod::traceChgThis__6(VlookUpDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+585,(vlTOPp->w_en));
        vcdp->chgBus(c+593,(vlTOPp->w_addr),4);
        vcdp->chgBus(c+601,(vlTOPp->w_data),32);
        vcdp->chgBus(c+609,(vlTOPp->w_sel),2);
        vcdp->chgBus(c+617,(vlTOPp->iq_shift),2);
        vcdp->chgBit(c+625,(vlTOPp->data_flow_unit_data_valid));
        vcdp->chgBus(c+633,(vlTOPp->data_flow_unit_data_payload),8);
        vcdp->chgBit(c+641,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->chgBus(c+649,(vlTOPp->data_flow_mod_iq_payload_cha_i),16);
        vcdp->chgBus(c+657,(vlTOPp->data_flow_mod_iq_payload_cha_q),16);
        vcdp->chgBit(c+665,(vlTOPp->clk));
        vcdp->chgBit(c+673,(vlTOPp->reset));
    }
}
