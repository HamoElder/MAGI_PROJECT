// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOFDMEqualizer.h for the primary calling header

#include "VOFDMEqualizer.h"    // For This
#include "VOFDMEqualizer__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VOFDMEqualizer) {
    VOFDMEqualizer__Syms* __restrict vlSymsp = __VlSymsp = new VOFDMEqualizer__Syms(this, name());
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VOFDMEqualizer::__Vconfigure(VOFDMEqualizer__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VOFDMEqualizer::~VOFDMEqualizer() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VOFDMEqualizer::_settle__TOP__23(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_settle__TOP__23\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload 
	= (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16)
		       ? ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
			   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
			   : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
		       : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
			   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
			   : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload 
	= (0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_16)
		       ? ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
			   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
			   : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
		       : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
			   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
			   : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))));
    vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
				     >> 0xfU)));
    vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 
	= (1U & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46)
		  ? (~ ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31) 
			>> 0xfU)) : ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16) 
				     >> 0xfU)));
    vlTOPp->equalized_data_payload_last = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16;
    vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l71 
	= (0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt));
    vlTOPp->raw_data_ready = vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1;
    vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69 
	= (((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15) 
	    & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15)) 
	   & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_finished)));
    vlTOPp->equalized_data_valid = ((IData)(vlTOPp->OFDMEqualizer__DOT__train_finished) 
				    & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15) 
				       & (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15)));
    vlTOPp->OFDMEqualizer__DOT___zz_cnt = (0x3fU & 
					   ((IData)(1U) 
					    + (IData)(vlTOPp->OFDMEqualizer__DOT__cnt)));
    vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l47 
	= (0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__cnt));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:351
    if ((0x20U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
	if ((0x10U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
	    if ((8U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		if ((4U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_63;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_63;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_63;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_63;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_62;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_62;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_62;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_62;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_61;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_61;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_61;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_61;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_60;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_60;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_60;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_60;
			}
		    }
		} else {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_59;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_59;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_59;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_59;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_58;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_58;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_58;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_58;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_57;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_57;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_57;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_57;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_56;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_56;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_56;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_56;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_55;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_55;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_55;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_55;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_54;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_54;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_54;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_54;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_53;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_53;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_53;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_53;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_52;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_52;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_52;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_52;
			}
		    }
		} else {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_51;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_51;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_51;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_51;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_50;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_50;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_50;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_50;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_49;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_49;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_49;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_49;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_48;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_48;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_48;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_48;
			}
		    }
		}
	    }
	} else {
	    if ((8U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		if ((4U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_47;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_47;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_47;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_47;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_46;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_46;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_46;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_46;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_45;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_45;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_45;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_45;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_44;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_44;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_44;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_44;
			}
		    }
		} else {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_43;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_43;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_43;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_43;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_42;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_42;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_42;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_42;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_41;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_41;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_41;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_41;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_40;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_40;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_40;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_40;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_39;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_39;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_39;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_39;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_38;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_38;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_38;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_38;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_37;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_37;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_37;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_37;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_36;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_36;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_36;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_36;
			}
		    }
		} else {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_35;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_35;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_35;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_35;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_34;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_34;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_34;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_34;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_33;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_33;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_33;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_33;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_32;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_32;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_32;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_32;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
	    if ((8U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		if ((4U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_31;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_31;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_31;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_31;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_30;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_30;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_30;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_30;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_29;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_29;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_29;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_29;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_28;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_28;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_28;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_28;
			}
		    }
		} else {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_27;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_27;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_27;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_27;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_26;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_26;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_26;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_26;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_25;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_25;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_25;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_25;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_24;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_24;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_24;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_24;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_23;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_23;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_23;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_23;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_22;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_22;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_22;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_22;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_21;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_21;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_21;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_21;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_20;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_20;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_20;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_20;
			}
		    }
		} else {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_19;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_19;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_19;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_19;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_18;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_18;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_18;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_18;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_17;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_17;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_17;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_17;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_16;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_16;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_16;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_16;
			}
		    }
		}
	    }
	} else {
	    if ((8U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		if ((4U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_15;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_15;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_15;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_15;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_14;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_14;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_14;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_14;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_13;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_13;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_13;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_13;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_12;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_12;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_12;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_12;
			}
		    }
		} else {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_11;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_11;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_11;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_11;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_10;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_10;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_10;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_10;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_9;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_9;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_9;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_9;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_8;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_8;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_8;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_8;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_7;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_7;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_7;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_7;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_6;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_6;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_6;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_6;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_5;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_5;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_5;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_5;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_4;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_4;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_4;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_4;
			}
		    }
		} else {
		    if ((2U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_3;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_3;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_3;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_3;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_2;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_2;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_2;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_2;
			}
		    } else {
			if ((1U & (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))) {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_1;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_1;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_1;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_1;
			} else {
			    vlTOPp->OFDMEqualizer__DOT___zz_scale 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_scale_0;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data 
				= vlTOPp->OFDMEqualizer__DOT__cha_i_ref_0;
			    vlTOPp->OFDMEqualizer__DOT___zz_scale_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_scale_0;
			    vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1 
				= vlTOPp->OFDMEqualizer__DOT__cha_q_ref_0;
			}
		    }
		}
	    }
	}
    }
}

