// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBDMAm2s.h for the primary calling header

#include "VBDMAm2s.h"          // For This
#include "VBDMAm2s__Syms.h"

//--------------------


void VBDMAm2s::eval() {
    VBDMAm2s__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VBDMAm2s::eval\n"); );
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

void VBDMAm2s::_eval_initial_loop(VBDMAm2s__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__1(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_sequent__TOP__1\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_axis_len = vlTOPp->BDMAm2s__DOT__m2s_axis_len;
    vlTOPp->__Vdly__BDMAm2s__DOT__trans_bytes_cnt = vlTOPp->BDMAm2s__DOT__trans_bytes_cnt;
    vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes = vlTOPp->BDMAm2s__DOT__cch_total_bytes;
    vlTOPp->__Vdly__BDMAm2s__DOT__cch_address = vlTOPp->BDMAm2s__DOT__cch_address;
    vlTOPp->__Vdlyvset__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:718
    if (vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_1) {
	vlTOPp->__Vdlyvval__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0 
	    = (3U & vlTOPp->BDMAm2s__DOT__cch_address);
	vlTOPp->__Vdlyvset__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0 
	    = vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:718
    if (vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_1) {
	vlTOPp->__Vdlyvval__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0 
	    = (3U & ((IData)(1U) + (~ (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
				       + vlTOPp->BDMAm2s__DOT__cch_address))));
	vlTOPp->__Vdlyvset__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0 
	    = vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__2(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_sequent__TOP__2\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0,2,0);
    //char	__VpadToAlign25[7];
    VL_SIG64(__Vdlyvval__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0,48,0);
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:879
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1) {
	__Vdlyvval__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 
	    = (VL_ULL(0x200000000000) | (((QData)((IData)(vlTOPp->BDMAm2s__DOT__cch_burst_type)) 
					  << 0x2fU) 
					 | (((QData)((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_len)) 
					     << 0x24U) 
					    | (((QData)((IData)(vlTOPp->BDMAm2s__DOT__cch_id)) 
						<< 0x20U) 
					       | (QData)((IData)(
								 (0xfffffffcU 
								  & vlTOPp->BDMAm2s__DOT__cch_address)))))));
	vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0 
	    = vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:559
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1) {
	vlTOPp->__Vdlyvval__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 
	    = (((QData)((IData)((((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len)) 
				  & (0U == ((((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
					      & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
					     << 3U) 
					    | (7U & 
					       ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
						- (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))))) 
				 & (3U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))))) 
		<< 0x2cU) | (((QData)((IData)(((0U 
						== (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
					        ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
						   & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))
					        : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb)))) 
			      << 0x28U) | (((QData)((IData)(
							    ((0U 
							      == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
							      ? 
							     ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
							      & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))
							      : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb)))) 
					    << 0x24U) 
					   | (((QData)((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_id)) 
					       << 0x20U) 
					      | (QData)((IData)(vlTOPp->dma_r_payload_data))))));
	vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 = 1U;
	vlTOPp->__Vdlyvdim0__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0 
	    = vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:422
    if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
	if (vlTOPp->BDMAm2s__DOT__m2s_cch_fire) {
	    vlTOPp->__Vdly__BDMAm2s__DOT__cch_address 
		= vlTOPp->m2s_cch_payload_desc_start_addr;
	    vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes 
		= vlTOPp->m2s_cch_payload_desc_total_bytes;
	    vlTOPp->BDMAm2s__DOT__cch_burst_type = vlTOPp->m2s_cch_payload_desc_burst;
	    vlTOPp->BDMAm2s__DOT__cch_id = vlTOPp->m2s_cch_payload_desc_id;
	}
    } else {
	if ((1U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
	    if ((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l86)))) {
		if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) {
		    vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes 
			= (0x3fffffffU & (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
					  - vlTOPp->BDMAm2s__DOT__trans_bytes_cnt));
		}
	    }
	    vlTOPp->BDMAm2s__DOT__m2s_ar_len = (0xffU 
						& ((vlTOPp->BDMAm2s__DOT___zz_m2s_ar_len_2 
						    - (IData)(1U)) 
						   >> 2U));
	    vlTOPp->__Vdly__BDMAm2s__DOT__trans_bytes_cnt 
		= (0x3fffffffU & ((0x40U >= vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l102)
				   ? vlTOPp->BDMAm2s__DOT__cch_total_bytes
				   : vlTOPp->BDMAm2s__DOT___zz_trans_bytes_cnt_4));
	} else {
	    if ((2U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
		if ((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l86)))) {
		    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) {
			vlTOPp->__Vdly__BDMAm2s__DOT__cch_address 
			    = (vlTOPp->BDMAm2s__DOT__cch_address 
			       + vlTOPp->BDMAm2s__DOT___zz_cch_address);
			vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes 
			    = (0x3fffffffU & (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
					      - vlTOPp->BDMAm2s__DOT__trans_bytes_cnt));
		    }
		}
		vlTOPp->BDMAm2s__DOT__m2s_ar_len = 
		    (0xffU & ((vlTOPp->BDMAm2s__DOT___zz_m2s_ar_len_2 
			       - (IData)(1U)) >> 2U));
		vlTOPp->__Vdly__BDMAm2s__DOT__trans_bytes_cnt 
		    = (0x3fffffffU & ((0x40U >= vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l102)
				       ? ((0U != (0xfffffU 
						  & (vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l137_1 
						     >> 0xcU)))
					   ? vlTOPp->BDMAm2s__DOT___zz_trans_bytes_cnt_1
					   : vlTOPp->BDMAm2s__DOT__cch_total_bytes)
				       : ((IData)(vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l149)
					   ? vlTOPp->BDMAm2s__DOT___zz_trans_bytes_cnt_2
					   : vlTOPp->BDMAm2s__DOT___zz_trans_bytes_cnt_4)));
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:469
    if (vlTOPp->BDMAm2s__DOT__m2s_r_state) {
	if (vlTOPp->BDMAm2s__DOT__dma_r_fire) {
	    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_axis_len 
		= (0xffU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len) 
			    - (IData)(1U)));
	    vlTOPp->BDMAm2s__DOT__m2s_axis_keep = 0xfU;
	    vlTOPp->BDMAm2s__DOT__m2s_axis_strb = 0xfU;
	}
    } else {
	if (vlTOPp->BDMAm2s__DOT__dma_ar_fire_2) {
	    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_axis_len 
		= (0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
				    >> 0x24U)));
	    vlTOPp->BDMAm2s__DOT__m2s_axis_keep = (0xfU 
						   & (0xfU 
						      >> (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0)));
	    vlTOPp->BDMAm2s__DOT__m2s_axis_strb = (0xfU 
						   & (0xfU 
						      >> (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0)));
	    vlTOPp->BDMAm2s__DOT__keep_strb_mask = 
		(0xfU & ((IData)(0xfU) << (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0)));
	    vlTOPp->BDMAm2s__DOT__m2s_axis_id = (0xfU 
						 & (IData)(
							   (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
							    >> 0x20U)));
	}
    }
    vlTOPp->BDMAm2s__DOT__trans_bytes_cnt = vlTOPp->__Vdly__BDMAm2s__DOT__trans_bytes_cnt;
    vlTOPp->BDMAm2s__DOT__cch_address = vlTOPp->__Vdly__BDMAm2s__DOT__cch_address;
    vlTOPp->BDMAm2s__DOT___zz_cch_address = vlTOPp->BDMAm2s__DOT__trans_bytes_cnt;
    vlTOPp->BDMAm2s__DOT___zz_trans_bytes_cnt_1 = ((IData)(0x1000U) 
						   - 
						   (0xfffU 
						    & vlTOPp->BDMAm2s__DOT__cch_address));
    vlTOPp->BDMAm2s__DOT___zz_trans_bytes_cnt_2 = (0xfffU 
						   & ((IData)(0x1000U) 
						      - vlTOPp->BDMAm2s__DOT__cch_address));
    vlTOPp->BDMAm2s__DOT___zz_trans_bytes_cnt_4 = ((IData)(0x40U) 
						   - 
						   (3U 
						    & vlTOPp->BDMAm2s__DOT__cch_address));
    vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l149 = (0U != 
					       (0xfffffU 
						& (((IData)(0x40U) 
						    + 
						    (0xfffU 
						     & vlTOPp->BDMAm2s__DOT__cch_address)) 
						   >> 0xcU)));
    vlTOPp->BDMAm2s__DOT___zz_m2s_ar_len_2 = (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
					      + (3U 
						 & vlTOPp->BDMAm2s__DOT__cch_address));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:712
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0 
	= vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram
	[vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:712
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0 
	= vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram
	[vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:873
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
	= vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram
	[vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext];
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:720
    if (vlTOPp->__Vdlyvset__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0) {
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0] 
	    = vlTOPp->__Vdlyvval__BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram__v0;
    }
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:720
    if (vlTOPp->__Vdlyvset__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0) {
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0] 
	    = vlTOPp->__Vdlyvval__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram__v0;
    }
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:881
    if (vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0) {
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[__Vdlyvdim0__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0] 
	    = __Vdlyvval__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->dma_ar_payload_addr = (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->dma_ar_payload_id = (0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
						 >> 0x20U)));
    vlTOPp->dma_ar_payload_len = (0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
						   >> 0x24U)));
    vlTOPp->dma_ar_payload_size = (7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
						 >> 0x2cU)));
    vlTOPp->dma_ar_payload_burst = (3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
						  >> 0x2fU)));
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__3(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_sequent__TOP__3\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state = vlTOPp->BDMAm2s__DOT__m2s_r_state;
    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec 
	= vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec;
    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = vlTOPp->BDMAm2s__DOT__m2s_cch_state;
    vlTOPp->__Vdly__BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    vlTOPp->__Vdly__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__4(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_sequent__TOP__4\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value,2,0);
    VL_SIG8(__Vdly__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value,4,0);
    //char	__VpadToAlign82[2];
    // Body
    __Vdly__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value;
    __Vdly__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:320
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = 0U;
	vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_ar_valve = 0U;
	vlTOPp->BDMAm2s__DOT__cch_ready = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 0U;
	vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec = 0U;
	vlTOPp->BDMAm2s__DOT__cycle_finished = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_r_valve = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
	    if (vlTOPp->BDMAm2s__DOT__m2s_cch_fire) {
		vlTOPp->BDMAm2s__DOT__cch_ready = 0U;
		vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state 
		    = ((0U == (IData)(vlTOPp->m2s_cch_payload_desc_burst))
		        ? 1U : 2U);
	    } else {
		vlTOPp->BDMAm2s__DOT__cch_ready = 1U;
	    }
	} else {
	    if ((1U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
		if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) {
		    vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 0U;
		} else {
		    if (vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec) {
			vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 1U;
		    }
		}
		if ((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)) {
		    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = 3U;
		} else {
		    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec 
			= (1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1)));
		}
	    } else {
		if ((2U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))) {
		    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) {
			vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 0U;
		    } else {
			if (vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec) {
			    vlTOPp->BDMAm2s__DOT__m2s_ar_valid = 1U;
			}
		    }
		    if ((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)) {
			vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = 3U;
		    } else {
			vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec 
			    = (1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1)));
		    }
		} else {
		    if (vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l161) {
			vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state = 0U;
		    }
		}
	    }
	}
	if (vlTOPp->BDMAm2s__DOT__m2s_r_state) {
	    if (vlTOPp->BDMAm2s__DOT__dma_r_fire) {
		if ((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))) {
		    vlTOPp->BDMAm2s__DOT__m2s_r_valve = 0U;
		    vlTOPp->BDMAm2s__DOT__m2s_ar_valve = 1U;
		    vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state = 0U;
		}
	    }
	} else {
	    if (vlTOPp->BDMAm2s__DOT__dma_ar_fire_2) {
		vlTOPp->BDMAm2s__DOT__m2s_ar_valve = 0U;
		vlTOPp->BDMAm2s__DOT__m2s_r_valve = 1U;
		vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state = 1U;
	    } else {
		vlTOPp->BDMAm2s__DOT__m2s_ar_valve = 1U;
		vlTOPp->BDMAm2s__DOT__m2s_r_valve = 0U;
	    }
	}
	if (vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l249) {
	    vlTOPp->BDMAm2s__DOT__cycle_finished = 0U;
	} else {
	    if (((IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
			  >> 0x2cU)) & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
					& (IData)(vlTOPp->m2s_data_stream_ready)))) {
		vlTOPp->BDMAm2s__DOT__cycle_finished = 1U;
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:789
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value = 0U;
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value = 0U;
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy = 0U;
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid = 0U;
    } else {
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value 
	    = vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext;
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) 
	     != (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping))) {
	    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy 
		= vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing;
	}
	vlTOPp->__Vdly__BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
	    = vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:789
    if (vlTOPp->reset) {
	vlTOPp->__Vdly__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value = 0U;
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value = 0U;
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy = 0U;
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid = 0U;
    } else {
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value 
	    = vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext;
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) 
	     != (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping))) {
	    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy 
		= vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing;
	}
	vlTOPp->__Vdly__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
	    = vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:635
    if (vlTOPp->reset) {
	__Vdly__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid = 0U;
    } else {
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value 
	    = vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext;
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
	     != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))) {
	    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy 
		= vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing;
	}
	__Vdly__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value 
	    = vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:955
    if (vlTOPp->reset) {
	__Vdly__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy = 0U;
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid = 0U;
    } else {
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value 
	    = vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext;
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value));
	if (((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) 
	     != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))) {
	    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy 
		= vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1;
	}
	__Vdly__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value 
	    = vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext;
    }
    vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec = vlTOPp->__Vdly__BDMAm2s__DOT__m2s_ar_halt_exec;
    vlTOPp->BDMAm2s__DOT__m2s_r_state = vlTOPp->__Vdly__BDMAm2s__DOT__m2s_r_state;
    vlTOPp->BDMAm2s__DOT__m2s_cch_state = vlTOPp->__Vdly__BDMAm2s__DOT__m2s_cch_state;
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->__Vdly__BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value;
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->__Vdly__BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value;
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value 
	= __Vdly__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value;
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value 
	= __Vdly__BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value;
    vlTOPp->m2s_intr = vlTOPp->BDMAm2s__DOT__cycle_finished;
    vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l249 = (0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:257
    vlTOPp->__Vtableidx1 = vlTOPp->BDMAm2s__DOT__m2s_cch_state;
    vlTOPp->BDMAm2s__DOT__m2s_cch_state_string[0U] 
	= vlTOPp->__Vtable1_BDMAm2s__DOT__m2s_cch_state_string
	[vlTOPp->__Vtableidx1][0U];
    vlTOPp->BDMAm2s__DOT__m2s_cch_state_string[1U] 
	= vlTOPp->__Vtable1_BDMAm2s__DOT__m2s_cch_state_string
	[vlTOPp->__Vtableidx1][1U];
    vlTOPp->BDMAm2s__DOT__m2s_cch_state_string[2U] 
	= vlTOPp->__Vtable1_BDMAm2s__DOT__m2s_cch_state_string
	[vlTOPp->__Vtableidx1][2U];
    vlTOPp->m2s_cch_ready = vlTOPp->BDMAm2s__DOT__cch_ready;
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value));
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__6(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_sequent__TOP__6\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__m2s_axis_len = vlTOPp->__Vdly__BDMAm2s__DOT__m2s_axis_len;
    vlTOPp->BDMAm2s__DOT__cch_total_bytes = vlTOPp->__Vdly__BDMAm2s__DOT__cch_total_bytes;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:553
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
	= vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram
	[vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext];
    vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l86 = (0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes);
    vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l102 = (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
						   + 
						   (3U 
						    & vlTOPp->BDMAm2s__DOT__cch_address));
    vlTOPp->BDMAm2s__DOT___zz_when_BDMAm2s_l137_1 = 
	((0xfffU & vlTOPp->BDMAm2s__DOT__cch_address) 
	 + (0xfffU & vlTOPp->BDMAm2s__DOT__cch_total_bytes));
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:561
    if (vlTOPp->__Vdlyvset__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0) {
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0] 
	    = vlTOPp->__Vdlyvval__BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->m2s_data_stream_payload_data = (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0);
    vlTOPp->m2s_data_stream_payload_id = (0xfU & (IData)(
							 (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
							  >> 0x20U)));
    vlTOPp->m2s_data_stream_payload_strb = (0xfU & (IData)(
							   (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
							    >> 0x24U)));
    vlTOPp->m2s_data_stream_payload_keep_ = (0xfU & (IData)(
							    (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
							     >> 0x28U)));
    vlTOPp->m2s_data_stream_payload_last = (1U & (IData)(
							 (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
							  >> 0x2cU)));
}

