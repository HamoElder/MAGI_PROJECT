// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMixedDivider.h for the primary calling header

#include "VMixedDivider.h"     // For This
#include "VMixedDivider__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMixedDivider) {
    VMixedDivider__Syms* __restrict vlSymsp = __VlSymsp = new VMixedDivider__Syms(this, name());
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMixedDivider::__Vconfigure(VMixedDivider__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMixedDivider::~VMixedDivider() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VMixedDivider::_settle__TOP__9(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_settle__TOP__9\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rsp_payload_remainder = (0xffffU & (((2U 
						  & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))
						  ? 
						 (~ (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_remainder))
						  : (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_remainder)) 
						+ (1U 
						   & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16) 
						      >> 1U))));
    vlTOPp->rsp_payload_error = (0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_error));
    vlTOPp->rsp_payload_quotient = (0xffffU & (((1U 
						 & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))
						 ? 
						(~ (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16))
						 : (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16)) 
					       + (1U 
						  & (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16))));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_48) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_15) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_47) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_14) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_46) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_13) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_45) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_12) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_44) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_11) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_43) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_10) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_42) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_9) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_41) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_8) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_40) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_7) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_39) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_6) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_38) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_5) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_37) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_36) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_35) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2) 
			    >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_34) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1) 
			    >> 0xfU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:93
    vlTOPp->MixedDivider__DOT__divider_cmd_payload_context 
	= ((2U & (IData)(vlTOPp->MixedDivider__DOT__divider_cmd_payload_context)) 
	   | ((IData)(vlTOPp->cmd_payload_signed) & 
	      (((IData)(vlTOPp->cmd_payload_numerator) 
		^ (IData)(vlTOPp->cmd_payload_denominator)) 
	       >> 0xfU)));
    vlTOPp->MixedDivider__DOT__divider_cmd_payload_context 
	= ((1U & (IData)(vlTOPp->MixedDivider__DOT__divider_cmd_payload_context)) 
	   | (0x3fffeU & (((IData)(vlTOPp->cmd_payload_signed) 
			   << 1U) & ((IData)(vlTOPp->cmd_payload_numerator) 
				     >> 0xeU))));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49 
	= (((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_33) 
	    << 1U) | (1U & ((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient) 
			    >> 0xfU)));
    vlTOPp->rsp_valid = vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_16;
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_32)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_31)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_30)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_29)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_28)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_27)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_26)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_25)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_24)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_23)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_22)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_21)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_20)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_19)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_18)));
    vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 
	= (0x1ffffU & (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49 
		       - (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_17)));
}

void VMixedDivider::_eval_initial(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_eval_initial\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedDivider::final() {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::final\n"); );
    // Variables
    VMixedDivider__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMixedDivider::_eval_settle(VMixedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_eval_settle\n"); );
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__9(vlSymsp);
}

void VMixedDivider::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_ctor_var_reset\n"); );
    // Body
    flush = VL_RAND_RESET_I(1);
    cmd_valid = VL_RAND_RESET_I(1);
    cmd_ready = VL_RAND_RESET_I(1);
    cmd_payload_numerator = VL_RAND_RESET_I(16);
    cmd_payload_denominator = VL_RAND_RESET_I(16);
    cmd_payload_signed = VL_RAND_RESET_I(1);
    rsp_valid = VL_RAND_RESET_I(1);
    rsp_ready = VL_RAND_RESET_I(1);
    rsp_payload_quotient = VL_RAND_RESET_I(16);
    rsp_payload_remainder = VL_RAND_RESET_I(16);
    rsp_payload_error = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider_cmd_payload_context = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_1 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_2 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_3 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_4 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_5 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_6 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_7 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_8 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_9 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_10 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_11 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_12 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_13 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_14 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_15 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_valid_16 = VL_RAND_RESET_I(1);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_5 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_6 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_7 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_8 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_9 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_10 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_11 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_12 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_13 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_14 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_15 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_17 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_18 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_19 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_20 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_21 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_22 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_23 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_24 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_25 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_26 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_27 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_28 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_29 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_30 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_31 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_32 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_error = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_1 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_2 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_3 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_4 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_5 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_6 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_7 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_8 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_9 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_10 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_11 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_12 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_13 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_14 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_15 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16 = VL_RAND_RESET_I(2);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_33 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_34 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_35 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_36 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_37 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_38 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_39 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_40 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_41 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_42 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_43 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_44 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_45 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_46 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_47 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_48 = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_remainder = VL_RAND_RESET_I(16);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_49 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_50 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_51 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_52 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_53 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_54 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_55 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_56 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_57 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_58 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_59 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_60 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_61 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_62 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_63 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_64 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 = VL_RAND_RESET_I(17);
    MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 = VL_RAND_RESET_I(17);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_5 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_6 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_7 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_8 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_9 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_10 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_11 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_12 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_13 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_14 = VL_RAND_RESET_I(1);
    __Vdly__MixedDivider__DOT__divider__DOT___zz_rsp_valid_15 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VMixedDivider::_configure_coverage(VMixedDivider__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VMixedDivider::_configure_coverage\n"); );
}
