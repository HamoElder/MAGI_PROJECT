// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIIR_I_Filter.h for the primary calling header

#include "VIIR_I_Filter.h"     // For This
#include "VIIR_I_Filter__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VIIR_I_Filter) {
    VIIR_I_Filter__Syms* __restrict vlSymsp = __VlSymsp = new VIIR_I_Filter__Syms(this, name());
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIIR_I_Filter::__Vconfigure(VIIR_I_Filter__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VIIR_I_Filter::~VIIR_I_Filter() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VIIR_I_Filter::_settle__TOP__5(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_settle__TOP__5\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->filtered_data_payload_0 = vlTOPp->IIR_I_Filter__DOT__filtered_data_vec_0;
    vlTOPp->filtered_data_valid = vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf;
    vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_internal_en 
	= (((IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en) 
	    << 1U) | (IData)(vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf));
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
    vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_internal_en 
	= (((IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en) 
	    << 1U) | (IData)(vlTOPp->raw_data_valid));
}

void VIIR_I_Filter::_eval_initial(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_eval_initial\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIIR_I_Filter::final() {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::final\n"); );
    // Variables
    VIIR_I_Filter__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIIR_I_Filter::_eval_settle(VIIR_I_Filter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_eval_settle\n"); );
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
}

void VIIR_I_Filter::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_payload_0 = VL_RAND_RESET_I(12);
    filtered_data_valid = VL_RAND_RESET_I(1);
    filtered_data_payload_0 = VL_RAND_RESET_I(29);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    IIR_I_Filter__DOT__filtered_data_vec_0 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__filtered_valid_buf = VL_RAND_RESET_I(1);
    IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_0 = VL_RAND_RESET_I(7);
    IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_1 = VL_RAND_RESET_I(7);
    IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_2 = VL_RAND_RESET_I(7);
    IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_3 = VL_RAND_RESET_I(7);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_internal_en = VL_RAND_RESET_I(4);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_mult_data_vec_7 = VL_RAND_RESET_I(19);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT___zz_sum_result = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en = VL_RAND_RESET_I(3);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_7 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_0 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_1 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_2 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_3 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_4 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_5 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_6 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__when_DirectFIR_l29 = VL_RAND_RESET_I(1);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__sum_result = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__when_DirectFIR_l35 = VL_RAND_RESET_I(1);
    IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_0 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_1 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_2 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_3 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_4 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_5 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_6 = VL_RAND_RESET_I(12);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_internal_en = VL_RAND_RESET_I(4);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_0 = VL_RAND_RESET_Q(41);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_1 = VL_RAND_RESET_Q(41);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_2 = VL_RAND_RESET_Q(41);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_3 = VL_RAND_RESET_Q(41);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_4 = VL_RAND_RESET_Q(41);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_5 = VL_RAND_RESET_Q(41);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_mult_data_vec_6 = VL_RAND_RESET_Q(41);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT___zz_sum_result = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en = VL_RAND_RESET_I(3);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_6 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_0 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_1 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_2 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_3 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_4 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_5 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6 = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__when_DirectFIR_l29 = VL_RAND_RESET_I(1);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result = VL_RAND_RESET_I(29);
    IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__when_DirectFIR_l35 = VL_RAND_RESET_I(1);
    __Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0 = VL_RAND_RESET_I(12);
    __Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1 = VL_RAND_RESET_I(12);
    __Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2 = VL_RAND_RESET_I(12);
    __Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3 = VL_RAND_RESET_I(12);
    __Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4 = VL_RAND_RESET_I(12);
    __Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5 = VL_RAND_RESET_I(12);
    __Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6 = VL_RAND_RESET_I(12);
    __Vdly__IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7 = VL_RAND_RESET_I(29);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VIIR_I_Filter::_configure_coverage(VIIR_I_Filter__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VIIR_I_Filter::_configure_coverage\n"); );
}
