// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicFIR.h for the primary calling header

#include "VSystolicFIR.h"      // For This
#include "VSystolicFIR__Syms.h"

//--------------------


void VSystolicFIR::eval() {
    VSystolicFIR__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VSystolicFIR::eval\n"); );
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

void VSystolicFIR::_eval_initial_loop(VSystolicFIR__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__4(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_sequent__TOP__4\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    VL_SIG(__Vdly__SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0,28,0);
    //char	__VpadToAlign20[4];
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_27__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_28__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_29__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_30__DOT__mult,37,0);
    VL_SIG64(__Vdly__SystolicFIR__DOT__systolicCore_31__DOT__mult,37,0);
    // Body
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__mult;
    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0;
    __Vdly__SystolicFIR__DOT__systolicCore_27__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__mult;
    __Vdly__SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0;
    __Vdly__SystolicFIR__DOT__systolicCore_28__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__mult;
    __Vdly__SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0;
    __Vdly__SystolicFIR__DOT__systolicCore_29__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__mult;
    __Vdly__SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0;
    __Vdly__SystolicFIR__DOT__systolicCore_30__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__mult;
    __Vdly__SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0;
    __Vdly__SystolicFIR__DOT__systolicCore_31__DOT__mult 
	= vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_31__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext) {
	    __Vdly__SystolicFIR__DOT__systolicCore_31__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xb), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__mult 
	= __Vdly__SystolicFIR__DOT__systolicCore_31__DOT__mult;
    vlTOPp->filtered_data_payload_0 = (0x1fffffffU 
				       & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder));
    vlTOPp->filtered_data_valid = vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0;
	    __Vdly__SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0 
	= __Vdly__SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_30__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext) {
	    __Vdly__SystolicFIR__DOT__systolicCore_30__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x1f), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__mult 
	= __Vdly__SystolicFIR__DOT__systolicCore_30__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0;
	    __Vdly__SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0 
	= __Vdly__SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_29__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext) {
	    __Vdly__SystolicFIR__DOT__systolicCore_29__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x3f), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__mult 
	= __Vdly__SystolicFIR__DOT__systolicCore_29__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0;
	    __Vdly__SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0 
	= __Vdly__SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_28__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext) {
	    __Vdly__SystolicFIR__DOT__systolicCore_28__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x68), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__mult 
	= __Vdly__SystolicFIR__DOT__systolicCore_28__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0;
	    __Vdly__SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0 
	= __Vdly__SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	__Vdly__SystolicFIR__DOT__systolicCore_27__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext) {
	    __Vdly__SystolicFIR__DOT__systolicCore_27__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x98), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__mult 
	= __Vdly__SystolicFIR__DOT__systolicCore_27__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__5(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_sequent__TOP__5\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xc6), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xeb), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xff), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xff), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xeb), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xc6), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x98), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__6(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_sequent__TOP__6\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_20__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x68), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_19__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x3f), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_18__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__next_adder 
		= (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__mult 
					   + (((QData)((IData)(
							       (0x1ffU 
								& VL_NEGATE_I((IData)(
										(1U 
										& (IData)(
										(vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__next_adder 
										>> 0x1cU)))))))) 
					       << 0x1dU) 
					      | (QData)((IData)(
								(0x1fffffffU 
								 & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__next_adder)))))));
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__valid_regNext 
	    = vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext;
	if (vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x1f), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0 
		= vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_1;
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_17__DOT__shiftRegister_16__DOT__shift_reg_0;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:309
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__mult = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__next_adder = VL_ULL(0);
	vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext = 0U;
    } else {
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__mult 
		= (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xb), 
						      (VL_ULL(0x3fffffffff) 
						       & VL_EXTENDS_QI(38,29, vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_1))));
	}
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__next_adder 
		= vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__mult;
	}
	vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__valid_regNext 
	    = vlTOPp->raw_data_valid;
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__mult 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__mult;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SystolicFIR.v:369
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0 = 0U;
	vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_1 = 0U;
    } else {
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_1 
		= vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0;
	    vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0 
		= ((0x1ffff000U & (VL_NEGATE_I((IData)(
						       (1U 
							& ((IData)(vlTOPp->raw_data_payload_0) 
							   >> 0xbU)))) 
				   << 0xcU)) | (IData)(vlTOPp->raw_data_payload_0));
	}
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0 
	= vlTOPp->__Vdly__SystolicFIR__DOT__systolicCore_16__DOT__shiftRegister_16__DOT__shift_reg_0;
}

void VSystolicFIR::_eval(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_eval\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VSystolicFIR::_change_request(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_change_request\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSystolicFIR::_change_request_1(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VSystolicFIR::_change_request_1\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
