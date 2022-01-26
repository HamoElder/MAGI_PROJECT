// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCICFilter__Syms.h"


//======================

void VCICFilter::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCICFilter::traceInit, &VCICFilter::traceFull, &VCICFilter::traceChg, this);
}
void VCICFilter::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCICFilter* t=(VCICFilter*)userthis;
    VCICFilter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCICFilter::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCICFilter* t=(VCICFilter*)userthis;
    VCICFilter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCICFilter::traceInitThis(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCICFilter::traceFullThis(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCICFilter::traceInitThis__1(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+26,"raw_data_valid",-1);
	vcdp->declBus  (c+27,"raw_data_payload",-1,15,0);
	vcdp->declBit  (c+28,"filtered_data_valid",-1);
	vcdp->declBus  (c+29,"filtered_data_payload",-1,16,0);
	vcdp->declBit  (c+30,"clk",-1);
	vcdp->declBit  (c+31,"reset",-1);
	vcdp->declBit  (c+26,"CICFilter raw_data_valid",-1);
	vcdp->declBus  (c+27,"CICFilter raw_data_payload",-1,15,0);
	vcdp->declBit  (c+28,"CICFilter filtered_data_valid",-1);
	vcdp->declBus  (c+29,"CICFilter filtered_data_payload",-1,16,0);
	vcdp->declBit  (c+30,"CICFilter clk",-1);
	vcdp->declBit  (c+31,"CICFilter reset",-1);
	vcdp->declBus  (c+14,"CICFilter decimator_1_in_payload",-1,20,0);
	vcdp->declBit  (c+15,"CICFilter integrator_result_data_valid",-1);
	vcdp->declBus  (c+16,"CICFilter integrator_result_data_payload",-1,16,0);
	vcdp->declBit  (c+1,"CICFilter decimator_1_out_valid",-1);
	vcdp->declBus  (c+13,"CICFilter decimator_1_out_payload",-1,20,0);
	vcdp->declBit  (c+2,"CICFilter combor_result_data_valid",-1);
	vcdp->declBus  (c+3,"CICFilter combor_result_data_payload",-1,16,0);
	// Tracing: CICFilter _zz_in_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:22
	vcdp->declBit  (c+26,"CICFilter integrator raw_data_valid",-1);
	vcdp->declBus  (c+27,"CICFilter integrator raw_data_payload",-1,15,0);
	vcdp->declBit  (c+15,"CICFilter integrator result_data_valid",-1);
	vcdp->declBus  (c+16,"CICFilter integrator result_data_payload",-1,16,0);
	vcdp->declBit  (c+30,"CICFilter integrator clk",-1);
	vcdp->declBit  (c+31,"CICFilter integrator reset",-1);
	// Tracing: CICFilter integrator _zz_internal_en // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:172
	// Tracing: CICFilter integrator _zz_internal_data_vec_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:173
	vcdp->declBus  (c+25,"CICFilter integrator raw_data_buf",-1,15,0);
	vcdp->declBus  (c+17,"CICFilter integrator internal_data_vec_0",-1,16,0);
	vcdp->declBus  (c+18,"CICFilter integrator internal_data_vec_1",-1,16,0);
	vcdp->declBus  (c+16,"CICFilter integrator internal_data_vec_2",-1,16,0);
	vcdp->declBus  (c+19,"CICFilter integrator internal_en",-1,3,0);
	vcdp->declBit  (c+20,"CICFilter integrator when_CICIntegrator_l22",-1);
	vcdp->declBit  (c+21,"CICFilter integrator when_CICIntegrator_l27",-1);
	vcdp->declBit  (c+22,"CICFilter integrator when_CICIntegrator_l27_1",-1);
	vcdp->declBit  (c+15,"CICFilter decimator_1 in_valid",-1);
	vcdp->declBus  (c+14,"CICFilter decimator_1 in_payload",-1,20,0);
	vcdp->declBit  (c+1,"CICFilter decimator_1 out_valid",-1);
	vcdp->declBus  (c+13,"CICFilter decimator_1 out_payload",-1,20,0);
	vcdp->declBit  (c+30,"CICFilter decimator_1 clk",-1);
	vcdp->declBit  (c+31,"CICFilter decimator_1 reset",-1);
	// Tracing: CICFilter decimator_1 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CICFilter.v:123
	vcdp->declBus  (c+23,"CICFilter decimator_1 cnt",-1,2,0);
	vcdp->declBus  (c+13,"CICFilter decimator_1 out_data",-1,20,0);
	vcdp->declBit  (c+1,"CICFilter decimator_1 out_valid_1",-1);
	vcdp->declBit  (c+24,"CICFilter decimator_1 when_Decimator_l22",-1);
	vcdp->declBit  (c+1,"CICFilter combor raw_data_valid",-1);
	vcdp->declBus  (c+13,"CICFilter combor raw_data_payload",-1,20,0);
	vcdp->declBit  (c+2,"CICFilter combor result_data_valid",-1);
	vcdp->declBus  (c+3,"CICFilter combor result_data_payload",-1,16,0);
	vcdp->declBit  (c+30,"CICFilter combor clk",-1);
	vcdp->declBit  (c+31,"CICFilter combor reset",-1);
	vcdp->declBus  (c+4,"CICFilter combor internal_data_vec_0",-1,16,0);
	vcdp->declBus  (c+5,"CICFilter combor internal_data_vec_1",-1,16,0);
	vcdp->declBus  (c+6,"CICFilter combor internal_data_vec_2",-1,16,0);
	vcdp->declBus  (c+7,"CICFilter combor delay_data_vec_0",-1,16,0);
	vcdp->declBus  (c+8,"CICFilter combor delay_data_vec_1",-1,16,0);
	vcdp->declBus  (c+9,"CICFilter combor delay_data_vec_2",-1,16,0);
	vcdp->declBus  (c+10,"CICFilter combor pipe_data_vec_0",-1,16,0);
	vcdp->declBus  (c+11,"CICFilter combor pipe_data_vec_1",-1,16,0);
	vcdp->declBus  (c+12,"CICFilter combor pipe_data_vec_2",-1,16,0);
	vcdp->declBus  (c+3,"CICFilter combor result_data_payload_1",-1,16,0);
	vcdp->declBit  (c+2,"CICFilter combor result_data_valid_1",-1);
    }
}

