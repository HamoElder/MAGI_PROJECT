// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBDMAm2s__Syms.h"


//======================

void VBDMAm2s::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBDMAm2s* t=(VBDMAm2s*)userthis;
    VBDMAm2s__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VBDMAm2s::traceChgThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
					      >> 4U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 5U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 2U)) | (vlTOPp->__Vm_traceActivity 
					      >> 6U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 4U)) | (vlTOPp->__Vm_traceActivity 
					      >> 5U))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 6U))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 1U) | (vlTOPp->__Vm_traceActivity 
					  >> 3U))))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBDMAm2s::traceChgThis__2(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
					      - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->chgBus  (c+2,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
					      - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->chgBus  (c+3,(((((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
					      - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->chgBus  (c+4,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
					      - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->chgBus  (c+5,(((((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
					      - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->chgBus  (c+6,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
			      << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
					      - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->chgBus  (c+7,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
			      << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
						 - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))))),6);
	vcdp->chgBus  (c+8,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
			      << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
						 - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))))),6);
	vcdp->chgArray(c+9,(vlTOPp->BDMAm2s__DOT__m2s_cch_state_string),72);
	vcdp->chgBit  (c+12,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+13,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+14,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+15,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+16,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+17,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+18,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+19,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
    }
}

void VBDMAm2s::traceChgThis__3(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+20,((((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len)) 
			       & (0U == ((((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
					   & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
					  << 3U) | 
					 (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
						- (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))))) 
			      & (3U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state)))));
    }
}

void VBDMAm2s::traceChgThis__4(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+21,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+22,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+23,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+24,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+25,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VBDMAm2s::traceChgThis__5(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+26,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
					& (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
				    & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
					  & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full))))))));
	vcdp->chgBit  (c+27,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
					& (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
				    & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
					  & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full))))))));
	vcdp->chgBit  (c+28,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
			      & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
    }
}

void VBDMAm2s::traceChgThis__6(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+29,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+30,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+31,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
    }
}

void VBDMAm2s::traceChgThis__7(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+32,(vlTOPp->BDMAm2s__DOT__m2s_cch_fire));
	vcdp->chgBit  (c+33,(vlTOPp->BDMAm2s__DOT__dma_ar_fire_2));
	vcdp->chgBit  (c+34,(vlTOPp->BDMAm2s__DOT__dma_r_fire));
	vcdp->chgBit  (c+35,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+36,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+37,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+38,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+39,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+40,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+41,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+42,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+43,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+44,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+45,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),5);
	vcdp->chgBit  (c+46,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+47,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),5);
	vcdp->chgBit  (c+48,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing));
	vcdp->chgBit  (c+49,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+50,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
			      != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))));
    }
}

void VBDMAm2s::traceChgThis__8(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+51,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) 
			      != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))));
	vcdp->chgBit  (c+52,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) 
			      != (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping))));
	vcdp->chgBit  (c+53,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) 
			      != (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping))));
    }
}

void VBDMAm2s::traceChgThis__9(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+54,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+55,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid));
	vcdp->chgBit  (c+56,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+57,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+58,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+59,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid));
	vcdp->chgBit  (c+60,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1));
	vcdp->chgBit  (c+61,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full));
	vcdp->chgBit  (c+62,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing));
	vcdp->chgBit  (c+63,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full));
	vcdp->chgBit  (c+64,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing));
	vcdp->chgBit  (c+65,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full));
	vcdp->chgBit  (c+66,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full));
    }
}

