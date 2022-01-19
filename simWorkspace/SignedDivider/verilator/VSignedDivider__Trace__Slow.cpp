// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSignedDivider__Syms.h"


//======================

void VSignedDivider::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VSignedDivider::traceInit, &VSignedDivider::traceFull, &VSignedDivider::traceChg, this);
}
void VSignedDivider::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VSignedDivider* t=(VSignedDivider*)userthis;
    VSignedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VSignedDivider::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSignedDivider* t=(VSignedDivider*)userthis;
    VSignedDivider__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VSignedDivider::traceInitThis(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VSignedDivider::traceFullThis(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSignedDivider::traceInitThis__1(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+23,"flush",-1);
	vcdp->declBit  (c+24,"cmd_valid",-1);
	vcdp->declBit  (c+25,"cmd_ready",-1);
	vcdp->declBus  (c+26,"cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+27,"cmd_payload_denominator",-1,15,0);
	vcdp->declBit  (c+28,"rsp_valid",-1);
	vcdp->declBit  (c+29,"rsp_ready",-1);
	vcdp->declBus  (c+30,"rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+31,"rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+32,"rsp_payload_error",-1);
	vcdp->declBit  (c+33,"clk",-1);
	vcdp->declBit  (c+34,"reset",-1);
	vcdp->declBit  (c+23,"SignedDivider flush",-1);
	vcdp->declBit  (c+24,"SignedDivider cmd_valid",-1);
	vcdp->declBit  (c+25,"SignedDivider cmd_ready",-1);
	vcdp->declBus  (c+26,"SignedDivider cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+27,"SignedDivider cmd_payload_denominator",-1,15,0);
	vcdp->declBit  (c+28,"SignedDivider rsp_valid",-1);
	vcdp->declBit  (c+29,"SignedDivider rsp_ready",-1);
	vcdp->declBus  (c+30,"SignedDivider rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+31,"SignedDivider rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+32,"SignedDivider rsp_payload_error",-1);
	vcdp->declBit  (c+33,"SignedDivider clk",-1);
	vcdp->declBit  (c+34,"SignedDivider reset",-1);
	vcdp->declBus  (c+35,"SignedDivider divider_cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+36,"SignedDivider divider_cmd_payload_denominator",-1,15,0);
	vcdp->declBus  (c+1,"SignedDivider divider_cmd_payload_context",-1,1,0);
	vcdp->declBit  (c+29,"SignedDivider divider_cmd_ready",-1);
	vcdp->declBit  (c+22,"SignedDivider divider_rsp_valid",-1);
	vcdp->declBus  (c+18,"SignedDivider divider_rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+19,"SignedDivider divider_rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+20,"SignedDivider divider_rsp_payload_error",-1);
	vcdp->declBus  (c+21,"SignedDivider divider_rsp_payload_context",-1,1,0);
	// Tracing: SignedDivider _zz_cmd_payload_numerator // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:30
	// Tracing: SignedDivider _zz_cmd_payload_numerator_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:31
	// Tracing: SignedDivider _zz_cmd_payload_numerator_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:32
	// Tracing: SignedDivider _zz_cmd_payload_numerator_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:33
	// Tracing: SignedDivider _zz_cmd_payload_denominator // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:34
	// Tracing: SignedDivider _zz_cmd_payload_denominator_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:35
	// Tracing: SignedDivider _zz_cmd_payload_denominator_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:36
	// Tracing: SignedDivider _zz_cmd_payload_denominator_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:37
	// Tracing: SignedDivider _zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:38
	// Tracing: SignedDivider _zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:39
	// Tracing: SignedDivider _zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:40
	// Tracing: SignedDivider _zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:41
	// Tracing: SignedDivider _zz_rsp_payload_quotient_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:42
	// Tracing: SignedDivider _zz_rsp_payload_quotient_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:43
	// Tracing: SignedDivider _zz_rsp_payload_remainder_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:44
	// Tracing: SignedDivider _zz_rsp_payload_remainder_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:45
	// Tracing: SignedDivider _zz_rsp_payload_remainder_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:46
	// Tracing: SignedDivider _zz_rsp_payload_remainder_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:47
	// Tracing: SignedDivider _zz_rsp_payload_remainder_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:48
	// Tracing: SignedDivider _zz_rsp_payload_remainder_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:49
	// Tracing: SignedDivider _zz_rsp_payload_quotient // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:50
	// Tracing: SignedDivider _zz_rsp_payload_remainder // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:51
	vcdp->declBit  (c+23,"SignedDivider divider flush",-1);
	vcdp->declBit  (c+24,"SignedDivider divider cmd_valid",-1);
	vcdp->declBit  (c+29,"SignedDivider divider cmd_ready",-1);
	vcdp->declBus  (c+35,"SignedDivider divider cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+36,"SignedDivider divider cmd_payload_denominator",-1,15,0);
	vcdp->declBus  (c+1,"SignedDivider divider cmd_payload_context",-1,1,0);
	vcdp->declBit  (c+22,"SignedDivider divider rsp_valid",-1);
	vcdp->declBit  (c+29,"SignedDivider divider rsp_ready",-1);
	vcdp->declBus  (c+18,"SignedDivider divider rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+19,"SignedDivider divider rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+20,"SignedDivider divider rsp_payload_error",-1);
	vcdp->declBus  (c+21,"SignedDivider divider rsp_payload_context",-1,1,0);
	vcdp->declBit  (c+33,"SignedDivider divider clk",-1);
	vcdp->declBit  (c+34,"SignedDivider divider reset",-1);
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:122
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:123
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:124
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:125
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:126
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:127
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:128
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:129
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:130
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:131
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:132
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:133
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:134
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:135
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:136
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:137
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:138
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:139
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:140
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:141
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:142
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:143
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:144
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:145
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:146
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:147
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:148
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:149
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:150
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:151
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:152
	// Tracing: SignedDivider divider _zz__zz_rsp_payload_quotient_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:153
	// Tracing: SignedDivider divider _zz_rsp_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:154
	// Tracing: SignedDivider divider _zz_rsp_valid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:155
	// Tracing: SignedDivider divider _zz_rsp_valid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:156
	// Tracing: SignedDivider divider _zz_rsp_valid_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:157
	// Tracing: SignedDivider divider _zz_rsp_valid_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:158
	// Tracing: SignedDivider divider _zz_rsp_valid_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:159
	// Tracing: SignedDivider divider _zz_rsp_valid_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:160
	// Tracing: SignedDivider divider _zz_rsp_valid_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:161
	// Tracing: SignedDivider divider _zz_rsp_valid_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:162
	// Tracing: SignedDivider divider _zz_rsp_valid_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:163
	// Tracing: SignedDivider divider _zz_rsp_valid_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:164
	// Tracing: SignedDivider divider _zz_rsp_valid_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:165
	// Tracing: SignedDivider divider _zz_rsp_valid_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:166
	// Tracing: SignedDivider divider _zz_rsp_valid_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:167
	// Tracing: SignedDivider divider _zz_rsp_valid_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:168
	// Tracing: SignedDivider divider _zz_rsp_valid_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:169
	// Tracing: SignedDivider divider _zz_rsp_valid_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:170
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:171
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:172
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:173
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:174
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:175
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:176
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:177
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:178
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:179
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:180
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:181
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:182
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:183
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:184
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:185
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:186
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:187
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:188
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:189
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:190
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:191
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:192
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:193
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:194
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:195
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:196
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:197
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:198
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:199
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:200
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:201
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_31 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:202
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:203
	// Tracing: SignedDivider divider _zz_rsp_payload_error // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:204
	// Tracing: SignedDivider divider _zz_rsp_payload_context // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:205
	// Tracing: SignedDivider divider _zz_rsp_payload_context_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:206
	// Tracing: SignedDivider divider _zz_rsp_payload_context_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:207
	// Tracing: SignedDivider divider _zz_rsp_payload_context_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:208
	// Tracing: SignedDivider divider _zz_rsp_payload_context_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:209
	// Tracing: SignedDivider divider _zz_rsp_payload_context_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:210
	// Tracing: SignedDivider divider _zz_rsp_payload_context_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:211
	// Tracing: SignedDivider divider _zz_rsp_payload_context_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:212
	// Tracing: SignedDivider divider _zz_rsp_payload_context_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:213
	// Tracing: SignedDivider divider _zz_rsp_payload_context_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:214
	// Tracing: SignedDivider divider _zz_rsp_payload_context_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:215
	// Tracing: SignedDivider divider _zz_rsp_payload_context_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:216
	// Tracing: SignedDivider divider _zz_rsp_payload_context_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:217
	// Tracing: SignedDivider divider _zz_rsp_payload_context_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:218
	// Tracing: SignedDivider divider _zz_rsp_payload_context_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:219
	// Tracing: SignedDivider divider _zz_rsp_payload_context_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:220
	// Tracing: SignedDivider divider _zz_rsp_payload_context_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:221
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:222
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:223
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:224
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:225
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:226
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:227
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:228
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:229
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:230
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:231
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:232
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:233
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:234
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_46 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:235
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_47 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:236
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_48 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:237
	// Tracing: SignedDivider divider _zz_rsp_payload_remainder // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:238
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_49 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:239
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_50 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:240
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_51 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:241
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_52 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:242
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_53 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:243
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_54 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:244
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_55 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:245
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_56 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:246
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_57 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:247
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_58 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:248
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_59 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:249
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_60 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:250
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_61 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:251
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_62 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:252
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_63 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:253
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_64 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:254
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:255
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:256
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:257
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:258
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:259
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:260
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:261
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:262
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:263
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:264
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:265
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:266
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:267
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:268
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:269
	// Tracing: SignedDivider divider _zz_rsp_payload_quotient_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/SignedDivider.v:270
	vcdp->declBit  (c+37,"SignedDivider divider cmd_fire",-1);
	vcdp->declBit  (c+2,"SignedDivider divider when_UnsignedDivider_l59",-1);
	vcdp->declBit  (c+3,"SignedDivider divider when_UnsignedDivider_l59_1",-1);
	vcdp->declBit  (c+4,"SignedDivider divider when_UnsignedDivider_l59_2",-1);
	vcdp->declBit  (c+5,"SignedDivider divider when_UnsignedDivider_l59_3",-1);
	vcdp->declBit  (c+6,"SignedDivider divider when_UnsignedDivider_l59_4",-1);
	vcdp->declBit  (c+7,"SignedDivider divider when_UnsignedDivider_l59_5",-1);
	vcdp->declBit  (c+8,"SignedDivider divider when_UnsignedDivider_l59_6",-1);
	vcdp->declBit  (c+9,"SignedDivider divider when_UnsignedDivider_l59_7",-1);
	vcdp->declBit  (c+10,"SignedDivider divider when_UnsignedDivider_l59_8",-1);
	vcdp->declBit  (c+11,"SignedDivider divider when_UnsignedDivider_l59_9",-1);
	vcdp->declBit  (c+12,"SignedDivider divider when_UnsignedDivider_l59_10",-1);
	vcdp->declBit  (c+13,"SignedDivider divider when_UnsignedDivider_l59_11",-1);
	vcdp->declBit  (c+14,"SignedDivider divider when_UnsignedDivider_l59_12",-1);
	vcdp->declBit  (c+15,"SignedDivider divider when_UnsignedDivider_l59_13",-1);
	vcdp->declBit  (c+16,"SignedDivider divider when_UnsignedDivider_l59_14",-1);
	vcdp->declBit  (c+17,"SignedDivider divider when_UnsignedDivider_l59_15",-1);
    }
}

void VSignedDivider::traceFullThis__1(VSignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSignedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->SignedDivider__DOT__divider_cmd_payload_context),2);
	vcdp->fullBit  (c+2,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_65 
				       >> 0x10U)))));
	vcdp->fullBit  (c+3,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_66 
				       >> 0x10U)))));
	vcdp->fullBit  (c+4,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_67 
				       >> 0x10U)))));
	vcdp->fullBit  (c+5,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_68 
				       >> 0x10U)))));
	vcdp->fullBit  (c+6,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_69 
				       >> 0x10U)))));
	vcdp->fullBit  (c+7,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_70 
				       >> 0x10U)))));
	vcdp->fullBit  (c+8,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_71 
				       >> 0x10U)))));
	vcdp->fullBit  (c+9,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_72 
				       >> 0x10U)))));
	vcdp->fullBit  (c+10,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_73 
					>> 0x10U)))));
	vcdp->fullBit  (c+11,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_74 
					>> 0x10U)))));
	vcdp->fullBit  (c+12,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_75 
					>> 0x10U)))));
	vcdp->fullBit  (c+13,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_76 
					>> 0x10U)))));
	vcdp->fullBit  (c+14,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_77 
					>> 0x10U)))));
	vcdp->fullBit  (c+15,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_78 
					>> 0x10U)))));
	vcdp->fullBit  (c+16,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_79 
					>> 0x10U)))));
	vcdp->fullBit  (c+17,((1U & (~ (vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_80 
					>> 0x10U)))));
	vcdp->fullBus  (c+18,(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_16),16);
	vcdp->fullBus  (c+19,(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_remainder),16);
	vcdp->fullBit  (c+20,((0U == (IData)(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_error))));
	vcdp->fullBus  (c+21,(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_payload_context_16),2);
	vcdp->fullBit  (c+22,(vlTOPp->SignedDivider__DOT__divider__DOT___zz_rsp_valid_16));
	vcdp->fullBit  (c+23,(vlTOPp->flush));
	vcdp->fullBit  (c+24,(vlTOPp->cmd_valid));
	vcdp->fullBit  (c+25,(vlTOPp->cmd_ready));
	vcdp->fullBus  (c+26,(vlTOPp->cmd_payload_numerator),16);
	vcdp->fullBus  (c+27,(vlTOPp->cmd_payload_denominator),16);
	vcdp->fullBit  (c+28,(vlTOPp->rsp_valid));
	vcdp->fullBit  (c+29,(vlTOPp->rsp_ready));
	vcdp->fullBus  (c+30,(vlTOPp->rsp_payload_quotient),16);
	vcdp->fullBus  (c+31,(vlTOPp->rsp_payload_remainder),16);
	vcdp->fullBit  (c+32,(vlTOPp->rsp_payload_error));
	vcdp->fullBit  (c+33,(vlTOPp->clk));
	vcdp->fullBit  (c+34,(vlTOPp->reset));
	vcdp->fullBus  (c+35,((0xffffU & (((0x8000U 
					    & (IData)(vlTOPp->cmd_payload_numerator))
					    ? (~ (IData)(vlTOPp->cmd_payload_numerator))
					    : (IData)(vlTOPp->cmd_payload_numerator)) 
					  + (1U & ((IData)(vlTOPp->cmd_payload_numerator) 
						   >> 0xfU))))),16);
	vcdp->fullBus  (c+36,((0xffffU & (((0x8000U 
					    & (IData)(vlTOPp->cmd_payload_denominator))
					    ? (~ (IData)(vlTOPp->cmd_payload_denominator))
					    : (IData)(vlTOPp->cmd_payload_denominator)) 
					  + (1U & ((IData)(vlTOPp->cmd_payload_denominator) 
						   >> 0xfU))))),16);
	vcdp->fullBit  (c+37,(((IData)(vlTOPp->cmd_valid) 
			       & (IData)(vlTOPp->rsp_ready))));
    }
}
