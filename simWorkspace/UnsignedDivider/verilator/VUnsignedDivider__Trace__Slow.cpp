// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VUnsignedDivider__Syms.h"


//======================

void VUnsignedDivider::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VUnsignedDivider::traceInit, &VUnsignedDivider::traceFull, &VUnsignedDivider::traceChg, this);
}
void VUnsignedDivider::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VUnsignedDivider* t=(VUnsignedDivider*)userthis;
    VUnsignedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VUnsignedDivider::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VUnsignedDivider* t=(VUnsignedDivider*)userthis;
    VUnsignedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VUnsignedDivider::traceInitThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VUnsignedDivider::traceFullThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VUnsignedDivider::traceInitThis__1(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+17,"flush",-1);
	vcdp->declBit  (c+18,"cmd_valid",-1);
	vcdp->declBit  (c+19,"cmd_ready",-1);
	vcdp->declBus  (c+20,"cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+21,"cmd_payload_denominator",-1,15,0);
	vcdp->declBit  (c+22,"rsp_valid",-1);
	vcdp->declBit  (c+23,"rsp_ready",-1);
	vcdp->declBus  (c+24,"rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+25,"rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+26,"rsp_payload_error",-1);
	vcdp->declBit  (c+27,"clk",-1);
	vcdp->declBit  (c+28,"reset",-1);
	vcdp->declBit  (c+17,"UnsignedDivider flush",-1);
	vcdp->declBit  (c+18,"UnsignedDivider cmd_valid",-1);
	vcdp->declBit  (c+19,"UnsignedDivider cmd_ready",-1);
	vcdp->declBus  (c+20,"UnsignedDivider cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+21,"UnsignedDivider cmd_payload_denominator",-1,15,0);
	vcdp->declBit  (c+22,"UnsignedDivider rsp_valid",-1);
	vcdp->declBit  (c+23,"UnsignedDivider rsp_ready",-1);
	vcdp->declBus  (c+24,"UnsignedDivider rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+25,"UnsignedDivider rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+26,"UnsignedDivider rsp_payload_error",-1);
	vcdp->declBit  (c+27,"UnsignedDivider clk",-1);
	vcdp->declBit  (c+28,"UnsignedDivider reset",-1);
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:21
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:22
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:23
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:24
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:25
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:26
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:27
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:28
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:29
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:30
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:31
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:32
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:33
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:34
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:35
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:36
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:37
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:38
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:39
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:40
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:41
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:42
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:43
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:44
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:45
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:46
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:47
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:48
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:49
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:50
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:51
	// Tracing: UnsignedDivider _zz__zz_rsp_payload_quotient_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:52
	// Tracing: UnsignedDivider _zz_rsp_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:53
	// Tracing: UnsignedDivider _zz_rsp_valid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:54
	// Tracing: UnsignedDivider _zz_rsp_valid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:55
	// Tracing: UnsignedDivider _zz_rsp_valid_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:56
	// Tracing: UnsignedDivider _zz_rsp_valid_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:57
	// Tracing: UnsignedDivider _zz_rsp_valid_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:58
	// Tracing: UnsignedDivider _zz_rsp_valid_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:59
	// Tracing: UnsignedDivider _zz_rsp_valid_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:60
	// Tracing: UnsignedDivider _zz_rsp_valid_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:61
	// Tracing: UnsignedDivider _zz_rsp_valid_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:62
	// Tracing: UnsignedDivider _zz_rsp_valid_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:63
	// Tracing: UnsignedDivider _zz_rsp_valid_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:64
	// Tracing: UnsignedDivider _zz_rsp_valid_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:65
	// Tracing: UnsignedDivider _zz_rsp_valid_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:66
	// Tracing: UnsignedDivider _zz_rsp_valid_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:67
	// Tracing: UnsignedDivider _zz_rsp_valid_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:68
	// Tracing: UnsignedDivider _zz_rsp_valid_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:69
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:70
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:71
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:72
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:73
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:74
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:75
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:76
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:77
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:78
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:79
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:80
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:81
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:82
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:83
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:84
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:85
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:86
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:87
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:88
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:89
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:90
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:91
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:92
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:93
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:94
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:95
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:96
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:97
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:98
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:99
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:100
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_31 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:101
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:102
	// Tracing: UnsignedDivider _zz_rsp_payload_error // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:103
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:104
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:105
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:106
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:107
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:108
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:109
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:110
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:111
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:112
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:113
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:114
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:115
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:116
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_46 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:117
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_47 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:118
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_48 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:119
	// Tracing: UnsignedDivider _zz_rsp_payload_remainder // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:120
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_49 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:121
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_50 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:122
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_51 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:123
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_52 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:124
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_53 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:125
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_54 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:126
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_55 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:127
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_56 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:128
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_57 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:129
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_58 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:130
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_59 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:131
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_60 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:132
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_61 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:133
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_62 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:134
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_63 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:135
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_64 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:136
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:137
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:138
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:139
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:140
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:141
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:142
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:143
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:144
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:145
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:146
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:147
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:148
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:149
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:150
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:151
	// Tracing: UnsignedDivider _zz_rsp_payload_quotient_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/UnsignedDivider.v:152
	vcdp->declBit  (c+29,"UnsignedDivider cmd_fire",-1);
	vcdp->declBit  (c+1,"UnsignedDivider when_UnsignedDivider_l59",-1);
	vcdp->declBit  (c+2,"UnsignedDivider when_UnsignedDivider_l59_1",-1);
	vcdp->declBit  (c+3,"UnsignedDivider when_UnsignedDivider_l59_2",-1);
	vcdp->declBit  (c+4,"UnsignedDivider when_UnsignedDivider_l59_3",-1);
	vcdp->declBit  (c+5,"UnsignedDivider when_UnsignedDivider_l59_4",-1);
	vcdp->declBit  (c+6,"UnsignedDivider when_UnsignedDivider_l59_5",-1);
	vcdp->declBit  (c+7,"UnsignedDivider when_UnsignedDivider_l59_6",-1);
	vcdp->declBit  (c+8,"UnsignedDivider when_UnsignedDivider_l59_7",-1);
	vcdp->declBit  (c+9,"UnsignedDivider when_UnsignedDivider_l59_8",-1);
	vcdp->declBit  (c+10,"UnsignedDivider when_UnsignedDivider_l59_9",-1);
	vcdp->declBit  (c+11,"UnsignedDivider when_UnsignedDivider_l59_10",-1);
	vcdp->declBit  (c+12,"UnsignedDivider when_UnsignedDivider_l59_11",-1);
	vcdp->declBit  (c+13,"UnsignedDivider when_UnsignedDivider_l59_12",-1);
	vcdp->declBit  (c+14,"UnsignedDivider when_UnsignedDivider_l59_13",-1);
	vcdp->declBit  (c+15,"UnsignedDivider when_UnsignedDivider_l59_14",-1);
	vcdp->declBit  (c+16,"UnsignedDivider when_UnsignedDivider_l59_15",-1);
    }
}

