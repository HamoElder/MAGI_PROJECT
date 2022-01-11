// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlockDMACore__Syms.h"


//======================

void VBlockDMACore::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBlockDMACore* t=(VBlockDMACore*)userthis;
    VBlockDMACore__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VBlockDMACore::traceChgThis(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 1U) | (vlTOPp->__Vm_traceActivity 
					  >> 2U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBlockDMACore::traceChgThis__2(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(((((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch)) 
			      << 2U) | (3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value) 
					      - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value))))),3);
	vcdp->chgBus  (c+2,(((((~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch)) 
			      << 2U) | (3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value) 
					      - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value))))),3);
	vcdp->chgBit  (c+3,(((0U != vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes) 
			     & (0U != ((((~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)) 
					 & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch)) 
					<< 2U) | (3U 
						  & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value) 
						     - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value))))))));
	vcdp->chgBus  (c+4,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_valueNext),2);
	vcdp->chgBit  (c+5,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+6,(((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch) 
			     & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)))));
    }
}

void VBlockDMACore::traceChgThis__3(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+7,((1U & ((~ ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch) 
				       & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)))) 
				   & (~ ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_io_pop_valid) 
					 & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full))))))));
	vcdp->chgBit  (c+8,(((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid) 
			     & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+9,(((3U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value)) 
			     & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement))));
    }
}

void VBlockDMACore::traceChgThis__4(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+10,((1U & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+11,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+12,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_valueNext),2);
	vcdp->chgBit  (c+13,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire));
	vcdp->chgBit  (c+14,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full));
    }
}

void VBlockDMACore::traceChgThis__5(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+15,((0xffffU & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0))),16);
	vcdp->chgBus  (c+16,((0xfU & (IData)((vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
					      >> 0x10U)))),4);
	vcdp->chgBus  (c+17,((0xffU & (IData)((vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
					       >> 0x14U)))),8);
	vcdp->chgBus  (c+18,((7U & (IData)((vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
					    >> 0x1cU)))),3);
	vcdp->chgBus  (c+19,((3U & (IData)((vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
					    >> 0x1fU)))),2);
	vcdp->chgBus  (c+20,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_id),4);
	vcdp->chgBus  (c+21,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr),16);
	vcdp->chgBus  (c+22,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_len),8);
	vcdp->chgBus  (c+23,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_burst),2);
	vcdp->chgBit  (c+24,(((1U & (((IData)(0x40U) 
				      + (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr)) 
				     >> 0xcU)) != (1U 
						   & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
						      >> 0xcU)))));
	vcdp->chgBus  (c+25,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__m2s_strb),4);
	vcdp->chgQuad (c+26,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[0]),33);
	vcdp->chgQuad (c+28,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[1]),33);
	vcdp->chgQuad (c+30,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[2]),33);
	vcdp->chgQuad (c+32,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[3]),33);
    }
}

void VBlockDMACore::traceChgThis__6(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+34,(((1U & (((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
				      + vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes) 
				     >> 0xcU)) != (1U 
						   & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
						      >> 0xcU)))));
    }
}

void VBlockDMACore::traceChgThis__7(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+35,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready));
	vcdp->chgBus  (c+36,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state),2);
	vcdp->chgBus  (c+37,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes),30);
	vcdp->chgBit  (c+38,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid));
	vcdp->chgBit  (c+39,((0x40U >= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes)));
	vcdp->chgBus  (c+40,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state),2);
	vcdp->chgBus  (c+41,(((0U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))
			       ? 0x49444c45U : ((1U 
						 == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))
						 ? 0x52455120U
						 : 
						((2U 
						  == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))
						  ? 0x48414c54U
						  : 0x3f3f3f3fU)))),32);
	vcdp->chgQuad (c+42,(((2U & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state))
			       ? ((1U & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state))
				   ? VL_ULL(0x46494e495348)
				   : VL_ULL(0x425552535420))
			       : ((1U & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state))
				   ? VL_ULL(0x524551202020)
				   : VL_ULL(0x49444c452020)))),48);
	vcdp->chgBus  (c+44,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value),2);
	vcdp->chgBit  (c+45,((3U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+46,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value),2);
	vcdp->chgBit  (c+47,((3U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+48,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+49,((3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value) 
				    - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value)))),2);
    }
}

void VBlockDMACore::traceChgThis__8(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+50,(vlTOPp->axi4Data_ar_valid));
	vcdp->chgBit  (c+51,(vlTOPp->axi4Data_ar_ready));
	vcdp->chgBus  (c+52,(vlTOPp->axi4Data_ar_payload_addr),16);
	vcdp->chgBus  (c+53,(vlTOPp->axi4Data_ar_payload_id),4);
	vcdp->chgBus  (c+54,(vlTOPp->axi4Data_ar_payload_len),8);
	vcdp->chgBus  (c+55,(vlTOPp->axi4Data_ar_payload_size),3);
	vcdp->chgBus  (c+56,(vlTOPp->axi4Data_ar_payload_burst),2);
	vcdp->chgBit  (c+57,(vlTOPp->axi4Data_r_valid));
	vcdp->chgBit  (c+58,(vlTOPp->axi4Data_r_ready));
	vcdp->chgBus  (c+59,(vlTOPp->axi4Data_r_payload_data),32);
	vcdp->chgBus  (c+60,(vlTOPp->axi4Data_r_payload_id),4);
	vcdp->chgBus  (c+61,(vlTOPp->axi4Data_r_payload_resp),2);
	vcdp->chgBit  (c+62,(vlTOPp->axi4Data_r_payload_last));
	vcdp->chgBit  (c+63,(vlTOPp->m2s_desc_valid));
	vcdp->chgBit  (c+64,(vlTOPp->m2s_desc_ready));
	vcdp->chgBus  (c+65,(vlTOPp->m2s_desc_addr),16);
	vcdp->chgBus  (c+66,(vlTOPp->m2s_desc_total_bytes),30);
	vcdp->chgBus  (c+67,(vlTOPp->m2s_desc_burst),2);
	vcdp->chgBus  (c+68,(vlTOPp->m2s_desc_id),4);
	vcdp->chgBit  (c+69,(vlTOPp->m2s_intr_en));
	vcdp->chgBit  (c+70,(vlTOPp->intr_m2s));
	vcdp->chgBit  (c+71,(vlTOPp->clk));
	vcdp->chgBit  (c+72,(vlTOPp->reset));
	vcdp->chgBit  (c+73,(((IData)(vlTOPp->m2s_desc_valid) 
			      & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready))));
    }
}
