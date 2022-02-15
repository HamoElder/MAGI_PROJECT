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
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
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
	vcdp->chgBus  (c+7,(((((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
			      << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
						 - (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value))))),6);
	vcdp->chgBus  (c+8,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
			      << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value) 
						 - (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))))),6);
	vcdp->chgArray(c+9,(vlTOPp->BDMAs2m__DOT__s2m_cch_state_string),72);
	vcdp->chgBit  (c+12,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+13,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+14,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+15,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+16,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+17,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
	vcdp->chgBit  (c+18,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch));
	vcdp->chgBit  (c+19,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)))));
    }
}

void VBDMAs2m::traceChgThis__3(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+20,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+21,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+22,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->chgBit  (c+23,(((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement))));
    }
}

void VBDMAs2m::traceChgThis__4(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+24,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
					& (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
				    & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
					  & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full))))))));
	vcdp->chgBit  (c+25,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
					& (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
				    & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
					  & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full))))))));
	vcdp->chgBit  (c+26,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+27,(((3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state)) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid)))));
	vcdp->chgBit  (c+28,(((((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
				& (3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid))) 
			      & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid)))));
	vcdp->chgBit  (c+29,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+30,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+31,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->chgBit  (c+32,(((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement))));
    }
}

void VBDMAs2m::traceChgThis__5(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+33,(vlTOPp->BDMAs2m__DOT__s2m_cch_fire));
	vcdp->chgBit  (c+34,(vlTOPp->BDMAs2m__DOT__dma_aw_fire_2));
	vcdp->chgBit  (c+35,(vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire));
	vcdp->chgBit  (c+36,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+37,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+38,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+39,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+40,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+41,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+42,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+43,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->chgBit  (c+44,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping));
	vcdp->chgBit  (c+45,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->chgBus  (c+46,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext),5);
	vcdp->chgBit  (c+47,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping));
    }
}

void VBDMAs2m::traceChgThis__6(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+48,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) 
			      != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))));
	vcdp->chgBit  (c+49,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) 
			      != (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping))));
	vcdp->chgBit  (c+50,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) 
			      != (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping))));
	vcdp->chgBit  (c+51,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing) 
			      != (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping))));
    }
}

void VBDMAs2m::traceChgThis__7(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+52,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+53,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid));
	vcdp->chgBit  (c+54,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+55,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+56,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full)))));
	vcdp->chgBit  (c+57,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid));
	vcdp->chgBit  (c+58,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1));
	vcdp->chgBit  (c+59,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+60,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->chgBit  (c+61,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full));
	vcdp->chgBit  (c+62,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+63,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->chgBit  (c+64,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing));
	vcdp->chgBit  (c+65,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full));
	vcdp->chgBit  (c+66,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+67,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->chgBit  (c+68,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing));
	vcdp->chgBit  (c+69,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full));
	vcdp->chgBit  (c+70,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->chgBus  (c+71,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext),5);
	vcdp->chgBit  (c+72,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing));
	vcdp->chgBit  (c+73,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full));
    }
}

