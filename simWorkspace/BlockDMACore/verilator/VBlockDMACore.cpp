// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlockDMACore.h for the primary calling header

#include "VBlockDMACore.h"     // For This
#include "VBlockDMACore__Syms.h"

//--------------------


void VBlockDMACore::eval() {
    VBlockDMACore__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VBlockDMACore::eval\n"); );
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

void VBlockDMACore::_eval_initial_loop(VBlockDMACore__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VBlockDMACore::_combo__TOP__2(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_combo__TOP__2\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->intr_m2s = vlTOPp->m2s_intr_en;
}

VL_INLINE_OPT void VBlockDMACore::_sequent__TOP__3(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_sequent__TOP__3\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0,1,0);
    VL_SIG8(__Vdlyvset__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0,0,0);
    //char	__VpadToAlign26[6];
    VL_SIG64(__Vdlyvval__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0,32,0);
    // Body
    __Vdlyvset__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:419
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
	= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram
	[vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_valueNext];
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:342
    if ((0U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state))) {
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__m2s_strb 
	    = ((0U == (3U & (IData)(vlTOPp->m2s_desc_addr)))
	        ? 0xfU : ((1U == (3U & (IData)(vlTOPp->m2s_desc_addr)))
			   ? 0xeU : ((2U == (3U & (IData)(vlTOPp->m2s_desc_addr)))
				      ? 0xcU : 8U)));
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:425
    if (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_1) {
	__Vdlyvval__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0 
	    = (((QData)((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_burst)) 
		<< 0x1fU) | (QData)((IData)((0x20000000U 
					     | (((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_len) 
						 << 0x14U) 
						| (((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_id) 
						    << 0x10U) 
						   | (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr)))))));
	__Vdlyvset__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0 = 1U;
	__Vdlyvdim0__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0 
	    = vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value;
    }
    // ALWAYSPOST at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:427
    if (__Vdlyvset__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0) {
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[__Vdlyvdim0__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0] 
	    = __Vdlyvval__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->axi4Data_ar_payload_addr = (0xffffU & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0));
    vlTOPp->axi4Data_ar_payload_id = (0xfU & (IData)(
						     (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
						      >> 0x10U)));
    vlTOPp->axi4Data_ar_payload_len = (0xffU & (IData)(
						       (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
							>> 0x14U)));
    vlTOPp->axi4Data_ar_payload_size = (7U & (IData)(
						     (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
						      >> 0x1cU)));
    vlTOPp->axi4Data_ar_payload_burst = (3U & (IData)(
						      (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
						       >> 0x1fU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:318
    if ((0U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))) {
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_id 
	    = vlTOPp->m2s_desc_id;
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr 
	    = (0xfffcU & (IData)(vlTOPp->m2s_desc_addr));
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_burst 
	    = vlTOPp->m2s_desc_burst;
    } else {
	if ((1U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))) {
	    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_len 
		= (0xffU & ((0x40U >= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes)
			     ? ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l67)
				 ? (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT___zz_fifo_in_len)
				 : (0x3fffffffU & (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes 
						   >> 2U)))
			     : ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l75)
				 ? (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT___zz_fifo_in_len)
				 : 0x10U)));
	}
    }
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT___zz_fifo_in_len 
	= (0x3fffU & (((IData)(0x1000U) - (0xfffU & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr))) 
		      >> 2U));
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l75 
	= ((1U & (((IData)(0x40U) + (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr)) 
		  >> 0xcU)) != (1U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
				      >> 0xcU)));
}

VL_INLINE_OPT void VBlockDMACore::_sequent__TOP__4(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_sequent__TOP__4\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state,1,0);
    VL_SIG8(__Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value,1,0);
    //char	__VpadToAlign62[2];
    VL_SIG(__Vdly__BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes,29,0);
    // Body
    __Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state 
	= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state;
    __Vdly__BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes 
	= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes;
    __Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value 
	= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value;
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:266
    if (vlTOPp->reset) {
	__Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state = 0U;
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready = 0U;
	__Vdly__BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes = 0U;
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid = 0U;
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state = 0U;
    } else {
	if ((0U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))) {
	    __Vdly__BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes 
		= vlTOPp->m2s_desc_total_bytes;
	    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid = 0U;
	    if (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_cch_fire) {
		__Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state = 1U;
		vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready = 0U;
	    } else {
		vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready = 1U;
	    }
	} else {
	    if ((1U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))) {
		if (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire) {
		    __Vdly__BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes 
			= (0x3fffffffU & (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes 
					  - (IData)(0x40U)));
		    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid = 0U;
		    __Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state = 2U;
		} else {
		    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid = 1U;
		}
	    } else {
		if (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l92) {
		    __Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state = 1U;
		}
	    }
	}
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:501
    if (vlTOPp->reset) {
	__Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value = 0U;
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value = 0U;
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy = 0U;
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_io_pop_valid = 0U;
    } else {
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value 
	    = vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_valueNext;
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_io_pop_valid 
	    = ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value));
	if (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire) {
	    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy 
		= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire;
	}
	__Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value 
	    = vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_valueNext;
    }
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state 
	= __Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state;
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes 
	= __Vdly__BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes;
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value 
	= __Vdly__BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value;
    vlTOPp->m2s_desc_ready = vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready;
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l67 
	= ((1U & (((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
		   + vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes) 
		  >> 0xcU)) != (1U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
				      >> 0xcU)));
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:477
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_valueNext 
	= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value;
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch 
	= ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value) 
	   == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value));
}

VL_INLINE_OPT void VBlockDMACore::_combo__TOP__6(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_combo__TOP__6\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_cch_fire 
	= ((IData)(vlTOPp->m2s_desc_valid) & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready));
}

VL_INLINE_OPT void VBlockDMACore::_sequent__TOP__7(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_sequent__TOP__7\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l92 
	= ((0U != vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes) 
	   & (0U != ((((~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)) 
		       & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch)) 
		      << 2U) | (3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value) 
				      - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value))))));
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire 
	= ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid) 
	   & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full)));
}

VL_INLINE_OPT void VBlockDMACore::_sequent__TOP__9(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_sequent__TOP__9\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:431
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire) {
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:438
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire) {
	vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:454
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_valueNext 
	= (3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value) 
		 + (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement)));
}

void VBlockDMACore::_eval(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_eval\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
	 | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VBlockDMACore::_change_request(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_change_request\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBlockDMACore::_change_request_1(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_change_request_1\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
