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
	vcdp->declBit  (c+11,"flush",-1);
	vcdp->declBit  (c+12,"cmd_valid",-1);
	vcdp->declBit  (c+13,"cmd_ready",-1);
	vcdp->declBus  (c+14,"cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+15,"cmd_payload_denominator",-1,15,0);
	vcdp->declBit  (c+16,"cmd_payload_signed",-1);
	vcdp->declBit  (c+17,"rsp_valid",-1);
	vcdp->declBit  (c+18,"rsp_ready",-1);
	vcdp->declBus  (c+19,"rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+20,"rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+21,"rsp_payload_error",-1);
	vcdp->declBit  (c+22,"clk",-1);
	vcdp->declBit  (c+23,"reset",-1);
	vcdp->declBit  (c+11,"MixedDivider flush",-1);
	vcdp->declBit  (c+12,"MixedDivider cmd_valid",-1);
	vcdp->declBit  (c+13,"MixedDivider cmd_ready",-1);
	vcdp->declBus  (c+14,"MixedDivider cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+15,"MixedDivider cmd_payload_denominator",-1,15,0);
	vcdp->declBit  (c+16,"MixedDivider cmd_payload_signed",-1);
	vcdp->declBit  (c+17,"MixedDivider rsp_valid",-1);
	vcdp->declBit  (c+18,"MixedDivider rsp_ready",-1);
	vcdp->declBus  (c+19,"MixedDivider rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+20,"MixedDivider rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+21,"MixedDivider rsp_payload_error",-1);
	vcdp->declBit  (c+22,"MixedDivider clk",-1);
	vcdp->declBit  (c+23,"MixedDivider reset",-1);
	vcdp->declBus  (c+24,"MixedDivider divider_cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+25,"MixedDivider divider_cmd_payload_denominator",-1,15,0);
	vcdp->declBus  (c+1,"MixedDivider divider_cmd_payload_context",-1,1,0);
	vcdp->declBit  (c+4,"MixedDivider divider_cmd_ready",-1);
	vcdp->declBit  (c+5,"MixedDivider divider_rsp_valid",-1);
	vcdp->declBus  (c+6,"MixedDivider divider_rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+7,"MixedDivider divider_rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+8,"MixedDivider divider_rsp_payload_error",-1);
	vcdp->declBus  (c+9,"MixedDivider divider_rsp_payload_context",-1,1,0);
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
	vcdp->declBit  (c+11,"MixedDivider divider flush",-1);
	vcdp->declBit  (c+12,"MixedDivider divider cmd_valid",-1);
	vcdp->declBit  (c+4,"MixedDivider divider cmd_ready",-1);
	vcdp->declBus  (c+24,"MixedDivider divider cmd_payload_numerator",-1,15,0);
	vcdp->declBus  (c+25,"MixedDivider divider cmd_payload_denominator",-1,15,0);
	vcdp->declBus  (c+1,"MixedDivider divider cmd_payload_context",-1,1,0);
	vcdp->declBit  (c+5,"MixedDivider divider rsp_valid",-1);
	vcdp->declBit  (c+18,"MixedDivider divider rsp_ready",-1);
	vcdp->declBus  (c+6,"MixedDivider divider rsp_payload_quotient",-1,15,0);
	vcdp->declBus  (c+7,"MixedDivider divider rsp_payload_remainder",-1,15,0);
	vcdp->declBit  (c+8,"MixedDivider divider rsp_payload_error",-1);
	vcdp->declBus  (c+9,"MixedDivider divider rsp_payload_context",-1,1,0);
	vcdp->declBit  (c+22,"MixedDivider divider clk",-1);
	vcdp->declBit  (c+23,"MixedDivider divider reset",-1);
	// Tracing: MixedDivider divider _zz__zz_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:123
	// Tracing: MixedDivider divider _zz__zz_3_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:124
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:125
	// Tracing: MixedDivider divider _zz__zz_rsp_payload_quotient // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:126
	vcdp->declBus  (c+10,"MixedDivider divider switch_UnsignedDivider_l92",-1,1,0);
	// Tracing: MixedDivider divider _zz_cmd_ready // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:128
	// Tracing: MixedDivider divider _zz_rsp_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:129
	// Tracing: MixedDivider divider _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:130
	// Tracing: MixedDivider divider _zz_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:131
	// Tracing: MixedDivider divider _zz_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:132
	// Tracing: MixedDivider divider _zz_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:133
	// Tracing: MixedDivider divider _zz_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:134
	// Tracing: MixedDivider divider _zz_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:135
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:136
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:137
	// Tracing: MixedDivider divider _zz_rsp_payload_context // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:138
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:139
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:140
	// Tracing: MixedDivider divider _zz_rsp_payload_quotient_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/MixedDivider.v:141
	vcdp->declBit  (c+2,"MixedDivider divider cmd_fire",-1);
	vcdp->declBit  (c+3,"MixedDivider divider when_UnsignedDivider_l112",-1);
	vcdp->declBit  (c+26,"MixedDivider divider rsp_fire",-1);
    }
}

void VMixedDivider::traceFullThis__1(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMixedDivider* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->MixedDivider__DOT__divider_cmd_payload_context),2);
	vcdp->fullBit  (c+2,(vlTOPp->MixedDivider__DOT__divider__DOT__cmd_fire));
	vcdp->fullBit  (c+3,((1U & (~ (vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4 
				       >> 0x10U)))));
	vcdp->fullBit  (c+4,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_cmd_ready));
	vcdp->fullBit  (c+5,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid));
	vcdp->fullBus  (c+6,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient),16);
	vcdp->fullBus  (c+7,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2),16);
	vcdp->fullBit  (c+8,((0U == (IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1))));
	vcdp->fullBus  (c+9,(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_payload_context),2);
	vcdp->fullBus  (c+10,(vlTOPp->MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92),2);
	vcdp->fullBit  (c+11,(vlTOPp->flush));
	vcdp->fullBit  (c+12,(vlTOPp->cmd_valid));
	vcdp->fullBit  (c+13,(vlTOPp->cmd_ready));
	vcdp->fullBus  (c+14,(vlTOPp->cmd_payload_numerator),16);
	vcdp->fullBus  (c+15,(vlTOPp->cmd_payload_denominator),16);
	vcdp->fullBit  (c+16,(vlTOPp->cmd_payload_signed));
	vcdp->fullBit  (c+17,(vlTOPp->rsp_valid));
	vcdp->fullBit  (c+18,(vlTOPp->rsp_ready));
	vcdp->fullBus  (c+19,(vlTOPp->rsp_payload_quotient),16);
	vcdp->fullBus  (c+20,(vlTOPp->rsp_payload_remainder),16);
	vcdp->fullBit  (c+21,(vlTOPp->rsp_payload_error));
	vcdp->fullBit  (c+22,(vlTOPp->clk));
	vcdp->fullBit  (c+23,(vlTOPp->reset));
	vcdp->fullBus  (c+24,((0xffffU & (((((IData)(vlTOPp->cmd_payload_numerator) 
					     >> 0xfU) 
					    & (IData)(vlTOPp->cmd_payload_signed))
					    ? (~ (IData)(vlTOPp->cmd_payload_numerator))
					    : (IData)(vlTOPp->cmd_payload_numerator)) 
					  + (((IData)(vlTOPp->cmd_payload_numerator) 
					      >> 0xfU) 
					     & (IData)(vlTOPp->cmd_payload_signed))))),16);
	vcdp->fullBus  (c+25,((0xffffU & (((((IData)(vlTOPp->cmd_payload_denominator) 
					     >> 0xfU) 
					    & (IData)(vlTOPp->cmd_payload_signed))
					    ? (~ (IData)(vlTOPp->cmd_payload_denominator))
					    : (IData)(vlTOPp->cmd_payload_denominator)) 
					  + (((IData)(vlTOPp->cmd_payload_denominator) 
					      >> 0xfU) 
					     & (IData)(vlTOPp->cmd_payload_signed))))),16);
	vcdp->fullBit  (c+26,(((IData)(vlTOPp->MixedDivider__DOT__divider__DOT___zz_rsp_valid) 
			       & (IData)(vlTOPp->rsp_ready))));
    }
}