VL_INLINE_OPT void VBDMAm2s::_combo__TOP__7(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_combo__TOP__7\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__when_BDMAm2s_l161 = ((IData)(vlTOPp->m2s_reset) 
					       & (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished));
    vlTOPp->BDMAm2s__DOT__m2s_cch_fire = ((IData)(vlTOPp->m2s_cch_valid) 
					  & (IData)(vlTOPp->m2s_cch_ready));
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__8(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_sequent__TOP__8\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
	   & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
	   & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full)));
    vlTOPp->dma_r_ready = ((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)) 
			   & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full))))));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
	   & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid 
	= (1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full))))));
}

VL_INLINE_OPT void VBDMAm2s::_combo__TOP__10(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_combo__TOP__10\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing 
	= (((IData)(vlTOPp->dma_r_valid) & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve)) 
	   & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)));
    vlTOPp->BDMAm2s__DOT__dma_r_fire = ((IData)(vlTOPp->dma_r_valid) 
					& (IData)(vlTOPp->dma_r_ready));
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
	   & (IData)(vlTOPp->m2s_data_stream_ready));
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping 
	= ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid) 
	   & ((IData)(vlTOPp->dma_ar_ready) & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valve)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:565
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:572
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:595
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping) {
	vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:915
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping) {
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VBDMAm2s::_sequent__TOP__11(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_sequent__TOP__11\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:724
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:731
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:724
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:731
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) {
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->m2s_data_stream_valid = vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:885
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) {
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:892
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) {
	vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->dma_ar_valid = ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid) 
			    & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valve));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:747
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
		 + (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:747
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
		 + (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:908
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
		 + (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VBDMAm2s::_combo__TOP__13(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_combo__TOP__13\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BDMAm2s__DOT__dma_ar_fire_2 = ((IData)(vlTOPp->dma_ar_valid) 
					   & (IData)(vlTOPp->dma_ar_ready));
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping 
	= (((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
		& (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
	    & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
		  & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full))))) 
	   & ((IData)(vlTOPp->dma_ar_valid) & (IData)(vlTOPp->dma_ar_ready)));
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping 
	= (((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
		& (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
	    & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
		  & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full))))) 
	   & ((IData)(vlTOPp->dma_ar_valid) & (IData)(vlTOPp->dma_ar_ready)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:588
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext 
	= (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
		    + (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:611
    vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext 
	= (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
		    + (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:931
    vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
		 + (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:754
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping) {
	vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:754
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping) {
	vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VBDMAm2s::_combo__TOP__15(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_combo__TOP__15\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:770
    vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
		 + (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:770
    vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext 
	= (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
		 + (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement)));
}

void VBDMAm2s::_eval(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_eval\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__11(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__13(vlSymsp);
    vlTOPp->_combo__TOP__15(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VBDMAm2s::_change_request(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_change_request\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBDMAm2s::_change_request_1(VBDMAm2s__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBDMAm2s::_change_request_1\n"); );
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
