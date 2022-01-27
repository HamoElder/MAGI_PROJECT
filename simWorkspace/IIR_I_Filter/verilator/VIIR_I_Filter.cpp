// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIIR_I_Filter.h for the primary calling header

#include "VIIR_I_Filter.h"     // For This
#include "VIIR_I_Filter__Syms.h"

//--------------------


void VIIR_I_Filter::eval() {
    VIIR_I_Filter__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VIIR_I_Filter::eval\n"); );
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

void VIIR_I_Filter::_eval_initial_loop(VIIR_I_Filter__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VIIR_I_Filter::_sequent__TOP__1(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_sequent__TOP__1\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:99
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_0 = 0xc66U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:100
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_1 = 0x48bU;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:101
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_2 = 0xcd5U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:102
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_3 = 0x1d8U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:103
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_4 = 0xf86U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:104
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_5 = 0x18U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:105
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_6 = 0xffeU;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:151
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_0 = 7U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:152
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_1 = 0x15U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:153
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_2 = 0x2aU;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:154
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_3 = 0x38U;
}

VL_INLINE_OPT void VIIR_I_Filter::_sequent__TOP__3(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_sequent__TOP__3\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0,28,0);
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1,28,0);
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2,28,0);
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3,28,0);
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4,28,0);
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5,28,0);
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6,28,0);
    VL_SIG(__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result,28,0);
    // Body
    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7 
	= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7;
    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0 
	= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0;
    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1 
	= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1;
    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2 
	= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2;
    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3 
	= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3;
    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4 
	= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4;
    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5 
	= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5;
    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6 
	= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6;
    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6 
	= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6;
    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result 
	= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result;
    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0 
	= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0;
    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1 
	= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1;
    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2 
	= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2;
    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3 
	= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3;
    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4 
	= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4;
    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5 
	= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:228
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en = 0U;
	__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0 = 0U;
	__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1 = 0U;
	__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2 = 0U;
	__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3 = 0U;
	__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4 = 0U;
	__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_6 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_0 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_1 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_2 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_3 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_4 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_5 = 0U;
	__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6 = 0U;
	__Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result = 0U;
    } else {
	vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en 
	    = (7U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_internal_en));
	if (vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf) {
	    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_6 
		= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5;
	    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5 
		= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4;
	    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4 
		= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3;
	    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3 
		= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2;
	    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2 
		= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1;
	    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1 
		= vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0;
	    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0 
		= vlTOPp->IIR_I_Filter__DOT__filtered_data_vec_0;
	}
	if (vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__when_DirectFIR_l35) {
	    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result 
		= (0x1fffffffU & (vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_sum_result 
				  + vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6));
	}
	if (vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__when_DirectFIR_l29) {
	    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_0 
		= (0x1fffffffU & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0));
	    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_1 
		= (0x1fffffffU & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1));
	    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_2 
		= (0x1fffffffU & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2));
	    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_3 
		= (0x1fffffffU & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3));
	    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_4 
		= (0x1fffffffU & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4));
	    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_5 
		= (0x1fffffffU & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5));
	    __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6 
		= (0x1fffffffU & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6));
	}
    }
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6 
	= __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5 
	= __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4 
	= __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3 
	= __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2 
	= __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1 
	= __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0 
	= __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_5))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,29, vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5))));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_4))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,29, vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4))));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_3))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,29, vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3))));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_2))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,29, vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2))));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_1))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,29, vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1))));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_0))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,29, vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0))));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6 
	= (VL_ULL(0x1ffffffffff) & VL_MULS_QQQ(41,41,41, 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_6))), 
					       (VL_ULL(0x1ffffffffff) 
						& VL_EXTENDS_QI(41,29, vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_6))));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_sum_result 
	= (0x1fffffffU & (((((vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_0 
			      + vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_1) 
			     + vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_2) 
			    + vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_3) 
			   + vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_4) 
			  + vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_5));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__when_DirectFIR_l29 
	= (1U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en));
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__when_DirectFIR_l35 
	= (1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en) 
		 >> 1U));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:44
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__filtered_data_vec_0 = 0U;
	vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf = 0U;
    } else {
	if ((4U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en))) {
	    vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf = 1U;
	    vlTOPp->IIR_I_Filter__DOT__filtered_data_vec_0 
		= ((0x1ff00000U & (VL_NEGATE_I((IData)(
						       (1U 
							& ((vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__sum_result 
							    - vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result) 
							   >> 0x1cU)))) 
				   << 0x14U)) | (0xfffffU 
						 & ((vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__sum_result 
						     - vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result) 
						    >> 9U)));
	} else {
	    vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf = 0U;
	}
    }
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result 
	= __Vdly__IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result;
    vlTOPp->filtered_data_payload_0 = vlTOPp->IIR_I_Filter__DOT__filtered_data_vec_0;
    vlTOPp->filtered_data_valid = vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_internal_en 
	= (((IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en) 
	    << 1U) | (IData)(vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:346
    if (vlTOPp->reset) {
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en = 0U;
	vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0 = 0U;
	vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1 = 0U;
	vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2 = 0U;
	vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3 = 0U;
	vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4 = 0U;
	vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5 = 0U;
	vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_7 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_0 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_1 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_2 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_3 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_4 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_5 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_6 = 0U;
	vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7 = 0U;
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__sum_result = 0U;
    } else {
	vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en 
	    = (7U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_internal_en));
	if (vlTOPp->raw_data_valid) {
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_7 
		= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6;
	    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6 
		= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5;
	    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5 
		= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4;
	    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4 
		= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3;
	    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3 
		= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2;
	    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2 
		= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1;
	    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1 
		= vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0;
	    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0 
		= vlTOPp->raw_data_payload_0;
	}
	if (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__when_DirectFIR_l35) {
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__sum_result 
		= (0x1fffffffU & (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_sum_result 
				  + vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7));
	}
	if (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__when_DirectFIR_l29) {
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_0 
		= ((0x1ff80000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0 
							   >> 0x12U)))) 
				   << 0x13U)) | vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0);
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_1 
		= ((0x1ff80000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1 
							   >> 0x12U)))) 
				   << 0x13U)) | vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1);
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_2 
		= ((0x1ff80000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2 
							   >> 0x12U)))) 
				   << 0x13U)) | vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2);
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_3 
		= ((0x1ff80000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3 
							   >> 0x12U)))) 
				   << 0x13U)) | vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3);
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_4 
		= ((0x1ff80000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4 
							   >> 0x12U)))) 
				   << 0x13U)) | vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4);
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_5 
		= ((0x1ff80000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5 
							   >> 0x12U)))) 
				   << 0x13U)) | vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5);
	    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_6 
		= ((0x1ff80000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6 
							   >> 0x12U)))) 
				   << 0x13U)) | vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6);
	    vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7 
		= ((0x1ff80000U & (VL_NEGATE_I((IData)(
						       (1U 
							& (vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_7 
							   >> 0x12U)))) 
				   << 0x13U)) | vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_7);
	}
    }
}

