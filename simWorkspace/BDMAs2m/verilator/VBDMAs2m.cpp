// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBDMAs2m.h for the primary calling header

#include "VBDMAs2m.h"          // For This
#include "VBDMAs2m__Syms.h"

//--------------------


void VBDMAs2m::eval() {
    VBDMAs2m__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VBDMAs2m::eval\n"); );
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

void VBDMAs2m::_eval_initial_loop(VBDMAs2m__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__1(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_sequent__TOP__1\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt = vlTOPp->BDMAs2m__DOT__trans_bytes_cnt;
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len = vlTOPp->BDMAs2m__DOT__s2m_axis_len;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes = vlTOPp->BDMAs2m__DOT__cch_total_bytes;
    vlTOPp->__Vdly__BDMAs2m__DOT__cch_address = vlTOPp->BDMAs2m__DOT__cch_address;
    vlTOPp->__Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:729
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
	= vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram
	[vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:574
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_1) {
	vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 
	    = (3U & vlTOPp->BDMAs2m__DOT__cch_address);
	vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0 
	    = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:574
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1) {
	vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 
	    = (3U & ((IData)(1U) + (~ (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
				       + vlTOPp->BDMAs2m__DOT__cch_address))));
	vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0 
	    = vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:735
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1) {
	vlTOPp->__Vdlyvval__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 
	    = (VL_ULL(0x200000000000) | (((QData)((IData)(vlTOPp->BDMAs2m__DOT__cch_burst_type)) 
					  << 0x2fU) 
					 | (((QData)((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_len)) 
					     << 0x24U) 
					    | (((QData)((IData)(vlTOPp->BDMAs2m__DOT__cch_id)) 
						<< 0x20U) 
					       | (QData)((IData)(
								 (0xfffffffcU 
								  & vlTOPp->BDMAs2m__DOT__cch_address)))))));
	vlTOPp->__Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0 
	    = vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__2(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_sequent__TOP__2\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:737
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0) {
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0] 
	    = vlTOPp->__Vdlyvval__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->dma_aw_payload_addr = (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_aw_payload_id = (0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
						 >> 0x20U)));
    vlTOPp->dma_aw_payload_size = (7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
						 >> 0x2cU)));
    vlTOPp->dma_aw_payload_burst = (3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
						  >> 0x2fU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:435
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
	if (vlTOPp->BDMAs2m__DOT__s2m_cch_fire) {
	    vlTOPp->__Vdly__BDMAs2m__DOT__cch_address 
		= vlTOPp->s2m_cch_payload_desc_start_addr;
	    vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes 
		= vlTOPp->s2m_cch_payload_desc_total_bytes;
	    vlTOPp->BDMAs2m__DOT__cch_burst_type = vlTOPp->s2m_cch_payload_desc_burst;
	    vlTOPp->BDMAs2m__DOT__cch_id = vlTOPp->s2m_cch_payload_desc_id;
	}
    } else {
	if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
	    if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l90)))) {
		if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) {
		    vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes 
			= (0x3fffffffU & (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
					  - vlTOPp->BDMAs2m__DOT__trans_bytes_cnt));
		}
	    }
	    vlTOPp->BDMAs2m__DOT__s2m_aw_len = (0xffU 
						& ((vlTOPp->BDMAs2m__DOT___zz_s2m_aw_len_2 
						    - (IData)(1U)) 
						   >> 2U));
	    vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt 
		= (0x3fffffffU & ((0x40U >= vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l106)
				   ? vlTOPp->BDMAs2m__DOT__cch_total_bytes
				   : vlTOPp->BDMAs2m__DOT___zz_trans_bytes_cnt_4));
	} else {
	    if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
		if ((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l90)))) {
		    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) {
			vlTOPp->__Vdly__BDMAs2m__DOT__cch_address 
			    = (vlTOPp->BDMAs2m__DOT__cch_address 
			       + vlTOPp->BDMAs2m__DOT___zz_cch_address);
			vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes 
			    = (0x3fffffffU & (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
					      - vlTOPp->BDMAs2m__DOT__trans_bytes_cnt));
		    }
		}
		vlTOPp->BDMAs2m__DOT__s2m_aw_len = 
		    (0xffU & ((vlTOPp->BDMAs2m__DOT___zz_s2m_aw_len_2 
			       - (IData)(1U)) >> 2U));
		vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt 
		    = (0x3fffffffU & ((0x40U >= vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l106)
				       ? ((0U != (0xfffffU 
						  & (vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l141_1 
						     >> 0xcU)))
					   ? vlTOPp->BDMAs2m__DOT___zz_trans_bytes_cnt_1
					   : vlTOPp->BDMAs2m__DOT__cch_total_bytes)
				       : ((IData)(vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l153)
					   ? vlTOPp->BDMAs2m__DOT___zz_trans_bytes_cnt_2
					   : vlTOPp->BDMAs2m__DOT___zz_trans_bytes_cnt_4)));
	    }
	}
    }
    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
	if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
	    vlTOPp->BDMAs2m__DOT__bytes_shift = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0;
	    vlTOPp->BDMAs2m__DOT__strb_mask = (0xfU 
					       & ((IData)(0xfU) 
						  << (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0)));
	    vlTOPp->BDMAs2m__DOT__w_residual_strb = 0U;
	    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len 
		= vlTOPp->dma_aw_payload_len;
	}
    } else {
	if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
	    if (vlTOPp->BDMAs2m__DOT__dma_w_fire) {
		vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len 
		    = (0xffU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len) 
				- (IData)(1U)));
	    }
	    if (vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire) {
		vlTOPp->BDMAs2m__DOT__s2m_w_strb = 
		    (0xfU & (IData)(vlTOPp->BDMAs2m__DOT___zz_s2m_w_strb));
		vlTOPp->BDMAs2m__DOT__w_residual_strb 
		    = vlTOPp->s2m_data_stream_payload_keep_;
		vlTOPp->BDMAs2m__DOT__s2m_w_data = (IData)(vlTOPp->BDMAs2m__DOT___zz_s2m_w_data);
		vlTOPp->BDMAs2m__DOT__w_residual_data 
		    = vlTOPp->s2m_data_stream_payload_data;
	    }
	}
    }
    vlTOPp->dma_aw_payload_len = (0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
						   >> 0x24U)));
    vlTOPp->BDMAs2m__DOT__trans_bytes_cnt = vlTOPp->__Vdly__BDMAs2m__DOT__trans_bytes_cnt;
    vlTOPp->BDMAs2m__DOT__cch_address = vlTOPp->__Vdly__BDMAs2m__DOT__cch_address;
    vlTOPp->dma_w_payload_data = vlTOPp->BDMAs2m__DOT__s2m_w_data;
    vlTOPp->BDMAs2m__DOT___zz_cch_address = vlTOPp->BDMAs2m__DOT__trans_bytes_cnt;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:568
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 
	= vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram
	[vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:568
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 
	= vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram
	[vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->BDMAs2m__DOT___zz_trans_bytes_cnt_1 = ((IData)(0x1000U) 
						   - 
						   (0xfffU 
						    & vlTOPp->BDMAs2m__DOT__cch_address));
    vlTOPp->BDMAs2m__DOT___zz_trans_bytes_cnt_2 = (0xfffU 
						   & ((IData)(0x1000U) 
						      - vlTOPp->BDMAs2m__DOT__cch_address));
    vlTOPp->BDMAs2m__DOT___zz_trans_bytes_cnt_4 = ((IData)(0x40U) 
						   - 
						   (3U 
						    & vlTOPp->BDMAs2m__DOT__cch_address));
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l153 = (0U != 
					       (0xfffffU 
						& (((IData)(0x40U) 
						    + 
						    (0xfffU 
						     & vlTOPp->BDMAs2m__DOT__cch_address)) 
						   >> 0xcU)));
    vlTOPp->BDMAs2m__DOT___zz_s2m_aw_len_2 = (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
					      + (3U 
						 & vlTOPp->BDMAs2m__DOT__cch_address));
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:576
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0) {
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0] 
	    = vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram__v0;
    }
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:576
    if (vlTOPp->__Vdlyvset__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0) {
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0] 
	    = vlTOPp->__Vdlyvval__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__3(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_sequent__TOP__3\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec 
	= vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec;
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = vlTOPp->BDMAs2m__DOT__s2m_w_state;
    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = vlTOPp->BDMAs2m__DOT__s2m_cch_state;
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__4(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_sequent__TOP__4\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(__Vdly__BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(__Vdly__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value,2,0);
    //char	__VpadToAlign67[1];
    // Body
    __Vdly__BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    __Vdly__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    __Vdly__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:306
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 0U;
	vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 0U;
	vlTOPp->BDMAs2m__DOT__s2m_aw_valve = 0U;
	vlTOPp->BDMAs2m__DOT__s2m_data_valve = 0U;
	vlTOPp->BDMAs2m__DOT__cch_ready = 0U;
	vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
	vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec = 0U;
	vlTOPp->BDMAs2m__DOT__cycle_finished = 0U;
	vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
	vlTOPp->BDMAs2m__DOT__s2m_b_ready = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
	    if (vlTOPp->BDMAs2m__DOT__s2m_cch_fire) {
		vlTOPp->BDMAs2m__DOT__cch_ready = 0U;
		vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state 
		    = ((0U == (IData)(vlTOPp->s2m_cch_payload_desc_burst))
		        ? 1U : 2U);
	    } else {
		vlTOPp->BDMAs2m__DOT__cch_ready = 1U;
	    }
	} else {
	    if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
		if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) {
		    vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
		} else {
		    if (vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec) {
			vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 1U;
		    }
		}
		if ((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)) {
		    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 3U;
		} else {
		    vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec 
			= (1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1)));
		}
	    } else {
		if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) {
		    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) {
			vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 0U;
		    } else {
			if (vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec) {
			    vlTOPp->BDMAs2m__DOT__s2m_aw_valid = 1U;
			}
		    }
		    if ((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)) {
			vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 3U;
		    } else {
			vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec 
			    = (1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1)));
		    }
		} else {
		    if (vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l165) {
			vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state = 0U;
		    }
		}
	    }
	}
	if (vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l293) {
	    vlTOPp->BDMAs2m__DOT__cycle_finished = 0U;
	} else {
	    if (vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l295) {
		vlTOPp->BDMAs2m__DOT__cycle_finished = 1U;
	    }
	}
	if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
	    if (vlTOPp->BDMAs2m__DOT__dma_aw_fire_2) {
		vlTOPp->BDMAs2m__DOT__s2m_aw_valve = 0U;
		vlTOPp->BDMAs2m__DOT__s2m_data_valve = 1U;
		vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 1U;
	    } else {
		vlTOPp->BDMAs2m__DOT__s2m_aw_valve = 1U;
		vlTOPp->BDMAs2m__DOT__s2m_data_valve = 0U;
	    }
	    vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
	    vlTOPp->BDMAs2m__DOT__s2m_b_ready = 0U;
	} else {
	    if ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
		if (vlTOPp->BDMAs2m__DOT__dma_w_fire) {
		    if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))) {
			vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 2U;
			vlTOPp->BDMAs2m__DOT__s2m_b_ready = 1U;
		    }
		}
		if (vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire) {
		    if (((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len)) 
			 & (IData)(vlTOPp->s2m_data_stream_valid))) {
			vlTOPp->BDMAs2m__DOT__s2m_data_valve = 0U;
		    } else {
			if ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))) {
			    vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
			    vlTOPp->BDMAs2m__DOT__s2m_data_valve = 0U;
			} else {
			    vlTOPp->BDMAs2m__DOT__s2m_w_valid = 1U;
			}
		    }
		} else {
		    vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
		}
	    } else {
		if ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))) {
		    if (((IData)(vlTOPp->dma_b_valid) 
			 & (IData)(vlTOPp->dma_b_ready))) {
			vlTOPp->BDMAs2m__DOT__s2m_b_ready = 0U;
			vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 0U;
		    }
		} else {
		    if ((((IData)(vlTOPp->s2m_data_stream_valid) 
			  & (IData)(vlTOPp->s2m_data_stream_ready)) 
			 & (IData)(vlTOPp->s2m_data_stream_payload_last))) {
			vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state = 0U;
		    }
		    vlTOPp->BDMAs2m__DOT__s2m_w_valid = 0U;
		}
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:645
    if (vlTOPp->reset) {
	__Vdly__BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value = 0U;
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value = 0U;
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy = 0U;
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid = 0U;
    } else {
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value 
	    = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext;
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) 
	     != (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping))) {
	    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy 
		= vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing;
	}
	__Vdly__BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
	    = vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:645
    if (vlTOPp->reset) {
	__Vdly__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value = 0U;
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value = 0U;
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = 0U;
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid = 0U;
    } else {
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value 
	    = vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext;
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) 
	     != (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping))) {
	    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy 
		= vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing;
	}
	__Vdly__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
	    = vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:811
    if (vlTOPp->reset) {
	__Vdly__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value = 0U;
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value = 0U;
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy = 0U;
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid = 0U;
    } else {
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value 
	    = vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext;
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) 
	     != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))) {
	    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy 
		= vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1;
	}
	__Vdly__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value 
	    = vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext;
    }
    vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_aw_halt_exec;
    vlTOPp->BDMAs2m__DOT__s2m_w_state = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_w_state;
    vlTOPp->BDMAs2m__DOT__s2m_cch_state = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_cch_state;
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
	= __Vdly__BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
	= __Vdly__BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value 
	= __Vdly__BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value;
    vlTOPp->dma_b_ready = vlTOPp->BDMAs2m__DOT__s2m_b_ready;
    vlTOPp->s2m_intr = vlTOPp->BDMAs2m__DOT__cycle_finished;
    vlTOPp->s2m_cch_ready = vlTOPp->BDMAs2m__DOT__cch_ready;
    vlTOPp->dma_w_valid = vlTOPp->BDMAs2m__DOT__s2m_w_valid;
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l293 = (0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:241
    vlTOPp->__Vtableidx1 = vlTOPp->BDMAs2m__DOT__s2m_cch_state;
    vlTOPp->BDMAs2m__DOT__s2m_cch_state_string[0U] 
	= vlTOPp->__Vtable1_BDMAs2m__DOT__s2m_cch_state_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->BDMAs2m__DOT__s2m_cch_state_string[1U] 
	= vlTOPp->__Vtable1_BDMAs2m__DOT__s2m_cch_state_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->BDMAs2m__DOT__s2m_cch_state_string[2U] 
	= vlTOPp->__Vtable1_BDMAs2m__DOT__s2m_cch_state_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value));
}

