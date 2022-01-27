// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDirectFIR__Syms.h"


//======================

void VDirectFIR::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VDirectFIR::traceInit, &VDirectFIR::traceFull, &VDirectFIR::traceChg, this);
}
void VDirectFIR::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VDirectFIR* t=(VDirectFIR*)userthis;
    VDirectFIR__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VDirectFIR::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDirectFIR* t=(VDirectFIR*)userthis;
    VDirectFIR__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VDirectFIR::traceInitThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VDirectFIR::traceFullThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDirectFIR::traceInitThis__1(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+46,"raw_data_valid",-1);
	vcdp->declBus  (c+47,"raw_data_payload_0",-1,11,0);
	vcdp->declBit  (c+48,"filtered_data_valid",-1);
	vcdp->declBus  (c+49,"filtered_data_payload_0",-1,28,0);
	vcdp->declBit  (c+50,"clk",-1);
	vcdp->declBit  (c+51,"reset",-1);
	vcdp->declBit  (c+46,"DirectFIR raw_data_valid",-1);
	vcdp->declBus  (c+47,"DirectFIR raw_data_payload_0",-1,11,0);
	vcdp->declBit  (c+48,"DirectFIR filtered_data_valid",-1);
	vcdp->declBus  (c+49,"DirectFIR filtered_data_payload_0",-1,28,0);
	vcdp->declBit  (c+50,"DirectFIR clk",-1);
	vcdp->declBit  (c+51,"DirectFIR reset",-1);
	vcdp->declBit  (c+9,"DirectFIR directFIRCore_1_filtered_data_valid",-1);
	vcdp->declBus  (c+10,"DirectFIR directFIRCore_1_filtered_data_payload",-1,28,0);
	vcdp->declBus  (c+1,"DirectFIR coff_mem_0",-1,8,0);
	vcdp->declBus  (c+2,"DirectFIR coff_mem_1",-1,8,0);
	vcdp->declBus  (c+3,"DirectFIR coff_mem_2",-1,8,0);
	vcdp->declBus  (c+4,"DirectFIR coff_mem_3",-1,8,0);
	vcdp->declBus  (c+5,"DirectFIR coff_mem_4",-1,8,0);
	vcdp->declBus  (c+6,"DirectFIR coff_mem_5",-1,8,0);
	vcdp->declBus  (c+7,"DirectFIR coff_mem_6",-1,8,0);
	vcdp->declBus  (c+8,"DirectFIR coff_mem_7",-1,8,0);
	vcdp->declBus  (c+8,"DirectFIR coff_mem_8",-1,8,0);
	vcdp->declBus  (c+7,"DirectFIR coff_mem_9",-1,8,0);
	vcdp->declBus  (c+6,"DirectFIR coff_mem_10",-1,8,0);
	vcdp->declBus  (c+5,"DirectFIR coff_mem_11",-1,8,0);
	vcdp->declBus  (c+4,"DirectFIR coff_mem_12",-1,8,0);
	vcdp->declBus  (c+3,"DirectFIR coff_mem_13",-1,8,0);
	vcdp->declBus  (c+2,"DirectFIR coff_mem_14",-1,8,0);
	vcdp->declBus  (c+1,"DirectFIR coff_mem_15",-1,8,0);
	vcdp->declBit  (c+9,"DirectFIR filtered_valid_vec_0",-1);
	vcdp->declBit  (c+46,"DirectFIR directFIRCore_1 raw_data_valid",-1);
	vcdp->declBus  (c+47,"DirectFIR directFIRCore_1 raw_data_payload",-1,11,0);
	vcdp->declBus  (c+1,"DirectFIR directFIRCore_1 coff_data_0",-1,8,0);
	vcdp->declBus  (c+2,"DirectFIR directFIRCore_1 coff_data_1",-1,8,0);
	vcdp->declBus  (c+3,"DirectFIR directFIRCore_1 coff_data_2",-1,8,0);
	vcdp->declBus  (c+4,"DirectFIR directFIRCore_1 coff_data_3",-1,8,0);
	vcdp->declBus  (c+5,"DirectFIR directFIRCore_1 coff_data_4",-1,8,0);
	vcdp->declBus  (c+6,"DirectFIR directFIRCore_1 coff_data_5",-1,8,0);
	vcdp->declBus  (c+7,"DirectFIR directFIRCore_1 coff_data_6",-1,8,0);
	vcdp->declBus  (c+8,"DirectFIR directFIRCore_1 coff_data_7",-1,8,0);
	vcdp->declBus  (c+8,"DirectFIR directFIRCore_1 coff_data_8",-1,8,0);
	vcdp->declBus  (c+7,"DirectFIR directFIRCore_1 coff_data_9",-1,8,0);
	vcdp->declBus  (c+6,"DirectFIR directFIRCore_1 coff_data_10",-1,8,0);
	vcdp->declBus  (c+5,"DirectFIR directFIRCore_1 coff_data_11",-1,8,0);
	vcdp->declBus  (c+4,"DirectFIR directFIRCore_1 coff_data_12",-1,8,0);
	vcdp->declBus  (c+3,"DirectFIR directFIRCore_1 coff_data_13",-1,8,0);
	vcdp->declBus  (c+2,"DirectFIR directFIRCore_1 coff_data_14",-1,8,0);
	vcdp->declBus  (c+1,"DirectFIR directFIRCore_1 coff_data_15",-1,8,0);
	vcdp->declBit  (c+9,"DirectFIR directFIRCore_1 filtered_data_valid",-1);
	vcdp->declBus  (c+10,"DirectFIR directFIRCore_1 filtered_data_payload",-1,28,0);
	vcdp->declBit  (c+50,"DirectFIR directFIRCore_1 clk",-1);
	vcdp->declBit  (c+51,"DirectFIR directFIRCore_1 reset",-1);
	// Tracing: DirectFIR directFIRCore_1 _zz_internal_en // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:108
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:109
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:110
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:111
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:112
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:113
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:114
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:115
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:116
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:117
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:118
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:119
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:120
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:121
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:122
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:123
	// Tracing: DirectFIR directFIRCore_1 _zz_mult_data_vec_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:124
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:125
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:126
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:127
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:128
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:129
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:130
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:131
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:132
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:133
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:134
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:135
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:136
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:137
	// Tracing: DirectFIR directFIRCore_1 _zz_sum_result_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/DirectFIR.v:138
	vcdp->declBus  (c+11,"DirectFIR directFIRCore_1 internal_en",-1,2,0);
	vcdp->declBus  (c+12,"DirectFIR directFIRCore_1 raw_data_vec_0",-1,11,0);
	vcdp->declBus  (c+13,"DirectFIR directFIRCore_1 raw_data_vec_1",-1,11,0);
	vcdp->declBus  (c+14,"DirectFIR directFIRCore_1 raw_data_vec_2",-1,11,0);
	vcdp->declBus  (c+15,"DirectFIR directFIRCore_1 raw_data_vec_3",-1,11,0);
	vcdp->declBus  (c+16,"DirectFIR directFIRCore_1 raw_data_vec_4",-1,11,0);
	vcdp->declBus  (c+17,"DirectFIR directFIRCore_1 raw_data_vec_5",-1,11,0);
	vcdp->declBus  (c+18,"DirectFIR directFIRCore_1 raw_data_vec_6",-1,11,0);
	vcdp->declBus  (c+19,"DirectFIR directFIRCore_1 raw_data_vec_7",-1,11,0);
	vcdp->declBus  (c+20,"DirectFIR directFIRCore_1 raw_data_vec_8",-1,11,0);
	vcdp->declBus  (c+21,"DirectFIR directFIRCore_1 raw_data_vec_9",-1,11,0);
	vcdp->declBus  (c+22,"DirectFIR directFIRCore_1 raw_data_vec_10",-1,11,0);
	vcdp->declBus  (c+23,"DirectFIR directFIRCore_1 raw_data_vec_11",-1,11,0);
	vcdp->declBus  (c+24,"DirectFIR directFIRCore_1 raw_data_vec_12",-1,11,0);
	vcdp->declBus  (c+25,"DirectFIR directFIRCore_1 raw_data_vec_13",-1,11,0);
	vcdp->declBus  (c+26,"DirectFIR directFIRCore_1 raw_data_vec_14",-1,11,0);
	vcdp->declBus  (c+27,"DirectFIR directFIRCore_1 raw_data_vec_15",-1,11,0);
	vcdp->declBus  (c+28,"DirectFIR directFIRCore_1 mult_data_vec_0",-1,28,0);
	vcdp->declBus  (c+29,"DirectFIR directFIRCore_1 mult_data_vec_1",-1,28,0);
	vcdp->declBus  (c+30,"DirectFIR directFIRCore_1 mult_data_vec_2",-1,28,0);
	vcdp->declBus  (c+31,"DirectFIR directFIRCore_1 mult_data_vec_3",-1,28,0);
	vcdp->declBus  (c+32,"DirectFIR directFIRCore_1 mult_data_vec_4",-1,28,0);
	vcdp->declBus  (c+33,"DirectFIR directFIRCore_1 mult_data_vec_5",-1,28,0);
	vcdp->declBus  (c+34,"DirectFIR directFIRCore_1 mult_data_vec_6",-1,28,0);
	vcdp->declBus  (c+35,"DirectFIR directFIRCore_1 mult_data_vec_7",-1,28,0);
	vcdp->declBus  (c+36,"DirectFIR directFIRCore_1 mult_data_vec_8",-1,28,0);
	vcdp->declBus  (c+37,"DirectFIR directFIRCore_1 mult_data_vec_9",-1,28,0);
	vcdp->declBus  (c+38,"DirectFIR directFIRCore_1 mult_data_vec_10",-1,28,0);
	vcdp->declBus  (c+39,"DirectFIR directFIRCore_1 mult_data_vec_11",-1,28,0);
	vcdp->declBus  (c+40,"DirectFIR directFIRCore_1 mult_data_vec_12",-1,28,0);
	vcdp->declBus  (c+41,"DirectFIR directFIRCore_1 mult_data_vec_13",-1,28,0);
	vcdp->declBus  (c+42,"DirectFIR directFIRCore_1 mult_data_vec_14",-1,28,0);
	vcdp->declBus  (c+43,"DirectFIR directFIRCore_1 mult_data_vec_15",-1,28,0);
	vcdp->declBit  (c+44,"DirectFIR directFIRCore_1 when_DirectFIR_l29",-1);
	vcdp->declBus  (c+10,"DirectFIR directFIRCore_1 sum_result",-1,28,0);
	vcdp->declBit  (c+45,"DirectFIR directFIRCore_1 when_DirectFIR_l35",-1);
    }
}

