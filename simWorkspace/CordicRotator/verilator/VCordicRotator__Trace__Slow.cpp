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
	vcdp->declBus  (c+2,"iter_limit",-1,4,0);
	vcdp->declBit  (c+3,"rotate_mode",-1);
	vcdp->declBus  (c+4,"x_u",-1,1,0);
	vcdp->declBit  (c+5,"w_en",-1);
	vcdp->declBus  (c+6,"w_addr",-1,7,0);
	vcdp->declBus  (c+7,"w_data",-1,31,0);
	vcdp->declBit  (c+8,"raw_data_valid",-1);
	vcdp->declBit  (c+9,"raw_data_ready",-1);
	vcdp->declBus  (c+10,"raw_data_payload_x",-1,31,0);
	vcdp->declBus  (c+11,"raw_data_payload_y",-1,31,0);
	vcdp->declBus  (c+12,"raw_data_payload_z",-1,31,0);
	vcdp->declBit  (c+13,"result_valid",-1);
	vcdp->declBus  (c+14,"result_payload_x",-1,31,0);
	vcdp->declBus  (c+15,"result_payload_y",-1,31,0);
	vcdp->declBus  (c+16,"result_payload_z",-1,31,0);
	vcdp->declBit  (c+17,"clk",-1);
	vcdp->declBit  (c+18,"reset",-1);
	vcdp->declBus  (c+2,"CordicRotator iter_limit",-1,4,0);
	vcdp->declBit  (c+3,"CordicRotator rotate_mode",-1);
	vcdp->declBus  (c+4,"CordicRotator x_u",-1,1,0);
	vcdp->declBit  (c+5,"CordicRotator w_en",-1);
	vcdp->declBus  (c+6,"CordicRotator w_addr",-1,7,0);
	vcdp->declBus  (c+7,"CordicRotator w_data",-1,31,0);
	vcdp->declBit  (c+8,"CordicRotator raw_data_valid",-1);
	vcdp->declBit  (c+9,"CordicRotator raw_data_ready",-1);
	vcdp->declBus  (c+10,"CordicRotator raw_data_payload_x",-1,31,0);
	vcdp->declBus  (c+11,"CordicRotator raw_data_payload_y",-1,31,0);
	vcdp->declBus  (c+12,"CordicRotator raw_data_payload_z",-1,31,0);
	vcdp->declBit  (c+13,"CordicRotator result_valid",-1);
	vcdp->declBus  (c+14,"CordicRotator result_payload_x",-1,31,0);
	vcdp->declBus  (c+15,"CordicRotator result_payload_y",-1,31,0);
	vcdp->declBus  (c+16,"CordicRotator result_payload_z",-1,31,0);
	vcdp->declBit  (c+17,"CordicRotator clk",-1);
	vcdp->declBit  (c+18,"CordicRotator reset",-1);
	// Tracing: CordicRotator _zz__zz_1_port1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:32
	// Tracing: CordicRotator _zz__zz_1_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:33
	// Tracing: CordicRotator _zz__zz_1_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:34
	// Tracing: CordicRotator _zz__zz_1_port_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:35
	// Tracing: CordicRotator _zz__zz_1_port_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:36
	// Tracing: CordicRotator _zz__zz_result_payload_x_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:37
	// Tracing: CordicRotator _zz__zz_result_payload_x_8_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:38
	// Tracing: CordicRotator _zz__zz_result_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:39
	// Tracing: CordicRotator _zz__zz_result_payload_x_1_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:40
	// Tracing: CordicRotator _zz__zz_result_payload_x_1_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:41
	// Tracing: CordicRotator _zz__zz_result_payload_x_1_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:42
	// Tracing: CordicRotator _zz__zz_result_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:43
	// Tracing: CordicRotator _zz__zz_result_payload_x_2_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:44
	// Tracing: CordicRotator _zz__zz_result_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:45
	// Tracing: CordicRotator _zz__zz_result_payload_x_3_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:46
	// Tracing: CordicRotator _zz_result_payload_x // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:47
	// Tracing: CordicRotator _zz_result_payload_x_regNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:48
	// Tracing: CordicRotator _zz_result_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:49
	// Tracing: CordicRotator _zz_result_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:50
	// Tracing: CordicRotator _zz_result_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:51
	// Tracing: CordicRotator _zz_result_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:52
	// Tracing: CordicRotator _zz_result_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:53
	// Tracing: CordicRotator _zz_result_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:54
	// Tracing: CordicRotator _zz_result_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:55
	// Tracing: CordicRotator _zz_result_payload_x_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:56
	// Tracing: CordicRotator _zz_result_payload_x_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:57
	// Tracing: CordicRotator _zz_result_payload_x_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:58
	// Tracing: CordicRotator _zz_result_payload_x_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:59
	// Tracing: CordicRotator _zz_result_payload_x_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:60
	// Tracing: CordicRotator _zz_raw_data_ready // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:61
	// Tracing: CordicRotator _zz_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:62
	// Tracing: CordicRotator _zz_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:63
	// Tracing: CordicRotator _zz_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:64
	vcdp->declBit  (c+1,"CordicRotator raw_data_fire",-1);
	vcdp->declBit  (c+19,"CordicRotator when_CordicRotator_l221",-1);
	// Tracing: CordicRotator _zz_3_string // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:68
	// Tracing: CordicRotator _zz_4_string // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:69
	// Tracing: CordicRotator _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CordicRotator.v:72
    }
}

void VCordicRotator::traceFullThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->CordicRotator__DOT__raw_data_fire));
	vcdp->fullBus  (c+2,(vlTOPp->iter_limit),5);
	vcdp->fullBit  (c+3,(vlTOPp->rotate_mode));
	vcdp->fullBus  (c+4,(vlTOPp->x_u),2);
	vcdp->fullBit  (c+5,(vlTOPp->w_en));
	vcdp->fullBus  (c+6,(vlTOPp->w_addr),8);
	vcdp->fullBus  (c+7,(vlTOPp->w_data),32);
	vcdp->fullBit  (c+8,(vlTOPp->raw_data_valid));
	vcdp->fullBit  (c+9,(vlTOPp->raw_data_ready));
	vcdp->fullBus  (c+10,(vlTOPp->raw_data_payload_x),32);
	vcdp->fullBus  (c+11,(vlTOPp->raw_data_payload_y),32);
	vcdp->fullBus  (c+12,(vlTOPp->raw_data_payload_z),32);
	vcdp->fullBit  (c+13,(vlTOPp->result_valid));
	vcdp->fullBus  (c+14,(vlTOPp->result_payload_x),32);
	vcdp->fullBus  (c+15,(vlTOPp->result_payload_y),32);
	vcdp->fullBus  (c+16,(vlTOPp->result_payload_z),32);
	vcdp->fullBit  (c+17,(vlTOPp->clk));
	vcdp->fullBit  (c+18,(vlTOPp->reset));
	vcdp->fullBit  (c+19,(((IData)(vlTOPp->iter_limit) 
			       <= (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x))));
    }
}
