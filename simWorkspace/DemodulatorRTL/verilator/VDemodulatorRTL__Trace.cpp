// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDemodulatorRTL__Syms.h"


//======================

void VDemodulatorRTL::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDemodulatorRTL* t = (VDemodulatorRTL*)userthis;
    VDemodulatorRTL__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VDemodulatorRTL::traceChgThis(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDemodulatorRTL::traceChgThis__2(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_1_valid));
        vcdp->chgBit(c+9,(vlTOPp->DemodulatorRTL__DOT__flowDeMux_1_outputs_2_valid));
    }
}

void VDemodulatorRTL::traceChgThis__3(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_i),3);
        vcdp->chgBus(c+25,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__comp_cmp_q),3);
    }
}

void VDemodulatorRTL::traceChgThis__4(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_valid));
        vcdp->chgBit(c+41,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_valid));
        vcdp->chgBit(c+49,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_valid));
        vcdp->chgBus(c+57,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_i),12);
        vcdp->chgBus(c+65,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_data_q),12);
    }
}

void VDemodulatorRTL::traceChgThis__5(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+73,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_data_i),12);
        vcdp->chgBus(c+81,((((IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_i) 
                             << 1U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_q))),12);
        vcdp->chgBus(c+89,((((IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_i) 
                             << 2U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_q))),12);
        vcdp->chgBit(c+97,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid));
        vcdp->chgBit(c+105,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_data_i));
        vcdp->chgBit(c+113,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_i));
        vcdp->chgBit(c+121,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_q));
        vcdp->chgBus(c+129,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_i),2);
        vcdp->chgBus(c+137,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_q),2);
    }
}

void VDemodulatorRTL::traceChgThis__6(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+145,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_data_i),12);
        vcdp->chgBit(c+153,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_valid_i));
        vcdp->chgBit(c+161,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__demod_data_i))));
        vcdp->chgBit(c+169,(vlTOPp->DemodulatorRTL__DOT__demod__DOT__compTable_i));
        vcdp->chgBus(c+177,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_i),12);
        vcdp->chgBit(c+185,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid_i));
        vcdp->chgBus(c+193,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_q),12);
        vcdp->chgBit(c+201,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid_q));
        vcdp->chgBit(c+209,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_i))));
        vcdp->chgBit(c+217,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_data_q))));
        vcdp->chgBit(c+225,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__compTable_i));
        vcdp->chgBit(c+233,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__codeTable_q));
        vcdp->chgBit(c+241,(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__demod_valid));
        vcdp->chgBit(c+249,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid_i));
        vcdp->chgBit(c+257,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid_q));
        vcdp->chgBus(c+265,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__compTable_i),3);
        vcdp->chgBus(c+273,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__codeTable_q),3);
        vcdp->chgBit(c+281,(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__demod_valid));
    }
}

void VDemodulatorRTL::traceChgThis__7(VDemodulatorRTL__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDemodulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+289,(vlTOPp->select_1),2);
        vcdp->chgBit(c+297,(vlTOPp->data_flow_unit_data_valid));
        vcdp->chgBus(c+305,(vlTOPp->data_flow_unit_data_payload),12);
        vcdp->chgBit(c+313,(vlTOPp->data_flow_mod_iq_valid));
        vcdp->chgBus(c+321,(vlTOPp->data_flow_mod_iq_payload_cha_i),12);
        vcdp->chgBus(c+329,(vlTOPp->data_flow_mod_iq_payload_cha_q),12);
        vcdp->chgBit(c+337,(vlTOPp->clk));
        vcdp->chgBit(c+345,(vlTOPp->reset));
        vcdp->chgBit(c+353,(((0U == (IData)(vlTOPp->select_1)) 
                             & (IData)(vlTOPp->data_flow_mod_iq_valid))));
        vcdp->chgBus(c+361,(((0U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i))),12);
        vcdp->chgBus(c+369,(((0U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q))),12);
        vcdp->chgBus(c+377,(((1U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i))),12);
        vcdp->chgBus(c+385,(((1U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q))),12);
        vcdp->chgBus(c+393,(((2U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i))),12);
        vcdp->chgBus(c+401,(((2U != (IData)(vlTOPp->select_1))
                              ? 0U : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q))),12);
        vcdp->chgBit(c+409,(((0U == (IData)(vlTOPp->select_1))
                              ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_valid)
                              : ((1U == (IData)(vlTOPp->select_1))
                                  ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_valid)
                                  : (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_valid)))));
        vcdp->chgBus(c+417,(((0U == (IData)(vlTOPp->select_1))
                              ? (IData)(vlTOPp->DemodulatorRTL__DOT__demod__DOT__unit_data_i)
                              : ((1U == (IData)(vlTOPp->select_1))
                                  ? (((IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_i) 
                                      << 1U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_1__DOT__unit_data_q))
                                  : (((IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_i) 
                                      << 2U) | (IData)(vlTOPp->DemodulatorRTL__DOT__demod_2__DOT__unit_data_q))))),12);
        vcdp->chgBit(c+425,((0U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+433,((1U != (IData)(vlTOPp->select_1))));
        vcdp->chgBit(c+441,((2U != (IData)(vlTOPp->select_1))));
    }
}
