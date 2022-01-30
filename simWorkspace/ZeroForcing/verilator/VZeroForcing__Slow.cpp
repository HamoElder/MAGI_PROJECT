// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VZeroForcing.h for the primary calling header

#include "VZeroForcing.h"      // For This
#include "VZeroForcing__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VZeroForcing) {
    VZeroForcing__Syms* __restrict vlSymsp = __VlSymsp = new VZeroForcing__Syms(this, name());
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VZeroForcing::__Vconfigure(VZeroForcing__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VZeroForcing::~VZeroForcing() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VZeroForcing::_settle__TOP__1(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_settle__TOP__1\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_ready = 1U;
}

void VZeroForcing::_settle__TOP__9(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_settle__TOP__9\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->result_data_payload = (0xffffU & ((IData)(vlTOPp->ZeroForcing__DOT__train_en_delay_16)
					       ? ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
						   ? 
						  VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
						   : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z))
					       : ((IData)(vlTOPp->ZeroForcing__DOT__x_sign)
						   ? 
						  VL_NEGATE_I((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))
						   : (IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y))));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_60)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17) 
				     >> 0xfU)));
    vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75 
	= (1U & ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46)
		  ? (~ ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31) 
			>> 0xfU)) : ((IData)(vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16) 
				     >> 0xfU)));
    vlTOPp->result_data_valid = vlTOPp->ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15;
}

void VZeroForcing::_eval_initial(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_eval_initial\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VZeroForcing::final() {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::final\n"); );
    // Variables
    VZeroForcing__Syms* __restrict vlSymsp = this->__VlSymsp;
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VZeroForcing::_eval_settle(VZeroForcing__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_eval_settle\n"); );
    VZeroForcing* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
}

void VZeroForcing::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload = VL_RAND_RESET_I(16);
    scale = VL_RAND_RESET_I(16);
    ref_data = VL_RAND_RESET_I(16);
    train_en = VL_RAND_RESET_I(1);
    result_data_valid = VL_RAND_RESET_I(1);
    result_data_payload = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_1 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_2 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_3 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_4 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_5 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_6 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_7 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_8 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_9 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_10 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_11 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_12 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_13 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT___zz_x_sign_14 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__x_sign = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_1 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_2 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_3 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_4 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_5 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_6 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_7 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_8 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_9 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_10 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_11 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_12 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_13 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_14 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_15 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__train_en_delay_16 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_56 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_57 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_59 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_60 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_62 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_63 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_65 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_66 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_68 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_69 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_71 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_72 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_74 = VL_RAND_RESET_I(16);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_75 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_78 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_81 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_84 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_87 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_90 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_93 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_96 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_99 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_102 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_105 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_108 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_111 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_114 = VL_RAND_RESET_I(1);
    ZeroForcing__DOT__cal_core__DOT___zz_result_payload_x_117 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VZeroForcing::_configure_coverage(VZeroForcing__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VZeroForcing::_configure_coverage\n"); );
}
