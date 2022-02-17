// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBDMAs2m__Syms.h"


//======================

void VBDMAs2m::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBDMAs2m* t=(VBDMAs2m*)userthis;
    VBDMAs2m__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VBDMAs2m::traceChgThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 5U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 3U)) | (vlTOPp->__Vm_traceActivity 
					      >> 5U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 1U) | (vlTOPp->__Vm_traceActivity 
					  >> 4U))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBDMAs2m::traceChgThis__2(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(((((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
					      - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->chgBus  (c+2,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
					      - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->chgBus  (c+3,(((((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
					      - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->chgBus  (c+4,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
					      - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->chgBus  (c+5,(((((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
					      - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->chgBus  (c+6,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
					      - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->chgArray(c+7,(vlTOPp->BDMAs2m__DOT__s2m_cch_state_string),72);
	vcdp->chgBit  (c+10,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+11,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+12,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+13,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+14,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+15,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
    }
}

void VBDMAs2m::traceChgThis__3(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+16,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+17,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+18,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VBDMAs2m::traceChgThis__4(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+19,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
					& (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
				    & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
					  & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full))))))));
	vcdp->chgBit  (c+20,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
					& (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
				    & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
					  & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full))))))));
	vcdp->chgBit  (c+21,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+22,((((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
			       & (3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid)))));
	vcdp->chgBit  (c+23,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+24,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+25,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
    }
}

void VBDMAs2m::traceChgThis__5(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+26,(vlTOPp->BDMAs2m__DOT__s2m_cch_fire));
	vcdp->chgBit  (c+27,(vlTOPp->BDMAs2m__DOT__dma_aw_fire_2));
	vcdp->chgBit  (c+28,(vlTOPp->BDMAs2m__DOT__dma_w_fire));
	vcdp->chgBit  (c+29,(vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire));
	vcdp->chgBit  (c+30,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+31,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+32,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+33,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+34,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+35,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+36,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+37,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+38,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping));
    }
}

void VBDMAs2m::traceChgThis__6(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+39,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) 
			      != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))));
	vcdp->chgBit  (c+40,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) 
			      != (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping))));
	vcdp->chgBit  (c+41,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) 
			      != (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping))));
    }
}

void VBDMAs2m::traceChgThis__7(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+42,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+43,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid));
	vcdp->chgBit  (c+44,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+45,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+46,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1));
	vcdp->chgBit  (c+47,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+48,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->chgBit  (c+49,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full));
	vcdp->chgBit  (c+50,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+51,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->chgBit  (c+52,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing));
	vcdp->chgBit  (c+53,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full));
	vcdp->chgBit  (c+54,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+55,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->chgBit  (c+56,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing));
	vcdp->chgBit  (c+57,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full));
    }
}

