// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicFIR__Syms.h"


//======================

void VSystolicFIR::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSystolicFIR* t = (VSystolicFIR*)userthis;
    VSystolicFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VSystolicFIR::traceChgThis(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSystolicFIR::traceChgThis__2(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_1),16);
        vcdp->chgBus(c+9,(vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_1),16);
        vcdp->chgBus(c+17,(vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_1),16);
        vcdp->chgBus(c+25,(vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_1),16);
        vcdp->chgBus(c+33,(vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_1),16);
        vcdp->chgBus(c+41,(vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_1),16);
        vcdp->chgBus(c+49,(vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_1),16);
        vcdp->chgBus(c+57,(vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_1),16);
        vcdp->chgBus(c+65,(vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_1),16);
        vcdp->chgBus(c+73,(vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_1),16);
        vcdp->chgBus(c+81,(vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_1),16);
        vcdp->chgBus(c+89,(vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_1),16);
        vcdp->chgBus(c+97,(vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_1),16);
        vcdp->chgBus(c+105,(vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_1),16);
        vcdp->chgBus(c+113,(vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_1),16);
        vcdp->chgBus(c+121,(vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_1),16);
        vcdp->chgBus(c+129,(vlTOPp->SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_1),16);
        vcdp->chgBus(c+137,(vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_1),16);
        vcdp->chgBus(c+145,(vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_1),16);
        vcdp->chgBus(c+153,(vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_1),16);
        vcdp->chgBus(c+161,(vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_1),16);
        vcdp->chgBus(c+169,(vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_1),16);
        vcdp->chgBus(c+177,(vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_1),16);
        vcdp->chgBus(c+185,(vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_1),16);
        vcdp->chgBus(c+193,(vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_1),16);
        vcdp->chgBus(c+201,(vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_1),16);
        vcdp->chgBus(c+209,(vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_1),16);
        vcdp->chgBus(c+217,(vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_1),16);
        vcdp->chgBus(c+225,(vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_1),16);
        vcdp->chgBus(c+233,(vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_1),16);
        vcdp->chgBus(c+241,(vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_1),16);
        vcdp->chgBus(c+249,(vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_1),16);
        vcdp->chgBus(c+257,(vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_1),16);
        vcdp->chgBus(c+265,(vlTOPp->SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_1),16);
        vcdp->chgBus(c+273,(vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_0),16);
        vcdp->chgBus(c+281,(vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_0),16);
        vcdp->chgBus(c+289,(vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_0),16);
        vcdp->chgBus(c+297,(vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_0),16);
        vcdp->chgBus(c+305,(vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_0),16);
        vcdp->chgBus(c+313,(vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_0),16);
        vcdp->chgBus(c+321,(vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_0),16);
        vcdp->chgBus(c+329,(vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_0),16);
        vcdp->chgBus(c+337,(vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_0),16);
        vcdp->chgBus(c+345,(vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_0),16);
        vcdp->chgBus(c+353,(vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_0),16);
        vcdp->chgBus(c+361,(vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_0),16);
        vcdp->chgBus(c+369,(vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_0),16);
        vcdp->chgBus(c+377,(vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_0),16);
        vcdp->chgBus(c+385,(vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_0),16);
        vcdp->chgBus(c+393,(vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_0),16);
        vcdp->chgBus(c+401,(vlTOPp->SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_0),16);
        vcdp->chgBus(c+409,(vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_0),16);
        vcdp->chgBus(c+417,(vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_0),16);
        vcdp->chgBus(c+425,(vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_0),16);
        vcdp->chgBus(c+433,(vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_0),16);
        vcdp->chgBus(c+441,(vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_0),16);
        vcdp->chgBus(c+449,(vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_0),16);
        vcdp->chgBus(c+457,(vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_0),16);
        vcdp->chgBus(c+465,(vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_0),16);
        vcdp->chgBus(c+473,(vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_0),16);
        vcdp->chgBus(c+481,(vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_0),16);
        vcdp->chgBus(c+489,(vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_0),16);
        vcdp->chgBus(c+497,(vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_0),16);
        vcdp->chgBus(c+505,(vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_0),16);
        vcdp->chgBus(c+513,(vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_0),16);
        vcdp->chgBus(c+521,(vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_0),16);
        vcdp->chgBus(c+529,(vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_0),16);
        vcdp->chgBus(c+537,(vlTOPp->SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_0),16);
    }
}

void VSystolicFIR::traceChgThis__3(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+545,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+553,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->chgBus(c+561,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->chgBit(c+569,(vlTOPp->filtered_data_valid));
        vcdp->chgBus(c+577,(vlTOPp->filtered_data_payload_cha_i),24);
        vcdp->chgBus(c+585,(vlTOPp->filtered_data_payload_cha_q),24);
        vcdp->chgBit(c+593,(vlTOPp->clk));
        vcdp->chgBit(c+601,(vlTOPp->reset));
    }
}