void VOFDMEqualizer::_eval_initial(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_eval_initial\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOFDMEqualizer::final() {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::final\n"); );
    // Variables
    VOFDMEqualizer__Syms* __restrict vlSymsp = this->__VlSymsp;
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VOFDMEqualizer::_eval_settle(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_eval_settle\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__23(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__24(vlSymsp);
}

void VOFDMEqualizer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_ctor_var_reset\n"); );
    // Body
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_last = VL_RAND_RESET_I(1);
    raw_data_payload_fragment_cha_i = VL_RAND_RESET_I(16);
    raw_data_payload_fragment_cha_q = VL_RAND_RESET_I(16);
    equalized_data_valid = VL_RAND_RESET_I(1);
    equalized_data_payload_last = VL_RAND_RESET_I(1);
    equalized_data_payload_fragment_cha_i = VL_RAND_RESET_I(16);
    equalized_data_payload_fragment_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq_result_data_payload = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq_result_data_payload = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT___zz_cnt = VL_RAND_RESET_I(6);
    OFDMEqualizer__DOT___zz_scale = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT___zz_ref_data = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT___zz_scale_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT___zz_ref_data_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_0 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_2 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_3 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_4 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_5 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_6 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_7 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_8 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_9 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_10 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_11 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_12 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_13 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_14 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_15 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_16 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_17 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_18 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_19 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_20 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_21 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_22 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_23 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_24 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_25 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_26 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_27 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_28 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_29 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_30 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_31 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_32 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_33 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_34 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_35 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_36 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_37 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_38 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_39 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_40 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_41 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_42 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_43 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_44 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_45 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_46 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_47 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_48 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_49 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_50 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_51 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_52 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_53 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_54 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_55 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_56 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_57 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_58 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_59 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_60 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_61 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_62 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_ref_63 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_0 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_2 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_3 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_4 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_5 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_6 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_7 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_8 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_9 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_10 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_11 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_12 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_13 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_14 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_15 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_16 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_17 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_18 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_19 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_20 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_21 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_22 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_23 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_24 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_25 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_26 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_27 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_28 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_29 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_30 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_31 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_32 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_33 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_34 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_35 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_36 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_37 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_38 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_39 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_40 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_41 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_42 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_43 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_44 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_45 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_46 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_47 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_48 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_49 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_50 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_51 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_52 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_53 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_54 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_55 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_56 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_57 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_58 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_59 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_60 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_61 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_62 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_ref_63 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_0 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_2 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_3 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_4 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_5 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_6 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_7 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_8 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_9 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_10 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_11 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_12 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_13 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_14 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_15 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_16 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_17 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_18 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_19 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_20 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_21 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_22 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_23 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_24 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_25 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_26 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_27 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_28 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_29 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_30 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_31 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_32 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_33 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_34 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_35 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_36 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_37 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_38 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_39 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_40 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_41 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_42 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_43 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_44 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_45 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_46 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_47 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_48 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_49 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_50 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_51 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_52 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_53 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_54 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_55 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_56 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_57 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_58 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_59 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_60 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_61 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_62 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_i_scale_63 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_0 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_2 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_3 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_4 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_5 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_6 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_7 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_8 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_9 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_10 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_11 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_12 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_13 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_14 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_15 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_16 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_17 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_18 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_19 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_20 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_21 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_22 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_23 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_24 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_25 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_26 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_27 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_28 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_29 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_30 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_31 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_32 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_33 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_34 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_35 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_36 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_37 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_38 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_39 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_40 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_41 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_42 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_43 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_44 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_45 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_46 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_47 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_48 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_49 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_50 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_51 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_52 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_53 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_54 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_55 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_56 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_57 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_58 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_59 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_60 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_61 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_62 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cha_q_scale_63 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__cnt = VL_RAND_RESET_I(6);
    OFDMEqualizer__DOT__train_en = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__when_OFDMEqualizer_l47 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__train_cnt = VL_RAND_RESET_I(6);
    OFDMEqualizer__DOT__train_finished = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__when_OFDMEqualizer_l71 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__when_OFDMEqualizer_l69 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_ready_1 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_1 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_2 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_3 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_4 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_5 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_6 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_7 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_8 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_9 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_10 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_11 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_12 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_13 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_14 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_15 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__raw_data_payload_last_delay_16 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_1 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_2 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_3 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_4 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_5 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_6 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_7 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_8 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_9 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_10 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_11 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_12 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_13 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT___zz_x_sign_14 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_1 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_2 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_3 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_4 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_5 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_6 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_7 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_8 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_9 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_10 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_11 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_12 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_13 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT___zz_x_sign_14 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_1 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_2 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_3 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_4 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_5 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_6 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_7 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_8 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_9 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_10 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_11 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_12 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_13 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_14 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_15 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_16 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(16);
    _ctor_var_reset_1();
}

void VOFDMEqualizer::_configure_coverage(VOFDMEqualizer__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_configure_coverage\n"); );
}

void VOFDMEqualizer::_ctor_var_reset_1() {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_ctor_var_reset_1\n"); );
    // Body
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_56 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_57 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_59 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_60 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_62 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_63 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_65 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_66 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_68 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_69 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_71 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_72 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_74 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(16);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_75 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_78 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_81 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_84 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_87 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_90 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_93 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_96 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_99 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_102 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_105 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_108 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_111 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_114 = VL_RAND_RESET_I(1);
    OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_117 = VL_RAND_RESET_I(1);
    __Vdly__OFDMEqualizer__DOT__cnt = VL_RAND_RESET_I(6);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
