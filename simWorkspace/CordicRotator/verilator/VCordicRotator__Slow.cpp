// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCordicRotator.h for the primary calling header

#include "VCordicRotator.h"    // For This
#include "VCordicRotator__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCordicRotator) {
    VCordicRotator__Syms* __restrict vlSymsp = __VlSymsp = new VCordicRotator__Syms(this, name());
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCordicRotator::__Vconfigure(VCordicRotator__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCordicRotator::~VCordicRotator() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VCordicRotator::_initial__TOP__1(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_initial__TOP__1\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:462
    vlTOPp->raw_data_ready = 1U;
}

void VCordicRotator::_settle__TOP__8(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_settle__TOP__8\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->result_valid = vlTOPp->CordicRotator__DOT___zz_result_valid_15;
    vlTOPp->CordicRotator__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
						 & (IData)(vlTOPp->raw_data_ready));
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
}

void VCordicRotator::_settle__TOP__9(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_settle__TOP__9\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void VCordicRotator::_eval_initial(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_eval_initial\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VCordicRotator::final() {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::final\n"); );
    // Variables
    VCordicRotator__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCordicRotator::_eval_settle(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_eval_settle\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__9(vlSymsp);
}

void VCordicRotator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_ctor_var_reset\n"); );
    // Body
    rotate_mode = VL_RAND_RESET_I(1);
    x_u = VL_RAND_RESET_I(2);
    w_en = VL_RAND_RESET_I(1);
    w_addr = VL_RAND_RESET_I(8);
    w_data = VL_RAND_RESET_I(32);
    raw_data_valid = VL_RAND_RESET_I(1);
    raw_data_ready = VL_RAND_RESET_I(1);
    raw_data_payload_x = VL_RAND_RESET_I(32);
    raw_data_payload_y = VL_RAND_RESET_I(32);
    raw_data_payload_z = VL_RAND_RESET_I(32);
    result_valid = VL_RAND_RESET_I(1);
    result_payload_x = VL_RAND_RESET_I(32);
    result_payload_y = VL_RAND_RESET_I(32);
    result_payload_z = VL_RAND_RESET_I(32);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_17 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_17_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_32 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_32_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_2_2 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_2_3 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_18 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_18_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_33 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_33_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_3 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_19 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_19_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_34 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_34_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_4 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_4_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_20 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_20_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_35 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_35_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_5 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_5_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_21 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_21_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_36 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_36_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_6 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_6_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_22 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_22_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_37 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_37_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_7 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_7_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_23 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_23_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_38 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_38_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_8 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_8_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_24 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_24_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_39 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_39_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_9 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_9_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_25 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_25_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_40 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_40_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_10 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_10_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_26 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_26_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_41 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_41_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_11 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_11_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_27 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_27_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_42 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_42_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_12 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_12_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_28 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_28_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_43 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_43_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_13 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_13_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_29 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_29_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_44 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_44_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_14 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_14_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_30 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_30_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_45 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_45_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_15 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_15_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_y = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_y_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_z = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_z_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_15 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_16 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_17 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_18 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_19 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_20 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_21 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_22 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_23 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_24 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_25 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_26 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_27 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_28 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_29 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_30 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_y = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_31 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_32 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_33 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_34 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_35 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_36 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_37 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_38 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_39 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_40 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_41 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_42 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_43 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_44 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_45 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_z = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_valid_15 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_46 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_47 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_48 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_49 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_50 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_51 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_52 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_53 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_54 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_55 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_56 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_57 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_58 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_59 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_60 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_61 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_62 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_63 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_64 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_65 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_66 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_67 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_68 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_69 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_70 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_71 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_72 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_73 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_74 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_z_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_76 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_79 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_82 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_85 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_88 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_91 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_94 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_97 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_100 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_103 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_106 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_109 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_112 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_115 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_118 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_1 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_2 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_3 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_4 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_5 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_6 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_7 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_8 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_9 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_10 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_11 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_12 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_13 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_valid_14 = VL_RAND_RESET_I(1);
    __Vdly__CordicRotator__DOT___zz_result_payload_x = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_7 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_8 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_10 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_11 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_12 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_13 = VL_RAND_RESET_I(32);
    __Vdly__CordicRotator__DOT___zz_result_payload_x_14 = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VCordicRotator::_configure_coverage(VCordicRotator__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_configure_coverage\n"); );
}