void VBDMAs2m::traceChgThis__8(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+74,((3U & vlTOPp->BDMAs2m__DOT__cch_address)),2);
	vcdp->chgBus  (c+75,((3U & ((IData)(1U) + (~ 
						   (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
						    + vlTOPp->BDMAs2m__DOT__cch_address))))),2);
	vcdp->chgBus  (c+76,((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->chgBus  (c+77,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					      >> 0x20U)))),4);
	vcdp->chgBus  (c+78,((0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					       >> 0x24U)))),8);
	vcdp->chgBus  (c+79,((7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					    >> 0x2cU)))),3);
	vcdp->chgBus  (c+80,((3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					    >> 0x2fU)))),2);
	vcdp->chgBus  (c+81,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->chgBus  (c+82,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->chgBus  (c+83,((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->chgBus  (c+84,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
					      >> 0x20U)))),4);
	vcdp->chgBit  (c+85,((1U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
					    >> 0x24U)))));
	vcdp->chgBus  (c+86,(vlTOPp->BDMAs2m__DOT__cch_address),32);
	vcdp->chgBus  (c+87,(vlTOPp->BDMAs2m__DOT__cch_burst_type),2);
	vcdp->chgBus  (c+88,(vlTOPp->BDMAs2m__DOT__cch_id),4);
	vcdp->chgBus  (c+89,(vlTOPp->BDMAs2m__DOT__trans_bytes_cnt),30);
	vcdp->chgBus  (c+90,(vlTOPp->BDMAs2m__DOT__s2m_aw_len),8);
	vcdp->chgBus  (c+91,((0xfffffffcU & vlTOPp->BDMAs2m__DOT__cch_address)),32);
	vcdp->chgBit  (c+92,((0U != (0xfffffU & (((IData)(0x40U) 
						  + 
						  (0xfffU 
						   & vlTOPp->BDMAs2m__DOT__cch_address)) 
						 >> 0xcU)))));
	vcdp->chgBus  (c+93,(vlTOPp->BDMAs2m__DOT__fifo_push_w_data),32);
	vcdp->chgBus  (c+94,(vlTOPp->BDMAs2m__DOT__fifo_push_w_strb),4);
	vcdp->chgBus  (c+95,(vlTOPp->BDMAs2m__DOT__w_residual_data),32);
	vcdp->chgBus  (c+96,(vlTOPp->BDMAs2m__DOT__w_residual_strb),4);
	vcdp->chgBus  (c+97,(vlTOPp->BDMAs2m__DOT__strb_mask),4);
	vcdp->chgBus  (c+98,(vlTOPp->BDMAs2m__DOT__bytes_shift),2);
	vcdp->chgQuad (c+99,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
	vcdp->chgQuad (c+101,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
	vcdp->chgQuad (c+103,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
	vcdp->chgQuad (c+105,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
	vcdp->chgQuad (c+107,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
	vcdp->chgQuad (c+109,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
	vcdp->chgQuad (c+111,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
	vcdp->chgQuad (c+113,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
	vcdp->chgBus  (c+115,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
	vcdp->chgBus  (c+116,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
	vcdp->chgBus  (c+117,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
	vcdp->chgBus  (c+118,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
	vcdp->chgBus  (c+119,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
	vcdp->chgBus  (c+120,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
	vcdp->chgBus  (c+121,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
	vcdp->chgBus  (c+122,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
	vcdp->chgBus  (c+123,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
	vcdp->chgBus  (c+124,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
	vcdp->chgBus  (c+125,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
	vcdp->chgBus  (c+126,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
	vcdp->chgBus  (c+127,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
	vcdp->chgBus  (c+128,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
	vcdp->chgBus  (c+129,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
	vcdp->chgBus  (c+130,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
	vcdp->chgQuad (c+131,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[0]),37);
	vcdp->chgQuad (c+133,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[1]),37);
	vcdp->chgQuad (c+135,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[2]),37);
	vcdp->chgQuad (c+137,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[3]),37);
	vcdp->chgQuad (c+139,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[4]),37);
	vcdp->chgQuad (c+141,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[5]),37);
	vcdp->chgQuad (c+143,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[6]),37);
	vcdp->chgQuad (c+145,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[7]),37);
	vcdp->chgQuad (c+147,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[8]),37);
	vcdp->chgQuad (c+149,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[9]),37);
	vcdp->chgQuad (c+151,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[10]),37);
	vcdp->chgQuad (c+153,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[11]),37);
	vcdp->chgQuad (c+155,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[12]),37);
	vcdp->chgQuad (c+157,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[13]),37);
	vcdp->chgQuad (c+159,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[14]),37);
	vcdp->chgQuad (c+161,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[15]),37);
	vcdp->chgQuad (c+163,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[16]),37);
	vcdp->chgQuad (c+165,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[17]),37);
	vcdp->chgQuad (c+167,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[18]),37);
	vcdp->chgQuad (c+169,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[19]),37);
	vcdp->chgQuad (c+171,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[20]),37);
	vcdp->chgQuad (c+173,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[21]),37);
	vcdp->chgQuad (c+175,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[22]),37);
	vcdp->chgQuad (c+177,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[23]),37);
	vcdp->chgQuad (c+179,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[24]),37);
	vcdp->chgQuad (c+181,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[25]),37);
	vcdp->chgQuad (c+183,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[26]),37);
	vcdp->chgQuad (c+185,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[27]),37);
	vcdp->chgQuad (c+187,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[28]),37);
	vcdp->chgQuad (c+189,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[29]),37);
	vcdp->chgQuad (c+191,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[30]),37);
	vcdp->chgQuad (c+193,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[31]),37);
    }
}

