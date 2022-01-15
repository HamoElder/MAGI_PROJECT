// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTransposeFIR__Syms.h"


//======================

void VTransposeFIR::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VTransposeFIR::traceInit, &VTransposeFIR::traceFull, &VTransposeFIR::traceChg, this);
}
void VTransposeFIR::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTransposeFIR* t=(VTransposeFIR*)userthis;
    VTransposeFIR__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTransposeFIR::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTransposeFIR* t=(VTransposeFIR*)userthis;
    VTransposeFIR__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VTransposeFIR::traceInitThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTransposeFIR::traceFullThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTransposeFIR::traceInitThis__1(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+33,"raw_data_valid",-1);
	vcdp->declBus  (c+34,"raw_data_payload_0",-1,15,0);
	vcdp->declBit  (c+35,"filtered_data_valid",-1);
	vcdp->declBus  (c+36,"filtered_data_payload_0",-1,23,0);
	vcdp->declBit  (c+37,"clc",-1);
	vcdp->declBit  (c+38,"clk",-1);
	vcdp->declBit  (c+39,"reset",-1);
	vcdp->declBit  (c+33,"TransposeFIR raw_data_valid",-1);
	vcdp->declBus  (c+34,"TransposeFIR raw_data_payload_0",-1,15,0);
	vcdp->declBit  (c+35,"TransposeFIR filtered_data_valid",-1);
	vcdp->declBus  (c+36,"TransposeFIR filtered_data_payload_0",-1,23,0);
	vcdp->declBit  (c+37,"TransposeFIR clc",-1);
	vcdp->declBit  (c+38,"TransposeFIR clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR reset",-1);
	vcdp->declBus  (c+40,"TransposeFIR transposeCore_21_next_adder_data",-1,23,0);
	vcdp->declBus  (c+41,"TransposeFIR transposeCore_22_next_adder_data",-1,23,0);
	vcdp->declBus  (c+42,"TransposeFIR transposeCore_23_next_adder_data",-1,23,0);
	vcdp->declBus  (c+43,"TransposeFIR transposeCore_24_next_adder_data",-1,23,0);
	vcdp->declBus  (c+44,"TransposeFIR transposeCore_25_next_adder_data",-1,23,0);
	vcdp->declBus  (c+45,"TransposeFIR transposeCore_26_next_adder_data",-1,23,0);
	vcdp->declBus  (c+46,"TransposeFIR transposeCore_27_next_adder_data",-1,23,0);
	vcdp->declBus  (c+47,"TransposeFIR transposeCore_28_next_adder_data",-1,23,0);
	vcdp->declBus  (c+48,"TransposeFIR transposeCore_29_next_adder_data",-1,23,0);
	vcdp->declBus  (c+49,"TransposeFIR transposeCore_30_next_adder_data",-1,23,0);
	vcdp->declBus  (c+50,"TransposeFIR transposeCore_31_next_adder_data",-1,23,0);
	vcdp->declBus  (c+51,"TransposeFIR transposeCore_32_next_adder_data",-1,23,0);
	vcdp->declBus  (c+52,"TransposeFIR transposeCore_33_next_adder_data",-1,23,0);
	vcdp->declBus  (c+53,"TransposeFIR transposeCore_34_next_adder_data",-1,23,0);
	vcdp->declBus  (c+54,"TransposeFIR transposeCore_35_next_adder_data",-1,23,0);
	vcdp->declBus  (c+55,"TransposeFIR transposeCore_36_next_adder_data",-1,23,0);
	vcdp->declBus  (c+56,"TransposeFIR transposeCore_37_next_adder_data",-1,23,0);
	vcdp->declBus  (c+57,"TransposeFIR transposeCore_38_next_adder_data",-1,23,0);
	vcdp->declBus  (c+58,"TransposeFIR transposeCore_39_next_adder_data",-1,23,0);
	vcdp->declBus  (c+59,"TransposeFIR transposeCore_40_next_adder_data",-1,23,0);
	vcdp->declBus  (c+60,"TransposeFIR transposeCore_41_next_adder_data",-1,23,0);
	vcdp->declBus  (c+22,"TransposeFIR coff_mem_0",-1,7,0);
	vcdp->declBus  (c+23,"TransposeFIR coff_mem_1",-1,7,0);
	vcdp->declBus  (c+24,"TransposeFIR coff_mem_2",-1,7,0);
	vcdp->declBus  (c+25,"TransposeFIR coff_mem_3",-1,7,0);
	vcdp->declBus  (c+26,"TransposeFIR coff_mem_4",-1,7,0);
	vcdp->declBus  (c+27,"TransposeFIR coff_mem_5",-1,7,0);
	vcdp->declBus  (c+28,"TransposeFIR coff_mem_6",-1,7,0);
	vcdp->declBus  (c+29,"TransposeFIR coff_mem_7",-1,7,0);
	vcdp->declBus  (c+30,"TransposeFIR coff_mem_8",-1,7,0);
	vcdp->declBus  (c+31,"TransposeFIR coff_mem_9",-1,7,0);
	vcdp->declBus  (c+32,"TransposeFIR coff_mem_10",-1,7,0);
	vcdp->declBus  (c+31,"TransposeFIR coff_mem_11",-1,7,0);
	vcdp->declBus  (c+30,"TransposeFIR coff_mem_12",-1,7,0);
	vcdp->declBus  (c+29,"TransposeFIR coff_mem_13",-1,7,0);
	vcdp->declBus  (c+28,"TransposeFIR coff_mem_14",-1,7,0);
	vcdp->declBus  (c+27,"TransposeFIR coff_mem_15",-1,7,0);
	vcdp->declBus  (c+26,"TransposeFIR coff_mem_16",-1,7,0);
	vcdp->declBus  (c+25,"TransposeFIR coff_mem_17",-1,7,0);
	vcdp->declBus  (c+24,"TransposeFIR coff_mem_18",-1,7,0);
	vcdp->declBus  (c+23,"TransposeFIR coff_mem_19",-1,7,0);
	vcdp->declBus  (c+27,"TransposeFIR coff_mem_20",-1,7,0);
	vcdp->declBit  (c+33,"TransposeFIR filtered_data_valid_vec_0",-1);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_21 input_data",-1,15,0);
	vcdp->declBus  (c+22,"TransposeFIR transposeCore_21 coff_data",-1,7,0);
	vcdp->declBus  (c+61,"TransposeFIR transposeCore_21 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_21 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_21 clc",-1);
	vcdp->declBus  (c+40,"TransposeFIR transposeCore_21 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_21 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_21 reset",-1);
	// Tracing: TransposeFIR transposeCore_21 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+1,"TransposeFIR transposeCore_21 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_22 input_data",-1,15,0);
	vcdp->declBus  (c+23,"TransposeFIR transposeCore_22 coff_data",-1,7,0);
	vcdp->declBus  (c+40,"TransposeFIR transposeCore_22 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_22 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_22 clc",-1);
	vcdp->declBus  (c+41,"TransposeFIR transposeCore_22 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_22 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_22 reset",-1);
	// Tracing: TransposeFIR transposeCore_22 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+2,"TransposeFIR transposeCore_22 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_23 input_data",-1,15,0);
	vcdp->declBus  (c+24,"TransposeFIR transposeCore_23 coff_data",-1,7,0);
	vcdp->declBus  (c+41,"TransposeFIR transposeCore_23 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_23 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_23 clc",-1);
	vcdp->declBus  (c+42,"TransposeFIR transposeCore_23 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_23 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_23 reset",-1);
	// Tracing: TransposeFIR transposeCore_23 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+3,"TransposeFIR transposeCore_23 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_24 input_data",-1,15,0);
	vcdp->declBus  (c+25,"TransposeFIR transposeCore_24 coff_data",-1,7,0);
	vcdp->declBus  (c+42,"TransposeFIR transposeCore_24 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_24 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_24 clc",-1);
	vcdp->declBus  (c+43,"TransposeFIR transposeCore_24 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_24 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_24 reset",-1);
	// Tracing: TransposeFIR transposeCore_24 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+4,"TransposeFIR transposeCore_24 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_25 input_data",-1,15,0);
	vcdp->declBus  (c+26,"TransposeFIR transposeCore_25 coff_data",-1,7,0);
	vcdp->declBus  (c+43,"TransposeFIR transposeCore_25 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_25 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_25 clc",-1);
	vcdp->declBus  (c+44,"TransposeFIR transposeCore_25 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_25 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_25 reset",-1);
	// Tracing: TransposeFIR transposeCore_25 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+5,"TransposeFIR transposeCore_25 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_26 input_data",-1,15,0);
	vcdp->declBus  (c+27,"TransposeFIR transposeCore_26 coff_data",-1,7,0);
	vcdp->declBus  (c+44,"TransposeFIR transposeCore_26 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_26 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_26 clc",-1);
	vcdp->declBus  (c+45,"TransposeFIR transposeCore_26 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_26 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_26 reset",-1);
	// Tracing: TransposeFIR transposeCore_26 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+6,"TransposeFIR transposeCore_26 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_27 input_data",-1,15,0);
	vcdp->declBus  (c+28,"TransposeFIR transposeCore_27 coff_data",-1,7,0);
	vcdp->declBus  (c+45,"TransposeFIR transposeCore_27 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_27 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_27 clc",-1);
	vcdp->declBus  (c+46,"TransposeFIR transposeCore_27 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_27 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_27 reset",-1);
	// Tracing: TransposeFIR transposeCore_27 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+7,"TransposeFIR transposeCore_27 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_28 input_data",-1,15,0);
	vcdp->declBus  (c+29,"TransposeFIR transposeCore_28 coff_data",-1,7,0);
	vcdp->declBus  (c+46,"TransposeFIR transposeCore_28 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_28 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_28 clc",-1);
	vcdp->declBus  (c+47,"TransposeFIR transposeCore_28 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_28 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_28 reset",-1);
	// Tracing: TransposeFIR transposeCore_28 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+8,"TransposeFIR transposeCore_28 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_29 input_data",-1,15,0);
	vcdp->declBus  (c+30,"TransposeFIR transposeCore_29 coff_data",-1,7,0);
	vcdp->declBus  (c+47,"TransposeFIR transposeCore_29 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_29 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_29 clc",-1);
	vcdp->declBus  (c+48,"TransposeFIR transposeCore_29 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_29 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_29 reset",-1);
	// Tracing: TransposeFIR transposeCore_29 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+9,"TransposeFIR transposeCore_29 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_30 input_data",-1,15,0);
	vcdp->declBus  (c+31,"TransposeFIR transposeCore_30 coff_data",-1,7,0);
	vcdp->declBus  (c+48,"TransposeFIR transposeCore_30 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_30 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_30 clc",-1);
	vcdp->declBus  (c+49,"TransposeFIR transposeCore_30 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_30 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_30 reset",-1);
	// Tracing: TransposeFIR transposeCore_30 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+10,"TransposeFIR transposeCore_30 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_31 input_data",-1,15,0);
	vcdp->declBus  (c+32,"TransposeFIR transposeCore_31 coff_data",-1,7,0);
	vcdp->declBus  (c+49,"TransposeFIR transposeCore_31 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_31 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_31 clc",-1);
	vcdp->declBus  (c+50,"TransposeFIR transposeCore_31 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_31 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_31 reset",-1);
	// Tracing: TransposeFIR transposeCore_31 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+11,"TransposeFIR transposeCore_31 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_32 input_data",-1,15,0);
	vcdp->declBus  (c+31,"TransposeFIR transposeCore_32 coff_data",-1,7,0);
	vcdp->declBus  (c+50,"TransposeFIR transposeCore_32 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_32 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_32 clc",-1);
	vcdp->declBus  (c+51,"TransposeFIR transposeCore_32 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_32 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_32 reset",-1);
	// Tracing: TransposeFIR transposeCore_32 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+12,"TransposeFIR transposeCore_32 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_33 input_data",-1,15,0);
	vcdp->declBus  (c+30,"TransposeFIR transposeCore_33 coff_data",-1,7,0);
	vcdp->declBus  (c+51,"TransposeFIR transposeCore_33 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_33 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_33 clc",-1);
	vcdp->declBus  (c+52,"TransposeFIR transposeCore_33 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_33 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_33 reset",-1);
	// Tracing: TransposeFIR transposeCore_33 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+13,"TransposeFIR transposeCore_33 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_34 input_data",-1,15,0);
	vcdp->declBus  (c+29,"TransposeFIR transposeCore_34 coff_data",-1,7,0);
	vcdp->declBus  (c+52,"TransposeFIR transposeCore_34 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_34 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_34 clc",-1);
	vcdp->declBus  (c+53,"TransposeFIR transposeCore_34 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_34 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_34 reset",-1);
	// Tracing: TransposeFIR transposeCore_34 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+14,"TransposeFIR transposeCore_34 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_35 input_data",-1,15,0);
	vcdp->declBus  (c+28,"TransposeFIR transposeCore_35 coff_data",-1,7,0);
	vcdp->declBus  (c+53,"TransposeFIR transposeCore_35 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_35 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_35 clc",-1);
	vcdp->declBus  (c+54,"TransposeFIR transposeCore_35 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_35 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_35 reset",-1);
	// Tracing: TransposeFIR transposeCore_35 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+15,"TransposeFIR transposeCore_35 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_36 input_data",-1,15,0);
	vcdp->declBus  (c+27,"TransposeFIR transposeCore_36 coff_data",-1,7,0);
	vcdp->declBus  (c+54,"TransposeFIR transposeCore_36 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_36 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_36 clc",-1);
	vcdp->declBus  (c+55,"TransposeFIR transposeCore_36 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_36 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_36 reset",-1);
	// Tracing: TransposeFIR transposeCore_36 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+16,"TransposeFIR transposeCore_36 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_37 input_data",-1,15,0);
	vcdp->declBus  (c+26,"TransposeFIR transposeCore_37 coff_data",-1,7,0);
	vcdp->declBus  (c+55,"TransposeFIR transposeCore_37 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_37 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_37 clc",-1);
	vcdp->declBus  (c+56,"TransposeFIR transposeCore_37 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_37 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_37 reset",-1);
	// Tracing: TransposeFIR transposeCore_37 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+17,"TransposeFIR transposeCore_37 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_38 input_data",-1,15,0);
	vcdp->declBus  (c+25,"TransposeFIR transposeCore_38 coff_data",-1,7,0);
	vcdp->declBus  (c+56,"TransposeFIR transposeCore_38 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_38 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_38 clc",-1);
	vcdp->declBus  (c+57,"TransposeFIR transposeCore_38 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_38 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_38 reset",-1);
	// Tracing: TransposeFIR transposeCore_38 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+18,"TransposeFIR transposeCore_38 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_39 input_data",-1,15,0);
	vcdp->declBus  (c+24,"TransposeFIR transposeCore_39 coff_data",-1,7,0);
	vcdp->declBus  (c+57,"TransposeFIR transposeCore_39 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_39 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_39 clc",-1);
	vcdp->declBus  (c+58,"TransposeFIR transposeCore_39 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_39 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_39 reset",-1);
	// Tracing: TransposeFIR transposeCore_39 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+19,"TransposeFIR transposeCore_39 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_40 input_data",-1,15,0);
	vcdp->declBus  (c+23,"TransposeFIR transposeCore_40 coff_data",-1,7,0);
	vcdp->declBus  (c+58,"TransposeFIR transposeCore_40 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_40 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_40 clc",-1);
	vcdp->declBus  (c+59,"TransposeFIR transposeCore_40 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_40 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_40 reset",-1);
	// Tracing: TransposeFIR transposeCore_40 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+20,"TransposeFIR transposeCore_40 previous_adder_data",-1,23,0);
	vcdp->declBus  (c+34,"TransposeFIR transposeCore_41 input_data",-1,15,0);
	vcdp->declBus  (c+27,"TransposeFIR transposeCore_41 coff_data",-1,7,0);
	vcdp->declBus  (c+59,"TransposeFIR transposeCore_41 adder_data",-1,23,0);
	vcdp->declBit  (c+33,"TransposeFIR transposeCore_41 valid",-1);
	vcdp->declBit  (c+37,"TransposeFIR transposeCore_41 clc",-1);
	vcdp->declBus  (c+60,"TransposeFIR transposeCore_41 next_adder_data",-1,23,0);
	vcdp->declBit  (c+38,"TransposeFIR transposeCore_41 clk",-1);
	vcdp->declBit  (c+39,"TransposeFIR transposeCore_41 reset",-1);
	// Tracing: TransposeFIR transposeCore_41 _zz_next_adder_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/TransposeFIR.v:350
	vcdp->declBus  (c+21,"TransposeFIR transposeCore_41 previous_adder_data",-1,23,0);
    }
}

