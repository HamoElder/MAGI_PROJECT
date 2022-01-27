// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicFIR.h for the primary calling header

#include "VSystolicFIR.h"      // For This
#include "VSystolicFIR__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

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

//--------------------
// Internal Methods

void VSystolicFIR::_initial__TOP__1(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_initial__TOP__1\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:247
    vlTOPp->raw_data_ready = 1U;
}

void VSystolicFIR::_settle__TOP__7(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_settle__TOP__7\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_payload_0 = (0x1fffffffU 
				       & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder));
    vlTOPp->filtered_data_valid = vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext;
}

void VSystolicFIR::_eval_initial(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_eval_initial\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VSystolicFIR::final() {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::final\n"); );
    // Variables
    VSystolicFIR__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSystolicFIR::_eval_settle(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_eval_settle\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
}

void VSystolicFIR::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_0 = VL_RAND_RESET_I(12);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_0 = VL_RAND_RESET_I(29);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_16__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_16__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_17__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_17__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_18__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_18__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_19__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_19__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_20__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_20__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_21__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_21__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_22__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_22__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_23__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_23__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_24__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_24__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_25__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_25__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_26__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_26__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_27__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_27__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_28__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_28__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_29__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_29__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_30__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_30__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_31__DOT__mult = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_31__DOT__next_adder = VL_RAND_RESET_Q(38);
    SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext = VL_RAND_RESET_I(1);
    SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_16__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_17__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_18__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_19__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_20__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_21__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_22__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_23__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_24__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_25__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_26__DOT__mult = VL_RAND_RESET_Q(38);
    __Vdly__SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vdly__SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(29);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VSystolicFIR::_configure_coverage(VSystolicFIR__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_configure_coverage\n"); );
}
