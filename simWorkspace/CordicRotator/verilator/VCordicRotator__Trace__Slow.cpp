// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCordicRotator__Syms.h"


//======================

void VCordicRotator::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCordicRotator::traceInit, &VCordicRotator::traceFull, &VCordicRotator::traceChg, this);
}
void VCordicRotator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCordicRotator* t=(VCordicRotator*)userthis;
    VCordicRotator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCordicRotator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCordicRotator* t=(VCordicRotator*)userthis;
    VCordicRotator__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCordicRotator::traceInitThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCordicRotator::traceFullThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCordicRotator::traceInitThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"rotate_mode",-1);
	vcdp->declBus  (c+3,"x_u",-1,1,0);
	vcdp->declBit  (c+4,"w_en",-1);
	vcdp->declBus  (c+5,"w_addr",-1,7,0);
	vcdp->declBus  (c+6,"w_data",-1,31,0);
	vcdp->declBit  (c+7,"raw_data_valid",-1);
	vcdp->declBit  (c+8,"raw_data_ready",-1);
	vcdp->declBus  (c+9,"raw_data_payload_x",-1,31,0);
	vcdp->declBus  (c+10,"raw_data_payload_y",-1,31,0);
	vcdp->declBus  (c+11,"raw_data_payload_z",-1,31,0);
	vcdp->declBit  (c+12,"result_valid",-1);
	vcdp->declBus  (c+13,"result_payload_x",-1,31,0);
	vcdp->declBus  (c+14,"result_payload_y",-1,31,0);
	vcdp->declBus  (c+15,"result_payload_z",-1,31,0);
	vcdp->declBit  (c+16,"clk",-1);
	vcdp->declBit  (c+17,"reset",-1);
	vcdp->declBit  (c+2,"CordicRotator rotate_mode",-1);
	vcdp->declBus  (c+3,"CordicRotator x_u",-1,1,0);
	vcdp->declBit  (c+4,"CordicRotator w_en",-1);
	vcdp->declBus  (c+5,"CordicRotator w_addr",-1,7,0);
	vcdp->declBus  (c+6,"CordicRotator w_data",-1,31,0);
	vcdp->declBit  (c+7,"CordicRotator raw_data_valid",-1);
	vcdp->declBit  (c+8,"CordicRotator raw_data_ready",-1);
	vcdp->declBus  (c+9,"CordicRotator raw_data_payload_x",-1,31,0);
	vcdp->declBus  (c+10,"CordicRotator raw_data_payload_y",-1,31,0);
	vcdp->declBus  (c+11,"CordicRotator raw_data_payload_z",-1,31,0);
	vcdp->declBit  (c+12,"CordicRotator result_valid",-1);
	vcdp->declBus  (c+13,"CordicRotator result_payload_x",-1,31,0);
	vcdp->declBus  (c+14,"CordicRotator result_payload_y",-1,31,0);
	vcdp->declBus  (c+15,"CordicRotator result_payload_z",-1,31,0);
	vcdp->declBit  (c+16,"CordicRotator clk",-1);
	vcdp->declBit  (c+17,"CordicRotator reset",-1);
	// Tracing: CordicRotator _zz__zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:25
	// Tracing: CordicRotator _zz__zz_result_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:26
	// Tracing: CordicRotator _zz__zz_result_payload_x_1_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:27
	// Tracing: CordicRotator _zz__zz_result_payload_x_1_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:28
	// Tracing: CordicRotator _zz__zz_result_payload_x_1_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:29
	// Tracing: CordicRotator _zz__zz_result_payload_x_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:30
	// Tracing: CordicRotator _zz__zz_result_payload_x_17_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:31
	// Tracing: CordicRotator _zz__zz_result_payload_x_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:32
	// Tracing: CordicRotator _zz__zz_result_payload_x_32_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:33
	// Tracing: CordicRotator _zz__zz_result_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:34
	// Tracing: CordicRotator _zz__zz_result_payload_x_2_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:35
	// Tracing: CordicRotator _zz__zz_result_payload_x_2_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:36
	// Tracing: CordicRotator _zz__zz_result_payload_x_2_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:37
	// Tracing: CordicRotator _zz__zz_result_payload_x_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:38
	// Tracing: CordicRotator _zz__zz_result_payload_x_18_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:39
	// Tracing: CordicRotator _zz__zz_result_payload_x_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:40
	// Tracing: CordicRotator _zz__zz_result_payload_x_33_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:41
	// Tracing: CordicRotator _zz__zz_result_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:42
	// Tracing: CordicRotator _zz__zz_result_payload_x_3_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:43
	// Tracing: CordicRotator _zz__zz_result_payload_x_3_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:44
	// Tracing: CordicRotator _zz__zz_result_payload_x_3_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:45
	// Tracing: CordicRotator _zz__zz_result_payload_x_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:46
	// Tracing: CordicRotator _zz__zz_result_payload_x_19_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:47
	// Tracing: CordicRotator _zz__zz_result_payload_x_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:48
	// Tracing: CordicRotator _zz__zz_result_payload_x_34_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:49
	// Tracing: CordicRotator _zz__zz_result_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:50
	// Tracing: CordicRotator _zz__zz_result_payload_x_4_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:51
	// Tracing: CordicRotator _zz__zz_result_payload_x_4_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:52
	// Tracing: CordicRotator _zz__zz_result_payload_x_4_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:53
	// Tracing: CordicRotator _zz__zz_result_payload_x_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:54
	// Tracing: CordicRotator _zz__zz_result_payload_x_20_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:55
	// Tracing: CordicRotator _zz__zz_result_payload_x_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:56
	// Tracing: CordicRotator _zz__zz_result_payload_x_35_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:57
	// Tracing: CordicRotator _zz__zz_result_payload_x_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:58
	// Tracing: CordicRotator _zz__zz_result_payload_x_5_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:59
	// Tracing: CordicRotator _zz__zz_result_payload_x_5_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:60
	// Tracing: CordicRotator _zz__zz_result_payload_x_5_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:61
	// Tracing: CordicRotator _zz__zz_result_payload_x_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:62
	// Tracing: CordicRotator _zz__zz_result_payload_x_21_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:63
	// Tracing: CordicRotator _zz__zz_result_payload_x_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:64
	// Tracing: CordicRotator _zz__zz_result_payload_x_36_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:65
	// Tracing: CordicRotator _zz__zz_result_payload_x_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:66
	// Tracing: CordicRotator _zz__zz_result_payload_x_6_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:67
	// Tracing: CordicRotator _zz__zz_result_payload_x_6_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:68
	// Tracing: CordicRotator _zz__zz_result_payload_x_6_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:69
	// Tracing: CordicRotator _zz__zz_result_payload_x_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:70
	// Tracing: CordicRotator _zz__zz_result_payload_x_22_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:71
	// Tracing: CordicRotator _zz__zz_result_payload_x_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:72
	// Tracing: CordicRotator _zz__zz_result_payload_x_37_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:73
	// Tracing: CordicRotator _zz__zz_result_payload_x_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:74
	// Tracing: CordicRotator _zz__zz_result_payload_x_7_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:75
	// Tracing: CordicRotator _zz__zz_result_payload_x_7_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:76
	// Tracing: CordicRotator _zz__zz_result_payload_x_7_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:77
	// Tracing: CordicRotator _zz__zz_result_payload_x_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:78
	// Tracing: CordicRotator _zz__zz_result_payload_x_23_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:79
	// Tracing: CordicRotator _zz__zz_result_payload_x_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:80
	// Tracing: CordicRotator _zz__zz_result_payload_x_38_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:81
	// Tracing: CordicRotator _zz__zz_result_payload_x_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:82
	// Tracing: CordicRotator _zz__zz_result_payload_x_8_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:83
	// Tracing: CordicRotator _zz__zz_result_payload_x_8_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:84
	// Tracing: CordicRotator _zz__zz_result_payload_x_8_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:85
	// Tracing: CordicRotator _zz__zz_result_payload_x_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:86
	// Tracing: CordicRotator _zz__zz_result_payload_x_24_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:87
	// Tracing: CordicRotator _zz__zz_result_payload_x_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:88
	// Tracing: CordicRotator _zz__zz_result_payload_x_39_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:89
	// Tracing: CordicRotator _zz__zz_result_payload_x_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:90
	// Tracing: CordicRotator _zz__zz_result_payload_x_9_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:91
	// Tracing: CordicRotator _zz__zz_result_payload_x_9_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:92
	// Tracing: CordicRotator _zz__zz_result_payload_x_9_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:93
	// Tracing: CordicRotator _zz__zz_result_payload_x_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:94
	// Tracing: CordicRotator _zz__zz_result_payload_x_25_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:95
	// Tracing: CordicRotator _zz__zz_result_payload_x_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:96
	// Tracing: CordicRotator _zz__zz_result_payload_x_40_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:97
	// Tracing: CordicRotator _zz__zz_result_payload_x_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:98
	// Tracing: CordicRotator _zz__zz_result_payload_x_10_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:99
	// Tracing: CordicRotator _zz__zz_result_payload_x_10_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:100
	// Tracing: CordicRotator _zz__zz_result_payload_x_10_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:101
	// Tracing: CordicRotator _zz__zz_result_payload_x_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:102
	// Tracing: CordicRotator _zz__zz_result_payload_x_26_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:103
	// Tracing: CordicRotator _zz__zz_result_payload_x_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:104
	// Tracing: CordicRotator _zz__zz_result_payload_x_41_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:105
	// Tracing: CordicRotator _zz__zz_result_payload_x_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:106
	// Tracing: CordicRotator _zz__zz_result_payload_x_11_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:107
	// Tracing: CordicRotator _zz__zz_result_payload_x_11_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:108
	// Tracing: CordicRotator _zz__zz_result_payload_x_11_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:109
	// Tracing: CordicRotator _zz__zz_result_payload_x_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:110
	// Tracing: CordicRotator _zz__zz_result_payload_x_27_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:111
	// Tracing: CordicRotator _zz__zz_result_payload_x_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:112
	// Tracing: CordicRotator _zz__zz_result_payload_x_42_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:113
	// Tracing: CordicRotator _zz__zz_result_payload_x_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:114
	// Tracing: CordicRotator _zz__zz_result_payload_x_12_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:115
	// Tracing: CordicRotator _zz__zz_result_payload_x_12_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:116
	// Tracing: CordicRotator _zz__zz_result_payload_x_12_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:117
	// Tracing: CordicRotator _zz__zz_result_payload_x_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:118
	// Tracing: CordicRotator _zz__zz_result_payload_x_28_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:119
	// Tracing: CordicRotator _zz__zz_result_payload_x_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:120
	// Tracing: CordicRotator _zz__zz_result_payload_x_43_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:121
	// Tracing: CordicRotator _zz__zz_result_payload_x_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:122
	// Tracing: CordicRotator _zz__zz_result_payload_x_13_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:123
	// Tracing: CordicRotator _zz__zz_result_payload_x_13_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:124
	// Tracing: CordicRotator _zz__zz_result_payload_x_13_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:125
	// Tracing: CordicRotator _zz__zz_result_payload_x_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:126
	// Tracing: CordicRotator _zz__zz_result_payload_x_29_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:127
	// Tracing: CordicRotator _zz__zz_result_payload_x_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:128
	// Tracing: CordicRotator _zz__zz_result_payload_x_44_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:129
	// Tracing: CordicRotator _zz__zz_result_payload_x_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:130
	// Tracing: CordicRotator _zz__zz_result_payload_x_14_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:131
	// Tracing: CordicRotator _zz__zz_result_payload_x_14_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:132
	// Tracing: CordicRotator _zz__zz_result_payload_x_14_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:133
	// Tracing: CordicRotator _zz__zz_result_payload_x_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:134
	// Tracing: CordicRotator _zz__zz_result_payload_x_30_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:135
	// Tracing: CordicRotator _zz__zz_result_payload_x_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:136
	// Tracing: CordicRotator _zz__zz_result_payload_x_45_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:137
	// Tracing: CordicRotator _zz__zz_result_payload_x_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:138
	// Tracing: CordicRotator _zz__zz_result_payload_x_15_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:139
	// Tracing: CordicRotator _zz__zz_result_payload_x_15_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:140
	// Tracing: CordicRotator _zz__zz_result_payload_x_15_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:141
	// Tracing: CordicRotator _zz__zz_result_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:142
	// Tracing: CordicRotator _zz__zz_result_payload_y_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:143
	// Tracing: CordicRotator _zz__zz_result_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:144
	// Tracing: CordicRotator _zz__zz_result_payload_z_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:145
	// Tracing: CordicRotator _zz_result_payload_x // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:146
	// Tracing: CordicRotator _zz_result_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:147
	// Tracing: CordicRotator _zz_result_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:148
	// Tracing: CordicRotator _zz_result_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:149
	// Tracing: CordicRotator _zz_result_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:150
	// Tracing: CordicRotator _zz_result_payload_x_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:151
	// Tracing: CordicRotator _zz_result_payload_x_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:152
	// Tracing: CordicRotator _zz_result_payload_x_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:153
	// Tracing: CordicRotator _zz_result_payload_x_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:154
	// Tracing: CordicRotator _zz_result_payload_x_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:155
	// Tracing: CordicRotator _zz_result_payload_x_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:156
	// Tracing: CordicRotator _zz_result_payload_x_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:157
	// Tracing: CordicRotator _zz_result_payload_x_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:158
	// Tracing: CordicRotator _zz_result_payload_x_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:159
	// Tracing: CordicRotator _zz_result_payload_x_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:160
	// Tracing: CordicRotator _zz_result_payload_x_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:161
	// Tracing: CordicRotator _zz_result_payload_x_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:162
	// Tracing: CordicRotator _zz_result_payload_x_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:163
	// Tracing: CordicRotator _zz_result_payload_x_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:164
	// Tracing: CordicRotator _zz_result_payload_x_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:165
	// Tracing: CordicRotator _zz_result_payload_x_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:166
	// Tracing: CordicRotator _zz_result_payload_x_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:167
	// Tracing: CordicRotator _zz_result_payload_x_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:168
	// Tracing: CordicRotator _zz_result_payload_x_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:169
	// Tracing: CordicRotator _zz_result_payload_x_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:170
	// Tracing: CordicRotator _zz_result_payload_x_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:171
	// Tracing: CordicRotator _zz_result_payload_x_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:172
	// Tracing: CordicRotator _zz_result_payload_x_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:173
	// Tracing: CordicRotator _zz_result_payload_x_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:174
	// Tracing: CordicRotator _zz_result_payload_x_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:175
	// Tracing: CordicRotator _zz_result_payload_x_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:176
	// Tracing: CordicRotator _zz_result_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:177
	// Tracing: CordicRotator _zz_result_payload_x_31 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:178
	// Tracing: CordicRotator _zz_result_payload_x_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:179
	// Tracing: CordicRotator _zz_result_payload_x_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:180
	// Tracing: CordicRotator _zz_result_payload_x_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:181
	// Tracing: CordicRotator _zz_result_payload_x_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:182
	// Tracing: CordicRotator _zz_result_payload_x_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:183
	// Tracing: CordicRotator _zz_result_payload_x_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:184
	// Tracing: CordicRotator _zz_result_payload_x_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:185
	// Tracing: CordicRotator _zz_result_payload_x_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:186
	// Tracing: CordicRotator _zz_result_payload_x_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:187
	// Tracing: CordicRotator _zz_result_payload_x_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:188
	// Tracing: CordicRotator _zz_result_payload_x_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:189
	// Tracing: CordicRotator _zz_result_payload_x_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:190
	// Tracing: CordicRotator _zz_result_payload_x_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:191
	// Tracing: CordicRotator _zz_result_payload_x_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:192
	// Tracing: CordicRotator _zz_result_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:193
	// Tracing: CordicRotator _zz_result_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:194
	// Tracing: CordicRotator _zz_result_valid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:195
	// Tracing: CordicRotator _zz_result_valid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:196
	// Tracing: CordicRotator _zz_result_valid_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:197
	// Tracing: CordicRotator _zz_result_valid_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:198
	// Tracing: CordicRotator _zz_result_valid_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:199
	// Tracing: CordicRotator _zz_result_valid_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:200
	// Tracing: CordicRotator _zz_result_valid_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:201
	// Tracing: CordicRotator _zz_result_valid_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:202
	// Tracing: CordicRotator _zz_result_valid_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:203
	// Tracing: CordicRotator _zz_result_valid_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:204
	// Tracing: CordicRotator _zz_result_valid_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:205
	// Tracing: CordicRotator _zz_result_valid_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:206
	// Tracing: CordicRotator _zz_result_valid_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:207
	// Tracing: CordicRotator _zz_result_valid_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:208
	// Tracing: CordicRotator _zz_result_valid_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:209
	// Tracing: CordicRotator _zz_result_payload_x_46 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:210
	// Tracing: CordicRotator _zz_result_payload_x_47 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:211
	// Tracing: CordicRotator _zz_result_payload_x_48 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:212
	// Tracing: CordicRotator _zz_result_payload_x_49 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:213
	// Tracing: CordicRotator _zz_result_payload_x_50 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:214
	// Tracing: CordicRotator _zz_result_payload_x_51 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:215
	// Tracing: CordicRotator _zz_result_payload_x_52 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:216
	// Tracing: CordicRotator _zz_result_payload_x_53 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:217
	// Tracing: CordicRotator _zz_result_payload_x_54 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:218
	// Tracing: CordicRotator _zz_result_payload_x_55 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:219
	// Tracing: CordicRotator _zz_result_payload_x_56 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:220
	// Tracing: CordicRotator _zz_result_payload_x_57 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:221
	// Tracing: CordicRotator _zz_result_payload_x_58 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:222
	// Tracing: CordicRotator _zz_result_payload_x_59 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:223
	// Tracing: CordicRotator _zz_result_payload_x_60 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:224
	// Tracing: CordicRotator _zz_result_payload_x_61 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:225
	// Tracing: CordicRotator _zz_result_payload_x_62 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:226
	// Tracing: CordicRotator _zz_result_payload_x_63 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:227
	// Tracing: CordicRotator _zz_result_payload_x_64 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:228
	// Tracing: CordicRotator _zz_result_payload_x_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:229
	// Tracing: CordicRotator _zz_result_payload_x_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:230
	// Tracing: CordicRotator _zz_result_payload_x_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:231
	// Tracing: CordicRotator _zz_result_payload_x_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:232
	// Tracing: CordicRotator _zz_result_payload_x_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:233
	// Tracing: CordicRotator _zz_result_payload_x_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:234
	// Tracing: CordicRotator _zz_result_payload_x_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:235
	// Tracing: CordicRotator _zz_result_payload_x_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:236
	// Tracing: CordicRotator _zz_result_payload_x_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:237
	// Tracing: CordicRotator _zz_result_payload_x_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:238
	// Tracing: CordicRotator _zz_result_payload_z_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:239
	// Tracing: CordicRotator _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:240
	// Tracing: CordicRotator _zz_result_payload_x_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:241
	vcdp->declBit  (c+1,"CordicRotator raw_data_fire",-1);
	// Tracing: CordicRotator _zz_result_payload_x_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:243
	// Tracing: CordicRotator _zz_result_payload_x_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:244
	// Tracing: CordicRotator _zz_result_payload_x_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:245
	// Tracing: CordicRotator _zz_result_payload_x_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:246
	// Tracing: CordicRotator _zz_result_payload_x_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:247
	// Tracing: CordicRotator _zz_result_payload_x_81 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:248
	// Tracing: CordicRotator _zz_result_payload_x_82 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:249
	// Tracing: CordicRotator _zz_result_payload_x_83 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:250
	// Tracing: CordicRotator _zz_result_payload_x_84 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:251
	// Tracing: CordicRotator _zz_result_payload_x_85 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:252
	// Tracing: CordicRotator _zz_result_payload_x_86 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:253
	// Tracing: CordicRotator _zz_result_payload_x_87 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:254
	// Tracing: CordicRotator _zz_result_payload_x_88 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:255
	// Tracing: CordicRotator _zz_result_payload_x_89 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:256
	// Tracing: CordicRotator _zz_result_payload_x_90 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:257
	// Tracing: CordicRotator _zz_result_payload_x_91 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:258
	// Tracing: CordicRotator _zz_result_payload_x_92 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:259
	// Tracing: CordicRotator _zz_result_payload_x_93 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:260
	// Tracing: CordicRotator _zz_result_payload_x_94 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:261
	// Tracing: CordicRotator _zz_result_payload_x_95 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:262
	// Tracing: CordicRotator _zz_result_payload_x_96 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:263
	// Tracing: CordicRotator _zz_result_payload_x_97 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:264
	// Tracing: CordicRotator _zz_result_payload_x_98 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:265
	// Tracing: CordicRotator _zz_result_payload_x_99 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:266
	// Tracing: CordicRotator _zz_result_payload_x_100 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:267
	// Tracing: CordicRotator _zz_result_payload_x_101 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:268
	// Tracing: CordicRotator _zz_result_payload_x_102 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:269
	// Tracing: CordicRotator _zz_result_payload_x_103 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:270
	// Tracing: CordicRotator _zz_result_payload_x_104 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:271
	// Tracing: CordicRotator _zz_result_payload_x_105 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:272
	// Tracing: CordicRotator _zz_result_payload_x_106 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:273
	// Tracing: CordicRotator _zz_result_payload_x_107 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:274
	// Tracing: CordicRotator _zz_result_payload_x_108 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:275
	// Tracing: CordicRotator _zz_result_payload_x_109 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:276
	// Tracing: CordicRotator _zz_result_payload_x_110 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:277
	// Tracing: CordicRotator _zz_result_payload_x_111 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:278
	// Tracing: CordicRotator _zz_result_payload_x_112 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:279
	// Tracing: CordicRotator _zz_result_payload_x_113 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:280
	// Tracing: CordicRotator _zz_result_payload_x_114 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:281
	// Tracing: CordicRotator _zz_result_payload_x_115 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:282
	// Tracing: CordicRotator _zz_result_payload_x_116 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:283
	// Tracing: CordicRotator _zz_result_payload_x_117 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:284
	// Tracing: CordicRotator _zz_result_payload_x_118 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:285
	// Tracing: CordicRotator _zz_result_payload_y_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:286
	// Tracing: CordicRotator _zz_result_payload_x_119 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:287
    }
}

