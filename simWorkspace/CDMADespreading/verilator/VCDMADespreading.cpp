// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCDMADespreading.h for the primary calling header

#include "VCDMADespreading.h"  // For This
#include "VCDMADespreading__Syms.h"

//--------------------


void VCDMADespreading::eval() {
    VCDMADespreading__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VCDMADespreading::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VCDMADespreading::_eval_initial_loop(VCDMADespreading__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VCDMADespreading::_combo__TOP__2(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_combo__TOP__2\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mod_iq_ready = (1U & (~ (IData)(vlTOPp->clc)));
}

VL_INLINE_OPT void VCDMADespreading::_sequent__TOP__7(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_sequent__TOP__7\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->__Vdlyvset__CDMADespreading__DOT__code_map__v0 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:369
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:370
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:369
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:370
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:369
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:370
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:369
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:370
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:369
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:370
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:369
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next;
}

VL_INLINE_OPT void VCDMADespreading::_sequent__TOP__8(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_sequent__TOP__8\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:370
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:369
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:370
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:369
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:370
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next_regNext 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:371
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT___zz_base_iq_valid 
	= (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt) 
	    == (IData)(vlTOPp->cnt_limit)) & (IData)(vlTOPp->mod_iq_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:371
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT___zz_base_iq_valid 
	= (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt) 
	    == (IData)(vlTOPp->cnt_limit)) & (IData)(vlTOPp->mod_iq_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:371
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT___zz_base_iq_valid 
	= (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt) 
	    == (IData)(vlTOPp->cnt_limit)) & (IData)(vlTOPp->mod_iq_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:371
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT___zz_base_iq_valid 
	= (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt) 
	    == (IData)(vlTOPp->cnt_limit)) & (IData)(vlTOPp->mod_iq_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:371
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT___zz_base_iq_valid 
	= (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt) 
	    == (IData)(vlTOPp->cnt_limit)) & (IData)(vlTOPp->mod_iq_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:371
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT___zz_base_iq_valid 
	= (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt) 
	    == (IData)(vlTOPp->cnt_limit)) & (IData)(vlTOPp->mod_iq_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:371
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT___zz_base_iq_valid 
	= (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt) 
	    == (IData)(vlTOPp->cnt_limit)) & (IData)(vlTOPp->mod_iq_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:371
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT___zz_base_iq_valid 
	= (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt) 
	    == (IData)(vlTOPp->cnt_limit)) & (IData)(vlTOPp->mod_iq_valid));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_i;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_q;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_i;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_q;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_i;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_q;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_i;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_q;
	}
    }
}