void VUnsignedDivider::traceFullThis__1(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VUnsignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_65 
				       >> 0x10U)))));
	vcdp->fullBit  (c+2,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_66 
				       >> 0x10U)))));
	vcdp->fullBit  (c+3,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_67 
				       >> 0x10U)))));
	vcdp->fullBit  (c+4,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_68 
				       >> 0x10U)))));
	vcdp->fullBit  (c+5,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_69 
				       >> 0x10U)))));
	vcdp->fullBit  (c+6,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_70 
				       >> 0x10U)))));
	vcdp->fullBit  (c+7,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_71 
				       >> 0x10U)))));
	vcdp->fullBit  (c+8,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_72 
				       >> 0x10U)))));
	vcdp->fullBit  (c+9,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_73 
				       >> 0x10U)))));
	vcdp->fullBit  (c+10,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_74 
					>> 0x10U)))));
	vcdp->fullBit  (c+11,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_75 
					>> 0x10U)))));
	vcdp->fullBit  (c+12,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_76 
					>> 0x10U)))));
	vcdp->fullBit  (c+13,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_77 
					>> 0x10U)))));
	vcdp->fullBit  (c+14,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_78 
					>> 0x10U)))));
	vcdp->fullBit  (c+15,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_79 
					>> 0x10U)))));
	vcdp->fullBit  (c+16,((1U & (~ (vlTOPp->UnsignedDivider__DOT___zz_rsp_payload_quotient_80 
					>> 0x10U)))));
	vcdp->fullBit  (c+17,(vlTOPp->flush));
	vcdp->fullBit  (c+18,(vlTOPp->cmd_valid));
	vcdp->fullBit  (c+19,(vlTOPp->cmd_ready));
	vcdp->fullBus  (c+20,(vlTOPp->cmd_payload_numerator),16);
	vcdp->fullBus  (c+21,(vlTOPp->cmd_payload_denominator),16);
	vcdp->fullBit  (c+22,(vlTOPp->rsp_valid));
	vcdp->fullBit  (c+23,(vlTOPp->rsp_ready));
	vcdp->fullBus  (c+24,(vlTOPp->rsp_payload_quotient),16);
	vcdp->fullBus  (c+25,(vlTOPp->rsp_payload_remainder),16);
	vcdp->fullBit  (c+26,(vlTOPp->rsp_payload_error));
	vcdp->fullBit  (c+27,(vlTOPp->clk));
	vcdp->fullBit  (c+28,(vlTOPp->reset));
	vcdp->fullBit  (c+29,(((IData)(vlTOPp->cmd_valid) 
			       & (IData)(vlTOPp->cmd_ready))));
    }
}
