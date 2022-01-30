// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VOFDMEqualizer.h for the primary calling header

#include "VOFDMEqualizer.h"    // For This
#include "VOFDMEqualizer__Syms.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__22(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__22\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->OFDMEqualizer__DOT__cnt = vlTOPp->__Vdly__OFDMEqualizer__DOT__cnt;
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

VL_INLINE_OPT void VOFDMEqualizer::_settle__TOP__24(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_settle__TOP__24\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->equalized_data_payload_fragment_cha_i = 
	((IData)(vlTOPp->OFDMEqualizer__DOT__train_finished)
	  ? (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload)
	  : 0U);
    vlTOPp->equalized_data_payload_fragment_cha_q = 
	((IData)(vlTOPp->OFDMEqualizer__DOT__train_finished)
	  ? (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload)
	  : 0U);
}

VL_INLINE_OPT void VOFDMEqualizer::_sequent__TOP__25(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_sequent__TOP__25\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->equalized_data_payload_last = vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16;
}

void VOFDMEqualizer::_eval(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_eval\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__9(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__11(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
	vlTOPp->_sequent__TOP__13(vlSymsp);
	vlTOPp->_sequent__TOP__14(vlSymsp);
	vlTOPp->_sequent__TOP__15(vlSymsp);
	vlTOPp->_sequent__TOP__16(vlSymsp);
	vlTOPp->_sequent__TOP__17(vlSymsp);
	vlTOPp->_sequent__TOP__18(vlSymsp);
	vlTOPp->_sequent__TOP__19(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__21(vlSymsp);
	vlTOPp->_sequent__TOP__22(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__25(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_settle__TOP__24(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VOFDMEqualizer::_change_request(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_change_request\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VOFDMEqualizer::_change_request_1(VOFDMEqualizer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VOFDMEqualizer::_change_request_1\n"); );
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