void VBDMAs2m::traceChgThis__8(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+58,((3U & vlTOPp->BDMAs2m__DOT__cch_address)),2);
	vcdp->chgBus  (c+59,((3U & ((IData)(1U) + (~ 
						   (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
						    + vlTOPp->BDMAs2m__DOT__cch_address))))),2);
	vcdp->chgBus  (c+60,((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->chgBus  (c+61,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					      >> 0x20U)))),4);
	vcdp->chgBus  (c+62,((0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					       >> 0x24U)))),8);
	vcdp->chgBus  (c+63,((7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					    >> 0x2cU)))),3);
	vcdp->chgBus  (c+64,((3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					    >> 0x2fU)))),2);
	vcdp->chgBus  (c+65,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->chgBus  (c+66,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->chgBus  (c+67,(vlTOPp->BDMAs2m__DOT__cch_address),32);
	vcdp->chgBus  (c+68,(vlTOPp->BDMAs2m__DOT__cch_burst_type),2);
	vcdp->chgBus  (c+69,(vlTOPp->BDMAs2m__DOT__cch_id),4);
	vcdp->chgBus  (c+70,(vlTOPp->BDMAs2m__DOT__trans_bytes_cnt),30);
	vcdp->chgBus  (c+71,(vlTOPp->BDMAs2m__DOT__s2m_aw_len),8);
	vcdp->chgBus  (c+72,((0xfffffffcU & vlTOPp->BDMAs2m__DOT__cch_address)),32);
	vcdp->chgBit  (c+73,((0U != (0xfffffU & (((IData)(0x40U) 
						  + 
						  (0xfffU 
						   & vlTOPp->BDMAs2m__DOT__cch_address)) 
						 >> 0xcU)))));
	vcdp->chgBus  (c+74,(vlTOPp->BDMAs2m__DOT__s2m_w_data),32);
	vcdp->chgBus  (c+75,(vlTOPp->BDMAs2m__DOT__s2m_w_strb),4);
	vcdp->chgBus  (c+76,(vlTOPp->BDMAs2m__DOT__w_residual_data),32);
	vcdp->chgBus  (c+77,(vlTOPp->BDMAs2m__DOT__w_residual_strb),4);
	vcdp->chgBus  (c+78,(vlTOPp->BDMAs2m__DOT__strb_mask),4);
	vcdp->chgBus  (c+79,(vlTOPp->BDMAs2m__DOT__bytes_shift),2);
	vcdp->chgQuad (c+80,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
	vcdp->chgQuad (c+82,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
	vcdp->chgQuad (c+84,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
	vcdp->chgQuad (c+86,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
	vcdp->chgQuad (c+88,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
	vcdp->chgQuad (c+90,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
	vcdp->chgQuad (c+92,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
	vcdp->chgQuad (c+94,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
	vcdp->chgBus  (c+96,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
	vcdp->chgBus  (c+97,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
	vcdp->chgBus  (c+98,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
	vcdp->chgBus  (c+99,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
	vcdp->chgBus  (c+100,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
	vcdp->chgBus  (c+101,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
	vcdp->chgBus  (c+102,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
	vcdp->chgBus  (c+103,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
	vcdp->chgBus  (c+104,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
	vcdp->chgBus  (c+105,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
	vcdp->chgBus  (c+106,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
	vcdp->chgBus  (c+107,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
	vcdp->chgBus  (c+108,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
	vcdp->chgBus  (c+109,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
	vcdp->chgBus  (c+110,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
	vcdp->chgBus  (c+111,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
    }
}

void VBDMAs2m::traceChgThis__9(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+112,((0x40U >= (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
					 + (3U & vlTOPp->BDMAs2m__DOT__cch_address)))));
	vcdp->chgBit  (c+113,((0U != (0xfffffU & ((
						   (0xfffU 
						    & vlTOPp->BDMAs2m__DOT__cch_address) 
						   + 
						   (0xfffU 
						    & vlTOPp->BDMAs2m__DOT__cch_total_bytes)) 
						  >> 0xcU)))));
    }
}

void VBDMAs2m::traceChgThis__10(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+114,(vlTOPp->BDMAs2m__DOT__s2m_cch_state),2);
	vcdp->chgBus  (c+115,(vlTOPp->BDMAs2m__DOT__s2m_w_state),2);
	vcdp->chgBit  (c+116,(vlTOPp->BDMAs2m__DOT__s2m_aw_valve));
	vcdp->chgBit  (c+117,(vlTOPp->BDMAs2m__DOT__s2m_data_valve));
	vcdp->chgBit  (c+118,(vlTOPp->BDMAs2m__DOT__cch_ready));
	vcdp->chgBit  (c+119,(vlTOPp->BDMAs2m__DOT__s2m_aw_valid));
	vcdp->chgBit  (c+120,(vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec));
	vcdp->chgBit  (c+121,(vlTOPp->BDMAs2m__DOT__cycle_finished));
	vcdp->chgBit  (c+122,(vlTOPp->BDMAs2m__DOT__s2m_w_valid));
	vcdp->chgBit  (c+123,(vlTOPp->BDMAs2m__DOT__s2m_b_ready));
	vcdp->chgBit  (c+124,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))));
	vcdp->chgQuad (c+125,(((2U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
			        ? ((1U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				    ? VL_ULL(0x44524f5020)
				    : VL_ULL(0x5245535020))
			        : ((1U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				    ? VL_ULL(0x4255525354)
				    : VL_ULL(0x49444c4520)))),40);
	vcdp->chgBus  (c+127,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+128,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+129,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+130,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+131,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+132,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->chgBus  (c+133,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+134,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+135,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+136,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+137,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+138,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->chgBus  (c+139,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+140,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+141,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+142,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+143,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+144,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
    }
}

void VBDMAs2m::traceChgThis__11(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+145,(vlTOPp->BDMAs2m__DOT__cch_total_bytes),30);
	vcdp->chgBit  (c+146,((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)));
	vcdp->chgBus  (c+147,(vlTOPp->BDMAs2m__DOT__s2m_axis_len),8);
	vcdp->chgBit  (c+148,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))));
    }
}

void VBDMAs2m::traceChgThis__12(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+149,(vlTOPp->dma_aw_valid));
	vcdp->chgBit  (c+150,(vlTOPp->dma_aw_ready));
	vcdp->chgBus  (c+151,(vlTOPp->dma_aw_payload_addr),32);
	vcdp->chgBus  (c+152,(vlTOPp->dma_aw_payload_id),4);
	vcdp->chgBus  (c+153,(vlTOPp->dma_aw_payload_len),8);
	vcdp->chgBus  (c+154,(vlTOPp->dma_aw_payload_size),3);
	vcdp->chgBus  (c+155,(vlTOPp->dma_aw_payload_burst),2);
	vcdp->chgBit  (c+156,(vlTOPp->dma_w_valid));
	vcdp->chgBit  (c+157,(vlTOPp->dma_w_ready));
	vcdp->chgBus  (c+158,(vlTOPp->dma_w_payload_data),32);
	vcdp->chgBus  (c+159,(vlTOPp->dma_w_payload_strb),4);
	vcdp->chgBit  (c+160,(vlTOPp->dma_w_payload_last));
	vcdp->chgBit  (c+161,(vlTOPp->dma_b_valid));
	vcdp->chgBit  (c+162,(vlTOPp->dma_b_ready));
	vcdp->chgBus  (c+163,(vlTOPp->dma_b_payload_id),4);
	vcdp->chgBus  (c+164,(vlTOPp->dma_b_payload_resp),2);
	vcdp->chgBit  (c+165,(vlTOPp->s2m_data_stream_valid));
	vcdp->chgBit  (c+166,(vlTOPp->s2m_data_stream_ready));
	vcdp->chgBus  (c+167,(vlTOPp->s2m_data_stream_payload_data),32);
	vcdp->chgBus  (c+168,(vlTOPp->s2m_data_stream_payload_id),4);
	vcdp->chgBus  (c+169,(vlTOPp->s2m_data_stream_payload_strb),4);
	vcdp->chgBus  (c+170,(vlTOPp->s2m_data_stream_payload_keep_),4);
	vcdp->chgBit  (c+171,(vlTOPp->s2m_data_stream_payload_last));
	vcdp->chgBit  (c+172,(vlTOPp->s2m_reset));
	vcdp->chgBit  (c+173,(vlTOPp->s2m_cch_valid));
	vcdp->chgBit  (c+174,(vlTOPp->s2m_cch_ready));
	vcdp->chgBus  (c+175,(vlTOPp->s2m_cch_payload_desc_start_addr),32);
	vcdp->chgBus  (c+176,(vlTOPp->s2m_cch_payload_desc_total_bytes),30);
	vcdp->chgBus  (c+177,(vlTOPp->s2m_cch_payload_desc_burst),2);
	vcdp->chgBus  (c+178,(vlTOPp->s2m_cch_payload_desc_id),4);
	vcdp->chgBit  (c+179,(vlTOPp->s2m_intr));
	vcdp->chgBit  (c+180,(vlTOPp->clk));
	vcdp->chgBit  (c+181,(vlTOPp->reset));
	vcdp->chgBit  (c+182,(((IData)(vlTOPp->dma_aw_ready) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve))));
	vcdp->chgBit  (c+183,(((IData)(vlTOPp->s2m_reset) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished))));
	vcdp->chgBit  (c+184,(((IData)(vlTOPp->dma_aw_valid) 
			       & (IData)(vlTOPp->dma_aw_ready))));
	vcdp->chgBit  (c+185,(((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len)) 
			       & (IData)(vlTOPp->s2m_data_stream_valid))));
	vcdp->chgBit  (c+186,(((IData)(vlTOPp->dma_b_valid) 
			       & (IData)(vlTOPp->dma_b_ready))));
	vcdp->chgBit  (c+187,(((IData)(vlTOPp->s2m_data_stream_valid) 
			       & (IData)(vlTOPp->s2m_data_stream_ready))));
	vcdp->chgBit  (c+188,((((IData)(vlTOPp->s2m_data_stream_valid) 
				& (IData)(vlTOPp->s2m_data_stream_ready)) 
			       & (IData)(vlTOPp->s2m_data_stream_payload_last))));
    }
}
