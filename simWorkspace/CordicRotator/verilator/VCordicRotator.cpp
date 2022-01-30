// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCordicRotator.h for the primary calling header

#include "VCordicRotator.h"    // For This
#include "VCordicRotator__Syms.h"

//--------------------


void VCordicRotator::eval() {
    VCordicRotator__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VCordicRotator::eval\n"); );
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

void VCordicRotator::_eval_initial_loop(VCordicRotator__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__2(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_sequent__TOP__2\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid 
	= vlTOPp->CordicRotator__DOT___zz_result_valid;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_1 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_1;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_2 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_2;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_3 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_3;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_4 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_4;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_5 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_5;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_6 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_6;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_7 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_7;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_8 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_8;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_9 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_9;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_10 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_10;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_11 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_11;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_12 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_12;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_13 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_13;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_14 
	= vlTOPp->CordicRotator__DOT___zz_result_valid_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:463
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_1 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_2 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_3 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_4 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_5 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_6 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_7 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_8 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_9 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_10 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_11 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_12 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_13 = 0U;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_14 = 0U;
	vlTOPp->CordicRotator__DOT___zz_result_valid_15 = 0U;
    } else {
	vlTOPp->CordicRotator__DOT___zz_result_valid_15 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_14;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_14 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_13;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_13 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_12;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_12 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_11;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_11 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_10;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_10 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_9;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_9 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_8;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_8 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_7;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_7 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_6;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_6 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_5;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_5 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_4;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_4 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_3;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_3 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_2;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_2 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid_1;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_1 
	    = vlTOPp->CordicRotator__DOT___zz_result_valid;
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid 
	    = vlTOPp->CordicRotator__DOT__raw_data_fire;
    }
    vlTOPp->result_valid = vlTOPp->CordicRotator__DOT___zz_result_valid_15;
}

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__5(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_sequent__TOP__5\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_1 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_1;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_2 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_2;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_3 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_3;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_4 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_4;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_5 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_5;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_6 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_6;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_7 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_7;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_8 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_8;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_9 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_9;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_10 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_10;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_11 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_11;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_12 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_12;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_13 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_13;
    vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_14 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_14;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:782
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_60 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_59;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:766
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_59 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_58;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:750
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_58 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_57;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:734
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_57 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_56;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:718
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_56 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_55;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:702
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_55 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_54;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:686
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_54 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_53;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:670
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_53 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_52;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:654
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_52 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_51;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:638
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_51 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_50;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:622
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_50 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_49;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:606
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_49 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_48;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:590
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_48 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_47;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:574
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_47 
	= vlTOPp->CordicRotator__DOT___zz_result_payload_x_46;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:506
    if (vlTOPp->w_en) {
	if ((1U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_61 
		= vlTOPp->w_data;
	}
	if ((2U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_62 
		= vlTOPp->w_data;
	}
	if ((4U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_63 
		= vlTOPp->w_data;
	}
	if ((8U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_64 
		= vlTOPp->w_data;
	}
	if ((0x10U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_65 
		= vlTOPp->w_data;
	}
	if ((0x20U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_66 
		= vlTOPp->w_data;
	}
	if ((0x40U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_67 
		= vlTOPp->w_data;
	}
	if ((0x80U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_68 
		= vlTOPp->w_data;
	}
	if ((0x100U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_69 
		= vlTOPp->w_data;
	}
	if ((0x200U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_70 
		= vlTOPp->w_data;
	}
	if ((0x400U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_71 
		= vlTOPp->w_data;
	}
	if ((0x800U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_72 
		= vlTOPp->w_data;
	}
	if ((0x1000U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_73 
		= vlTOPp->w_data;
	}
	if ((0x2000U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_x_74 
		= vlTOPp->w_data;
	}
	if ((0x4000U & ((IData)(1U) << (0xfU & (IData)(vlTOPp->w_addr))))) {
	    vlTOPp->CordicRotator__DOT___zz_result_payload_z_1 
		= vlTOPp->w_data;
	}
    }
    if (vlTOPp->CordicRotator__DOT__raw_data_fire) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x 
	    = vlTOPp->raw_data_payload_x;
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_16 
	    = vlTOPp->raw_data_payload_y;
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_31 
	    = vlTOPp->raw_data_payload_z;
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_46 
	    = vlTOPp->rotate_mode;
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_1 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_76)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_76)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_17 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_76)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_17
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_17_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_32 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_76)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_32
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_32_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_1) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_2 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_79)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_3
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_2)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_79)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_2
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_3)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_1));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_18 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_79)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_18
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_18_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_33 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_79)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_33
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_33_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_2) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_3 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_82)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_82)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_2));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_19 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_82)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_19
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_19_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_34 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_82)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_34
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_34_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_3) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_4 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_85)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_4
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_4_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_85)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_4_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_4)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_3));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_20 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_85)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_20
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_20_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_35 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_85)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_35
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_35_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_4) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_5 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_88)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_5
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_5_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_88)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_5_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_5)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_4));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_21 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_88)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_21
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_21_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_36 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_88)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_36
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_36_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_5) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_6 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_91)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_6
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_6_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_91)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_6_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_6)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_5));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_22 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_91)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_22
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_22_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_37 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_91)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_37
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_37_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_6) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_7 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_94)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_7
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_7_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_94)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_7_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_7)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_6));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_23 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_94)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_23
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_23_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_38 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_94)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_38
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_38_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_7) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_8 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_97)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_8
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_8_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_97)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_8_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_8)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_7));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_24 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_97)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_24
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_24_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_39 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_97)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_39
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_39_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_8) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_9 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_100)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_9
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_9_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_100)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_9_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_9)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_8));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_25 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_100)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_25
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_25_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_40 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_100)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_40
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_40_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_9) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_10 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_103)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_10
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_10_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_103)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_10_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_10)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_9));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_26 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_103)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_26
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_26_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_41 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_103)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_41
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_41_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_10) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_11 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_106)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_11
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_11_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_106)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_11_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_11)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_10));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_27 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_106)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_27
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_27_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_42 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_106)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_42
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_42_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_11) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_12 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_109)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_12
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_12_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_109)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_12_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_12)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_11));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_28 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_109)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_28
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_28_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_43 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_109)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_43
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_43_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_12) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_13 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_112)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_13
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_13_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_112)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_13_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_13)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_12));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_29 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_112)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_29
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_29_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_44 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_112)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_44
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_44_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_13) {
	vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_14 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_115)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_14
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_14_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_115)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_14_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_14)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_13));
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_30 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_115)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_30
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_30_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_45 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_115)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_45
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_45_1);
    }
    if (vlTOPp->CordicRotator__DOT___zz_result_valid_14) {
	vlTOPp->CordicRotator__DOT___zz_result_payload_x_15 
	    = ((0U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_118)
					        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_15
					        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_15_1)
	        : ((2U == (IData)(vlTOPp->x_u)) ? ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_118)
						    ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_15_1
						    : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_15)
		    : vlTOPp->CordicRotator__DOT___zz_result_payload_x_14));
	vlTOPp->CordicRotator__DOT___zz_result_payload_y 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_118)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_y
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_y_1);
	vlTOPp->CordicRotator__DOT___zz_result_payload_z 
	    = ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_118)
	        ? vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_z
	        : vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_z_1);
    }
}

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__6(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_sequent__TOP__6\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CordicRotator__DOT___zz_result_payload_x 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_1;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_2;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_3;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_4 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_4;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_5 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_5;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_6 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_6;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_7 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_7;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_8 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_8;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_9 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_9;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_10 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_10;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_11 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_11;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_12 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_12;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_13 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_13;
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_14 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_payload_x_14;
    vlTOPp->result_payload_x = vlTOPp->CordicRotator__DOT___zz_result_payload_x_15;
    vlTOPp->result_payload_y = vlTOPp->CordicRotator__DOT___zz_result_payload_y;
    vlTOPp->result_payload_z = vlTOPp->CordicRotator__DOT___zz_result_payload_z;
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_32 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_31 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_61);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_32_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_31 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_61);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_33 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_32 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_62);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_33_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_32 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_62);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_34 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_33 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_63);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_34_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_33 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_63);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_35 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_34 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_64);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_35_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_34 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_64);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_36 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_35 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_65);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_36_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_35 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_65);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_37 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_36 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_66);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_37_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_36 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_66);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_38 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_37 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_67);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_38_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_37 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_67);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_39 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_38 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_68);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_39_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_38 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_68);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_40 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_39 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_69);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_40_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_39 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_69);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_41 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_40 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_70);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_41_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_40 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_70);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_42 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_41 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_71);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_42_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_41 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_71);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_43 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_42 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_72);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_43_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_42 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_72);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_44 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_43 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_73);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_44_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_43 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_73);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_45 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_44 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_74);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_45_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_44 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_74);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_z 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_45 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_z_1);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_z_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_45 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_z_1);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_16);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_16);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_17 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_16 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_17_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_16 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x);
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_76 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_46)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_31 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_16 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_2 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_17, 1U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_3 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_17, 1U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_18 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_17 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_1, 1U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_18_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_17 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_1, 1U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_79 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_47)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_32 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_17 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_18, 2U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_18, 2U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_19 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_18 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_2, 2U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_19_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_18 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_2, 2U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_82 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_48)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_33 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_18 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_4 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_19, 3U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_4_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_19, 3U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_20 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_19 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_3, 3U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_20_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_19 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_3, 3U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_85 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_49)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_34 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_19 
				      >> 0x1fU)));
}

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__7(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_sequent__TOP__7\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_5 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_4 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_20, 4U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_5_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_4 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_20, 4U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_21 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_20 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_4, 4U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_21_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_20 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_4, 4U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_88 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_50)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_35 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_20 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_6 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_5 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_21, 5U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_6_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_5 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_21, 5U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_22 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_21 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_5, 5U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_22_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_21 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_5, 5U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_91 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_51)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_36 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_21 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_7 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_6 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_22, 6U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_7_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_6 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_22, 6U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_23 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_22 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_6, 6U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_23_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_22 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_6, 6U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_94 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_52)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_37 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_22 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_8 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_7 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_23, 7U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_8_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_7 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_23, 7U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_24 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_23 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_7, 7U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_24_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_23 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_7, 7U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_97 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_53)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_38 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_23 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_9 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_8 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_24, 8U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_9_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_8 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_24, 8U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_25 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_24 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_8, 8U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_25_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_24 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_8, 8U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_100 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_54)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_39 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_24 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_10 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_9 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_25, 9U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_10_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_9 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_25, 9U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_26 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_25 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_9, 9U));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_26_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_25 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_9, 9U));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_103 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_55)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_40 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_25 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_11 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_10 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_26, 0xaU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_11_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_10 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_26, 0xaU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_27 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_26 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_10, 0xaU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_27_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_26 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_10, 0xaU));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_106 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_56)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_41 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_26 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_12 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_11 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_27, 0xbU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_12_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_11 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_27, 0xbU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_28 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_27 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_11, 0xbU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_28_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_27 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_11, 0xbU));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_109 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_57)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_42 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_27 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_13 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_12 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_28, 0xcU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_13_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_12 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_28, 0xcU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_29 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_28 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_12, 0xcU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_29_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_28 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_12, 0xcU));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_112 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_58)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_43 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_28 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_14 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_13 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_29, 0xdU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_14_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_13 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_29, 0xdU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_30 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_29 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_13, 0xdU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_30_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_29 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_13, 0xdU));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_115 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_59)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_44 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_29 
				      >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_15 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_14 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_30, 0xeU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_15_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_14 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_30, 0xeU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_y 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_30 
	   + VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_14, 0xeU));
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_y_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_30 
	   - VL_SHIFTRS_III(32,32,32, vlTOPp->CordicRotator__DOT___zz_result_payload_x_14, 0xeU));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_118 
	= (1U & ((IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_60)
		  ? (~ (vlTOPp->CordicRotator__DOT___zz_result_payload_x_45 
			>> 0x1fU)) : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_30 
				      >> 0x1fU)));
}

