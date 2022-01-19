// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMixedDivider__Syms.h"


//======================

void VMixedDivider::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMixedDivider::traceInit, &VMixedDivider::traceFull, &VMixedDivider::traceChg, this);
}
void VMixedDivider::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMixedDivider* t=(VMixedDivider*)userthis;
    VMixedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMixedDivider::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMixedDivider* t=(VMixedDivider*)userthis;
    VMixedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMixedDivider::traceInitThis(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMixedDivider::traceFullThis(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMixedDivider::traceInitThis__1(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+23,"flush",-1);
	vcdp->declBit  (c+24,"cmd_valid",-1);
	vcdp->declBit  (c+25,"cmd_ready",-1);
	vcdp->declBus  (c+26,"cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+27,"cmd_payload_denominator",-1,15,0);
	vcdp->declBit  (c+28,"cmd_payload_signed",-1);
	vcdp->declBit  (c+29,"rsp_valid",-1);
	vcdp->declBit  (c+30,"rsp_ready",-1);
	vcdp->declBus  (c+31,"rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+32,"rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+33,"rsp_payload_error",-1);
	vcdp->declBit  (c+34,"clk",-1);
	vcdp->declBit  (c+35,"reset",-1);
	vcdp->declBit  (c+23,"MixedDivider flush",-1);
	vcdp->declBit  (c+24,"MixedDivider cmd_valid",-1);
	vcdp->declBit  (c+25,"MixedDivider cmd_ready",-1);
	vcdp->declBus  (c+26,"MixedDivider cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+27,"MixedDivider cmd_payload_denominator",-1,15,0);
	vcdp->declBit  (c+28,"MixedDivider cmd_payload_signed",-1);
	vcdp->declBit  (c+29,"MixedDivider rsp_valid",-1);
	vcdp->declBit  (c+30,"MixedDivider rsp_ready",-1);
	vcdp->declBus  (c+31,"MixedDivider rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+32,"MixedDivider rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+33,"MixedDivider rsp_payload_error",-1);
	vcdp->declBit  (c+34,"MixedDivider clk",-1);
	vcdp->declBit  (c+35,"MixedDivider reset",-1);
	vcdp->declBus  (c+36,"MixedDivider divider_cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+37,"MixedDivider divider_cmd_payload_denominator",-1,15,0);
	vcdp->declBus  (c+1,"MixedDivider divider_cmd_payload_context",-1,1,0);
	vcdp->declBit  (c+30,"MixedDivider divider_cmd_ready",-1);
	vcdp->declBit  (c+22,"MixedDivider divider_rsp_valid",-1);
	vcdp->declBus  (c+18,"MixedDivider divider_rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+19,"MixedDivider divider_rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+20,"MixedDivider divider_rsp_payload_error",-1);
	vcdp->declBus  (c+21,"MixedDivider divider_rsp_payload_context",-1,1,0);
	// Tracing: MixedDivider _zz_cmd_payload_numerator_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:31
	// Tracing: MixedDivider _zz_cmd_payload_numerator_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:32
	// Tracing: MixedDivider _zz_cmd_payload_numerator_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:33
	// Tracing: MixedDivider _zz_cmd_payload_numerator_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:34
	// Tracing: MixedDivider _zz_cmd_payload_denominator_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:35
	// Tracing: MixedDivider _zz_cmd_payload_denominator_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:36
	// Tracing: MixedDivider _zz_cmd_payload_denominator_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:37
	// Tracing: MixedDivider _zz_cmd_payload_denominator_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:38
	// Tracing: MixedDivider _zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:39
	// Tracing: MixedDivider _zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:40
	// Tracing: MixedDivider _zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:41
	// Tracing: MixedDivider _zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:42
	// Tracing: MixedDivider _zz_rsp_payload_quotient_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:43
	// Tracing: MixedDivider _zz_rsp_payload_remainder_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:44
	// Tracing: MixedDivider _zz_rsp_payload_remainder_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:45
	// Tracing: MixedDivider _zz_rsp_payload_remainder_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:46
	// Tracing: MixedDivider _zz_rsp_payload_remainder_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:47
	// Tracing: MixedDivider _zz_rsp_payload_remainder_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:48
	// Tracing: MixedDivider _zz_cmd_payload_numerator // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:49
	// Tracing: MixedDivider _zz_cmd_payload_denominator // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:50
	// Tracing: MixedDivider _zz_rsp_payload_quotient // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:51
	// Tracing: MixedDivider _zz_rsp_payload_remainder // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:52
	vcdp->declBit  (c+23,"MixedDivider divider flush",-1);
	vcdp->declBit  (c+24,"MixedDivider divider cmd_valid",-1);
	vcdp->declBit  (c+30,"MixedDivider divider cmd_ready",-1);
	vcdp->declBus  (c+36,"MixedDivider divider cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+37,"MixedDivider divider cmd_payload_denominator",-1,15,0);
	vcdp->declBus  (c+1,"MixedDivider divider cmd_payload_context",-1,1,0);
	vcdp->declBit  (c+22,"MixedDivider divider rsp_valid",-1);
	vcdp->declBit  (c+30,"MixedDivider divider rsp_ready",-1);
	vcdp->declBus  (c+18,"MixedDivider divider rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+19,"MixedDivider divider rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+20,"MixedDivider divider rsp_payload_error",-1);
	vcdp->declBus  (c+21,"MixedDivider divider rsp_payload_context",-1,1,0);
	vcdp->declBit  (c+34,"MixedDivider divider clk",-1);
	vcdp->declBit  (c+35,"MixedDivider divider reset",-1);
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:123
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:124
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:125
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:126
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:127
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:128
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:129
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:130
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:131
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:132
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:133
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:134
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:135
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:136
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:137
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:138
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:139
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:140
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:141
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:142
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:143
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:144
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:145
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:146
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:147
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:148
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:149
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:150
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:151
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:152
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:153
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:154
	// Tracing: MixedDivider divider _zz_rsp_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:155
	// Tracing: MixedDivider divider _zz_rsp_valid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:156
	// Tracing: MixedDivider divider _zz_rsp_valid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:157
	// Tracing: MixedDivider divider _zz_rsp_valid_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:158
	// Tracing: MixedDivider divider _zz_rsp_valid_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:159
	// Tracing: MixedDivider divider _zz_rsp_valid_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:160
	// Tracing: MixedDivider divider _zz_rsp_valid_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:161
	// Tracing: MixedDivider divider _zz_rsp_valid_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:162
	// Tracing: MixedDivider divider _zz_rsp_valid_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:163
	// Tracing: MixedDivider divider _zz_rsp_valid_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:164
	// Tracing: MixedDivider divider _zz_rsp_valid_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:165
	// Tracing: MixedDivider divider _zz_rsp_valid_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:166
	// Tracing: MixedDivider divider _zz_rsp_valid_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:167
	// Tracing: MixedDivider divider _zz_rsp_valid_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:168
	// Tracing: MixedDivider divider _zz_rsp_valid_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:169
	// Tracing: MixedDivider divider _zz_rsp_valid_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:170
	// Tracing: MixedDivider divider _zz_rsp_valid_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:171
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:172
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:173
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:174
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:175
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:176
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:177
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:178
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:179
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:180
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:181
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:182
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:183
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:184
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:185
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:186
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:187
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:188
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:189
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:190
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:191
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:192
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:193
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:194
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:195
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:196
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:197
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:198
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:199
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:200
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:201
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:202
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_31 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:203
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:204
	// Tracing: MixedDivider divider _zz_rsp_payload_error // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:205
	// Tracing: MixedDivider divider _zz_rsp_payload_context // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:206
	// Tracing: MixedDivider divider _zz_rsp_payload_context_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:207
	// Tracing: MixedDivider divider _zz_rsp_payload_context_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:208
	// Tracing: MixedDivider divider _zz_rsp_payload_context_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:209
	// Tracing: MixedDivider divider _zz_rsp_payload_context_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:210
	// Tracing: MixedDivider divider _zz_rsp_payload_context_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:211
	// Tracing: MixedDivider divider _zz_rsp_payload_context_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:212
	// Tracing: MixedDivider divider _zz_rsp_payload_context_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:213
	// Tracing: MixedDivider divider _zz_rsp_payload_context_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:214
	// Tracing: MixedDivider divider _zz_rsp_payload_context_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:215
	// Tracing: MixedDivider divider _zz_rsp_payload_context_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:216
	// Tracing: MixedDivider divider _zz_rsp_payload_context_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:217
	// Tracing: MixedDivider divider _zz_rsp_payload_context_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:218
	// Tracing: MixedDivider divider _zz_rsp_payload_context_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:219
	// Tracing: MixedDivider divider _zz_rsp_payload_context_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:220
	// Tracing: MixedDivider divider _zz_rsp_payload_context_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:221
	// Tracing: MixedDivider divider _zz_rsp_payload_context_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:222
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:223
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:224
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:225
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:226
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:227
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:228
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:229
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:230
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:231
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:232
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:233
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:234
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:235
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_46 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:236
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_47 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:237
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_48 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:238
	// Tracing: MixedDivider divider _zz_rsp_payload_remainder // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:239
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_49 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:240
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_50 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:241
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_51 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:242
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_52 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:243
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_53 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:244
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_54 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:245
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_55 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:246
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_56 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:247
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_57 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:248
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_58 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:249
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_59 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:250
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_60 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:251
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_61 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:252
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_62 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:253
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_63 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:254
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_64 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:255
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:256
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:257
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:258
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:259
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:260
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:261
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:262
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:263
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:264
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:265
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:266
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:267
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:268
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:269
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:270
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:271
	vcdp->declBit  (c+38,"MixedDivider divider cmd_fire",-1);
	vcdp->declBit  (c+2,"MixedDivider divider when_UnsignedDivider_l59",-1);
	vcdp->declBit  (c+3,"MixedDivider divider when_UnsignedDivider_l59_1",-1);
	vcdp->declBit  (c+4,"MixedDivider divider when_UnsignedDivider_l59_2",-1);
	vcdp->declBit  (c+5,"MixedDivider divider when_UnsignedDivider_l59_3",-1);
	vcdp->declBit  (c+6,"MixedDivider divider when_UnsignedDivider_l59_4",-1);
	vcdp->declBit  (c+7,"MixedDivider divider when_UnsignedDivider_l59_5",-1);
	vcdp->declBit  (c+8,"MixedDivider divider when_UnsignedDivider_l59_6",-1);
	vcdp->declBit  (c+9,"MixedDivider divider when_UnsignedDivider_l59_7",-1);
	vcdp->declBit  (c+10,"MixedDivider divider when_UnsignedDivider_l59_8",-1);
	vcdp->declBit  (c+11,"MixedDivider divider when_UnsignedDivider_l59_9",-1);
	vcdp->declBit  (c+12,"MixedDivider divider when_UnsignedDivider_l59_10",-1);
	vcdp->declBit  (c+13,"MixedDivider divider when_UnsignedDivider_l59_11",-1);
	vcdp->declBit  (c+14,"MixedDivider divider when_UnsignedDivider_l59_12",-1);
	vcdp->declBit  (c+15,"MixedDivider divider when_UnsignedDivider_l59_13",-1);
	vcdp->declBit  (c+16,"MixedDivider divider when_UnsignedDivider_l59_14",-1);
	vcdp->declBit  (c+17,"MixedDivider divider when_UnsignedDivider_l59_15",-1);
    }
}

void VMixedDivider::traceFullThis__1(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->MixedDivider__DOT__divider_cmd_payload_context),2);
	vcdp->fullBit  (c+2,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 
				       >> 0x10U)))));
	vcdp->fullBit  (c+3,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 
				       >> 0x10U)))));
	vcdp->fullBit  (c+4,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 
				       >> 0x10U)))));
	vcdp->fullBit  (c+5,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 
				       >> 0x10U)))));
	vcdp->fullBit  (c+6,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 
				       >> 0x10U)))));
	vcdp->fullBit  (c+7,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 
				       >> 0x10U)))));
	vcdp->fullBit  (c+8,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 
				       >> 0x10U)))));
	vcdp->fullBit  (c+9,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 
				       >> 0x10U)))));
	vcdp->fullBit  (c+10,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 
					>> 0x10U)))));
	vcdp->fullBit  (c+11,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 
					>> 0x10U)))));
	vcdp->fullBit  (c+12,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 
					>> 0x10U)))));
	vcdp->fullBit  (c+13,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 
					>> 0x10U)))));
	vcdp->fullBit  (c+14,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 
					>> 0x10U)))));
	vcdp->fullBit  (c+15,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 
					>> 0x10U)))));
	vcdp->fullBit  (c+16,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 
					>> 0x10U)))));
	vcdp->fullBit  (c+17,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 
					>> 0x10U)))));
	vcdp->fullBus  (c+18,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16),16);
	vcdp->fullBus  (c+19,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_remainder),16);
	vcdp->fullBit  (c+20,((0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_error))));
	vcdp->fullBus  (c+21,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context_16),2);
	vcdp->fullBit  (c+22,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid_16));
	vcdp->fullBit  (c+23,(vlTOPp->flush));
	vcdp->fullBit  (c+24,(vlTOPp->cmd_valid));
	vcdp->fullBit  (c+25,(vlTOPp->cmd_ready));
	vcdp->fullBus  (c+26,(vlTOPp->cmd_payload_numerator),16);
	vcdp->fullBus  (c+27,(vlTOPp->cmd_payload_denominator),16);
	vcdp->fullBit  (c+28,(vlTOPp->cmd_payload_signed));
	vcdp->fullBit  (c+29,(vlTOPp->rsp_valid));
	vcdp->fullBit  (c+30,(vlTOPp->rsp_ready));
	vcdp->fullBus  (c+31,(vlTOPp->rsp_payload_quotient),16);
	vcdp->fullBus  (c+32,(vlTOPp->rsp_payload_remainder),16);
	vcdp->fullBit  (c+33,(vlTOPp->rsp_payload_error));
	vcdp->fullBit  (c+34,(vlTOPp->clk));
	vcdp->fullBit  (c+35,(vlTOPp->reset));
	vcdp->fullBus  (c+36,((0xffffU & (((((IData)(vlTOPp->cmd_payload_numerator) 
					     >> 0xfU) 
					    & (IData)(vlTOPp->cmd_payload_signed))
					    ? (~ (IData)(vlTOPp->cmd_payload_numerator))
					    : (IData)(vlTOPp->cmd_payload_numerator)) 
					  + (((IData)(vlTOPp->cmd_payload_numerator) 
					      >> 0xfU) 
					     & (IData)(vlTOPp->cmd_payload_signed))))),16);
	vcdp->fullBus  (c+37,((0xffffU & (((((IData)(vlTOPp->cmd_payload_denominator) 
					     >> 0xfU) 
					    & (IData)(vlTOPp->cmd_payload_signed))
					    ? (~ (IData)(vlTOPp->cmd_payload_denominator))
					    : (IData)(vlTOPp->cmd_payload_denominator)) 
					  + (((IData)(vlTOPp->cmd_payload_denominator) 
					      >> 0xfU) 
					     & (IData)(vlTOPp->cmd_payload_signed))))),16);
	vcdp->fullBit  (c+38,(((IData)(vlTOPp->cmd_valid) 
			       & (IData)(vlTOPp->rsp_ready))));
    }
}
