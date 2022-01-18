// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIIR_I_Filter__Syms.h"


//======================

void VIIR_I_Filter::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VIIR_I_Filter::traceInit, &VIIR_I_Filter::traceFull, &VIIR_I_Filter::traceChg, this);
}
void VIIR_I_Filter::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VIIR_I_Filter* t=(VIIR_I_Filter*)userthis;
    VIIR_I_Filter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VIIR_I_Filter::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIIR_I_Filter* t=(VIIR_I_Filter*)userthis;
    VIIR_I_Filter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VIIR_I_Filter::traceInitThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VIIR_I_Filter::traceFullThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIIR_I_Filter::traceInitThis__1(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+18,"clc",-1);
	vcdp->declBit  (c+19,"raw_data_valid",-1);
	vcdp->declBus  (c+20,"raw_data_payload_0",-1,15,0);
	vcdp->declBit  (c+21,"filtered_data_valid",-1);
	vcdp->declBus  (c+22,"filtered_data_payload_0",-1,20,0);
	vcdp->declBit  (c+23,"clk",-1);
	vcdp->declBit  (c+24,"reset",-1);
	vcdp->declBit  (c+18,"IIR_I_Filter clc",-1);
	vcdp->declBit  (c+19,"IIR_I_Filter raw_data_valid",-1);
	vcdp->declBus  (c+20,"IIR_I_Filter raw_data_payload_0",-1,15,0);
	vcdp->declBit  (c+21,"IIR_I_Filter filtered_data_valid",-1);
	vcdp->declBus  (c+22,"IIR_I_Filter filtered_data_payload_0",-1,20,0);
	vcdp->declBit  (c+23,"IIR_I_Filter clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter reset",-1);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_x_filtered_data_valid",-1);
	vcdp->declBus  (c+1,"IIR_I_Filter fir_x_filtered_data_payload_0",-1,18,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_y_filtered_data_valid",-1);
	vcdp->declBus  (c+3,"IIR_I_Filter fir_y_filtered_data_payload_0",-1,20,0);
	// Tracing: IIR_I_Filter _zz_filtered_data_payload_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:20
	// Tracing: IIR_I_Filter _zz_raw_data_payload_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:21
	vcdp->declBit  (c+19,"IIR_I_Filter fir_x raw_data_valid",-1);
	vcdp->declBus  (c+20,"IIR_I_Filter fir_x raw_data_payload_0",-1,15,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_x filtered_data_valid",-1);
	vcdp->declBus  (c+1,"IIR_I_Filter fir_x filtered_data_payload_0",-1,18,0);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_x clc",-1);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_x clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_x reset",-1);
	vcdp->declBus  (c+25,"IIR_I_Filter fir_x transposeCore_7_next_adder_data",-1,18,0);
	vcdp->declBus  (c+26,"IIR_I_Filter fir_x transposeCore_8_next_adder_data",-1,18,0);
	vcdp->declBus  (c+27,"IIR_I_Filter fir_x transposeCore_9_next_adder_data",-1,18,0);
	vcdp->declBus  (c+1,"IIR_I_Filter fir_x transposeCore_10_next_adder_data",-1,18,0);
	vcdp->declBus  (c+14,"IIR_I_Filter fir_x coff_mem_0",-1,2,0);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_x coff_mem_1",-1,2,0);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_x coff_mem_2",-1,2,0);
	vcdp->declBus  (c+14,"IIR_I_Filter fir_x coff_mem_3",-1,2,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_x filtered_data_valid_vec_0",-1);
	vcdp->declBus  (c+20,"IIR_I_Filter fir_x transposeCore_7 input_data",-1,15,0);
	vcdp->declBus  (c+14,"IIR_I_Filter fir_x transposeCore_7 coff_data",-1,2,0);
	vcdp->declBus  (c+28,"IIR_I_Filter fir_x transposeCore_7 adder_data",-1,18,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_x transposeCore_7 valid",-1);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_x transposeCore_7 clc",-1);
	vcdp->declBus  (c+25,"IIR_I_Filter fir_x transposeCore_7 next_adder_data",-1,18,0);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_x transposeCore_7 clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_x transposeCore_7 reset",-1);
	// Tracing: IIR_I_Filter fir_x transposeCore_7 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:241
	vcdp->declBus  (c+4,"IIR_I_Filter fir_x transposeCore_7 previous_adder_data",-1,18,0);
	vcdp->declBus  (c+20,"IIR_I_Filter fir_x transposeCore_8 input_data",-1,15,0);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_x transposeCore_8 coff_data",-1,2,0);
	vcdp->declBus  (c+25,"IIR_I_Filter fir_x transposeCore_8 adder_data",-1,18,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_x transposeCore_8 valid",-1);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_x transposeCore_8 clc",-1);
	vcdp->declBus  (c+26,"IIR_I_Filter fir_x transposeCore_8 next_adder_data",-1,18,0);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_x transposeCore_8 clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_x transposeCore_8 reset",-1);
	// Tracing: IIR_I_Filter fir_x transposeCore_8 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:241
	vcdp->declBus  (c+5,"IIR_I_Filter fir_x transposeCore_8 previous_adder_data",-1,18,0);
	vcdp->declBus  (c+20,"IIR_I_Filter fir_x transposeCore_9 input_data",-1,15,0);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_x transposeCore_9 coff_data",-1,2,0);
	vcdp->declBus  (c+26,"IIR_I_Filter fir_x transposeCore_9 adder_data",-1,18,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_x transposeCore_9 valid",-1);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_x transposeCore_9 clc",-1);
	vcdp->declBus  (c+27,"IIR_I_Filter fir_x transposeCore_9 next_adder_data",-1,18,0);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_x transposeCore_9 clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_x transposeCore_9 reset",-1);
	// Tracing: IIR_I_Filter fir_x transposeCore_9 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:241
	vcdp->declBus  (c+6,"IIR_I_Filter fir_x transposeCore_9 previous_adder_data",-1,18,0);
	vcdp->declBus  (c+20,"IIR_I_Filter fir_x transposeCore_10 input_data",-1,15,0);
	vcdp->declBus  (c+14,"IIR_I_Filter fir_x transposeCore_10 coff_data",-1,2,0);
	vcdp->declBus  (c+27,"IIR_I_Filter fir_x transposeCore_10 adder_data",-1,18,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_x transposeCore_10 valid",-1);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_x transposeCore_10 clc",-1);
	vcdp->declBus  (c+1,"IIR_I_Filter fir_x transposeCore_10 next_adder_data",-1,18,0);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_x transposeCore_10 clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_x transposeCore_10 reset",-1);
	// Tracing: IIR_I_Filter fir_x transposeCore_10 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:241
	vcdp->declBus  (c+7,"IIR_I_Filter fir_x transposeCore_10 previous_adder_data",-1,18,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_y raw_data_valid",-1);
	vcdp->declBus  (c+8,"IIR_I_Filter fir_y raw_data_payload_0",-1,18,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_y filtered_data_valid",-1);
	vcdp->declBus  (c+3,"IIR_I_Filter fir_y filtered_data_payload_0",-1,20,0);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_y clc",-1);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_y clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_y reset",-1);
	vcdp->declBus  (c+12,"IIR_I_Filter fir_y transposeCore_7_next_adder_data",-1,20,0);
	vcdp->declBus  (c+13,"IIR_I_Filter fir_y transposeCore_8_next_adder_data",-1,20,0);
	vcdp->declBus  (c+3,"IIR_I_Filter fir_y transposeCore_9_next_adder_data",-1,20,0);
	vcdp->declBus  (c+16,"IIR_I_Filter fir_y coff_mem_0",-1,1,0);
	vcdp->declBus  (c+17,"IIR_I_Filter fir_y coff_mem_1",-1,1,0);
	vcdp->declBus  (c+2,"IIR_I_Filter fir_y coff_mem_2",-1,1,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_y filtered_data_valid_vec_0",-1);
	vcdp->declBus  (c+8,"IIR_I_Filter fir_y transposeCore_7 input_data",-1,18,0);
	vcdp->declBus  (c+16,"IIR_I_Filter fir_y transposeCore_7 coff_data",-1,1,0);
	vcdp->declBus  (c+29,"IIR_I_Filter fir_y transposeCore_7 adder_data",-1,20,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_y transposeCore_7 valid",-1);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_y transposeCore_7 clc",-1);
	vcdp->declBus  (c+12,"IIR_I_Filter fir_y transposeCore_7 next_adder_data",-1,20,0);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_y transposeCore_7 clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_y transposeCore_7 reset",-1);
	// Tracing: IIR_I_Filter fir_y transposeCore_7 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:203
	vcdp->declBus  (c+9,"IIR_I_Filter fir_y transposeCore_7 previous_adder_data",-1,20,0);
	vcdp->declBus  (c+8,"IIR_I_Filter fir_y transposeCore_8 input_data",-1,18,0);
	vcdp->declBus  (c+17,"IIR_I_Filter fir_y transposeCore_8 coff_data",-1,1,0);
	vcdp->declBus  (c+12,"IIR_I_Filter fir_y transposeCore_8 adder_data",-1,20,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_y transposeCore_8 valid",-1);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_y transposeCore_8 clc",-1);
	vcdp->declBus  (c+13,"IIR_I_Filter fir_y transposeCore_8 next_adder_data",-1,20,0);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_y transposeCore_8 clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_y transposeCore_8 reset",-1);
	// Tracing: IIR_I_Filter fir_y transposeCore_8 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:203
	vcdp->declBus  (c+10,"IIR_I_Filter fir_y transposeCore_8 previous_adder_data",-1,20,0);
	vcdp->declBus  (c+8,"IIR_I_Filter fir_y transposeCore_9 input_data",-1,18,0);
	vcdp->declBus  (c+2,"IIR_I_Filter fir_y transposeCore_9 coff_data",-1,1,0);
	vcdp->declBus  (c+13,"IIR_I_Filter fir_y transposeCore_9 adder_data",-1,20,0);
	vcdp->declBit  (c+19,"IIR_I_Filter fir_y transposeCore_9 valid",-1);
	vcdp->declBit  (c+18,"IIR_I_Filter fir_y transposeCore_9 clc",-1);
	vcdp->declBus  (c+3,"IIR_I_Filter fir_y transposeCore_9 next_adder_data",-1,20,0);
	vcdp->declBit  (c+23,"IIR_I_Filter fir_y transposeCore_9 clk",-1);
	vcdp->declBit  (c+24,"IIR_I_Filter fir_y transposeCore_9 reset",-1);
	// Tracing: IIR_I_Filter fir_y transposeCore_9 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:203
	vcdp->declBus  (c+11,"IIR_I_Filter fir_y transposeCore_9 previous_adder_data",-1,20,0);
    }
}

void VIIR_I_Filter::traceFullThis__1(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10_next_adder_data),19);
	vcdp->fullBus  (c+2,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_2),2);
	vcdp->fullBus  (c+3,((0x1fffffU & (VL_MULS_III(21,21,21, 
						       (0x1fffffU 
							& VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
						       (0x1fffffU 
							& VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_2)))) 
					   + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data))),21);
	vcdp->fullBus  (c+4,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data),19);
	vcdp->fullBus  (c+5,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data),19);
	vcdp->fullBus  (c+6,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data),19);
	vcdp->fullBus  (c+7,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_10__DOT__previous_adder_data),19);
	vcdp->fullBus  (c+8,(vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0),19);
	vcdp->fullBus  (c+9,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data),21);
	vcdp->fullBus  (c+10,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data),21);
	vcdp->fullBus  (c+11,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_9__DOT__previous_adder_data),21);
	vcdp->fullBus  (c+12,((0x1fffffU & (VL_MULS_III(21,21,21, 
							(0x1fffffU 
							 & VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
							(0x1fffffU 
							 & VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_0)))) 
					    + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_7__DOT__previous_adder_data))),21);
	vcdp->fullBus  (c+13,((0x1fffffU & (VL_MULS_III(21,21,21, 
							(0x1fffffU 
							 & VL_EXTENDS_II(21,19, vlTOPp->IIR_I_Filter__DOT___zz_raw_data_payload_0)), 
							(0x1fffffU 
							 & VL_EXTENDS_II(21,2, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_1)))) 
					    + vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__transposeCore_8__DOT__previous_adder_data))),21);
	vcdp->fullBus  (c+14,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0),3);
	vcdp->fullBus  (c+15,(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1),3);
	vcdp->fullBus  (c+16,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_0),2);
	vcdp->fullBus  (c+17,(vlTOPp->IIR_I_Filter__DOT__fir_y__DOT__coff_mem_1),2);
	vcdp->fullBit  (c+18,(vlTOPp->clc));
	vcdp->fullBit  (c+19,(vlTOPp->raw_data_valid));
	vcdp->fullBus  (c+20,(vlTOPp->raw_data_payload_0),16);
	vcdp->fullBit  (c+21,(vlTOPp->filtered_data_valid));
	vcdp->fullBus  (c+22,(vlTOPp->filtered_data_payload_0),21);
	vcdp->fullBit  (c+23,(vlTOPp->clk));
	vcdp->fullBit  (c+24,(vlTOPp->reset));
	vcdp->fullBus  (c+25,((0x7ffffU & (VL_MULS_III(19,19,19, 
						       (0x7ffffU 
							& VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0x7ffffU 
							& VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_0)))) 
					   + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_7__DOT__previous_adder_data))),19);
	vcdp->fullBus  (c+26,((0x7ffffU & (VL_MULS_III(19,19,19, 
						       (0x7ffffU 
							& VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0x7ffffU 
							& VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1)))) 
					   + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_8__DOT__previous_adder_data))),19);
	vcdp->fullBus  (c+27,((0x7ffffU & (VL_MULS_III(19,19,19, 
						       (0x7ffffU 
							& VL_EXTENDS_II(19,16, (IData)(vlTOPp->raw_data_payload_0))), 
						       (0x7ffffU 
							& VL_EXTENDS_II(19,3, (IData)(vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__coff_mem_1)))) 
					   + vlTOPp->IIR_I_Filter__DOT__fir_x__DOT__transposeCore_9__DOT__previous_adder_data))),19);
	vcdp->fullBus  (c+28,(0U),19);
	vcdp->fullBus  (c+29,(0U),21);
    }
}