void VBDMAs2m::traceChgThis__9(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+195,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))
			        ? ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask) 
				   & (IData)(vlTOPp->BDMAs2m__DOT__fifo_push_w_strb))
			        : (IData)(vlTOPp->BDMAs2m__DOT__fifo_push_w_strb))),4);
	vcdp->chgBit  (c+196,((0x40U >= (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
					 + (3U & vlTOPp->BDMAs2m__DOT__cch_address)))));
	vcdp->chgBit  (c+197,((0U != (0xfffffU & ((
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
	vcdp->chgBit  (c+198,(((IData)(vlTOPp->BDMAs2m__DOT__fifo_push_w_valid) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__fifo_push_w_valve))));
	vcdp->chgBus  (c+199,(vlTOPp->BDMAs2m__DOT__s2m_cch_state),2);
	vcdp->chgBus  (c+200,(vlTOPp->BDMAs2m__DOT__s2m_convert_state),2);
	vcdp->chgBus  (c+201,(vlTOPp->BDMAs2m__DOT__s2m_w_state),2);
	vcdp->chgBit  (c+202,(vlTOPp->BDMAs2m__DOT__s2m_aw_valve));
	vcdp->chgBit  (c+203,(vlTOPp->BDMAs2m__DOT__s2m_w_valve));
	vcdp->chgBit  (c+204,(vlTOPp->BDMAs2m__DOT__cch_ready));
	vcdp->chgBit  (c+205,(vlTOPp->BDMAs2m__DOT__s2m_aw_valid));
	vcdp->chgBit  (c+206,(vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec));
	vcdp->chgBit  (c+207,(vlTOPp->BDMAs2m__DOT__cycle_finished));
	vcdp->chgBit  (c+208,(vlTOPp->BDMAs2m__DOT__fifo_push_w_last));
	vcdp->chgBit  (c+209,(vlTOPp->BDMAs2m__DOT__fifo_push_w_valid));
	vcdp->chgBit  (c+210,(vlTOPp->BDMAs2m__DOT__fifo_push_w_valve));
	vcdp->chgBit  (c+211,(vlTOPp->BDMAs2m__DOT__b_ready));
	vcdp->chgBit  (c+212,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))));
	vcdp->chgQuad (c+213,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_convert_state))
			        ? VL_ULL(0x49444c45202020)
			        : ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_convert_state))
				    ? VL_ULL(0x434f4e56455254)
				    : ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_convert_state))
				        ? VL_ULL(0x44524f50202020)
				        : VL_ULL(0x3f3f3f3f3f3f3f))))),56);
	vcdp->chgQuad (c+215,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
			        ? VL_ULL(0x49444c4520)
			        : ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				    ? VL_ULL(0x4255525354)
				    : ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				        ? VL_ULL(0x5245535020)
				        : VL_ULL(0x3f3f3f3f3f))))),40);
	vcdp->chgBus  (c+217,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+218,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+219,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+220,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+221,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+222,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->chgBus  (c+223,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+224,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+225,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+226,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+227,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+228,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->chgBus  (c+229,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
	vcdp->chgBit  (c+230,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+231,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
	vcdp->chgBit  (c+232,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+233,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+234,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->chgBus  (c+235,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value),5);
	vcdp->chgBit  (c+236,((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))));
	vcdp->chgBus  (c+237,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value),5);
	vcdp->chgBit  (c+238,((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value))));
	vcdp->chgBit  (c+239,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy));
	vcdp->chgBus  (c+240,((0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
					- (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value)))),5);
    }
}

void VBDMAs2m::traceChgThis__12(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+241,(vlTOPp->BDMAs2m__DOT__cch_total_bytes),30);
	vcdp->chgBit  (c+242,((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)));
	vcdp->chgBus  (c+243,(vlTOPp->BDMAs2m__DOT__s2m_axis_len),8);
	vcdp->chgBit  (c+244,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))));
    }
}

