// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTransposeFIR.h for the primary calling header

#include "VTransposeFIR.h"     // For This
#include "VTransposeFIR__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTransposeFIR) {
    VTransposeFIR__Syms* __restrict vlSymsp = __VlSymsp = new VTransposeFIR__Syms(this, name());
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTransposeFIR::__Vconfigure(VTransposeFIR__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTransposeFIR::~VTransposeFIR() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTransposeFIR::_eval_initial(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTransposeFIR::_eval_initial\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTransposeFIR::final() {
    VL_DEBUG_IF(VL_PRINTF("    VTransposeFIR::final\n"); );
    // Variables
    VTransposeFIR__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTransposeFIR::_eval_settle(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTransposeFIR::_eval_settle\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_combo__TOP__7(vlSymsp);
}

void VTransposeFIR::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VTransposeFIR::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_0 = VL_RAND_RESET_I(16);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_0 = VL_RAND_RESET_I(24);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    TransposeFIR__DOT__coff_mem_0 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_1 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_2 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_3 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_4 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_5 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_6 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_7 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_8 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_9 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__coff_mem_10 = VL_RAND_RESET_I(8);
    TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data = VL_RAND_RESET_I(24);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VTransposeFIR::_configure_coverage(VTransposeFIR__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VTransposeFIR::_configure_coverage\n"); );
}