VL_INLINE_OPT void VCDMADespreading::_sequent__TOP__9(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_sequent__TOP__9\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_i;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_q;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_i;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_q;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_i;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_q;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_i;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:425
    if (vlTOPp->clc) {
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5 = 0U;
	vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6 = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7 = 0U;
    } else {
	if (vlTOPp->mod_iq_valid) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0;
	    vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0 
		= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_q;
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:122
    if (vlTOPp->CDMADespreading__DOT___zz_1) {
	vlTOPp->__Vdlyvval__CDMADespreading__DOT__code_map__v0 
	    = vlTOPp->w_data;
	vlTOPp->__Vdlyvset__CDMADespreading__DOT__code_map__v0 = 1U;
	vlTOPp->__Vdlyvdim0__CDMADespreading__DOT__code_map__v0 
	    = vlTOPp->w_addr;
    }
}

VL_INLINE_OPT void VCDMADespreading::_sequent__TOP__10(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_sequent__TOP__10\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0 
	= vlTOPp->__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0;
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:124
    if (vlTOPp->__Vdlyvset__CDMADespreading__DOT__code_map__v0) {
	vlTOPp->CDMADespreading__DOT__code_map[vlTOPp->__Vdlyvdim0__CDMADespreading__DOT__code_map__v0] 
	    = vlTOPp->__Vdlyvval__CDMADespreading__DOT__code_map__v0;
    }
    vlTOPp->base_sub_iqs_0_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_0_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_1_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_1_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_2_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_2_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_3_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_3_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_4_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_4_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_5_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_5_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_6_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_6_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_7_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_7_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_0_valid = vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_1_valid = vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_2_valid = vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_3_valid = vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_4_valid = vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_5_valid = vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_6_valid = vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_7_valid = vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT___zz_base_iq_valid;
    vlTOPp->CDMADespreading__DOT___zz_code_map_port0 
	= vlTOPp->CDMADespreading__DOT__code_map[0U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port1 
	= vlTOPp->CDMADespreading__DOT__code_map[1U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port2 
	= vlTOPp->CDMADespreading__DOT__code_map[2U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port3 
	= vlTOPp->CDMADespreading__DOT__code_map[3U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port4 
	= vlTOPp->CDMADespreading__DOT__code_map[4U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port5 
	= vlTOPp->CDMADespreading__DOT__code_map[5U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port6 
	= vlTOPp->CDMADespreading__DOT__code_map[6U];
}

VL_INLINE_OPT void VCDMADespreading::_sequent__TOP__11(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_sequent__TOP__11\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CDMADespreading__DOT___zz_code_map_port7 
	= vlTOPp->CDMADespreading__DOT__code_map[7U];
}

VL_INLINE_OPT void VCDMADespreading::_sequent__TOP__13(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_sequent__TOP__13\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__cnt,2,0);
    VL_SIG8(__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__cnt,2,0);
    VL_SIG8(__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__cnt,2,0);
    VL_SIG8(__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__cnt,2,0);
    VL_SIG8(__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__cnt,2,0);
    VL_SIG8(__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__cnt,2,0);
    VL_SIG8(__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__cnt,2,0);
    VL_SIG8(__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__cnt,2,0);
    // Body
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__cnt 
	= vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt;
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__cnt 
	= vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt;
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__cnt 
	= vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt;
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__cnt 
	= vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt;
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__cnt 
	= vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt;
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__cnt 
	= vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt;
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__cnt 
	= vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt;
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__cnt 
	= vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:348
    if (vlTOPp->reset) {
	vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q = 0U;
	__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__cnt = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i = 0U;
	    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q = 0U;
	    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->mod_iq_valid) {
		__Vdly__CDMADespreading__DOT__computeUnit_8__DOT__cnt 
		    = (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT___zz_cnt));
		vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next;
		vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:348
    if (vlTOPp->reset) {
	vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q = 0U;
	__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__cnt = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i = 0U;
	    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q = 0U;
	    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->mod_iq_valid) {
		__Vdly__CDMADespreading__DOT__computeUnit_9__DOT__cnt 
		    = (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT___zz_cnt));
		vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next;
		vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:348
    if (vlTOPp->reset) {
	vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q = 0U;
	__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__cnt = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i = 0U;
	    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q = 0U;
	    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->mod_iq_valid) {
		__Vdly__CDMADespreading__DOT__computeUnit_10__DOT__cnt 
		    = (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT___zz_cnt));
		vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next;
		vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:348
    if (vlTOPp->reset) {
	vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q = 0U;
	__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__cnt = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i = 0U;
	    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q = 0U;
	    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->mod_iq_valid) {
		__Vdly__CDMADespreading__DOT__computeUnit_11__DOT__cnt 
		    = (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT___zz_cnt));
		vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next;
		vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:348
    if (vlTOPp->reset) {
	vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q = 0U;
	__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__cnt = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i = 0U;
	    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q = 0U;
	    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->mod_iq_valid) {
		__Vdly__CDMADespreading__DOT__computeUnit_12__DOT__cnt 
		    = (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT___zz_cnt));
		vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next;
		vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:348
    if (vlTOPp->reset) {
	vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q = 0U;
	__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__cnt = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i = 0U;
	    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q = 0U;
	    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->mod_iq_valid) {
		__Vdly__CDMADespreading__DOT__computeUnit_13__DOT__cnt 
		    = (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT___zz_cnt));
		vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next;
		vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:348
    if (vlTOPp->reset) {
	vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q = 0U;
	__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__cnt = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i = 0U;
	    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q = 0U;
	    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->mod_iq_valid) {
		__Vdly__CDMADespreading__DOT__computeUnit_14__DOT__cnt 
		    = (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT___zz_cnt));
		vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next;
		vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:348
    if (vlTOPp->reset) {
	vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i = 0U;
	vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q = 0U;
	__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__cnt = 0U;
    } else {
	if (vlTOPp->clc) {
	    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i = 0U;
	    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q = 0U;
	    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__cnt = 0U;
	} else {
	    if (vlTOPp->mod_iq_valid) {
		__Vdly__CDMADespreading__DOT__computeUnit_15__DOT__cnt 
		    = (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt) 
			== (IData)(vlTOPp->cnt_limit))
		        ? 0U : (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT___zz_cnt));
		vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next;
		vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q 
		    = vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next;
	    }
	}
    }
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt 
	= __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__cnt;
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt 
	= __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__cnt;
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt 
	= __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__cnt;
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt 
	= __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__cnt;
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt 
	= __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__cnt;
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt 
	= __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__cnt;
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt 
	= __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__cnt;
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt 
	= __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__cnt;
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt)));
}

VL_INLINE_OPT void VCDMADespreading::_combo__TOP__14(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_combo__TOP__14\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:232
    vlTOPp->CDMADespreading__DOT___zz_1 = 0U;
    if (vlTOPp->w_en) {
	vlTOPp->CDMADespreading__DOT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void VCDMADespreading::_combo__TOP__16(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_combo__TOP__16\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port0) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port0) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port1) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port1) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port2) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port2) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port3) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port3) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port4) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port4) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port5) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port5) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port6) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port6) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port7) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port7) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7)));
}

void VCDMADespreading::_eval(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_eval\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__9(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    vlTOPp->_combo__TOP__14(vlSymsp);
    vlTOPp->_combo__TOP__16(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCDMADespreading::_change_request(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_change_request\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCDMADespreading::_change_request_1(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_change_request_1\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
