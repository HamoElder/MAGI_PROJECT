// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VUnsignedDivider.h for the primary calling header

#include "VUnsignedDivider.h"  // For This
#include "VUnsignedDivider__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VUnsignedDivider) {
    VUnsignedDivider__Syms* __restrict vlSymsp = __VlSymsp = new VUnsignedDivider__Syms(this, name());
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VUnsignedDivider::__Vconfigure(VUnsignedDivider__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VUnsignedDivider::~VUnsignedDivider() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VUnsignedDivider::_settle__TOP__6(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_settle__TOP__6\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->rsp_payload_remainder = vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_remainder;
    vlTOPp->rsp_payload_error = (0U == (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_error));
    vlTOPp->rsp_payload_quotient = vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_16;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_64 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_48) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_15) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_63 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_47) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_14) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_62 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_46) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_13) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_61 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_45) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_12) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_60 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_44) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_11) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_59 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_43) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_10) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_58 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_42) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_9) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_57 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_41) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_8) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_56 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_40) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_7) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_55 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_39) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_6) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_54 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_38) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_5) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_53 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_37) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_4) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_52 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_36) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_3) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_51 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_35) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_2) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_50 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_34) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_1) 
			    >> 0xfU)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_49 
	= (((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_33) 
	    << 1U) | (1U & ((IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient) 
			    >> 0xfU)));
    vlTOPp->cmd_ready = vlTOPp->rsp_ready;
    vlTOPp->rsp_valid = vlTOPp->UnsignedDivider__DOT___zz_rsp_valid_16;
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_80 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_64 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_32)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_79 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_63 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_31)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_78 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_62 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_30)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_77 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_61 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_29)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_76 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_60 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_28)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_75 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_59 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_27)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_74 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_58 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_26)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_73 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_57 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_25)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_72 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_56 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_24)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_71 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_55 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_23)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_70 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_54 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_22)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_69 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_53 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_21)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_68 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_52 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_20)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_67 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_51 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_19)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_66 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_50 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_18)));
    vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_65 
	= (0x1ffffU & (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_49 
		       - (IData)(vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_17)));
}

void VUnsignedDivider::_eval_initial(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_eval_initial\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUnsignedDivider::final() {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::final\n"); );
    // Variables
    VUnsignedDivider__Syms* __restrict vlSymsp = this->__VlSymsp;
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VUnsignedDivider::_eval_settle(VUnsignedDivider__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_eval_settle\n"); );
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VUnsignedDivider::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_ctor_var_reset\n"); );
    // Body
    flush = VL_RAND_RESET_I(1);
    cmd_valid = VL_RAND_RESET_I(1);
    cmd_ready = VL_RAND_RESET_I(1);
    cmd_payload_numerator = VL_RAND_RESET_I(16);
    cmd_payload_denominator = VL_RAND_RESET_I(16);
    rsp_valid = VL_RAND_RESET_I(1);
    rsp_ready = VL_RAND_RESET_I(1);
    rsp_payload_quotient = VL_RAND_RESET_I(16);
    rsp_payload_remainder = VL_RAND_RESET_I(16);
    rsp_payload_error = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_1 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_2 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_3 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_4 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_5 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_6 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_7 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_8 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_9 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_10 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_11 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_12 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_13 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_14 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_15 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_valid_16 = VL_RAND_RESET_I(1);
    UnsignedDivider__DOT___zz_rsp_payload_quotient = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_1 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_2 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_3 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_4 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_5 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_6 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_7 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_8 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_9 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_10 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_11 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_12 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_13 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_14 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_15 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_16 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_17 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_18 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_19 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_20 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_21 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_22 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_23 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_24 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_25 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_26 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_27 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_28 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_29 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_30 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_31 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_32 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_error = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_33 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_34 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_35 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_36 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_37 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_38 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_39 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_40 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_41 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_42 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_43 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_44 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_45 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_46 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_47 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_48 = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_remainder = VL_RAND_RESET_I(16);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_49 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_50 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_51 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_52 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_53 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_54 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_55 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_56 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_57 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_58 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_59 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_60 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_61 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_62 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_63 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_64 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_65 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_66 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_67 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_68 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_69 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_70 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_71 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_72 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_73 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_74 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_75 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_76 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_77 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_78 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_79 = VL_RAND_RESET_I(17);
    UnsignedDivider__DOT___zz_rsp_payload_quotient_80 = VL_RAND_RESET_I(17);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_5 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_6 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_7 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_8 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_9 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_10 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_11 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_12 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_13 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_14 = VL_RAND_RESET_I(1);
    __Vdly__UnsignedDivider__DOT___zz_rsp_valid_15 = VL_RAND_RESET_I(1);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VUnsignedDivider::_configure_coverage(VUnsignedDivider__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VUnsignedDivider::_configure_coverage\n"); );
}
