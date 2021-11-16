// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicFIR.h for the primary calling header

#include "VSystolicFIR.h"
#include "VSystolicFIR__Syms.h"

//==========

VL_CTOR_IMP(VSystolicFIR) {
    VSystolicFIR__Syms* __restrict vlSymsp = __VlSymsp = new VSystolicFIR__Syms(this, name());
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSystolicFIR::__Vconfigure(VSystolicFIR__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VSystolicFIR::~VSystolicFIR() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VSystolicFIR::_initial__TOP__1(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_initial__TOP__1\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_ready = 1U;
}

void VSystolicFIR::_settle__TOP__8(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_settle__TOP__8\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_payload_0 = vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__next_adder;
    vlTOPp->filtered_data_valid = vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__valid_regNext;
}

void VSystolicFIR::_eval_initial(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_eval_initial\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VSystolicFIR::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::final\n"); );
    // Variables
    VSystolicFIR__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSystolicFIR::_eval_settle(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_eval_settle\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__8(vlSymsp);
}

void VSystolicFIR::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_0 = VL_RAND_RESET_I(16);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_0 = VL_RAND_RESET_I(24);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_21__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_21__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_22__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_22__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_23__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_23__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_24__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_24__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_25__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_25__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_26__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_26__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_27__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_27__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_28__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_28__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_29__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_29__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_30__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_30__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_31__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_31__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_32__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_32__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_32__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_33__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_33__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_33__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_34__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_34__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_34__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_35__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_35__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_35__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_36__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_36__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_36__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_37__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_37__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_37__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_38__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_38__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_38__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_39__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_39__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_39__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_40__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_40__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_40__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_41__DOT__mult = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_41__DOT__next_adder = VL_RAND_RESET_I(24);
    SystolicFIR__DOT__systolicCore_41__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vm_traceActivity = 0;
}
