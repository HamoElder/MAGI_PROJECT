// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCordicRotator.h for the primary calling header

#include "VCordicRotator.h"    // For This
#include "VCordicRotator__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VCordicRotator::__Vtable1_CordicRotator__DOT___zz_4[64],1,0);

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

void VCordicRotator::_initial__TOP__3(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_initial__TOP__3\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,287,0,9);
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:86
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x7a7a5f31U;
    __Vtemp1[2U] = 0x656c5f5fU;
    __Vtemp1[3U] = 0x706c6576U;
    __Vtemp1[4U] = 0x765f746fU;
    __Vtemp1[5U] = 0x746f722eU;
    __Vtemp1[6U] = 0x526f7461U;
    __Vtemp1[7U] = 0x72646963U;
    __Vtemp1[8U] = 0x436fU;
    VL_READMEM_W (false,32,16, 0,9, __Vtemp1, vlTOPp->CordicRotator__DOT___zz_1
		  ,0,~0);
}

void VCordicRotator::_settle__TOP__4(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_settle__TOP__4\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->result_payload_x = vlTOPp->CordicRotator__DOT___zz_result_payload_x_4;
    vlTOPp->result_payload_y = vlTOPp->CordicRotator__DOT___zz_result_payload_y;
    vlTOPp->result_payload_z = vlTOPp->CordicRotator__DOT___zz_result_payload_z;
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
	   - vlTOPp->CordicRotator__DOT___zz___05Fzz_1_port1);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
	   + vlTOPp->CordicRotator__DOT___zz___05Fzz_1_port1);
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_5 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->CordicRotator__DOT___zz_result_payload_x_1, (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_regNext));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_9 
	= (1U & ((IData)(vlTOPp->rotate_mode) ? (~ 
						 (vlTOPp->CordicRotator__DOT___zz_result_payload_x_3 
						  >> 0x1fU))
		  : (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
		     >> 0x1fU)));
    vlTOPp->CordicRotator__DOT___zz_result_payload_x_6 
	= VL_SHIFTRS_III(32,32,5, vlTOPp->CordicRotator__DOT___zz_result_payload_x_2, (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x_regNext));
    vlTOPp->result_valid = vlTOPp->CordicRotator__DOT___zz_result_valid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:127
    vlTOPp->CordicRotator__DOT___zz_2 = 0U;
    if ((1U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
	if ((2U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
	    if ((3U != (IData)(vlTOPp->CordicRotator__DOT___zz_3))) {
		vlTOPp->CordicRotator__DOT___zz_2 = 1U;
	    }
	}
    }
    vlTOPp->raw_data_ready = vlTOPp->CordicRotator__DOT___zz_raw_data_ready;
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_5);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_2_1 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_2 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_5);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
	   + vlTOPp->CordicRotator__DOT___zz_result_payload_x_6);
    vlTOPp->CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3 
	= (vlTOPp->CordicRotator__DOT___zz_result_payload_x_1 
	   - vlTOPp->CordicRotator__DOT___zz_result_payload_x_6);
    vlTOPp->CordicRotator__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
						 & (IData)(vlTOPp->raw_data_ready));
}

void VCordicRotator::_settle__TOP__7(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_settle__TOP__7\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:147
    vlTOPp->__Vtableidx1 = (((IData)(vlTOPp->CordicRotator__DOT___zz_2) 
			     << 5U) | (((IData)(vlTOPp->result_valid) 
					<< 4U) | ((
						   ((IData)(vlTOPp->iter_limit) 
						    <= (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x)) 
						   << 3U) 
						  | (((IData)(vlTOPp->CordicRotator__DOT__raw_data_fire) 
						      << 2U) 
						     | (IData)(vlTOPp->CordicRotator__DOT___zz_3)))));
    vlTOPp->CordicRotator__DOT___zz_4 = vlTOPp->__Vtable1_CordicRotator__DOT___zz_4
	[vlTOPp->__Vtableidx1];
}

