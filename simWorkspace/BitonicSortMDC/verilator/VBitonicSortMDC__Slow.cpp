// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitonicSortMDC.h for the primary calling header

#include "VBitonicSortMDC.h"
#include "VBitonicSortMDC__Syms.h"

//==========

VL_CTOR_IMP(VBitonicSortMDC) {
    VBitonicSortMDC__Syms* __restrict vlSymsp = __VlSymsp = new VBitonicSortMDC__Syms(this, name());
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBitonicSortMDC::__Vconfigure(VBitonicSortMDC__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBitonicSortMDC::~VBitonicSortMDC() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VBitonicSortMDC::_settle__TOP__4(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_settle__TOP__4\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->sorted_data_payload_low_data = vlTOPp->BitonicSortMDC__DOT__cmpUnit_7_out1_regNext_data;
    vlTOPp->sorted_data_payload_high_data = vlTOPp->BitonicSortMDC__DOT__cmpUnit_7_out2_regNext_data;
    vlTOPp->BitonicSortMDC__DOT___zz_cnt = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->BitonicSortMDC__DOT__cnt)));
    vlTOPp->sorted_data_valid = (0xfU < (IData)(vlTOPp->BitonicSortMDC__DOT__cnt));
    vlTOPp->raw_data_ready = (0x10U > (IData)(vlTOPp->BitonicSortMDC__DOT__cnt));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data) 
           < (IData)(vlTOPp->raw_data_payload_data));
    vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27 
        = (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready)) 
           | (0x10U <= (IData)(vlTOPp->BitonicSortMDC__DOT__cnt)));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result))));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_4_out1_data 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data)
            : (IData)(vlTOPp->raw_data_payload_data));
    vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data 
        = ((4U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4_out1_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_3_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data) 
           < (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result))));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_5_out1_data 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data 
        = ((2U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5_out1_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_1_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data) 
           < (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result))));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_6_out1_data 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data 
        = ((1U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6_out1_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_12__DOT__shift_reg_0_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data) 
           < (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27)
                  ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result))));
}

void VBitonicSortMDC::_eval_initial(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_eval_initial\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VBitonicSortMDC::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::final\n"); );
    // Variables
    VBitonicSortMDC__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBitonicSortMDC::_eval_settle(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_eval_settle\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VBitonicSortMDC::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_ctor_var_reset\n"); );
    // Body
    ascending_order = VL_RAND_RESET_I(1);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_data = VL_RAND_RESET_I(16);
    sorted_data_valid = VL_RAND_RESET_I(1);
    sorted_data_payload_low_data = VL_RAND_RESET_I(16);
    sorted_data_payload_high_data = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__cmpUnit_4_out1_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpSwitch_3_out2_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpUnit_5_out1_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpSwitch_4_out2_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpUnit_6_out1_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpSwitch_5_out2_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT___zz_cnt = VL_RAND_RESET_I(5);
    BitonicSortMDC__DOT__cnt = VL_RAND_RESET_I(5);
    BitonicSortMDC__DOT__when_BitonicSortMDC_l27 = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__cmpUnit_7_out1_regNext_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpUnit_7_out2_regNext_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_2_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_3_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_4_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_5_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_6_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_2_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_3_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_2_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__shiftRegister_12__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data = VL_RAND_RESET_I(16);
    BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result = VL_RAND_RESET_I(1);
    BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