void VBDMAm2s::traceChgThis__10(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+67,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+68,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->chgBit  (c+69,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+70,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->chgBit  (c+71,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+72,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
    }
}

void VBDMAm2s::traceChgThis__11(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+73,((3U & vlTOPp->BDMAm2s__DOT__cch_address)),2);
	vcdp->chgBus  (c+74,((3U & ((IData)(1U) + (~ 
						   (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
						    + vlTOPp->BDMAm2s__DOT__cch_address))))),2);
	vcdp->chgBus  (c+75,((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->chgBus  (c+76,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
					      >> 0x20U)))),4);
	vcdp->chgBus  (c+77,((0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
					       >> 0x24U)))),8);
	vcdp->chgBus  (c+78,((7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
					    >> 0x2cU)))),3);
	vcdp->chgBus  (c+79,((3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
					    >> 0x2fU)))),2);
	vcdp->chgBus  (c+80,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->chgBus  (c+81,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->chgBus  (c+82,(vlTOPp->BDMAm2s__DOT__cch_address),32);
	vcdp->chgBus  (c+83,(vlTOPp->BDMAm2s__DOT__cch_burst_type),2);
	vcdp->chgBus  (c+84,(vlTOPp->BDMAm2s__DOT__cch_id),4);
	vcdp->chgBus  (c+85,(vlTOPp->BDMAm2s__DOT__trans_bytes_cnt),30);
	vcdp->chgBus  (c+86,(vlTOPp->BDMAm2s__DOT__m2s_ar_len),8);
	vcdp->chgBus  (c+87,((0xfffffffcU & vlTOPp->BDMAm2s__DOT__cch_address)),32);
	vcdp->chgBit  (c+88,((0U != (0xfffffU & (((IData)(0x40U) 
						  + 
						  (0xfffU 
						   & vlTOPp->BDMAm2s__DOT__cch_address)) 
						 >> 0xcU)))));
	vcdp->chgBus  (c+89,(vlTOPp->BDMAm2s__DOT__m2s_axis_id),4);
	vcdp->chgBus  (c+90,(vlTOPp->BDMAm2s__DOT__m2s_axis_strb),4);
	vcdp->chgBus  (c+91,(vlTOPp->BDMAm2s__DOT__m2s_axis_keep),4);
	vcdp->chgBus  (c+92,(vlTOPp->BDMAm2s__DOT__keep_strb_mask),4);
	vcdp->chgQuad (c+93,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
	vcdp->chgQuad (c+95,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
	vcdp->chgQuad (c+97,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
	vcdp->chgQuad (c+99,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
	vcdp->chgQuad (c+101,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
	vcdp->chgQuad (c+103,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
	vcdp->chgQuad (c+105,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
	vcdp->chgQuad (c+107,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
	vcdp->chgBus  (c+109,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
	vcdp->chgBus  (c+110,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
	vcdp->chgBus  (c+111,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
	vcdp->chgBus  (c+112,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
	vcdp->chgBus  (c+113,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
	vcdp->chgBus  (c+114,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
	vcdp->chgBus  (c+115,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
	vcdp->chgBus  (c+116,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
	vcdp->chgBus  (c+117,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
	vcdp->chgBus  (c+118,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
	vcdp->chgBus  (c+119,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
	vcdp->chgBus  (c+120,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
	vcdp->chgBus  (c+121,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
	vcdp->chgBus  (c+122,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
	vcdp->chgBus  (c+123,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
	vcdp->chgBus  (c+124,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
    }
}

void VBDMAm2s::traceChgThis__12(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+125,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
			        ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
				   & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))
			        : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))),4);
	vcdp->chgBit  (c+126,((0x40U >= (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
					 + (3U & vlTOPp->BDMAm2s__DOT__cch_address)))));
	vcdp->chgBit  (c+127,((0U != (0xfffffU & ((
						   (0xfffU 
						    & vlTOPp->BDMAm2s__DOT__cch_address) 
						   + 
						   (0xfffU 
						    & vlTOPp->BDMAm2s__DOT__cch_total_bytes)) 
						  >> 0xcU)))));
    }
}

void VBDMAm2s::traceChgThis__13(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+128,(vlTOPp->BDMAm2s__DOT__m2s_cch_state),2);
	vcdp->chgBus  (c+129,(vlTOPp->BDMAm2s__DOT__m2s_r_state),1);
	vcdp->chgBit  (c+130,(vlTOPp->BDMAm2s__DOT__m2s_ar_valve));
	vcdp->chgBit  (c+131,(vlTOPp->BDMAm2s__DOT__cch_ready));
	vcdp->chgBit  (c+132,(vlTOPp->BDMAm2s__DOT__m2s_ar_valid));
	vcdp->chgBit  (c+133,(vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec));
	vcdp->chgBit  (c+134,(vlTOPp->BDMAm2s__DOT__cycle_finished));
	vcdp->chgBit  (c+135,(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
	vcdp->chgBit  (c+136,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))));
	vcdp->chgQuad (c+137,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
			        ? ((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
				    ? VL_ULL(0x4255525354)
				    : VL_ULL(0x3f3f3f3f3f))
			        : VL_ULL(0x49444c4520))),40);
	vcdp->chgBus  (c+139,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+140,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+141,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+142,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+143,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+144,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->chgBus  (c+145,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+146,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+147,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+148,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+149,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+150,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->chgBus  (c+151,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+152,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+153,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+154,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+155,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+156,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->chgBus  (c+157,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),5);
	vcdp->chgBit  (c+158,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+159,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value),5);
	vcdp->chgBit  (c+160,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+161,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+162,((0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
					- (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),5);
    }
}

void VBDMAm2s::traceChgThis__15(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+163,((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->chgBus  (c+164,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
					       >> 0x20U)))),4);
	vcdp->chgBus  (c+165,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
					       >> 0x24U)))),4);
	vcdp->chgBus  (c+166,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
					       >> 0x28U)))),4);
	vcdp->chgBit  (c+167,((1U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
					     >> 0x2cU)))));
	vcdp->chgBus  (c+168,(vlTOPp->BDMAm2s__DOT__cch_total_bytes),30);
	vcdp->chgBit  (c+169,((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)));
	vcdp->chgBus  (c+170,(vlTOPp->BDMAm2s__DOT__m2s_axis_len),8);
	vcdp->chgBit  (c+171,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))));
	vcdp->chgQuad (c+172,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
	vcdp->chgQuad (c+174,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
	vcdp->chgQuad (c+176,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
	vcdp->chgQuad (c+178,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
	vcdp->chgQuad (c+180,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
	vcdp->chgQuad (c+182,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
	vcdp->chgQuad (c+184,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
	vcdp->chgQuad (c+186,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
	vcdp->chgQuad (c+188,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[8]),45);
	vcdp->chgQuad (c+190,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[9]),45);
	vcdp->chgQuad (c+192,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[10]),45);
	vcdp->chgQuad (c+194,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[11]),45);
	vcdp->chgQuad (c+196,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[12]),45);
	vcdp->chgQuad (c+198,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[13]),45);
	vcdp->chgQuad (c+200,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[14]),45);
	vcdp->chgQuad (c+202,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[15]),45);
	vcdp->chgQuad (c+204,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[16]),45);
	vcdp->chgQuad (c+206,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[17]),45);
	vcdp->chgQuad (c+208,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[18]),45);
	vcdp->chgQuad (c+210,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[19]),45);
	vcdp->chgQuad (c+212,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[20]),45);
	vcdp->chgQuad (c+214,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[21]),45);
	vcdp->chgQuad (c+216,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[22]),45);
	vcdp->chgQuad (c+218,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[23]),45);
	vcdp->chgQuad (c+220,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[24]),45);
	vcdp->chgQuad (c+222,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[25]),45);
	vcdp->chgQuad (c+224,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[26]),45);
	vcdp->chgQuad (c+226,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[27]),45);
	vcdp->chgQuad (c+228,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[28]),45);
	vcdp->chgQuad (c+230,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[29]),45);
	vcdp->chgQuad (c+232,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[30]),45);
	vcdp->chgQuad (c+234,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[31]),45);
    }
}

