// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDirectFIR.h for the primary calling header

#include "VDirectFIR.h"
#include "VDirectFIR__Syms.h"

//==========

VL_CTOR_IMP(VDirectFIR) {
    VDirectFIR__Syms* __restrict vlSymsp = __VlSymsp = new VDirectFIR__Syms(this, name());
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VDirectFIR::__Vconfigure(VDirectFIR__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VDirectFIR::~VDirectFIR() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VDirectFIR::_settle__TOP__5(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_settle__TOP__5\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_payload_0 = vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result;
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_15))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_14))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14)))));
    vlTOPp->filtered_data_valid = (1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
                                         >> 2U));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_internal_en 
        = (((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
            << 1U) | (IData)(vlTOPp->raw_data_valid));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_13))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_12))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_11))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_10))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_9))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_8))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_8))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_9))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_10))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_11))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_12))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_13))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_14))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1)))));
    vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0 
        = (0x1fffffU & VL_MULS_III(21,21,21, (0x1fffffU 
                                              & VL_EXTENDS_II(21,9, (IData)(vlTOPp->DirectFIR__DOT__coff_mem_15))), 
                                   (0x1fffffU & VL_EXTENDS_II(21,12, (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0)))));
}

void VDirectFIR::_eval_initial(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_eval_initial\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
}

void VDirectFIR::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::final\n"); );
    // Variables
    VDirectFIR__Syms* __restrict vlSymsp = this->__VlSymsp;
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VDirectFIR::_eval_settle(VDirectFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_eval_settle\n"); );
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
}

void VDirectFIR::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDirectFIR::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_0 = VL_RAND_RESET_I(12);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_0 = VL_RAND_RESET_I(29);
    clk = 0;
    reset = 0;
    DirectFIR__DOT__coff_mem_8 = VL_RAND_RESET_I(9);
    DirectFIR__DOT__coff_mem_9 = VL_RAND_RESET_I(9);
    DirectFIR__DOT__coff_mem_10 = VL_RAND_RESET_I(9);
    DirectFIR__DOT__coff_mem_11 = VL_RAND_RESET_I(9);
    DirectFIR__DOT__coff_mem_12 = VL_RAND_RESET_I(9);
    DirectFIR__DOT__coff_mem_13 = VL_RAND_RESET_I(9);
    DirectFIR__DOT__coff_mem_14 = VL_RAND_RESET_I(9);
    DirectFIR__DOT__coff_mem_15 = VL_RAND_RESET_I(9);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_internal_en = VL_RAND_RESET_I(4);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_0 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_1 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_2 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_3 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_4 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_5 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_6 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_7 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_8 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_9 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_10 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_11 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_12 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_13 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_14 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT___zz_mult_data_vec_15 = VL_RAND_RESET_I(21);
    DirectFIR__DOT__directFIRCore_1__DOT__internal_en = VL_RAND_RESET_I(3);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15 = VL_RAND_RESET_I(12);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15 = VL_RAND_RESET_I(29);
    DirectFIR__DOT__directFIRCore_1__DOT__sum_result = VL_RAND_RESET_I(29);
    __Vm_traceActivity = 0;
}