VL_INLINE_OPT void VIIR_I_Filter::_sequent__TOP__4(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_sequent__TOP__4\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7 
	= vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7;
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6 
	= vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6;
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5 
	= vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5;
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4 
	= vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4;
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3 
	= vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3;
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2 
	= vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2;
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1 
	= vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1;
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0 
	= vlTOPp->__Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0;
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6 
	= (0x7ffffU & VL_MULS_III(19,19,19, (0x7ffffU 
					     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_1))), 
				  (0x7ffffU & VL_EXTENDS_II(19,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6)))));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5 
	= (0x7ffffU & VL_MULS_III(19,19,19, (0x7ffffU 
					     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_2))), 
				  (0x7ffffU & VL_EXTENDS_II(19,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5)))));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4 
	= (0x7ffffU & VL_MULS_III(19,19,19, (0x7ffffU 
					     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_3))), 
				  (0x7ffffU & VL_EXTENDS_II(19,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4)))));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3 
	= (0x7ffffU & VL_MULS_III(19,19,19, (0x7ffffU 
					     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_3))), 
				  (0x7ffffU & VL_EXTENDS_II(19,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3)))));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2 
	= (0x7ffffU & VL_MULS_III(19,19,19, (0x7ffffU 
					     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_2))), 
				  (0x7ffffU & VL_EXTENDS_II(19,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2)))));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1 
	= (0x7ffffU & VL_MULS_III(19,19,19, (0x7ffffU 
					     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_1))), 
				  (0x7ffffU & VL_EXTENDS_II(19,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1)))));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0 
	= (0x7ffffU & VL_MULS_III(19,19,19, (0x7ffffU 
					     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_0))), 
				  (0x7ffffU & VL_EXTENDS_II(19,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0)))));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_7 
	= (0x7ffffU & VL_MULS_III(19,19,19, (0x7ffffU 
					     & VL_EXTENDS_II(19,7, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_0))), 
				  (0x7ffffU & VL_EXTENDS_II(19,12, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_7)))));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_sum_result 
	= (0x1fffffffU & ((((((vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_0 
			       + vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_1) 
			      + vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_2) 
			     + vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_3) 
			    + vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_4) 
			   + vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_5) 
			  + vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_6));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__when_DirectFIR_l29 
	= (1U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en));
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__when_DirectFIR_l35 
	= (1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en) 
		 >> 1U));
}

VL_INLINE_OPT void VIIR_I_Filter::_combo__TOP__6(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_combo__TOP__6\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_internal_en 
	= (((IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en) 
	    << 1U) | (IData)(vlTOPp->raw_data_valid));
}

void VIIR_I_Filter::_eval(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_eval\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VIIR_I_Filter::_change_request(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_change_request\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VIIR_I_Filter::_change_request_1(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_change_request_1\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