VL_INLINE_OPT void VCordicRotator::_sequent__TOP__10(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_sequent__TOP__10\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CordicRotator__DOT___zz_result_valid = vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid;
    vlTOPp->CordicRotator__DOT___zz_result_valid_1 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_1;
    vlTOPp->CordicRotator__DOT___zz_result_valid_2 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_2;
    vlTOPp->CordicRotator__DOT___zz_result_valid_3 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_3;
    vlTOPp->CordicRotator__DOT___zz_result_valid_4 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_4;
    vlTOPp->CordicRotator__DOT___zz_result_valid_5 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_5;
    vlTOPp->CordicRotator__DOT___zz_result_valid_6 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_6;
    vlTOPp->CordicRotator__DOT___zz_result_valid_7 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_7;
    vlTOPp->CordicRotator__DOT___zz_result_valid_8 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_8;
    vlTOPp->CordicRotator__DOT___zz_result_valid_9 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_9;
    vlTOPp->CordicRotator__DOT___zz_result_valid_10 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_10;
    vlTOPp->CordicRotator__DOT___zz_result_valid_11 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_11;
    vlTOPp->CordicRotator__DOT___zz_result_valid_12 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_12;
    vlTOPp->CordicRotator__DOT___zz_result_valid_13 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_13;
    vlTOPp->CordicRotator__DOT___zz_result_valid_14 
	= vlTOPp->__Vdly__CordicRotator__DOT___zz_result_valid_14;
}

VL_INLINE_OPT void VCordicRotator::_combo__TOP__11(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_combo__TOP__11\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CordicRotator__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
						 & (IData)(vlTOPp->raw_data_ready));
}

void VCordicRotator::_eval(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_eval\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCordicRotator::_change_request(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_change_request\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCordicRotator::_change_request_1(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_change_request_1\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
