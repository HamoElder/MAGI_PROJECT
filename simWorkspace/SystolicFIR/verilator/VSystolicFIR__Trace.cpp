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
        vcdp->chgBus(c+1,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+9,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder),24);
        vcdp->chgBit(c+17,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext));
        vcdp->chgBus(c+25,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+33,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder),24);
        vcdp->chgBit(c+41,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext));
        vcdp->chgBus(c+49,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+57,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder),24);
        vcdp->chgBit(c+65,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext));
        vcdp->chgBus(c+73,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+81,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder),24);
        vcdp->chgBit(c+89,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext));
        vcdp->chgBus(c+97,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+105,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder),24);
        vcdp->chgBit(c+113,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext));
        vcdp->chgBus(c+121,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+129,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder),24);
        vcdp->chgBit(c+137,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext));
        vcdp->chgBus(c+145,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+153,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder),24);
        vcdp->chgBit(c+161,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext));
        vcdp->chgBus(c+169,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+177,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder),24);
        vcdp->chgBit(c+185,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext));
        vcdp->chgBus(c+193,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+201,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder),24);
        vcdp->chgBit(c+209,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext));
        vcdp->chgBus(c+217,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+225,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder),24);
        vcdp->chgBit(c+233,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext));
        vcdp->chgBus(c+241,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+249,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder),24);
        vcdp->chgBit(c+257,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext));
        vcdp->chgBus(c+265,(vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+273,(vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__next_adder),24);
        vcdp->chgBit(c+281,(vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__valid_regNext));
        vcdp->chgBus(c+289,(vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+297,(vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__next_adder),24);
        vcdp->chgBit(c+305,(vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__valid_regNext));
        vcdp->chgBus(c+313,(vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+321,(vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__next_adder),24);
        vcdp->chgBit(c+329,(vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__valid_regNext));
        vcdp->chgBus(c+337,(vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+345,(vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__next_adder),24);
        vcdp->chgBit(c+353,(vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__valid_regNext));
        vcdp->chgBus(c+361,(vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+369,(vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__next_adder),24);
        vcdp->chgBit(c+377,(vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__valid_regNext));
        vcdp->chgBus(c+385,(vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+393,(vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__next_adder),24);
        vcdp->chgBit(c+401,(vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__valid_regNext));
        vcdp->chgBus(c+409,(vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+417,(vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__next_adder),24);
        vcdp->chgBit(c+425,(vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__valid_regNext));
        vcdp->chgBus(c+433,(vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+441,(vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__next_adder),24);
        vcdp->chgBit(c+449,(vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__valid_regNext));
        vcdp->chgBus(c+457,(vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+465,(vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__next_adder),24);
        vcdp->chgBit(c+473,(vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__valid_regNext));
        vcdp->chgBus(c+481,(vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_1),16);
        vcdp->chgBus(c+489,(vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__next_adder),24);
        vcdp->chgBit(c+497,(vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__valid_regNext));
        vcdp->chgBus(c+505,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__mult),24);
        vcdp->chgBus(c+513,(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+521,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__mult),24);
        vcdp->chgBus(c+529,(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+537,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__mult),24);
        vcdp->chgBus(c+545,(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+553,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__mult),24);
        vcdp->chgBus(c+561,(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+569,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__mult),24);
        vcdp->chgBus(c+577,(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+585,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__mult),24);
        vcdp->chgBus(c+593,(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+601,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__mult),24);
        vcdp->chgBus(c+609,(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+617,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__mult),24);
        vcdp->chgBus(c+625,(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+633,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__mult),24);
        vcdp->chgBus(c+641,(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+649,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__mult),24);
        vcdp->chgBus(c+657,(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+665,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__mult),24);
        vcdp->chgBus(c+673,(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+681,(vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__mult),24);
        vcdp->chgBus(c+689,(vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+697,(vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__mult),24);
        vcdp->chgBus(c+705,(vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+713,(vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__mult),24);
        vcdp->chgBus(c+721,(vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+729,(vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__mult),24);
        vcdp->chgBus(c+737,(vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+745,(vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__mult),24);
        vcdp->chgBus(c+753,(vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+761,(vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__mult),24);
        vcdp->chgBus(c+769,(vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+777,(vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__mult),24);
        vcdp->chgBus(c+785,(vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+793,(vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__mult),24);
        vcdp->chgBus(c+801,(vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+809,(vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__mult),24);
        vcdp->chgBus(c+817,(vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_0),16);
        vcdp->chgBus(c+825,(vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__mult),24);
        vcdp->chgBus(c+833,(vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_0),16);
    }
}

void VSystolicFIR::traceChgThis__3(VSystolicFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+841,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+849,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+857,(vlTOPp->raw_data_payload_0),16);
        vcdp->chgBit(c+865,(vlTOPp->filtered_data_valid));
        vcdp->chgBus(c+873,(vlTOPp->filtered_data_payload_0),24);
        vcdp->chgBit(c+881,(vlTOPp->clk));
        vcdp->chgBit(c+889,(vlTOPp->reset));
    }
}