void VDirectFIR::traceFullThis__1(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->DirectFIR__DOT__coff_mem_0),9);
	vcdp->fullBus  (c+2,(vlTOPp->DirectFIR__DOT__coff_mem_1),9);
	vcdp->fullBus  (c+3,(vlTOPp->DirectFIR__DOT__coff_mem_2),9);
	vcdp->fullBus  (c+4,(vlTOPp->DirectFIR__DOT__coff_mem_3),9);
	vcdp->fullBus  (c+5,(vlTOPp->DirectFIR__DOT__coff_mem_4),9);
	vcdp->fullBus  (c+6,(vlTOPp->DirectFIR__DOT__coff_mem_5),9);
	vcdp->fullBus  (c+7,(vlTOPp->DirectFIR__DOT__coff_mem_6),9);
	vcdp->fullBus  (c+8,(vlTOPp->DirectFIR__DOT__coff_mem_7),9);
	vcdp->fullBit  (c+9,((1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
				    >> 2U))));
	vcdp->fullBus  (c+10,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result),29);
	vcdp->fullBus  (c+11,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en),3);
	vcdp->fullBus  (c+12,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0),12);
	vcdp->fullBus  (c+13,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1),12);
	vcdp->fullBus  (c+14,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2),12);
	vcdp->fullBus  (c+15,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3),12);
	vcdp->fullBus  (c+16,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4),12);
	vcdp->fullBus  (c+17,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5),12);
	vcdp->fullBus  (c+18,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6),12);
	vcdp->fullBus  (c+19,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7),12);
	vcdp->fullBus  (c+20,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8),12);
	vcdp->fullBus  (c+21,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9),12);
	vcdp->fullBus  (c+22,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10),12);
	vcdp->fullBus  (c+23,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11),12);
	vcdp->fullBus  (c+24,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12),12);
	vcdp->fullBus  (c+25,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13),12);
	vcdp->fullBus  (c+26,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14),12);
	vcdp->fullBus  (c+27,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15),12);
	vcdp->fullBus  (c+28,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0),29);
	vcdp->fullBus  (c+29,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1),29);
	vcdp->fullBus  (c+30,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2),29);
	vcdp->fullBus  (c+31,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3),29);
	vcdp->fullBus  (c+32,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4),29);
	vcdp->fullBus  (c+33,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5),29);
	vcdp->fullBus  (c+34,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6),29);
	vcdp->fullBus  (c+35,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7),29);
	vcdp->fullBus  (c+36,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8),29);
	vcdp->fullBus  (c+37,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9),29);
	vcdp->fullBus  (c+38,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10),29);
	vcdp->fullBus  (c+39,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11),29);
	vcdp->fullBus  (c+40,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12),29);
	vcdp->fullBus  (c+41,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13),29);
	vcdp->fullBus  (c+42,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14),29);
	vcdp->fullBus  (c+43,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15),29);
	vcdp->fullBit  (c+44,((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))));
	vcdp->fullBit  (c+45,((1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
				     >> 1U))));
	vcdp->fullBit  (c+46,(vlTOPp->raw_data_valid));
	vcdp->fullBus  (c+47,(vlTOPp->raw_data_payload_0),12);
	vcdp->fullBit  (c+48,(vlTOPp->filtered_data_valid));
	vcdp->fullBus  (c+49,(vlTOPp->filtered_data_payload_0),29);
	vcdp->fullBit  (c+50,(vlTOPp->clk));
	vcdp->fullBit  (c+51,(vlTOPp->reset));
    }
}
