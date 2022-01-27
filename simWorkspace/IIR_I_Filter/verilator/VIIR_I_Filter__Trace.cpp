// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIIR_I_Filter__Syms.h"


//======================

void VIIR_I_Filter::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIIR_I_Filter* t=(VIIR_I_Filter*)userthis;
    VIIR_I_Filter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VIIR_I_Filter::traceChgThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIIR_I_Filter::traceChgThis__2(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_0),7);
	vcdp->chgBus  (c+2,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_1),7);
	vcdp->chgBus  (c+3,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_2),7);
	vcdp->chgBus  (c+4,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_3),7);
	vcdp->chgBus  (c+5,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_0),12);
	vcdp->chgBus  (c+6,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_1),12);
	vcdp->chgBus  (c+7,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_2),12);
	vcdp->chgBus  (c+8,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_3),12);
	vcdp->chgBus  (c+9,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_4),12);
	vcdp->chgBus  (c+10,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_5),12);
	vcdp->chgBus  (c+11,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_6),12);
    }
}

void VIIR_I_Filter::traceChgThis__3(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+12,((1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en) 
				    >> 2U))));
	vcdp->chgBus  (c+13,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__sum_result),29);
	vcdp->chgBit  (c+14,((1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en) 
				    >> 2U))));
	vcdp->chgBus  (c+15,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result),29);
	vcdp->chgBus  (c+16,(vlTOPp->IIR_I_Filter__DOT__filtered_data_vec_0),29);
	vcdp->chgBit  (c+17,(vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf));
	vcdp->chgBus  (c+18,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en),3);
	vcdp->chgBus  (c+19,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0),12);
	vcdp->chgBus  (c+20,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1),12);
	vcdp->chgBus  (c+21,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2),12);
	vcdp->chgBus  (c+22,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3),12);
	vcdp->chgBus  (c+23,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4),12);
	vcdp->chgBus  (c+24,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5),12);
	vcdp->chgBus  (c+25,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6),12);
	vcdp->chgBus  (c+26,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_7),12);
	vcdp->chgBus  (c+27,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_0),29);
	vcdp->chgBus  (c+28,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_1),29);
	vcdp->chgBus  (c+29,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_2),29);
	vcdp->chgBus  (c+30,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_3),29);
	vcdp->chgBus  (c+31,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_4),29);
	vcdp->chgBus  (c+32,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_5),29);
	vcdp->chgBus  (c+33,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_6),29);
	vcdp->chgBus  (c+34,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7),29);
	vcdp->chgBit  (c+35,((1U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en))));
	vcdp->chgBit  (c+36,((1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en) 
				    >> 1U))));
	vcdp->chgBus  (c+37,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en),3);
	vcdp->chgBus  (c+38,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0),29);
	vcdp->chgBus  (c+39,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1),29);
	vcdp->chgBus  (c+40,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2),29);
	vcdp->chgBus  (c+41,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3),29);
	vcdp->chgBus  (c+42,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4),29);
	vcdp->chgBus  (c+43,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5),29);
	vcdp->chgBus  (c+44,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_6),29);
	vcdp->chgBus  (c+45,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_0),29);
	vcdp->chgBus  (c+46,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_1),29);
	vcdp->chgBus  (c+47,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_2),29);
	vcdp->chgBus  (c+48,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_3),29);
	vcdp->chgBus  (c+49,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_4),29);
	vcdp->chgBus  (c+50,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_5),29);
	vcdp->chgBus  (c+51,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6),29);
	vcdp->chgBit  (c+52,((1U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en))));
	vcdp->chgBit  (c+53,((1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en) 
				    >> 1U))));
    }
}

void VIIR_I_Filter::traceChgThis__4(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+54,(vlTOPp->raw_data_valid));
	vcdp->chgBus  (c+55,(vlTOPp->raw_data_payload_0),12);
	vcdp->chgBit  (c+56,(vlTOPp->filtered_data_valid));
	vcdp->chgBus  (c+57,(vlTOPp->filtered_data_payload_0),29);
	vcdp->chgBit  (c+58,(vlTOPp->clk));
	vcdp->chgBit  (c+59,(vlTOPp->reset));
    }
}