void VCICFilter::traceFullThis__1(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1));
	vcdp->fullBit  (c+2,(vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1));
	vcdp->fullBus  (c+3,(vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1),17);
	vcdp->fullBus  (c+4,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0 
					  - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0))),17);
	vcdp->fullBus  (c+5,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1 
					  - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1))),17);
	vcdp->fullBus  (c+6,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2 
					  - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2))),17);
	vcdp->fullBus  (c+7,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0),17);
	vcdp->fullBus  (c+8,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1),17);
	vcdp->fullBus  (c+9,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2),17);
	vcdp->fullBus  (c+10,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0),17);
	vcdp->fullBus  (c+11,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1),17);
	vcdp->fullBus  (c+12,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2),17);
	vcdp->fullBus  (c+13,(vlTOPp->CICFilter__DOT__decimator_1__DOT__out_data),21);
	vcdp->fullBus  (c+14,(((0x1e0000U & (VL_NEGATE_I((IData)(
								 (1U 
								  & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
								     >> 0x10U)))) 
					     << 0x11U)) 
			       | vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2)),21);
	vcdp->fullBit  (c+15,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
				     >> 3U))));
	vcdp->fullBus  (c+16,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2),17);
	vcdp->fullBus  (c+17,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0),17);
	vcdp->fullBus  (c+18,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1),17);
	vcdp->fullBus  (c+19,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en),4);
	vcdp->fullBit  (c+20,((1U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))));
	vcdp->fullBit  (c+21,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
				     >> 1U))));
	vcdp->fullBit  (c+22,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
				     >> 2U))));
	vcdp->fullBus  (c+23,(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt),3);
	vcdp->fullBit  (c+24,((4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt))));
	vcdp->fullBus  (c+25,(vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf),16);
	vcdp->fullBit  (c+26,(vlTOPp->raw_data_valid));
	vcdp->fullBus  (c+27,(vlTOPp->raw_data_payload),16);
	vcdp->fullBit  (c+28,(vlTOPp->filtered_data_valid));
	vcdp->fullBus  (c+29,(vlTOPp->filtered_data_payload),17);
	vcdp->fullBit  (c+30,(vlTOPp->clk));
	vcdp->fullBit  (c+31,(vlTOPp->reset));
    }
}
