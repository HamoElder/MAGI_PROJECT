// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPkgGen__Syms.h"


//======================

void VStreamPkgGen::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VStreamPkgGen::traceInit, &VStreamPkgGen::traceFull, &VStreamPkgGen::traceChg, this);
}
void VStreamPkgGen::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStreamPkgGen* t=(VStreamPkgGen*)userthis;
    VStreamPkgGen__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStreamPkgGen::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPkgGen* t=(VStreamPkgGen*)userthis;
    VStreamPkgGen__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VStreamPkgGen::traceInitThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStreamPkgGen::traceFullThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStreamPkgGen::traceInitThis__1(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+12,"slices_limit",-1,11,0);
	vcdp->declBus  (c+13,"slices_cnt",-1,11,0);
	vcdp->declBit  (c+14,"raw_data_stream_valid",-1);
	vcdp->declBit  (c+15,"raw_data_stream_ready",-1);
	vcdp->declBit  (c+16,"raw_data_stream_payload_last",-1);
	vcdp->declBus  (c+17,"raw_data_stream_payload_fragment_data",-1,31,0);
	vcdp->declBus  (c+18,"raw_data_stream_payload_fragment_strb",-1,3,0);
	vcdp->declBit  (c+19,"pkg_data_valid",-1);
	vcdp->declBit  (c+20,"pkg_data_ready",-1);
	vcdp->declBit  (c+21,"pkg_data_payload_last",-1);
	vcdp->declBus  (c+22,"pkg_data_payload_fragment",-1,7,0);
	vcdp->declBit  (c+23,"clk",-1);
	vcdp->declBit  (c+24,"reset",-1);
	vcdp->declBus  (c+12,"StreamPkgGen slices_limit",-1,11,0);
	vcdp->declBus  (c+13,"StreamPkgGen slices_cnt",-1,11,0);
	vcdp->declBit  (c+14,"StreamPkgGen raw_data_stream_valid",-1);
	vcdp->declBit  (c+15,"StreamPkgGen raw_data_stream_ready",-1);
	vcdp->declBit  (c+16,"StreamPkgGen raw_data_stream_payload_last",-1);
	vcdp->declBus  (c+17,"StreamPkgGen raw_data_stream_payload_fragment_data",-1,31,0);
	vcdp->declBus  (c+18,"StreamPkgGen raw_data_stream_payload_fragment_strb",-1,3,0);
	vcdp->declBit  (c+19,"StreamPkgGen pkg_data_valid",-1);
	vcdp->declBit  (c+20,"StreamPkgGen pkg_data_ready",-1);
	vcdp->declBit  (c+21,"StreamPkgGen pkg_data_payload_last",-1);
	vcdp->declBus  (c+22,"StreamPkgGen pkg_data_payload_fragment",-1,7,0);
	vcdp->declBit  (c+23,"StreamPkgGen clk",-1);
	vcdp->declBit  (c+24,"StreamPkgGen reset",-1);
	vcdp->declBit  (c+8,"StreamPkgGen split_core_raw_data_ready",-1);
	vcdp->declBit  (c+9,"StreamPkgGen split_core_split_data_valid",-1);
	vcdp->declBus  (c+4,"StreamPkgGen split_core_split_data_payload",-1,7,0);
	// Tracing: StreamPkgGen _zz_pkg_data_payload_last // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v:25
	// Tracing: StreamPkgGen _zz_pkg_slices_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v:26
	// Tracing: StreamPkgGen _zz_pkg_slices_cnt_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/StreamPkgGen.v:27
	vcdp->declBus  (c+5,"StreamPkgGen strb_buf",-1,3,0);
	vcdp->declBus  (c+10,"StreamPkgGen pkg_slices_cnt",-1,11,0);
	vcdp->declBit  (c+6,"StreamPkgGen bit_valid",-1);
	vcdp->declBit  (c+1,"StreamPkgGen raw_data_stream_fire",-1);
	vcdp->declBit  (c+2,"StreamPkgGen split_core_split_data_fire",-1);
	vcdp->declBit  (c+14,"StreamPkgGen split_core raw_data_valid",-1);
	vcdp->declBit  (c+8,"StreamPkgGen split_core raw_data_ready",-1);
	vcdp->declBus  (c+17,"StreamPkgGen split_core raw_data_payload",-1,31,0);
	vcdp->declBit  (c+9,"StreamPkgGen split_core split_data_valid",-1);
	vcdp->declBit  (c+20,"StreamPkgGen split_core split_data_ready",-1);
	vcdp->declBus  (c+4,"StreamPkgGen split_core split_data_payload",-1,7,0);
	vcdp->declBit  (c+23,"StreamPkgGen split_core clk",-1);
	vcdp->declBit  (c+24,"StreamPkgGen split_core reset",-1);
	vcdp->declBus  (c+11,"StreamPkgGen split_core cnt",-1,2,0);
	vcdp->declBus  (c+7,"StreamPkgGen split_core data_buf",-1,31,0);
	vcdp->declBit  (c+3,"StreamPkgGen split_core raw_data_fire",-1);
	vcdp->declBit  (c+2,"StreamPkgGen split_core split_data_fire",-1);
    }
}

void VStreamPkgGen::traceFullThis__1(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire));
	vcdp->fullBit  (c+2,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire));
	vcdp->fullBit  (c+3,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire));
	vcdp->fullBus  (c+4,((0xffU & vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf)),8);
	vcdp->fullBus  (c+5,(vlTOPp->StreamPkgGen__DOT__strb_buf),4);
	vcdp->fullBit  (c+6,((1U & (IData)(vlTOPp->StreamPkgGen__DOT__strb_buf))));
	vcdp->fullBus  (c+7,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf),32);
	vcdp->fullBit  (c+8,((0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt))));
	vcdp->fullBit  (c+9,((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt))));
	vcdp->fullBus  (c+10,(vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt),12);
	vcdp->fullBus  (c+11,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt),3);
	vcdp->fullBus  (c+12,(vlTOPp->slices_limit),12);
	vcdp->fullBus  (c+13,(vlTOPp->slices_cnt),12);
	vcdp->fullBit  (c+14,(vlTOPp->raw_data_stream_valid));
	vcdp->fullBit  (c+15,(vlTOPp->raw_data_stream_ready));
	vcdp->fullBit  (c+16,(vlTOPp->raw_data_stream_payload_last));
	vcdp->fullBus  (c+17,(vlTOPp->raw_data_stream_payload_fragment_data),32);
	vcdp->fullBus  (c+18,(vlTOPp->raw_data_stream_payload_fragment_strb),4);
	vcdp->fullBit  (c+19,(vlTOPp->pkg_data_valid));
	vcdp->fullBit  (c+20,(vlTOPp->pkg_data_ready));
	vcdp->fullBit  (c+21,(vlTOPp->pkg_data_payload_last));
	vcdp->fullBus  (c+22,(vlTOPp->pkg_data_payload_fragment),8);
	vcdp->fullBit  (c+23,(vlTOPp->clk));
	vcdp->fullBit  (c+24,(vlTOPp->reset));
    }
}