void VCordicRotator::_eval_initial(VCordicRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_eval_initial\n"); );
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__3(vlSymsp);
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
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__7(vlSymsp);
}

void VCordicRotator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_ctor_var_reset\n"); );
    // Body
    iter_limit = VL_RAND_RESET_I(5);
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
    CordicRotator__DOT___zz___05Fzz_1_port1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_2 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_2_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_3 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x = VL_RAND_RESET_I(5);
    CordicRotator__DOT___zz_result_payload_x_regNext = VL_RAND_RESET_I(5);
    CordicRotator__DOT___zz_result_payload_x_1 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_2 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_3 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_4 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_y = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_z = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_valid = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_result_payload_x_5 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_6 = VL_RAND_RESET_I(32);
    CordicRotator__DOT___zz_result_payload_x_9 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_raw_data_ready = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_2 = VL_RAND_RESET_I(1);
    CordicRotator__DOT___zz_3 = VL_RAND_RESET_I(2);
    CordicRotator__DOT___zz_4 = VL_RAND_RESET_I(2);
    CordicRotator__DOT__raw_data_fire = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
	    CordicRotator__DOT___zz_1[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = VL_RAND_RESET_I(6);
    __Vtable1_CordicRotator__DOT___zz_4[0] = 0U;
    __Vtable1_CordicRotator__DOT___zz_4[1] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[2] = 2U;
    __Vtable1_CordicRotator__DOT___zz_4[3] = 3U;
    __Vtable1_CordicRotator__DOT___zz_4[4] = 0U;
    __Vtable1_CordicRotator__DOT___zz_4[5] = 2U;
    __Vtable1_CordicRotator__DOT___zz_4[6] = 2U;
    __Vtable1_CordicRotator__DOT___zz_4[7] = 3U;
    __Vtable1_CordicRotator__DOT___zz_4[8] = 0U;
    __Vtable1_CordicRotator__DOT___zz_4[9] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[10] = 3U;
    __Vtable1_CordicRotator__DOT___zz_4[11] = 3U;
    __Vtable1_CordicRotator__DOT___zz_4[12] = 0U;
    __Vtable1_CordicRotator__DOT___zz_4[13] = 2U;
    __Vtable1_CordicRotator__DOT___zz_4[14] = 3U;
    __Vtable1_CordicRotator__DOT___zz_4[15] = 3U;
    __Vtable1_CordicRotator__DOT___zz_4[16] = 0U;
    __Vtable1_CordicRotator__DOT___zz_4[17] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[18] = 2U;
    __Vtable1_CordicRotator__DOT___zz_4[19] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[20] = 0U;
    __Vtable1_CordicRotator__DOT___zz_4[21] = 2U;
    __Vtable1_CordicRotator__DOT___zz_4[22] = 2U;
    __Vtable1_CordicRotator__DOT___zz_4[23] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[24] = 0U;
    __Vtable1_CordicRotator__DOT___zz_4[25] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[26] = 3U;
    __Vtable1_CordicRotator__DOT___zz_4[27] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[28] = 0U;
    __Vtable1_CordicRotator__DOT___zz_4[29] = 2U;
    __Vtable1_CordicRotator__DOT___zz_4[30] = 3U;
    __Vtable1_CordicRotator__DOT___zz_4[31] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[32] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[33] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[34] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[35] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[36] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[37] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[38] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[39] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[40] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[41] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[42] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[43] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[44] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[45] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[46] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[47] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[48] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[49] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[50] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[51] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[52] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[53] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[54] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[55] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[56] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[57] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[58] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[59] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[60] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[61] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[62] = 1U;
    __Vtable1_CordicRotator__DOT___zz_4[63] = 1U;
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VCordicRotator::_configure_coverage(VCordicRotator__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCordicRotator::_configure_coverage\n"); );
}
