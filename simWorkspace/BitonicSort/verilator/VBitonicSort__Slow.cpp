// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitonicSort.h for the primary calling header

#include "VBitonicSort.h"
#include "VBitonicSort__Syms.h"

//==========

VL_CTOR_IMP(VBitonicSort) {
    VBitonicSort__Syms* __restrict vlSymsp = __VlSymsp = new VBitonicSort__Syms(this, name());
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBitonicSort::__Vconfigure(VBitonicSort__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBitonicSort::~VBitonicSort() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VBitonicSort::_settle__TOP__5(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_settle__TOP__5\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sorted_data_payload_low_data = vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_data;
    vlTOPp->sorted_data_payload_low_idx = vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_idx;
    vlTOPp->sorted_data_payload_high_data = vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_data;
    vlTOPp->sorted_data_payload_high_idx = vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_idx;
    vlTOPp->BitonicSort__DOT___zz_cnt = (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->BitonicSort__DOT__cnt)));
    vlTOPp->sorted_data_valid = (0xfU < (IData)(vlTOPp->BitonicSort__DOT__cnt));
    vlTOPp->raw_data_ready = (0x10U > (IData)(vlTOPp->BitonicSort__DOT__cnt));
    vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data) 
           < (IData)(vlTOPp->raw_data_payload_data));
    vlTOPp->BitonicSort__DOT__when_BitonicSort_l26 
        = (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready)) 
           | (0x10U <= (IData)(vlTOPp->BitonicSort__DOT__cnt)));
    vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx)
          : (IData)(vlTOPp->raw_data_payload_idx));
    vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data)
          : (IData)(vlTOPp->raw_data_payload_data));
    vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx 
        = ((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx));
    vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data 
        = ((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data) 
           < (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx)
          : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx));
    vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data)
          : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data));
    vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx 
        = ((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx));
    vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data 
        = ((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data) 
           < (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx)
          : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx));
    vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data)
          : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data));
    vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx 
        = ((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx));
    vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data 
        = ((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data) 
           < (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->BitonicSort__DOT__when_BitonicSort_l26)
                  ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result))));
}

void VBitonicSort::_eval_initial(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_eval_initial\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VBitonicSort::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::final\n"); );
    // Variables
    VBitonicSort__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBitonicSort::_eval_settle(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_eval_settle\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VBitonicSort::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_data = VL_RAND_RESET_I(16);
    raw_data_payload_idx = VL_RAND_RESET_I(4);
    sorted_data_valid = VL_RAND_RESET_I(1);
    sorted_data_payload_low_data = VL_RAND_RESET_I(16);
    sorted_data_payload_low_idx = VL_RAND_RESET_I(4);
    sorted_data_payload_high_data = VL_RAND_RESET_I(16);
    sorted_data_payload_high_idx = VL_RAND_RESET_I(4);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    BitonicSort__DOT__cmpUnit_4_out1_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__cmpUnit_4_out1_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpSwitch_3_out2_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__cmpSwitch_3_out2_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpUnit_5_out1_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__cmpUnit_5_out1_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpSwitch_4_out2_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__cmpSwitch_4_out2_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpUnit_6_out1_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__cmpUnit_6_out1_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpSwitch_5_out2_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__cmpSwitch_5_out2_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT___zz_cnt = VL_RAND_RESET_I(5);
    BitonicSort__DOT__cnt = VL_RAND_RESET_I(5);
    BitonicSort__DOT__when_BitonicSort_l26 = VL_RAND_RESET_I(1);
    BitonicSort__DOT__cmpUnit_7_out1_regNext_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__cmpUnit_7_out1_regNext_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpUnit_7_out2_regNext_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__cmpUnit_7_out2_regNext_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx = VL_RAND_RESET_I(4);
    BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