VL_INLINE_OPT void VBDMAs2m::_combo__TOP__6(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_combo__TOP__6\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT___zz_s2m_w_strb = (0xffU & 
					    ((((IData)(vlTOPp->BDMAs2m__DOT__w_residual_strb) 
					       << 4U) 
					      | (IData)(vlTOPp->s2m_data_stream_payload_keep_)) 
					     >> (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift)));
    vlTOPp->BDMAs2m__DOT___zz_s2m_w_data = ((((QData)((IData)(vlTOPp->BDMAs2m__DOT__w_residual_data)) 
					      << 0x20U) 
					     | (QData)((IData)(vlTOPp->s2m_data_stream_payload_data))) 
					    >> (IData)(vlTOPp->BDMAs2m__DOT__bytes_shift));
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l165 = ((IData)(vlTOPp->s2m_reset) 
					       & (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished));
    vlTOPp->s2m_data_stream_ready = ((IData)(vlTOPp->dma_w_ready) 
				     & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_valve));
    vlTOPp->BDMAs2m__DOT__s2m_cch_fire = ((IData)(vlTOPp->s2m_cch_valid) 
					  & (IData)(vlTOPp->s2m_cch_ready));
    vlTOPp->BDMAs2m__DOT__dma_w_fire = ((IData)(vlTOPp->dma_w_valid) 
					& (IData)(vlTOPp->dma_w_ready));
    vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire = ((IData)(vlTOPp->s2m_data_stream_valid) 
						  & (IData)(vlTOPp->s2m_data_stream_ready));
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__7(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_sequent__TOP__7\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT__s2m_axis_len = vlTOPp->__Vdly__BDMAs2m__DOT__s2m_axis_len;
    vlTOPp->BDMAs2m__DOT__cch_total_bytes = vlTOPp->__Vdly__BDMAs2m__DOT__cch_total_bytes;
    vlTOPp->dma_w_payload_last = (0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len));
    vlTOPp->dma_w_payload_strb = ((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))
				   ? ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask) 
				      & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_strb))
				   : (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_strb));
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l90 = (0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes);
    vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l106 = (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
						   + 
						   (3U 
						    & vlTOPp->BDMAs2m__DOT__cch_address));
    vlTOPp->BDMAs2m__DOT___zz_when_BDMAs2m_l141_1 = 
	((0xfffU & vlTOPp->BDMAs2m__DOT__cch_address) 
	 + (0xfffU & vlTOPp->BDMAs2m__DOT__cch_total_bytes));
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__8(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_sequent__TOP__8\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing 
	= ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
	   & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing 
	= ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
	   & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1 
	= ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
	   & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)));
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full))))));
}

