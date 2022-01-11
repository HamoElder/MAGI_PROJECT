// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBlockDMACore.h for the primary calling header

#include "VBlockDMACore.h"     // For This
#include "VBlockDMACore__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VBlockDMACore) {
    VBlockDMACore__Syms* __restrict vlSymsp = __VlSymsp = new VBlockDMACore__Syms(this, name());
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VBlockDMACore::__Vconfigure(VBlockDMACore__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VBlockDMACore::~VBlockDMACore() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VBlockDMACore::_settle__TOP__1(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_settle__TOP__1\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axi4Data_ar_valid = 0U;
    vlTOPp->axi4Data_r_ready = 1U;
    vlTOPp->intr_m2s = vlTOPp->m2s_intr_en;
}

void VBlockDMACore::_settle__TOP__5(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_settle__TOP__5\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT___zz_fifo_in_len 
	= (0x3fffU & (((IData)(0x1000U) - (0xfffU & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr))) 
		      >> 2U));
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l75 
	= ((1U & (((IData)(0x40U) + (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr)) 
		  >> 0xcU)) != (1U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
				      >> 0xcU)));
    vlTOPp->m2s_desc_ready = vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready;
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_cch_fire 
	= ((IData)(vlTOPp->m2s_desc_valid) & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready));
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
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full 
	= ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch) 
	   & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy));
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l92 
	= ((0U != vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes) 
	   & (0U != ((((~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)) 
		       & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch)) 
		      << 2U) | (3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value) 
				      - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value))))));
}

void VBlockDMACore::_settle__TOP__8(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_settle__TOP__8\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire 
	= ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid) 
	   & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full)));
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
}

void VBlockDMACore::_settle__TOP__10(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_settle__TOP__10\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:454
    vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_valueNext 
	= (3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value) 
		 + (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement)));
}

void VBlockDMACore::_eval_initial(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_eval_initial\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlockDMACore::final() {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::final\n"); );
    // Variables
    VBlockDMACore__Syms* __restrict vlSymsp = this->__VlSymsp;
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VBlockDMACore::_eval_settle(VBlockDMACore__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_eval_settle\n"); );
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlTOPp->_settle__TOP__10(vlSymsp);
}

void VBlockDMACore::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_ctor_var_reset\n"); );
    // Body
    axi4Data_ar_valid = VL_RAND_RESET_I(1);
    axi4Data_ar_ready = VL_RAND_RESET_I(1);
    axi4Data_ar_payload_addr = VL_RAND_RESET_I(16);
    axi4Data_ar_payload_id = VL_RAND_RESET_I(4);
    axi4Data_ar_payload_len = VL_RAND_RESET_I(8);
    axi4Data_ar_payload_size = VL_RAND_RESET_I(3);
    axi4Data_ar_payload_burst = VL_RAND_RESET_I(2);
    axi4Data_r_valid = VL_RAND_RESET_I(1);
    axi4Data_r_ready = VL_RAND_RESET_I(1);
    axi4Data_r_payload_data = VL_RAND_RESET_I(32);
    axi4Data_r_payload_id = VL_RAND_RESET_I(4);
    axi4Data_r_payload_resp = VL_RAND_RESET_I(2);
    axi4Data_r_payload_last = VL_RAND_RESET_I(1);
    m2s_desc_valid = VL_RAND_RESET_I(1);
    m2s_desc_ready = VL_RAND_RESET_I(1);
    m2s_desc_addr = VL_RAND_RESET_I(16);
    m2s_desc_total_bytes = VL_RAND_RESET_I(30);
    m2s_desc_burst = VL_RAND_RESET_I(2);
    m2s_desc_id = VL_RAND_RESET_I(4);
    m2s_intr_en = VL_RAND_RESET_I(1);
    intr_m2s = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT___zz_fifo_in_len = VL_RAND_RESET_I(14);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state = VL_RAND_RESET_I(2);
    BlockDMACore__DOT__m2s_inst__DOT__cch_ready = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes = VL_RAND_RESET_I(30);
    BlockDMACore__DOT__m2s_inst__DOT__fifo_in_id = VL_RAND_RESET_I(4);
    BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr = VL_RAND_RESET_I(16);
    BlockDMACore__DOT__m2s_inst__DOT__fifo_in_len = VL_RAND_RESET_I(8);
    BlockDMACore__DOT__m2s_inst__DOT__fifo_in_burst = VL_RAND_RESET_I(2);
    BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__dma_cch_fire = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l67 = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l75 = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__when_BlockDMARead_l92 = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state = VL_RAND_RESET_I(2);
    BlockDMACore__DOT__m2s_inst__DOT__m2s_strb = VL_RAND_RESET_I(4);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 = VL_RAND_RESET_Q(33);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_1 = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(2);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value = VL_RAND_RESET_I(2);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(2);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value = VL_RAND_RESET_I(2);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full = VL_RAND_RESET_I(1);
    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
	    BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[__Vi0] = VL_RAND_RESET_Q(33);
    }}
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VBlockDMACore::_configure_coverage(VBlockDMACore__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VBlockDMACore::_configure_coverage\n"); );
}
