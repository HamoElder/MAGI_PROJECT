// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Gpios__Syms.h"


//======================

void VAxiLite4Gpios::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAxiLite4Gpios::traceInit, &VAxiLite4Gpios::traceFull, &VAxiLite4Gpios::traceChg, this);
}
void VAxiLite4Gpios::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4Gpios* t=(VAxiLite4Gpios*)userthis;
    VAxiLite4Gpios__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4Gpios::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Gpios* t=(VAxiLite4Gpios*)userthis;
    VAxiLite4Gpios__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAxiLite4Gpios::traceInitThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4Gpios::traceFullThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Gpios::traceInitThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+39,"axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+40,"axil4Ctrl_awready",-1);
	vcdp->declBus  (c+41,"axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+42,"axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+43,"axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+44,"axil4Ctrl_wready",-1);
	vcdp->declBus  (c+45,"axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+46,"axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+47,"axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+48,"axil4Ctrl_bready",-1);
	vcdp->declBus  (c+49,"axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+50,"axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+51,"axil4Ctrl_arready",-1);
	vcdp->declBus  (c+52,"axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+53,"axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+54,"axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+55,"axil4Ctrl_rready",-1);
	vcdp->declBus  (c+56,"axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+57,"axil4Ctrl_rresp",-1,1,0);
	vcdp->declBus  (c+58,"gpio_0",-1,13,0);
	vcdp->declBit  (c+59,"interrupt_0",-1);
	vcdp->declBit  (c+60,"clk",-1);
	vcdp->declBit  (c+61,"reset",-1);
	vcdp->declBit  (c+39,"AxiLite4Gpios axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+40,"AxiLite4Gpios axil4Ctrl_awready",-1);
	vcdp->declBus  (c+41,"AxiLite4Gpios axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+42,"AxiLite4Gpios axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+43,"AxiLite4Gpios axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+44,"AxiLite4Gpios axil4Ctrl_wready",-1);
	vcdp->declBus  (c+45,"AxiLite4Gpios axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+46,"AxiLite4Gpios axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+47,"AxiLite4Gpios axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+48,"AxiLite4Gpios axil4Ctrl_bready",-1);
	vcdp->declBus  (c+49,"AxiLite4Gpios axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+50,"AxiLite4Gpios axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+51,"AxiLite4Gpios axil4Ctrl_arready",-1);
	vcdp->declBus  (c+52,"AxiLite4Gpios axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+53,"AxiLite4Gpios axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+54,"AxiLite4Gpios axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+55,"AxiLite4Gpios axil4Ctrl_rready",-1);
	vcdp->declBus  (c+56,"AxiLite4Gpios axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+57,"AxiLite4Gpios axil4Ctrl_rresp",-1,1,0);
	vcdp->declBus  (c+58,"AxiLite4Gpios gpio_0",-1,13,0);
	vcdp->declBit  (c+59,"AxiLite4Gpios interrupt_0",-1);
	vcdp->declBit  (c+60,"AxiLite4Gpios clk",-1);
	vcdp->declBit  (c+61,"AxiLite4Gpios reset",-1);
	vcdp->declBus  (c+19,"AxiLite4Gpios gpios_1_gpios_read",-1,13,0);
	vcdp->declBus  (c+3,"AxiLite4Gpios gpios_1_gpios_write",-1,13,0);
	vcdp->declBus  (c+4,"AxiLite4Gpios gpios_1_gpios_writeEnable",-1,13,0);
	vcdp->declBus  (c+2,"AxiLite4Gpios gpios_1_gpios_read_1",-1,13,0);
	vcdp->declBus  (c+1,"AxiLite4Gpios gpios_1_interrupt",-1,13,0);
	// Tracing: AxiLite4Gpios _zz_gpio_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:37
	// Tracing: AxiLite4Gpios _zz_gpio_0_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:38
	// Tracing: AxiLite4Gpios _zz_gpio_0_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:39
	// Tracing: AxiLite4Gpios _zz_gpio_0_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:40
	// Tracing: AxiLite4Gpios _zz_gpio_0_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:41
	// Tracing: AxiLite4Gpios _zz_gpio_0_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:42
	// Tracing: AxiLite4Gpios _zz_gpio_0_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:43
	// Tracing: AxiLite4Gpios _zz_gpio_0_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:44
	// Tracing: AxiLite4Gpios _zz_gpio_0_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:45
	// Tracing: AxiLite4Gpios _zz_gpio_0_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:46
	// Tracing: AxiLite4Gpios _zz_gpio_0_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:47
	// Tracing: AxiLite4Gpios _zz_gpio_0_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:48
	// Tracing: AxiLite4Gpios _zz_gpio_0_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:49
	// Tracing: AxiLite4Gpios _zz_gpio_0_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:50
	vcdp->declBit  (c+63,"AxiLite4Gpios readHaltRequest",-1);
	vcdp->declBit  (c+63,"AxiLite4Gpios writeHaltRequest",-1);
	vcdp->declBit  (c+20,"AxiLite4Gpios writeJoinEvent_valid",-1);
	vcdp->declBit  (c+21,"AxiLite4Gpios writeJoinEvent_ready",-1);
	vcdp->declBit  (c+22,"AxiLite4Gpios writeJoinEvent_fire",-1);
	vcdp->declBus  (c+64,"AxiLite4Gpios writeRsp_resp",-1,1,0);
	vcdp->declBit  (c+20,"AxiLite4Gpios writeJoinEvent_translated_valid",-1);
	vcdp->declBit  (c+21,"AxiLite4Gpios writeJoinEvent_translated_ready",-1);
	vcdp->declBus  (c+64,"AxiLite4Gpios writeJoinEvent_translated_payload_resp",-1,1,0);
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_bvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:60
	// Tracing: AxiLite4Gpios _zz_writeJoinEvent_translated_ready // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:61
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_bvalid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:62
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_bvalid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:63
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_bresp // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:64
	vcdp->declBit  (c+30,"AxiLite4Gpios when_Stream_l342",-1);
	vcdp->declBit  (c+31,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_valid",-1);
	vcdp->declBit  (c+55,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_ready",-1);
	vcdp->declBus  (c+24,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_payload_addr",-1,7,0);
	vcdp->declBus  (c+25,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_payload_prot",-1,2,0);
	vcdp->declBit  (c+31,"AxiLite4Gpios axil4Ctrl_ar_rValid",-1);
	vcdp->declBus  (c+24,"AxiLite4Gpios axil4Ctrl_ar_rData_addr",-1,7,0);
	vcdp->declBus  (c+25,"AxiLite4Gpios axil4Ctrl_ar_rData_prot",-1,2,0);
	vcdp->declBit  (c+32,"AxiLite4Gpios when_Stream_l342_1",-1);
	vcdp->declBus  (c+23,"AxiLite4Gpios readRsp_data",-1,31,0);
	vcdp->declBus  (c+64,"AxiLite4Gpios readRsp_resp",-1,1,0);
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_rvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:76
	vcdp->declBit  (c+22,"AxiLite4Gpios writeOccur",-1);
	vcdp->declBit  (c+62,"AxiLite4Gpios readOccur",-1);
	vcdp->declBus  (c+33,"AxiLite4Gpios gpios_1_gpios_writeEnable_1_driver",-1,13,0);
	vcdp->declBus  (c+34,"AxiLite4Gpios gpios_1_gpios_write_1_driver",-1,13,0);
	vcdp->declBus  (c+35,"AxiLite4Gpios gpios_1_ir_high_driver",-1,13,0);
	vcdp->declBus  (c+36,"AxiLite4Gpios gpios_1_ir_low_driver",-1,13,0);
	vcdp->declBus  (c+37,"AxiLite4Gpios gpios_1_ir_rise_driver",-1,13,0);
	vcdp->declBus  (c+38,"AxiLite4Gpios gpios_1_ir_fall_driver",-1,13,0);
	vcdp->declBit  (c+5,"AxiLite4Gpios when_AxiLite4Gpios_l38",-1);
	vcdp->declBit  (c+6,"AxiLite4Gpios when_AxiLite4Gpios_l38_1",-1);
	vcdp->declBit  (c+7,"AxiLite4Gpios when_AxiLite4Gpios_l38_2",-1);
	vcdp->declBit  (c+8,"AxiLite4Gpios when_AxiLite4Gpios_l38_3",-1);
	vcdp->declBit  (c+9,"AxiLite4Gpios when_AxiLite4Gpios_l38_4",-1);
	vcdp->declBit  (c+10,"AxiLite4Gpios when_AxiLite4Gpios_l38_5",-1);
	vcdp->declBit  (c+11,"AxiLite4Gpios when_AxiLite4Gpios_l38_6",-1);
	vcdp->declBit  (c+12,"AxiLite4Gpios when_AxiLite4Gpios_l38_7",-1);
	vcdp->declBit  (c+13,"AxiLite4Gpios when_AxiLite4Gpios_l38_8",-1);
	vcdp->declBit  (c+14,"AxiLite4Gpios when_AxiLite4Gpios_l38_9",-1);
	vcdp->declBit  (c+15,"AxiLite4Gpios when_AxiLite4Gpios_l38_10",-1);
	vcdp->declBit  (c+16,"AxiLite4Gpios when_AxiLite4Gpios_l38_11",-1);
	vcdp->declBit  (c+17,"AxiLite4Gpios when_AxiLite4Gpios_l38_12",-1);
	vcdp->declBit  (c+18,"AxiLite4Gpios when_AxiLite4Gpios_l38_13",-1);
	vcdp->declBus  (c+19,"AxiLite4Gpios gpios_1 gpios_read",-1,13,0);
	vcdp->declBus  (c+3,"AxiLite4Gpios gpios_1 gpios_write",-1,13,0);
	vcdp->declBus  (c+4,"AxiLite4Gpios gpios_1 gpios_writeEnable",-1,13,0);
	vcdp->declBus  (c+34,"AxiLite4Gpios gpios_1 gpios_write_1",-1,13,0);
	vcdp->declBus  (c+2,"AxiLite4Gpios gpios_1 gpios_read_1",-1,13,0);
	vcdp->declBus  (c+33,"AxiLite4Gpios gpios_1 gpios_writeEnable_1",-1,13,0);
	vcdp->declBus  (c+1,"AxiLite4Gpios gpios_1 interrupt",-1,13,0);
	vcdp->declBus  (c+35,"AxiLite4Gpios gpios_1 ir_high",-1,13,0);
	vcdp->declBus  (c+36,"AxiLite4Gpios gpios_1 ir_low",-1,13,0);
	vcdp->declBus  (c+37,"AxiLite4Gpios gpios_1 ir_rise",-1,13,0);
	vcdp->declBus  (c+38,"AxiLite4Gpios gpios_1 ir_fall",-1,13,0);
	vcdp->declBit  (c+60,"AxiLite4Gpios gpios_1 clk",-1);
	vcdp->declBit  (c+61,"AxiLite4Gpios gpios_1 reset",-1);
	vcdp->declBus  (c+26,"AxiLite4Gpios gpios_1 gpios_read_buffercc_io_dataOut",-1,13,0);
	vcdp->declBus  (c+26,"AxiLite4Gpios gpios_1 syncronized",-1,13,0);
	vcdp->declBus  (c+27,"AxiLite4Gpios gpios_1 last",-1,13,0);
	vcdp->declBus  (c+29,"AxiLite4Gpios gpios_1 interrupt_valid",-1,13,0);
	// Tracing: AxiLite4Gpios gpios_1 _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:437
	vcdp->declBus  (c+19,"AxiLite4Gpios gpios_1 gpios_read_buffercc io_dataIn",-1,13,0);
	vcdp->declBus  (c+26,"AxiLite4Gpios gpios_1 gpios_read_buffercc io_dataOut",-1,13,0);
	vcdp->declBit  (c+60,"AxiLite4Gpios gpios_1 gpios_read_buffercc clk",-1);
	vcdp->declBit  (c+61,"AxiLite4Gpios gpios_1 gpios_read_buffercc reset",-1);
	vcdp->declBus  (c+28,"AxiLite4Gpios gpios_1 gpios_read_buffercc buffers_0",-1,13,0);
	vcdp->declBus  (c+26,"AxiLite4Gpios gpios_1 gpios_read_buffercc buffers_1",-1,13,0);
    }
}

void VAxiLite4Gpios::traceFullThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT___zz_1),14);
	vcdp->fullBus  (c+2,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1),14);
	vcdp->fullBus  (c+3,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write),14);
	vcdp->fullBus  (c+4,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable),14);
	vcdp->fullBit  (c+5,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))));
	vcdp->fullBit  (c+6,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 1U))));
	vcdp->fullBit  (c+7,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 2U))));
	vcdp->fullBit  (c+8,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 3U))));
	vcdp->fullBit  (c+9,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 4U))));
	vcdp->fullBit  (c+10,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 5U))));
	vcdp->fullBit  (c+11,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 6U))));
	vcdp->fullBit  (c+12,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 7U))));
	vcdp->fullBit  (c+13,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 8U))));
	vcdp->fullBit  (c+14,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 9U))));
	vcdp->fullBit  (c+15,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 0xaU))));
	vcdp->fullBit  (c+16,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 0xbU))));
	vcdp->fullBit  (c+17,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 0xcU))));
	vcdp->fullBit  (c+18,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				     >> 0xdU))));
	vcdp->fullBus  (c+19,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read),14);
	vcdp->fullBit  (c+20,(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid));
	vcdp->fullBit  (c+21,(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->fullBit  (c+22,(vlTOPp->AxiLite4Gpios__DOT__writeOccur));
	vcdp->fullBus  (c+23,(vlTOPp->AxiLite4Gpios__DOT__readRsp_data),32);
	vcdp->fullBus  (c+24,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->fullBus  (c+25,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->fullBus  (c+26,(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1),14);
	vcdp->fullBus  (c+27,(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__last),14);
	vcdp->fullBus  (c+28,(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_0),14);
	vcdp->fullBus  (c+29,((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_high_driver) 
				  & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)) 
				 | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_low_driver) 
				    & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)))) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_rise_driver) 
				   & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1) 
				      & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__last))))) 
			       | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_fall_driver) 
				  & ((~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)) 
				     & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__last))))),14);
	vcdp->fullBit  (c+30,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->fullBit  (c+31,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid));
	vcdp->fullBit  (c+32,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->fullBus  (c+33,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver),14);
	vcdp->fullBus  (c+34,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver),14);
	vcdp->fullBus  (c+35,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_high_driver),14);
	vcdp->fullBus  (c+36,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_low_driver),14);
	vcdp->fullBus  (c+37,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_rise_driver),14);
	vcdp->fullBus  (c+38,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_fall_driver),14);
	vcdp->fullBit  (c+39,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->fullBit  (c+40,(vlTOPp->axil4Ctrl_awready));
	vcdp->fullBus  (c+41,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->fullBus  (c+42,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->fullBit  (c+43,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->fullBit  (c+44,(vlTOPp->axil4Ctrl_wready));
	vcdp->fullBus  (c+45,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->fullBus  (c+46,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->fullBit  (c+47,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->fullBit  (c+48,(vlTOPp->axil4Ctrl_bready));
	vcdp->fullBus  (c+49,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->fullBit  (c+50,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->fullBit  (c+51,(vlTOPp->axil4Ctrl_arready));
	vcdp->fullBus  (c+52,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->fullBus  (c+53,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->fullBit  (c+54,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->fullBit  (c+55,(vlTOPp->axil4Ctrl_rready));
	vcdp->fullBus  (c+56,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->fullBus  (c+57,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->fullBus  (c+58,(vlTOPp->gpio_0),14);
	vcdp->fullBit  (c+59,(vlTOPp->interrupt_0));
	vcdp->fullBit  (c+60,(vlTOPp->clk));
	vcdp->fullBit  (c+61,(vlTOPp->reset));
	vcdp->fullBit  (c+62,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
			       & (IData)(vlTOPp->axil4Ctrl_rready))));
	vcdp->fullBit  (c+63,(0U));
	vcdp->fullBus  (c+64,(0U),2);
    }
}