VL_INLINE_OPT void VBDMAs2m::_sequent__TOP__10(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_sequent__TOP__10\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:580
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:587
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:580
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:587
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:741
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) {
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:748
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) {
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->BDMAs2m__DOT__when_BDMAs2m_l295 = (((0U 
						 == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
						& (3U 
						   == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) 
					       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid)));
    vlTOPp->dma_aw_valid = ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid) 
			    & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:603
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
		 + (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:603
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
		 + (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:764
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
		 + (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VBDMAs2m::_combo__TOP__11(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_combo__TOP__11\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping 
	= ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid) 
	   & ((IData)(vlTOPp->dma_aw_ready) & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve)));
    vlTOPp->BDMAs2m__DOT__dma_aw_fire_2 = ((IData)(vlTOPp->dma_aw_valid) 
					   & (IData)(vlTOPp->dma_aw_ready));
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping 
	= (((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
		& (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
	    & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
		  & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full))))) 
	   & ((IData)(vlTOPp->dma_aw_valid) & (IData)(vlTOPp->dma_aw_ready)));
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping 
	= (((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
		& (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
	    & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
		  & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full))))) 
	   & ((IData)(vlTOPp->dma_aw_valid) & (IData)(vlTOPp->dma_aw_ready)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:771
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping) {
	vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VBDMAs2m::_combo__TOP__13(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_combo__TOP__13\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:610
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping) {
	vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:610
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping) {
	vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:787
    vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
		 + (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:626
    vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
		 + (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:626
    vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
		 + (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
}

void VBDMAs2m::_eval(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_eval\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    vlTOPp->_combo__TOP__13(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VBDMAs2m::_change_request(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_change_request\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBDMAs2m::_change_request_1(VBDMAs2m__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAs2m::_change_request_1\n"); );
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