void VBDMAs2m::traceChgThis__13(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+245,(vlTOPp->dma_aw_valid));
	vcdp->chgBit  (c+246,(vlTOPp->dma_aw_ready));
	vcdp->chgBus  (c+247,(vlTOPp->dma_aw_payload_addr),32);
	vcdp->chgBus  (c+248,(vlTOPp->dma_aw_payload_id),4);
	vcdp->chgBus  (c+249,(vlTOPp->dma_aw_payload_len),8);
	vcdp->chgBus  (c+250,(vlTOPp->dma_aw_payload_size),3);
	vcdp->chgBus  (c+251,(vlTOPp->dma_aw_payload_burst),2);
	vcdp->chgBit  (c+252,(vlTOPp->dma_w_valid));
	vcdp->chgBit  (c+253,(vlTOPp->dma_w_ready));
	vcdp->chgBus  (c+254,(vlTOPp->dma_w_payload_data),32);
	vcdp->chgBus  (c+255,(vlTOPp->dma_w_payload_strb),4);
	vcdp->chgBit  (c+256,(vlTOPp->dma_w_payload_last));
	vcdp->chgBit  (c+257,(vlTOPp->dma_b_valid));
	vcdp->chgBit  (c+258,(vlTOPp->dma_b_ready));
	vcdp->chgBus  (c+259,(vlTOPp->dma_b_payload_id),4);
	vcdp->chgBus  (c+260,(vlTOPp->dma_b_payload_resp),2);
	vcdp->chgBit  (c+261,(vlTOPp->s2m_data_stream_valid));
	vcdp->chgBit  (c+262,(vlTOPp->s2m_data_stream_ready));
	vcdp->chgBus  (c+263,(vlTOPp->s2m_data_stream_payload_data),32);
	vcdp->chgBus  (c+264,(vlTOPp->s2m_data_stream_payload_id),4);
	vcdp->chgBus  (c+265,(vlTOPp->s2m_data_stream_payload_strb),4);
	vcdp->chgBus  (c+266,(vlTOPp->s2m_data_stream_payload_keep_),4);
	vcdp->chgBit  (c+267,(vlTOPp->s2m_data_stream_payload_last));
	vcdp->chgBit  (c+268,(vlTOPp->s2m_reset));
	vcdp->chgBit  (c+269,(vlTOPp->s2m_cch_valid));
	vcdp->chgBit  (c+270,(vlTOPp->s2m_cch_ready));
	vcdp->chgBus  (c+271,(vlTOPp->s2m_cch_payload_desc_start_addr),32);
	vcdp->chgBus  (c+272,(vlTOPp->s2m_cch_payload_desc_total_bytes),30);
	vcdp->chgBus  (c+273,(vlTOPp->s2m_cch_payload_desc_burst),2);
	vcdp->chgBus  (c+274,(vlTOPp->s2m_cch_payload_desc_id),4);
	vcdp->chgBit  (c+275,(vlTOPp->s2m_intr));
	vcdp->chgBit  (c+276,(vlTOPp->clk));
	vcdp->chgBit  (c+277,(vlTOPp->reset));
	vcdp->chgBit  (c+278,(((IData)(vlTOPp->dma_aw_ready) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve))));
	vcdp->chgBit  (c+279,(((IData)(vlTOPp->dma_w_ready) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_valve))));
	vcdp->chgBit  (c+280,(((IData)(vlTOPp->s2m_reset) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished))));
	vcdp->chgBit  (c+281,(((IData)(vlTOPp->dma_aw_valid) 
			       & (IData)(vlTOPp->dma_aw_ready))));
	vcdp->chgBit  (c+282,(((IData)(vlTOPp->s2m_data_stream_valid) 
			       & (IData)(vlTOPp->s2m_data_stream_ready))));
	vcdp->chgBit  (c+283,((((IData)(vlTOPp->s2m_data_stream_valid) 
				& (IData)(vlTOPp->s2m_data_stream_ready)) 
			       & (IData)(vlTOPp->s2m_data_stream_payload_last))));
	vcdp->chgBit  (c+284,(((IData)(vlTOPp->dma_w_valid) 
			       & (IData)(vlTOPp->dma_w_ready))));
	vcdp->chgBit  (c+285,(((IData)(vlTOPp->dma_w_payload_last) 
			       & ((IData)(vlTOPp->dma_w_valid) 
				  & (IData)(vlTOPp->dma_w_ready)))));
	vcdp->chgBit  (c+286,(((IData)(vlTOPp->dma_b_valid) 
			       & (IData)(vlTOPp->dma_b_ready))));
    }
}