void VTransposeFIR::traceFullThis__1(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+2,(vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+3,(vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+4,(vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+5,(vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+6,(vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+7,(vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+8,(vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+9,(vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+10,(vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+11,(vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+12,(vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+13,(vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+14,(vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+15,(vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+16,(vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+17,(vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+18,(vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+19,(vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+20,(vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+21,(vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data),24);
	vcdp->fullBus  (c+22,(vlTOPp->TransposeFIR__DOT__coff_mem_0),8);
	vcdp->fullBus  (c+23,(vlTOPp->TransposeFIR__DOT__coff_mem_1),8);
	vcdp->fullBus  (c+24,(vlTOPp->TransposeFIR__DOT__coff_mem_2),8);
	vcdp->fullBus  (c+25,(vlTOPp->TransposeFIR__DOT__coff_mem_3),8);
	vcdp->fullBus  (c+26,(vlTOPp->TransposeFIR__DOT__coff_mem_4),8);
	vcdp->fullBus  (c+27,(vlTOPp->TransposeFIR__DOT__coff_mem_5),8);
	vcdp->fullBus  (c+28,(vlTOPp->TransposeFIR__DOT__coff_mem_6),8);
	vcdp->fullBus  (c+29,(vlTOPp->TransposeFIR__DOT__coff_mem_7),8);
	vcdp->fullBus  (c+30,(vlTOPp->TransposeFIR__DOT__coff_mem_8),8);
	vcdp->fullBus  (c+31,(vlTOPp->TransposeFIR__DOT__coff_mem_9),8);
	vcdp->fullBus  (c+32,(vlTOPp->TransposeFIR__DOT__coff_mem_10),8);
	vcdp->fullBit  (c+33,(vlTOPp->raw_data_valid));
	vcdp->fullBus  (c+34,(vlTOPp->raw_data_payload_0),16);
	vcdp->fullBit  (c+35,(vlTOPp->filtered_data_valid));
	vcdp->fullBus  (c+36,(vlTOPp->filtered_data_payload_0),24);
	vcdp->fullBit  (c+37,(vlTOPp->clc));
	vcdp->fullBit  (c+38,(vlTOPp->clk));
	vcdp->fullBit  (c+39,(vlTOPp->reset));
	vcdp->fullBus  (c+40,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_0)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+41,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+42,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+43,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+44,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+45,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+46,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+47,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+48,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+49,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+50,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_10)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+51,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+52,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+53,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+54,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+55,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+56,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+57,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+58,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+59,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+60,((0xffffffU & (VL_MULS_III(24,24,24, 
							(0xffffffU 
							 & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
							(0xffffffU 
							 & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
					    + vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data))),24);
	vcdp->fullBus  (c+61,(0U),24);
    }
}