void VBDMAm2s::traceChgThis__16(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+236,(vlTOPp->dma_ar_valid));
	vcdp->chgBit  (c+237,(vlTOPp->dma_ar_ready));
	vcdp->chgBus  (c+238,(vlTOPp->dma_ar_payload_addr),32);
	vcdp->chgBus  (c+239,(vlTOPp->dma_ar_payload_id),4);
	vcdp->chgBus  (c+240,(vlTOPp->dma_ar_payload_len),8);
	vcdp->chgBus  (c+241,(vlTOPp->dma_ar_payload_size),3);
	vcdp->chgBus  (c+242,(vlTOPp->dma_ar_payload_burst),2);
	vcdp->chgBit  (c+243,(vlTOPp->dma_r_valid));
	vcdp->chgBit  (c+244,(vlTOPp->dma_r_ready));
	vcdp->chgBus  (c+245,(vlTOPp->dma_r_payload_data),32);
	vcdp->chgBus  (c+246,(vlTOPp->dma_r_payload_id),4);
	vcdp->chgBus  (c+247,(vlTOPp->dma_r_payload_resp),2);
	vcdp->chgBit  (c+248,(vlTOPp->dma_r_payload_last));
	vcdp->chgBit  (c+249,(vlTOPp->m2s_data_stream_valid));
	vcdp->chgBit  (c+250,(vlTOPp->m2s_data_stream_ready));
	vcdp->chgBus  (c+251,(vlTOPp->m2s_data_stream_payload_data),32);
	vcdp->chgBus  (c+252,(vlTOPp->m2s_data_stream_payload_id),4);
	vcdp->chgBus  (c+253,(vlTOPp->m2s_data_stream_payload_strb),4);
	vcdp->chgBus  (c+254,(vlTOPp->m2s_data_stream_payload_keep_),4);
	vcdp->chgBit  (c+255,(vlTOPp->m2s_data_stream_payload_last));
	vcdp->chgBit  (c+256,(vlTOPp->m2s_reset));
	vcdp->chgBit  (c+257,(vlTOPp->m2s_cch_valid));
	vcdp->chgBit  (c+258,(vlTOPp->m2s_cch_ready));
	vcdp->chgBus  (c+259,(vlTOPp->m2s_cch_payload_desc_start_addr),32);
	vcdp->chgBus  (c+260,(vlTOPp->m2s_cch_payload_desc_total_bytes),30);
	vcdp->chgBus  (c+261,(vlTOPp->m2s_cch_payload_desc_burst),2);
	vcdp->chgBus  (c+262,(vlTOPp->m2s_cch_payload_desc_id),4);
	vcdp->chgBit  (c+263,(vlTOPp->m2s_intr));
	vcdp->chgBit  (c+264,(vlTOPp->clk));
	vcdp->chgBit  (c+265,(vlTOPp->reset));
	vcdp->chgBit  (c+266,(((IData)(vlTOPp->dma_ar_ready) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valve))));
	vcdp->chgBit  (c+267,(((IData)(vlTOPp->dma_r_valid) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve))));
	vcdp->chgBit  (c+268,(((IData)(vlTOPp->m2s_reset) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished))));
	vcdp->chgBit  (c+269,(((IData)(vlTOPp->dma_ar_valid) 
			       & (IData)(vlTOPp->dma_ar_ready))));
	vcdp->chgBit  (c+270,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
			       & (IData)(vlTOPp->m2s_data_stream_ready))));
	vcdp->chgBit  (c+271,(((IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
					>> 0x2cU)) 
			       & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
				  & (IData)(vlTOPp->m2s_data_stream_ready)))));
    }
}