void VCordicRotator::traceFullThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->CordicRotator__DOT__raw_data_fire));
	vcdp->fullBit  (c+2,(vlTOPp->rotate_mode));
	vcdp->fullBus  (c+3,(vlTOPp->x_u),2);
	vcdp->fullBit  (c+4,(vlTOPp->w_en));
	vcdp->fullBus  (c+5,(vlTOPp->w_addr),8);
	vcdp->fullBus  (c+6,(vlTOPp->w_data),32);
	vcdp->fullBit  (c+7,(vlTOPp->raw_data_valid));
	vcdp->fullBit  (c+8,(vlTOPp->raw_data_ready));
	vcdp->fullBus  (c+9,(vlTOPp->raw_data_payload_x),32);
	vcdp->fullBus  (c+10,(vlTOPp->raw_data_payload_y),32);
	vcdp->fullBus  (c+11,(vlTOPp->raw_data_payload_z),32);
	vcdp->fullBit  (c+12,(vlTOPp->result_valid));
	vcdp->fullBus  (c+13,(vlTOPp->result_payload_x),32);
	vcdp->fullBus  (c+14,(vlTOPp->result_payload_y),32);
	vcdp->fullBus  (c+15,(vlTOPp->result_payload_z),32);
	vcdp->fullBit  (c+16,(vlTOPp->clk));
	vcdp->fullBit  (c+17,(vlTOPp->reset));
    }
}
