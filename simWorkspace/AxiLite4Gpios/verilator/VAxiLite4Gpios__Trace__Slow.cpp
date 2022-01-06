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
	vcdp->declBit  (c+72,"axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+73,"axil4Ctrl_awready",-1);
	vcdp->declBus  (c+74,"axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+75,"axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+76,"axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+77,"axil4Ctrl_wready",-1);
	vcdp->declBus  (c+78,"axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+79,"axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+80,"axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+81,"axil4Ctrl_bready",-1);
	vcdp->declBus  (c+82,"axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+83,"axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+84,"axil4Ctrl_arready",-1);
	vcdp->declBus  (c+85,"axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+86,"axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+87,"axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+88,"axil4Ctrl_rready",-1);
	vcdp->declBus  (c+89,"axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+90,"axil4Ctrl_rresp",-1,1,0);
	vcdp->declBus  (c+91,"gpio_0",-1,15,0);
	vcdp->declBus  (c+92,"gpio_1",-1,15,0);
	vcdp->declBit  (c+93,"interrupt_0",-1);
	vcdp->declBit  (c+94,"interrupt_1",-1);
	vcdp->declBit  (c+95,"clk",-1);
	vcdp->declBit  (c+96,"reset",-1);
	vcdp->declBit  (c+72,"AxiLite4Gpios axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+73,"AxiLite4Gpios axil4Ctrl_awready",-1);
	vcdp->declBus  (c+74,"AxiLite4Gpios axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+75,"AxiLite4Gpios axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+76,"AxiLite4Gpios axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+77,"AxiLite4Gpios axil4Ctrl_wready",-1);
	vcdp->declBus  (c+78,"AxiLite4Gpios axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+79,"AxiLite4Gpios axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+80,"AxiLite4Gpios axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+81,"AxiLite4Gpios axil4Ctrl_bready",-1);
	vcdp->declBus  (c+82,"AxiLite4Gpios axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+83,"AxiLite4Gpios axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+84,"AxiLite4Gpios axil4Ctrl_arready",-1);
	vcdp->declBus  (c+85,"AxiLite4Gpios axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+86,"AxiLite4Gpios axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+87,"AxiLite4Gpios axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+88,"AxiLite4Gpios axil4Ctrl_rready",-1);
	vcdp->declBus  (c+89,"AxiLite4Gpios axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+90,"AxiLite4Gpios axil4Ctrl_rresp",-1,1,0);
	vcdp->declBus  (c+91,"AxiLite4Gpios gpio_0",-1,15,0);
	vcdp->declBus  (c+92,"AxiLite4Gpios gpio_1",-1,15,0);
	vcdp->declBit  (c+93,"AxiLite4Gpios interrupt_0",-1);
	vcdp->declBit  (c+94,"AxiLite4Gpios interrupt_1",-1);
	vcdp->declBit  (c+95,"AxiLite4Gpios clk",-1);
	vcdp->declBit  (c+96,"AxiLite4Gpios reset",-1);
	vcdp->declBus  (c+41,"AxiLite4Gpios gpios_2_gpios_read",-1,15,0);
	vcdp->declBus  (c+42,"AxiLite4Gpios gpios_3_gpios_read",-1,15,0);
	vcdp->declBus  (c+4,"AxiLite4Gpios gpios_2_gpios_write",-1,15,0);
	vcdp->declBus  (c+5,"AxiLite4Gpios gpios_2_gpios_writeEnable",-1,15,0);
	vcdp->declBus  (c+2,"AxiLite4Gpios gpios_2_gpios_read_1",-1,15,0);
	vcdp->declBus  (c+46,"AxiLite4Gpios gpios_2_interrupt",-1,15,0);
	vcdp->declBus  (c+6,"AxiLite4Gpios gpios_3_gpios_write",-1,15,0);
	vcdp->declBus  (c+7,"AxiLite4Gpios gpios_3_gpios_writeEnable",-1,15,0);
	vcdp->declBus  (c+3,"AxiLite4Gpios gpios_3_gpios_read_1",-1,15,0);
	vcdp->declBus  (c+1,"AxiLite4Gpios gpios_3_interrupt",-1,15,0);
	// Tracing: AxiLite4Gpios _zz_gpio_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:44
	// Tracing: AxiLite4Gpios _zz_gpio_1_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:45
	// Tracing: AxiLite4Gpios _zz_gpio_1_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:46
	// Tracing: AxiLite4Gpios _zz_gpio_1_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:47
	// Tracing: AxiLite4Gpios _zz_gpio_1_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:48
	// Tracing: AxiLite4Gpios _zz_gpio_1_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:49
	// Tracing: AxiLite4Gpios _zz_gpio_1_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:50
	// Tracing: AxiLite4Gpios _zz_gpio_1_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:51
	// Tracing: AxiLite4Gpios _zz_gpio_1_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:52
	// Tracing: AxiLite4Gpios _zz_gpio_1_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:53
	// Tracing: AxiLite4Gpios _zz_gpio_1_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:54
	// Tracing: AxiLite4Gpios _zz_gpio_1_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:55
	// Tracing: AxiLite4Gpios _zz_gpio_1_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:56
	// Tracing: AxiLite4Gpios _zz_gpio_1_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:57
	// Tracing: AxiLite4Gpios _zz_gpio_1_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:58
	// Tracing: AxiLite4Gpios _zz_gpio_1_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:59
	// Tracing: AxiLite4Gpios _zz_gpio_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:60
	// Tracing: AxiLite4Gpios _zz_gpio_0_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:61
	// Tracing: AxiLite4Gpios _zz_gpio_0_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:62
	// Tracing: AxiLite4Gpios _zz_gpio_0_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:63
	// Tracing: AxiLite4Gpios _zz_gpio_0_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:64
	// Tracing: AxiLite4Gpios _zz_gpio_0_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:65
	// Tracing: AxiLite4Gpios _zz_gpio_0_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:66
	// Tracing: AxiLite4Gpios _zz_gpio_0_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:67
	// Tracing: AxiLite4Gpios _zz_gpio_0_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:68
	// Tracing: AxiLite4Gpios _zz_gpio_0_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:69
	// Tracing: AxiLite4Gpios _zz_gpio_0_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:70
	// Tracing: AxiLite4Gpios _zz_gpio_0_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:71
	// Tracing: AxiLite4Gpios _zz_gpio_0_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:72
	// Tracing: AxiLite4Gpios _zz_gpio_0_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:73
	// Tracing: AxiLite4Gpios _zz_gpio_0_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:74
	// Tracing: AxiLite4Gpios _zz_gpio_0_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:75
	vcdp->declBit  (c+98,"AxiLite4Gpios readHaltRequest",-1);
	vcdp->declBit  (c+98,"AxiLite4Gpios writeHaltRequest",-1);
	vcdp->declBit  (c+43,"AxiLite4Gpios writeJoinEvent_valid",-1);
	vcdp->declBit  (c+44,"AxiLite4Gpios writeJoinEvent_ready",-1);
	vcdp->declBit  (c+45,"AxiLite4Gpios writeJoinEvent_fire",-1);
	vcdp->declBus  (c+99,"AxiLite4Gpios writeRsp_resp",-1,1,0);
	vcdp->declBit  (c+43,"AxiLite4Gpios writeJoinEvent_translated_valid",-1);
	vcdp->declBit  (c+44,"AxiLite4Gpios writeJoinEvent_translated_ready",-1);
	vcdp->declBus  (c+99,"AxiLite4Gpios writeJoinEvent_translated_payload_resp",-1,1,0);
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_bvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:85
	// Tracing: AxiLite4Gpios _zz_writeJoinEvent_translated_ready // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:86
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_bvalid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:87
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_bvalid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:88
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_bresp // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:89
	vcdp->declBit  (c+57,"AxiLite4Gpios when_Stream_l342",-1);
	vcdp->declBit  (c+58,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_valid",-1);
	vcdp->declBit  (c+88,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_ready",-1);
	vcdp->declBus  (c+48,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_payload_addr",-1,7,0);
	vcdp->declBus  (c+49,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_payload_prot",-1,2,0);
	vcdp->declBit  (c+58,"AxiLite4Gpios axil4Ctrl_ar_rValid",-1);
	vcdp->declBus  (c+48,"AxiLite4Gpios axil4Ctrl_ar_rData_addr",-1,7,0);
	vcdp->declBus  (c+49,"AxiLite4Gpios axil4Ctrl_ar_rData_prot",-1,2,0);
	vcdp->declBit  (c+59,"AxiLite4Gpios when_Stream_l342_1",-1);
	vcdp->declBus  (c+47,"AxiLite4Gpios readRsp_data",-1,31,0);
	vcdp->declBus  (c+99,"AxiLite4Gpios readRsp_resp",-1,1,0);
	// Tracing: AxiLite4Gpios _zz_axil4Ctrl_rvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:101
	vcdp->declBit  (c+45,"AxiLite4Gpios writeOccur",-1);
	vcdp->declBit  (c+97,"AxiLite4Gpios readOccur",-1);
	vcdp->declBus  (c+60,"AxiLite4Gpios gpios_2_gpios_writeEnable_1_driver",-1,15,0);
	vcdp->declBus  (c+61,"AxiLite4Gpios gpios_2_gpios_write_1_driver",-1,15,0);
	vcdp->declBus  (c+62,"AxiLite4Gpios gpios_2_ir_high_driver",-1,15,0);
	vcdp->declBus  (c+63,"AxiLite4Gpios gpios_2_ir_low_driver",-1,15,0);
	vcdp->declBus  (c+64,"AxiLite4Gpios gpios_2_ir_rise_driver",-1,15,0);
	vcdp->declBus  (c+65,"AxiLite4Gpios gpios_2_ir_fall_driver",-1,15,0);
	vcdp->declBit  (c+8,"AxiLite4Gpios when_AxiLite4Gpios_l37",-1);
	vcdp->declBit  (c+9,"AxiLite4Gpios when_AxiLite4Gpios_l37_1",-1);
	vcdp->declBit  (c+10,"AxiLite4Gpios when_AxiLite4Gpios_l37_2",-1);
	vcdp->declBit  (c+11,"AxiLite4Gpios when_AxiLite4Gpios_l37_3",-1);
	vcdp->declBit  (c+12,"AxiLite4Gpios when_AxiLite4Gpios_l37_4",-1);
	vcdp->declBit  (c+13,"AxiLite4Gpios when_AxiLite4Gpios_l37_5",-1);
	vcdp->declBit  (c+14,"AxiLite4Gpios when_AxiLite4Gpios_l37_6",-1);
	vcdp->declBit  (c+15,"AxiLite4Gpios when_AxiLite4Gpios_l37_7",-1);
	vcdp->declBit  (c+16,"AxiLite4Gpios when_AxiLite4Gpios_l37_8",-1);
	vcdp->declBit  (c+17,"AxiLite4Gpios when_AxiLite4Gpios_l37_9",-1);
	vcdp->declBit  (c+18,"AxiLite4Gpios when_AxiLite4Gpios_l37_10",-1);
	vcdp->declBit  (c+19,"AxiLite4Gpios when_AxiLite4Gpios_l37_11",-1);
	vcdp->declBit  (c+20,"AxiLite4Gpios when_AxiLite4Gpios_l37_12",-1);
	vcdp->declBit  (c+21,"AxiLite4Gpios when_AxiLite4Gpios_l37_13",-1);
	vcdp->declBit  (c+22,"AxiLite4Gpios when_AxiLite4Gpios_l37_14",-1);
	vcdp->declBit  (c+23,"AxiLite4Gpios when_AxiLite4Gpios_l37_15",-1);
	vcdp->declBus  (c+66,"AxiLite4Gpios gpios_3_gpios_writeEnable_1_driver",-1,15,0);
	vcdp->declBus  (c+67,"AxiLite4Gpios gpios_3_gpios_write_1_driver",-1,15,0);
	vcdp->declBus  (c+68,"AxiLite4Gpios gpios_3_ir_high_driver",-1,15,0);
	vcdp->declBus  (c+69,"AxiLite4Gpios gpios_3_ir_low_driver",-1,15,0);
	vcdp->declBus  (c+70,"AxiLite4Gpios gpios_3_ir_rise_driver",-1,15,0);
	vcdp->declBus  (c+71,"AxiLite4Gpios gpios_3_ir_fall_driver",-1,15,0);
	vcdp->declBit  (c+24,"AxiLite4Gpios when_AxiLite4Gpios_l37_16",-1);
	vcdp->declBit  (c+25,"AxiLite4Gpios when_AxiLite4Gpios_l37_17",-1);
	vcdp->declBit  (c+26,"AxiLite4Gpios when_AxiLite4Gpios_l37_18",-1);
	vcdp->declBit  (c+27,"AxiLite4Gpios when_AxiLite4Gpios_l37_19",-1);
	vcdp->declBit  (c+28,"AxiLite4Gpios when_AxiLite4Gpios_l37_20",-1);
	vcdp->declBit  (c+29,"AxiLite4Gpios when_AxiLite4Gpios_l37_21",-1);
	vcdp->declBit  (c+30,"AxiLite4Gpios when_AxiLite4Gpios_l37_22",-1);
	vcdp->declBit  (c+31,"AxiLite4Gpios when_AxiLite4Gpios_l37_23",-1);
	vcdp->declBit  (c+32,"AxiLite4Gpios when_AxiLite4Gpios_l37_24",-1);
	vcdp->declBit  (c+33,"AxiLite4Gpios when_AxiLite4Gpios_l37_25",-1);
	vcdp->declBit  (c+34,"AxiLite4Gpios when_AxiLite4Gpios_l37_26",-1);
	vcdp->declBit  (c+35,"AxiLite4Gpios when_AxiLite4Gpios_l37_27",-1);
	vcdp->declBit  (c+36,"AxiLite4Gpios when_AxiLite4Gpios_l37_28",-1);
	vcdp->declBit  (c+37,"AxiLite4Gpios when_AxiLite4Gpios_l37_29",-1);
	vcdp->declBit  (c+38,"AxiLite4Gpios when_AxiLite4Gpios_l37_30",-1);
	vcdp->declBit  (c+39,"AxiLite4Gpios when_AxiLite4Gpios_l37_31",-1);
	vcdp->declBus  (c+41,"AxiLite4Gpios gpios_2 gpios_read",-1,15,0);
	vcdp->declBus  (c+4,"AxiLite4Gpios gpios_2 gpios_write",-1,15,0);
	vcdp->declBus  (c+5,"AxiLite4Gpios gpios_2 gpios_writeEnable",-1,15,0);
	vcdp->declBus  (c+61,"AxiLite4Gpios gpios_2 gpios_write_1",-1,15,0);
	vcdp->declBus  (c+2,"AxiLite4Gpios gpios_2 gpios_read_1",-1,15,0);
	vcdp->declBus  (c+60,"AxiLite4Gpios gpios_2 gpios_writeEnable_1",-1,15,0);
	vcdp->declBus  (c+46,"AxiLite4Gpios gpios_2 interrupt",-1,15,0);
	vcdp->declBus  (c+62,"AxiLite4Gpios gpios_2 ir_high",-1,15,0);
	vcdp->declBus  (c+63,"AxiLite4Gpios gpios_2 ir_low",-1,15,0);
	vcdp->declBus  (c+64,"AxiLite4Gpios gpios_2 ir_rise",-1,15,0);
	vcdp->declBus  (c+65,"AxiLite4Gpios gpios_2 ir_fall",-1,15,0);
	vcdp->declBit  (c+95,"AxiLite4Gpios gpios_2 clk",-1);
	vcdp->declBit  (c+96,"AxiLite4Gpios gpios_2 reset",-1);
	vcdp->declBus  (c+50,"AxiLite4Gpios gpios_2 gpios_read_buffercc_io_dataOut",-1,15,0);
	vcdp->declBus  (c+50,"AxiLite4Gpios gpios_2 syncronized",-1,15,0);
	vcdp->declBus  (c+51,"AxiLite4Gpios gpios_2 last",-1,15,0);
	vcdp->declBus  (c+40,"AxiLite4Gpios gpios_2 interrupt_valid",-1,15,0);
	vcdp->declBus  (c+41,"AxiLite4Gpios gpios_2 gpios_read_buffercc io_dataIn",-1,15,0);
	vcdp->declBus  (c+50,"AxiLite4Gpios gpios_2 gpios_read_buffercc io_dataOut",-1,15,0);
	vcdp->declBit  (c+95,"AxiLite4Gpios gpios_2 gpios_read_buffercc clk",-1);
	vcdp->declBit  (c+96,"AxiLite4Gpios gpios_2 gpios_read_buffercc reset",-1);
	vcdp->declBus  (c+52,"AxiLite4Gpios gpios_2 gpios_read_buffercc buffers_0",-1,15,0);
	vcdp->declBus  (c+50,"AxiLite4Gpios gpios_2 gpios_read_buffercc buffers_1",-1,15,0);
	vcdp->declBus  (c+42,"AxiLite4Gpios gpios_3 gpios_read",-1,15,0);
	vcdp->declBus  (c+6,"AxiLite4Gpios gpios_3 gpios_write",-1,15,0);
	vcdp->declBus  (c+7,"AxiLite4Gpios gpios_3 gpios_writeEnable",-1,15,0);
	vcdp->declBus  (c+67,"AxiLite4Gpios gpios_3 gpios_write_1",-1,15,0);
	vcdp->declBus  (c+3,"AxiLite4Gpios gpios_3 gpios_read_1",-1,15,0);
	vcdp->declBus  (c+66,"AxiLite4Gpios gpios_3 gpios_writeEnable_1",-1,15,0);
	vcdp->declBus  (c+1,"AxiLite4Gpios gpios_3 interrupt",-1,15,0);
	vcdp->declBus  (c+68,"AxiLite4Gpios gpios_3 ir_high",-1,15,0);
	vcdp->declBus  (c+69,"AxiLite4Gpios gpios_3 ir_low",-1,15,0);
	vcdp->declBus  (c+70,"AxiLite4Gpios gpios_3 ir_rise",-1,15,0);
	vcdp->declBus  (c+71,"AxiLite4Gpios gpios_3 ir_fall",-1,15,0);
	vcdp->declBit  (c+95,"AxiLite4Gpios gpios_3 clk",-1);
	vcdp->declBit  (c+96,"AxiLite4Gpios gpios_3 reset",-1);
	vcdp->declBus  (c+53,"AxiLite4Gpios gpios_3 gpios_read_buffercc_io_dataOut",-1,15,0);
	vcdp->declBus  (c+53,"AxiLite4Gpios gpios_3 syncronized",-1,15,0);
	vcdp->declBus  (c+54,"AxiLite4Gpios gpios_3 last",-1,15,0);
	vcdp->declBus  (c+56,"AxiLite4Gpios gpios_3 interrupt_valid",-1,15,0);
	// Tracing: AxiLite4Gpios gpios_3 _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v:747
	vcdp->declBus  (c+42,"AxiLite4Gpios gpios_3 gpios_read_buffercc io_dataIn",-1,15,0);
	vcdp->declBus  (c+53,"AxiLite4Gpios gpios_3 gpios_read_buffercc io_dataOut",-1,15,0);
	vcdp->declBit  (c+95,"AxiLite4Gpios gpios_3 gpios_read_buffercc clk",-1);
	vcdp->declBit  (c+96,"AxiLite4Gpios gpios_3 gpios_read_buffercc reset",-1);
	vcdp->declBus  (c+55,"AxiLite4Gpios gpios_3 gpios_read_buffercc buffers_0",-1,15,0);
	vcdp->declBus  (c+53,"AxiLite4Gpios gpios_3 gpios_read_buffercc buffers_1",-1,15,0);
    }
}

void VAxiLite4Gpios::traceFullThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1),16);
	vcdp->fullBus  (c+2,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1),16);
	vcdp->fullBus  (c+3,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1),16);
	vcdp->fullBus  (c+4,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write),16);
	vcdp->fullBus  (c+5,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable),16);
	vcdp->fullBus  (c+6,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write),16);
	vcdp->fullBus  (c+7,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable),16);
	vcdp->fullBit  (c+8,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))));
	vcdp->fullBit  (c+9,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 1U))));
	vcdp->fullBit  (c+10,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 2U))));
	vcdp->fullBit  (c+11,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 3U))));
	vcdp->fullBit  (c+12,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 4U))));
	vcdp->fullBit  (c+13,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 5U))));
	vcdp->fullBit  (c+14,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 6U))));
	vcdp->fullBit  (c+15,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 7U))));
	vcdp->fullBit  (c+16,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 8U))));
	vcdp->fullBit  (c+17,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 9U))));
	vcdp->fullBit  (c+18,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 0xaU))));
	vcdp->fullBit  (c+19,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 0xbU))));
	vcdp->fullBit  (c+20,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 0xcU))));
	vcdp->fullBit  (c+21,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 0xdU))));
	vcdp->fullBit  (c+22,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 0xeU))));
	vcdp->fullBit  (c+23,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				     >> 0xfU))));
	vcdp->fullBit  (c+24,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))));
	vcdp->fullBit  (c+25,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 1U))));
	vcdp->fullBit  (c+26,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 2U))));
	vcdp->fullBit  (c+27,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 3U))));
	vcdp->fullBit  (c+28,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 4U))));
	vcdp->fullBit  (c+29,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 5U))));
	vcdp->fullBit  (c+30,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 6U))));
	vcdp->fullBit  (c+31,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 7U))));
	vcdp->fullBit  (c+32,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 8U))));
	vcdp->fullBit  (c+33,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 9U))));
	vcdp->fullBit  (c+34,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 0xaU))));
	vcdp->fullBit  (c+35,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 0xbU))));
	vcdp->fullBit  (c+36,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 0xcU))));
	vcdp->fullBit  (c+37,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 0xdU))));
	vcdp->fullBit  (c+38,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 0xeU))));
	vcdp->fullBit  (c+39,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				     >> 0xfU))));
	vcdp->fullBus  (c+40,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid),16);
	vcdp->fullBus  (c+41,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read),16);
	vcdp->fullBus  (c+42,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read),16);
	vcdp->fullBit  (c+43,(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid));
	vcdp->fullBit  (c+44,(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->fullBit  (c+45,(vlTOPp->AxiLite4Gpios__DOT__writeOccur));
	vcdp->fullBus  (c+46,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt),16);
	vcdp->fullBus  (c+47,(vlTOPp->AxiLite4Gpios__DOT__readRsp_data),32);
	vcdp->fullBus  (c+48,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->fullBus  (c+49,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->fullBus  (c+50,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1),16);
	vcdp->fullBus  (c+51,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last),16);
	vcdp->fullBus  (c+52,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0),16);
	vcdp->fullBus  (c+53,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1),16);
	vcdp->fullBus  (c+54,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last),16);
	vcdp->fullBus  (c+55,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0),16);
	vcdp->fullBus  (c+56,((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver) 
				  & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)) 
				 | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver) 
				    & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)))) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver) 
				   & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1) 
				      & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last))))) 
			       | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver) 
				  & ((~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)) 
				     & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last))))),16);
	vcdp->fullBit  (c+57,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->fullBit  (c+58,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid));
	vcdp->fullBit  (c+59,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->fullBus  (c+60,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver),16);
	vcdp->fullBus  (c+61,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver),16);
	vcdp->fullBus  (c+62,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver),16);
	vcdp->fullBus  (c+63,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver),16);
	vcdp->fullBus  (c+64,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver),16);
	vcdp->fullBus  (c+65,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver),16);
	vcdp->fullBus  (c+66,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver),16);
	vcdp->fullBus  (c+67,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver),16);
	vcdp->fullBus  (c+68,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver),16);
	vcdp->fullBus  (c+69,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver),16);
	vcdp->fullBus  (c+70,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver),16);
	vcdp->fullBus  (c+71,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver),16);
	vcdp->fullBit  (c+72,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->fullBit  (c+73,(vlTOPp->axil4Ctrl_awready));
	vcdp->fullBus  (c+74,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->fullBus  (c+75,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->fullBit  (c+76,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->fullBit  (c+77,(vlTOPp->axil4Ctrl_wready));
	vcdp->fullBus  (c+78,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->fullBus  (c+79,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->fullBit  (c+80,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->fullBit  (c+81,(vlTOPp->axil4Ctrl_bready));
	vcdp->fullBus  (c+82,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->fullBit  (c+83,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->fullBit  (c+84,(vlTOPp->axil4Ctrl_arready));
	vcdp->fullBus  (c+85,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->fullBus  (c+86,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->fullBit  (c+87,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->fullBit  (c+88,(vlTOPp->axil4Ctrl_rready));
	vcdp->fullBus  (c+89,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->fullBus  (c+90,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->fullBus  (c+91,(vlTOPp->gpio_0),16);
	vcdp->fullBus  (c+92,(vlTOPp->gpio_1),16);
	vcdp->fullBit  (c+93,(vlTOPp->interrupt_0));
	vcdp->fullBit  (c+94,(vlTOPp->interrupt_1));
	vcdp->fullBit  (c+95,(vlTOPp->clk));
	vcdp->fullBit  (c+96,(vlTOPp->reset));
	vcdp->fullBit  (c+97,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
			       & (IData)(vlTOPp->axil4Ctrl_rready))));
	vcdp->fullBit  (c+98,(0U));
	vcdp->fullBus  (c+99,(0U),2);
    }
}
