// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4CDMADespread__Syms.h"


//======================

void VAxiLite4CDMADespread::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAxiLite4CDMADespread::traceInit, &VAxiLite4CDMADespread::traceFull, &VAxiLite4CDMADespread::traceChg, this);
}
void VAxiLite4CDMADespread::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4CDMADespread* t=(VAxiLite4CDMADespread*)userthis;
    VAxiLite4CDMADespread__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4CDMADespread::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4CDMADespread* t=(VAxiLite4CDMADespread*)userthis;
    VAxiLite4CDMADespread__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAxiLite4CDMADespread::traceInitThis(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
    }
}

void VAxiLite4CDMADespread::traceFullThis(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceFullThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4CDMADespread::traceInitThis__1(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+255,"axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+256,"axil4Ctrl_awready",-1);
	vcdp->declBus  (c+257,"axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+258,"axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+259,"axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+260,"axil4Ctrl_wready",-1);
	vcdp->declBus  (c+261,"axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+262,"axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+263,"axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+264,"axil4Ctrl_bready",-1);
	vcdp->declBus  (c+265,"axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+266,"axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+267,"axil4Ctrl_arready",-1);
	vcdp->declBus  (c+268,"axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+269,"axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+270,"axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+271,"axil4Ctrl_rready",-1);
	vcdp->declBus  (c+272,"axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+273,"axil4Ctrl_rresp",-1,1,0);
	vcdp->declBit  (c+274,"mod_iq_valid",-1);
	vcdp->declBit  (c+275,"mod_iq_ready",-1);
	vcdp->declBus  (c+276,"mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+278,"base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+279,"base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+280,"base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+281,"base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+282,"base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+283,"base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+284,"base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+285,"base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+286,"base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+287,"base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+288,"base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+289,"base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+290,"base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+291,"base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+292,"base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+293,"base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+294,"base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+295,"base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+296,"base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+297,"base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+298,"base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+299,"base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+300,"base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+301,"base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+302,"rf_clk",-1);
	vcdp->declBit  (c+303,"rf_resetn",-1);
	vcdp->declBit  (c+304,"clk",-1);
	vcdp->declBit  (c+305,"reset",-1);
	vcdp->declBit  (c+255,"AxiLite4CDMADespread axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+256,"AxiLite4CDMADespread axil4Ctrl_awready",-1);
	vcdp->declBus  (c+257,"AxiLite4CDMADespread axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+258,"AxiLite4CDMADespread axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+259,"AxiLite4CDMADespread axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+260,"AxiLite4CDMADespread axil4Ctrl_wready",-1);
	vcdp->declBus  (c+261,"AxiLite4CDMADespread axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+262,"AxiLite4CDMADespread axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+263,"AxiLite4CDMADespread axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+264,"AxiLite4CDMADespread axil4Ctrl_bready",-1);
	vcdp->declBus  (c+265,"AxiLite4CDMADespread axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+266,"AxiLite4CDMADespread axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+267,"AxiLite4CDMADespread axil4Ctrl_arready",-1);
	vcdp->declBus  (c+268,"AxiLite4CDMADespread axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+269,"AxiLite4CDMADespread axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+270,"AxiLite4CDMADespread axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+271,"AxiLite4CDMADespread axil4Ctrl_rready",-1);
	vcdp->declBus  (c+272,"AxiLite4CDMADespread axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+273,"AxiLite4CDMADespread axil4Ctrl_rresp",-1,1,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread mod_iq_valid",-1);
	vcdp->declBit  (c+275,"AxiLite4CDMADespread mod_iq_ready",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+278,"AxiLite4CDMADespread base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+279,"AxiLite4CDMADespread base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+280,"AxiLite4CDMADespread base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+281,"AxiLite4CDMADespread base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+282,"AxiLite4CDMADespread base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+283,"AxiLite4CDMADespread base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+284,"AxiLite4CDMADespread base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+285,"AxiLite4CDMADespread base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+286,"AxiLite4CDMADespread base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+287,"AxiLite4CDMADespread base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+288,"AxiLite4CDMADespread base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+289,"AxiLite4CDMADespread base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+290,"AxiLite4CDMADespread base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+291,"AxiLite4CDMADespread base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+292,"AxiLite4CDMADespread base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+293,"AxiLite4CDMADespread base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+294,"AxiLite4CDMADespread base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+295,"AxiLite4CDMADespread base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+296,"AxiLite4CDMADespread base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+297,"AxiLite4CDMADespread base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+298,"AxiLite4CDMADespread base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+299,"AxiLite4CDMADespread base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+300,"AxiLite4CDMADespread base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+301,"AxiLite4CDMADespread base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rf_resetn",-1);
	vcdp->declBit  (c+304,"AxiLite4CDMADespread clk",-1);
	vcdp->declBit  (c+305,"AxiLite4CDMADespread reset",-1);
	vcdp->declBit  (c+53,"AxiLite4CDMADespread rfClockArea_cdma_despread_mod_iq_ready",-1);
	vcdp->declBit  (c+54,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+55,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+56,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+57,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+58,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+59,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+60,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+61,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+62,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+63,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+64,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+65,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+66,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+67,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+68,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+69,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+70,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+71,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+72,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+73,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+76,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"AxiLite4CDMADespread rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread clkCrossing_5_dataOut",-1);
	vcdp->declBit  (c+79,"AxiLite4CDMADespread clkCrossing_6_dataOut",-1);
	vcdp->declBus  (c+80,"AxiLite4CDMADespread clkCrossing_7_dataOut",-1,2,0);
	vcdp->declBus  (c+81,"AxiLite4CDMADespread clkCrossing_8_dataOut",-1,7,0);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread clkCrossing_9_dataOut",-1,2,0);
	vcdp->declBit  (c+307,"AxiLite4CDMADespread readHaltRequest",-1);
	vcdp->declBit  (c+307,"AxiLite4CDMADespread writeHaltRequest",-1);
	vcdp->declBit  (c+18,"AxiLite4CDMADespread writeJoinEvent_valid",-1);
	vcdp->declBit  (c+19,"AxiLite4CDMADespread writeJoinEvent_ready",-1);
	vcdp->declBit  (c+20,"AxiLite4CDMADespread writeJoinEvent_fire",-1);
	vcdp->declBus  (c+308,"AxiLite4CDMADespread writeRsp_resp",-1,1,0);
	vcdp->declBit  (c+18,"AxiLite4CDMADespread writeJoinEvent_translated_valid",-1);
	vcdp->declBit  (c+19,"AxiLite4CDMADespread writeJoinEvent_translated_ready",-1);
	vcdp->declBus  (c+308,"AxiLite4CDMADespread writeJoinEvent_translated_payload_resp",-1,1,0);
	// Tracing: AxiLite4CDMADespread _zz_axil4Ctrl_bvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:99
	// Tracing: AxiLite4CDMADespread _zz_writeJoinEvent_translated_ready // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:100
	// Tracing: AxiLite4CDMADespread _zz_axil4Ctrl_bvalid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:101
	// Tracing: AxiLite4CDMADespread _zz_axil4Ctrl_bvalid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:102
	// Tracing: AxiLite4CDMADespread _zz_axil4Ctrl_bresp // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:103
	vcdp->declBit  (c+248,"AxiLite4CDMADespread when_Stream_l342",-1);
	vcdp->declBit  (c+249,"AxiLite4CDMADespread axil4Ctrl_ar_readDataStage_valid",-1);
	vcdp->declBit  (c+271,"AxiLite4CDMADespread axil4Ctrl_ar_readDataStage_ready",-1);
	vcdp->declBus  (c+240,"AxiLite4CDMADespread axil4Ctrl_ar_readDataStage_payload_addr",-1,7,0);
	vcdp->declBus  (c+241,"AxiLite4CDMADespread axil4Ctrl_ar_readDataStage_payload_prot",-1,2,0);
	vcdp->declBit  (c+249,"AxiLite4CDMADespread axil4Ctrl_ar_rValid",-1);
	vcdp->declBus  (c+240,"AxiLite4CDMADespread axil4Ctrl_ar_rData_addr",-1,7,0);
	vcdp->declBus  (c+241,"AxiLite4CDMADespread axil4Ctrl_ar_rData_prot",-1,2,0);
	vcdp->declBit  (c+250,"AxiLite4CDMADespread when_Stream_l342_1",-1);
	vcdp->declBus  (c+17,"AxiLite4CDMADespread readRsp_data",-1,31,0);
	vcdp->declBus  (c+308,"AxiLite4CDMADespread readRsp_resp",-1,1,0);
	// Tracing: AxiLite4CDMADespread _zz_axil4Ctrl_rvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:115
	vcdp->declBit  (c+20,"AxiLite4CDMADespread writeOccur",-1);
	vcdp->declBit  (c+306,"AxiLite4CDMADespread readOccur",-1);
	vcdp->declBit  (c+251,"AxiLite4CDMADespread cdma_spread_bridge_clc",-1);
	vcdp->declBit  (c+251,"AxiLite4CDMADespread cdma_spread_bridge_clc_driver",-1);
	// Tracing: AxiLite4CDMADespread _zz_dataIn // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:120
	// Tracing: AxiLite4CDMADespread _zz_dataIn_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:121
	// Tracing: AxiLite4CDMADespread _zz_dataIn_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:122
	// Tracing: AxiLite4CDMADespread _zz_dataIn_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:123
	vcdp->declBit  (c+79,"AxiLite4CDMADespread rfClockArea_cdma_despread w_en",-1);
	vcdp->declBus  (c+80,"AxiLite4CDMADespread rfClockArea_cdma_despread w_addr",-1,2,0);
	vcdp->declBus  (c+81,"AxiLite4CDMADespread rfClockArea_cdma_despread w_data",-1,7,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread cnt_limit",-1,2,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread mod_iq_valid",-1);
	vcdp->declBit  (c+53,"AxiLite4CDMADespread rfClockArea_cdma_despread mod_iq_ready",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+54,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+55,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+56,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+57,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+58,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+59,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+60,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+61,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+62,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+63,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+64,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+65,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+66,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+67,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+68,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+69,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+70,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+71,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+72,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+73,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+76,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"AxiLite4CDMADespread rfClockArea_cdma_despread base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread rf_resetn",-1);
	vcdp->declBus  (c+1,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8_code",-1,7,0);
	vcdp->declBus  (c+2,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9_code",-1,7,0);
	vcdp->declBus  (c+3,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10_code",-1,7,0);
	vcdp->declBus  (c+4,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11_code",-1,7,0);
	vcdp->declBus  (c+5,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12_code",-1,7,0);
	vcdp->declBus  (c+6,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13_code",-1,7,0);
	vcdp->declBus  (c+7,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14_code",-1,7,0);
	vcdp->declBus  (c+8,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15_code",-1,7,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:465
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:466
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:467
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:468
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:469
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:470
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:471
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:472
	vcdp->declBit  (c+54,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8_base_iq_valid",-1);
	vcdp->declBus  (c+55,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+56,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+57,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9_base_iq_valid",-1);
	vcdp->declBus  (c+58,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+59,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+60,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10_base_iq_valid",-1);
	vcdp->declBus  (c+61,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+62,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+63,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11_base_iq_valid",-1);
	vcdp->declBus  (c+64,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+65,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+66,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12_base_iq_valid",-1);
	vcdp->declBus  (c+67,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+68,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+69,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13_base_iq_valid",-1);
	vcdp->declBus  (c+70,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+71,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+72,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14_base_iq_valid",-1);
	vcdp->declBus  (c+73,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15_base_iq_valid",-1);
	vcdp->declBus  (c+76,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15_base_iq_payload_cha_q",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:497
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:498
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:499
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:500
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:501
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:502
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:503
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:504
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:505
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:506
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:507
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:508
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:509
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:510
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_map_port_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:511
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_code_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:512
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:513
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+9+i*1,"AxiLite4CDMADespread rfClockArea_cdma_despread code_map",(i+0),7,0);}}
	vcdp->declBus  (c+1,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 code",-1,7,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 mod_iq_valid",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+54,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_iq_valid",-1);
	vcdp->declBus  (c+55,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+56,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 cnt_limit",-1,2,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 rf_resetn",-1);
	vcdp->declBus  (c+83,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+84,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17_output_1",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:717
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:718
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:719
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:720
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:721
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:722
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:723
	vcdp->declBus  (c+85,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_i",-1,15,0);
	vcdp->declBus  (c+86,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_q",-1,15,0);
	vcdp->declBus  (c+87,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 cnt",-1,2,0);
	vcdp->declBus  (c+21,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 data_i",-1,15,0);
	vcdp->declBus  (c+22,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 data_q",-1,15,0);
	vcdp->declBus  (c+23,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_i_next",-1,15,0);
	vcdp->declBus  (c+24,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_q_next",-1,15,0);
	vcdp->declBus  (c+55,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+56,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 base_q_next_regNext",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:733
	vcdp->declBus  (c+21,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+83,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+88,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+89,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+90,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+91,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+92,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+93,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+94,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+83,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+22,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+84,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+95,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+96,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+97,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+98,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+99,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+100,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+101,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+84,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_8 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+2,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 code",-1,7,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 mod_iq_valid",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+57,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_iq_valid",-1);
	vcdp->declBus  (c+58,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+59,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 cnt_limit",-1,2,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 rf_resetn",-1);
	vcdp->declBus  (c+102,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+103,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17_output_1",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:717
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:718
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:719
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:720
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:721
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:722
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:723
	vcdp->declBus  (c+104,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_i",-1,15,0);
	vcdp->declBus  (c+105,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_q",-1,15,0);
	vcdp->declBus  (c+106,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 cnt",-1,2,0);
	vcdp->declBus  (c+25,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 data_i",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 data_q",-1,15,0);
	vcdp->declBus  (c+27,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_i_next",-1,15,0);
	vcdp->declBus  (c+28,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_q_next",-1,15,0);
	vcdp->declBus  (c+58,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+59,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 base_q_next_regNext",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:733
	vcdp->declBus  (c+25,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+102,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+107,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+108,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+109,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+110,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+111,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+112,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+113,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+102,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+103,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+114,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+115,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+116,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+117,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+118,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+119,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+120,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+103,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_9 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+3,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 code",-1,7,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 mod_iq_valid",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+60,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_iq_valid",-1);
	vcdp->declBus  (c+61,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+62,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 cnt_limit",-1,2,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 rf_resetn",-1);
	vcdp->declBus  (c+121,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+122,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17_output_1",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:717
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:718
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:719
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:720
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:721
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:722
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:723
	vcdp->declBus  (c+123,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_i",-1,15,0);
	vcdp->declBus  (c+124,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_q",-1,15,0);
	vcdp->declBus  (c+125,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 cnt",-1,2,0);
	vcdp->declBus  (c+29,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 data_i",-1,15,0);
	vcdp->declBus  (c+30,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 data_q",-1,15,0);
	vcdp->declBus  (c+31,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_i_next",-1,15,0);
	vcdp->declBus  (c+32,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_q_next",-1,15,0);
	vcdp->declBus  (c+61,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+62,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 base_q_next_regNext",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:733
	vcdp->declBus  (c+29,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+121,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+126,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+127,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+128,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+129,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+130,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+131,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+132,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+121,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+30,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+122,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+133,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+134,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+135,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+136,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+137,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+138,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+139,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+122,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_10 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+4,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 code",-1,7,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 mod_iq_valid",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+63,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_iq_valid",-1);
	vcdp->declBus  (c+64,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+65,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 cnt_limit",-1,2,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 rf_resetn",-1);
	vcdp->declBus  (c+140,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+141,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17_output_1",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:717
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:718
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:719
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:720
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:721
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:722
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:723
	vcdp->declBus  (c+142,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_i",-1,15,0);
	vcdp->declBus  (c+143,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_q",-1,15,0);
	vcdp->declBus  (c+144,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 cnt",-1,2,0);
	vcdp->declBus  (c+33,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 data_i",-1,15,0);
	vcdp->declBus  (c+34,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 data_q",-1,15,0);
	vcdp->declBus  (c+35,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_i_next",-1,15,0);
	vcdp->declBus  (c+36,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_q_next",-1,15,0);
	vcdp->declBus  (c+64,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+65,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 base_q_next_regNext",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:733
	vcdp->declBus  (c+33,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+140,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+145,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+146,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+147,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+148,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+149,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+150,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+151,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+140,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+34,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+141,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+152,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+153,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+154,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+155,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+156,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+157,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+158,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+141,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_11 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+5,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 code",-1,7,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 mod_iq_valid",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+66,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_iq_valid",-1);
	vcdp->declBus  (c+67,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+68,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 cnt_limit",-1,2,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 rf_resetn",-1);
	vcdp->declBus  (c+159,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+160,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17_output_1",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:717
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:718
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:719
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:720
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:721
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:722
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:723
	vcdp->declBus  (c+161,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_i",-1,15,0);
	vcdp->declBus  (c+162,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_q",-1,15,0);
	vcdp->declBus  (c+163,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 cnt",-1,2,0);
	vcdp->declBus  (c+37,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 data_i",-1,15,0);
	vcdp->declBus  (c+38,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 data_q",-1,15,0);
	vcdp->declBus  (c+39,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_i_next",-1,15,0);
	vcdp->declBus  (c+40,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_q_next",-1,15,0);
	vcdp->declBus  (c+67,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+68,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 base_q_next_regNext",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:733
	vcdp->declBus  (c+37,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+159,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+164,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+165,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+166,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+167,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+168,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+169,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+170,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+159,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+38,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+160,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+171,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+172,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+173,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+174,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+175,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+176,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+177,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+160,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_12 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+6,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 code",-1,7,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 mod_iq_valid",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+69,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_iq_valid",-1);
	vcdp->declBus  (c+70,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+71,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 cnt_limit",-1,2,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 rf_resetn",-1);
	vcdp->declBus  (c+178,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+179,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17_output_1",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:717
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:718
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:719
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:720
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:721
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:722
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:723
	vcdp->declBus  (c+180,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_i",-1,15,0);
	vcdp->declBus  (c+181,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_q",-1,15,0);
	vcdp->declBus  (c+182,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 cnt",-1,2,0);
	vcdp->declBus  (c+41,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 data_i",-1,15,0);
	vcdp->declBus  (c+42,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 data_q",-1,15,0);
	vcdp->declBus  (c+43,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_i_next",-1,15,0);
	vcdp->declBus  (c+44,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_q_next",-1,15,0);
	vcdp->declBus  (c+70,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+71,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 base_q_next_regNext",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:733
	vcdp->declBus  (c+41,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+178,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 rf_clk",-1);
    }
}

void VAxiLite4CDMADespread::traceInitThis__2(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+183,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+184,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+185,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+186,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+187,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+188,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+189,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+178,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+42,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+179,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+190,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+191,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+192,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+193,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+194,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+195,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+196,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+179,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_13 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+7,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 code",-1,7,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 mod_iq_valid",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+72,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_iq_valid",-1);
	vcdp->declBus  (c+73,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 cnt_limit",-1,2,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 rf_resetn",-1);
	vcdp->declBus  (c+197,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+198,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17_output_1",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:717
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:718
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:719
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:720
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:721
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:722
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:723
	vcdp->declBus  (c+199,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_i",-1,15,0);
	vcdp->declBus  (c+200,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_q",-1,15,0);
	vcdp->declBus  (c+201,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 cnt",-1,2,0);
	vcdp->declBus  (c+45,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 data_i",-1,15,0);
	vcdp->declBus  (c+46,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 data_q",-1,15,0);
	vcdp->declBus  (c+47,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_i_next",-1,15,0);
	vcdp->declBus  (c+48,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_q_next",-1,15,0);
	vcdp->declBus  (c+73,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+74,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 base_q_next_regNext",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:733
	vcdp->declBus  (c+45,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+197,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+202,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+203,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+204,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+205,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+206,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+207,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+208,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+197,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+46,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+198,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+209,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+210,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+211,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+212,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+213,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+214,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+215,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+198,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_14 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+8,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 code",-1,7,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 mod_iq_valid",-1);
	vcdp->declBus  (c+276,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+277,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_iq_valid",-1);
	vcdp->declBus  (c+76,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 clc",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 cnt_limit",-1,2,0);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 rf_resetn",-1);
	vcdp->declBus  (c+216,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+217,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17_output_1",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:717
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:718
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:719
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:720
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:721
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:722
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:723
	vcdp->declBus  (c+218,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_i",-1,15,0);
	vcdp->declBus  (c+219,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_q",-1,15,0);
	vcdp->declBus  (c+220,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 cnt",-1,2,0);
	vcdp->declBus  (c+49,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 data_i",-1,15,0);
	vcdp->declBus  (c+50,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 data_q",-1,15,0);
	vcdp->declBus  (c+51,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_i_next",-1,15,0);
	vcdp->declBus  (c+52,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_q_next",-1,15,0);
	vcdp->declBus  (c+76,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+77,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 base_q_next_regNext",-1,15,0);
	// Tracing: AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMADespread.v:733
	vcdp->declBus  (c+49,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+216,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+221,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+222,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+223,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+224,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+225,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+226,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+227,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+216,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+50,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+217,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+274,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+228,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+229,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+230,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+231,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+232,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+233,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+234,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+217,"AxiLite4CDMADespread rfClockArea_cdma_despread computeUnit_15 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBit  (c+251,"AxiLite4CDMADespread clkCrossing_5 dataIn",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread clkCrossing_5 dataOut",-1);
	vcdp->declBit  (c+304,"AxiLite4CDMADespread clkCrossing_5 clk",-1);
	vcdp->declBit  (c+305,"AxiLite4CDMADespread clkCrossing_5 reset",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread clkCrossing_5 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread clkCrossing_5 rf_resetn",-1);
	vcdp->declBit  (c+242,"AxiLite4CDMADespread clkCrossing_5 area_clkI_reg",-1);
	vcdp->declBit  (c+235,"AxiLite4CDMADespread clkCrossing_5 area_clkO_buf0",-1);
	vcdp->declBit  (c+78,"AxiLite4CDMADespread clkCrossing_5 area_clkO_buf1",-1);
	vcdp->declBit  (c+252,"AxiLite4CDMADespread clkCrossing_6 dataIn",-1);
	vcdp->declBit  (c+79,"AxiLite4CDMADespread clkCrossing_6 dataOut",-1);
	vcdp->declBit  (c+304,"AxiLite4CDMADespread clkCrossing_6 clk",-1);
	vcdp->declBit  (c+305,"AxiLite4CDMADespread clkCrossing_6 reset",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread clkCrossing_6 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread clkCrossing_6 rf_resetn",-1);
	vcdp->declBit  (c+243,"AxiLite4CDMADespread clkCrossing_6 area_clkI_reg",-1);
	vcdp->declBit  (c+236,"AxiLite4CDMADespread clkCrossing_6 area_clkO_buf0",-1);
	vcdp->declBit  (c+79,"AxiLite4CDMADespread clkCrossing_6 area_clkO_buf1",-1);
	vcdp->declBus  (c+253,"AxiLite4CDMADespread clkCrossing_7 dataIn",-1,2,0);
	vcdp->declBus  (c+80,"AxiLite4CDMADespread clkCrossing_7 dataOut",-1,2,0);
	vcdp->declBit  (c+304,"AxiLite4CDMADespread clkCrossing_7 clk",-1);
	vcdp->declBit  (c+305,"AxiLite4CDMADespread clkCrossing_7 reset",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread clkCrossing_7 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread clkCrossing_7 rf_resetn",-1);
	vcdp->declBus  (c+244,"AxiLite4CDMADespread clkCrossing_7 area_clkI_reg",-1,2,0);
	vcdp->declBus  (c+237,"AxiLite4CDMADespread clkCrossing_7 area_clkO_buf0",-1,2,0);
	vcdp->declBus  (c+80,"AxiLite4CDMADespread clkCrossing_7 area_clkO_buf1",-1,2,0);
	vcdp->declBus  (c+254,"AxiLite4CDMADespread clkCrossing_8 dataIn",-1,7,0);
	vcdp->declBus  (c+81,"AxiLite4CDMADespread clkCrossing_8 dataOut",-1,7,0);
	vcdp->declBit  (c+304,"AxiLite4CDMADespread clkCrossing_8 clk",-1);
	vcdp->declBit  (c+305,"AxiLite4CDMADespread clkCrossing_8 reset",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread clkCrossing_8 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread clkCrossing_8 rf_resetn",-1);
	vcdp->declBus  (c+245,"AxiLite4CDMADespread clkCrossing_8 area_clkI_reg",-1,7,0);
	vcdp->declBus  (c+238,"AxiLite4CDMADespread clkCrossing_8 area_clkO_buf0",-1,7,0);
	vcdp->declBus  (c+81,"AxiLite4CDMADespread clkCrossing_8 area_clkO_buf1",-1,7,0);
	vcdp->declBus  (c+246,"AxiLite4CDMADespread clkCrossing_9 dataIn",-1,2,0);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread clkCrossing_9 dataOut",-1,2,0);
	vcdp->declBit  (c+304,"AxiLite4CDMADespread clkCrossing_9 clk",-1);
	vcdp->declBit  (c+305,"AxiLite4CDMADespread clkCrossing_9 reset",-1);
	vcdp->declBit  (c+302,"AxiLite4CDMADespread clkCrossing_9 rf_clk",-1);
	vcdp->declBit  (c+303,"AxiLite4CDMADespread clkCrossing_9 rf_resetn",-1);
	vcdp->declBus  (c+247,"AxiLite4CDMADespread clkCrossing_9 area_clkI_reg",-1,2,0);
	vcdp->declBus  (c+239,"AxiLite4CDMADespread clkCrossing_9 area_clkO_buf0",-1,2,0);
	vcdp->declBus  (c+82,"AxiLite4CDMADespread clkCrossing_9 area_clkO_buf1",-1,2,0);
    }
}

void VAxiLite4CDMADespread::traceFullThis__1(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0),8);
	vcdp->fullBus  (c+2,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1),8);
	vcdp->fullBus  (c+3,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2),8);
	vcdp->fullBus  (c+4,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3),8);
	vcdp->fullBus  (c+5,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4),8);
	vcdp->fullBus  (c+6,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5),8);
	vcdp->fullBus  (c+7,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6),8);
	vcdp->fullBus  (c+8,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7),8);
	vcdp->fullBus  (c+9,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[0]),8);
	vcdp->fullBus  (c+10,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[1]),8);
	vcdp->fullBus  (c+11,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[2]),8);
	vcdp->fullBus  (c+12,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[3]),8);
	vcdp->fullBus  (c+13,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[4]),8);
	vcdp->fullBus  (c+14,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[5]),8);
	vcdp->fullBus  (c+15,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[6]),8);
	vcdp->fullBus  (c+16,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[7]),8);
	vcdp->fullBus  (c+17,(vlTOPp->AxiLite4CDMADespread__DOT__readRsp_data),32);
	vcdp->fullBit  (c+18,(vlTOPp->AxiLite4CDMADespread__DOT__writeJoinEvent_valid));
	vcdp->fullBit  (c+19,(vlTOPp->AxiLite4CDMADespread__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->fullBit  (c+20,(vlTOPp->AxiLite4CDMADespread__DOT__writeOccur));
	vcdp->fullBus  (c+21,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_i),16);
	vcdp->fullBus  (c+22,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_q),16);
	vcdp->fullBus  (c+23,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i_next),16);
	vcdp->fullBus  (c+24,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q_next),16);
	vcdp->fullBus  (c+25,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_i),16);
	vcdp->fullBus  (c+26,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_q),16);
	vcdp->fullBus  (c+27,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i_next),16);
	vcdp->fullBus  (c+28,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q_next),16);
	vcdp->fullBus  (c+29,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_i),16);
	vcdp->fullBus  (c+30,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_q),16);
	vcdp->fullBus  (c+31,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i_next),16);
	vcdp->fullBus  (c+32,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q_next),16);
	vcdp->fullBus  (c+33,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_i),16);
	vcdp->fullBus  (c+34,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_q),16);
	vcdp->fullBus  (c+35,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i_next),16);
	vcdp->fullBus  (c+36,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q_next),16);
	vcdp->fullBus  (c+37,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_i),16);
	vcdp->fullBus  (c+38,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_q),16);
	vcdp->fullBus  (c+39,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i_next),16);
	vcdp->fullBus  (c+40,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q_next),16);
	vcdp->fullBus  (c+41,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_i),16);
	vcdp->fullBus  (c+42,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_q),16);
	vcdp->fullBus  (c+43,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i_next),16);
	vcdp->fullBus  (c+44,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q_next),16);
	vcdp->fullBus  (c+45,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_i),16);
	vcdp->fullBus  (c+46,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_q),16);
	vcdp->fullBus  (c+47,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i_next),16);
	vcdp->fullBus  (c+48,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q_next),16);
	vcdp->fullBus  (c+49,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_i),16);
	vcdp->fullBus  (c+50,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_q),16);
	vcdp->fullBus  (c+51,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i_next),16);
	vcdp->fullBus  (c+52,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q_next),16);
	vcdp->fullBit  (c+53,((1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf1)))));
	vcdp->fullBit  (c+54,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+55,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+56,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+57,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+58,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+59,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+60,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+61,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+62,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+63,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+64,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+65,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+66,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+67,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+68,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+69,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+70,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+71,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+72,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+73,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+74,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+75,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+76,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+77,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+78,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf1));
	vcdp->fullBit  (c+79,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkO_buf1));
	vcdp->fullBus  (c+80,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkO_buf1),3);
	vcdp->fullBus  (c+81,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkO_buf1),8);
	vcdp->fullBus  (c+82,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkO_buf1),3);
	vcdp->fullBus  (c+83,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+84,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+85,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i),16);
	vcdp->fullBus  (c+86,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q),16);
	vcdp->fullBus  (c+87,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__cnt),3);
	vcdp->fullBus  (c+88,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+89,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+90,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+91,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+92,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+93,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+94,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+95,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+96,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+97,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+98,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+99,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+100,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+101,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+102,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+103,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+104,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i),16);
	vcdp->fullBus  (c+105,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q),16);
	vcdp->fullBus  (c+106,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__cnt),3);
	vcdp->fullBus  (c+107,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+108,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+109,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+110,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+111,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+112,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+113,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+114,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+115,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+116,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+117,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+118,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+119,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+120,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+121,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+122,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+123,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i),16);
	vcdp->fullBus  (c+124,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q),16);
	vcdp->fullBus  (c+125,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__cnt),3);
	vcdp->fullBus  (c+126,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+127,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+128,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+129,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+130,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+131,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+132,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+133,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+134,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+135,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+136,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+137,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+138,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+139,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+140,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+141,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+142,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i),16);
	vcdp->fullBus  (c+143,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q),16);
	vcdp->fullBus  (c+144,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__cnt),3);
	vcdp->fullBus  (c+145,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+146,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+147,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+148,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+149,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+150,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+151,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+152,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+153,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+154,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+155,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+156,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+157,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+158,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+159,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+160,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+161,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i),16);
	vcdp->fullBus  (c+162,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q),16);
	vcdp->fullBus  (c+163,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__cnt),3);
	vcdp->fullBus  (c+164,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+165,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+166,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+167,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+168,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+169,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+170,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+171,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+172,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+173,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+174,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+175,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+176,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+177,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+178,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+179,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+180,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i),16);
	vcdp->fullBus  (c+181,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q),16);
	vcdp->fullBus  (c+182,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__cnt),3);
	vcdp->fullBus  (c+183,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+184,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+185,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+186,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+187,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+188,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+189,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+190,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+191,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+192,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+193,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+194,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+195,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+196,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+197,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+198,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+199,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i),16);
	vcdp->fullBus  (c+200,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q),16);
	vcdp->fullBus  (c+201,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__cnt),3);
	vcdp->fullBus  (c+202,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+203,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+204,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+205,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+206,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+207,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+208,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+209,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+210,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+211,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+212,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+213,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+214,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+215,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+216,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+217,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+218,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i),16);
	vcdp->fullBus  (c+219,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q),16);
	vcdp->fullBus  (c+220,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__cnt),3);
	vcdp->fullBus  (c+221,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+222,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+223,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+224,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+225,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+226,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+227,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+228,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+229,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+230,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+231,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+232,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+233,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+234,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBit  (c+235,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf0));
	vcdp->fullBit  (c+236,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkO_buf0));
	vcdp->fullBus  (c+237,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkO_buf0),3);
	vcdp->fullBus  (c+238,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkO_buf0),8);
	vcdp->fullBus  (c+239,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkO_buf0),3);
	vcdp->fullBus  (c+240,(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->fullBus  (c+241,(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->fullBit  (c+242,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkI_reg));
	vcdp->fullBit  (c+243,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkI_reg));
	vcdp->fullBus  (c+244,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkI_reg),3);
	vcdp->fullBus  (c+245,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkI_reg),8);
	vcdp->fullBus  (c+246,(vlTOPp->AxiLite4CDMADespread__DOT___zz_dataIn_3),3);
	vcdp->fullBus  (c+247,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkI_reg),3);
	vcdp->fullBit  (c+248,((1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->fullBit  (c+249,(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rValid));
	vcdp->fullBit  (c+250,((1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->fullBit  (c+251,(vlTOPp->AxiLite4CDMADespread__DOT__cdma_spread_bridge_clc_driver));
	vcdp->fullBit  (c+252,(vlTOPp->AxiLite4CDMADespread__DOT___zz_dataIn));
	vcdp->fullBus  (c+253,(vlTOPp->AxiLite4CDMADespread__DOT___zz_dataIn_1),3);
	vcdp->fullBus  (c+254,(vlTOPp->AxiLite4CDMADespread__DOT___zz_dataIn_2),8);
	vcdp->fullBit  (c+255,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->fullBit  (c+256,(vlTOPp->axil4Ctrl_awready));
    }
}

void VAxiLite4CDMADespread::traceFullThis__9(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+257,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->fullBus  (c+258,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->fullBit  (c+259,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->fullBit  (c+260,(vlTOPp->axil4Ctrl_wready));
	vcdp->fullBus  (c+261,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->fullBus  (c+262,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->fullBit  (c+263,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->fullBit  (c+264,(vlTOPp->axil4Ctrl_bready));
	vcdp->fullBus  (c+265,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->fullBit  (c+266,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->fullBit  (c+267,(vlTOPp->axil4Ctrl_arready));
	vcdp->fullBus  (c+268,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->fullBus  (c+269,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->fullBit  (c+270,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->fullBit  (c+271,(vlTOPp->axil4Ctrl_rready));
	vcdp->fullBus  (c+272,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->fullBus  (c+273,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->fullBit  (c+274,(vlTOPp->mod_iq_valid));
	vcdp->fullBit  (c+275,(vlTOPp->mod_iq_ready));
	vcdp->fullBus  (c+276,(vlTOPp->mod_iq_payload_cha_i),16);
	vcdp->fullBus  (c+277,(vlTOPp->mod_iq_payload_cha_q),16);
	vcdp->fullBit  (c+278,(vlTOPp->base_sub_iqs_0_valid));
	vcdp->fullBus  (c+279,(vlTOPp->base_sub_iqs_0_payload_cha_i),16);
	vcdp->fullBus  (c+280,(vlTOPp->base_sub_iqs_0_payload_cha_q),16);
	vcdp->fullBit  (c+281,(vlTOPp->base_sub_iqs_1_valid));
	vcdp->fullBus  (c+282,(vlTOPp->base_sub_iqs_1_payload_cha_i),16);
	vcdp->fullBus  (c+283,(vlTOPp->base_sub_iqs_1_payload_cha_q),16);
	vcdp->fullBit  (c+284,(vlTOPp->base_sub_iqs_2_valid));
	vcdp->fullBus  (c+285,(vlTOPp->base_sub_iqs_2_payload_cha_i),16);
	vcdp->fullBus  (c+286,(vlTOPp->base_sub_iqs_2_payload_cha_q),16);
	vcdp->fullBit  (c+287,(vlTOPp->base_sub_iqs_3_valid));
	vcdp->fullBus  (c+288,(vlTOPp->base_sub_iqs_3_payload_cha_i),16);
	vcdp->fullBus  (c+289,(vlTOPp->base_sub_iqs_3_payload_cha_q),16);
	vcdp->fullBit  (c+290,(vlTOPp->base_sub_iqs_4_valid));
	vcdp->fullBus  (c+291,(vlTOPp->base_sub_iqs_4_payload_cha_i),16);
	vcdp->fullBus  (c+292,(vlTOPp->base_sub_iqs_4_payload_cha_q),16);
	vcdp->fullBit  (c+293,(vlTOPp->base_sub_iqs_5_valid));
	vcdp->fullBus  (c+294,(vlTOPp->base_sub_iqs_5_payload_cha_i),16);
	vcdp->fullBus  (c+295,(vlTOPp->base_sub_iqs_5_payload_cha_q),16);
	vcdp->fullBit  (c+296,(vlTOPp->base_sub_iqs_6_valid));
	vcdp->fullBus  (c+297,(vlTOPp->base_sub_iqs_6_payload_cha_i),16);
	vcdp->fullBus  (c+298,(vlTOPp->base_sub_iqs_6_payload_cha_q),16);
	vcdp->fullBit  (c+299,(vlTOPp->base_sub_iqs_7_valid));
	vcdp->fullBus  (c+300,(vlTOPp->base_sub_iqs_7_payload_cha_i),16);
	vcdp->fullBus  (c+301,(vlTOPp->base_sub_iqs_7_payload_cha_q),16);
	vcdp->fullBit  (c+302,(vlTOPp->rf_clk));
	vcdp->fullBit  (c+303,(vlTOPp->rf_resetn));
	vcdp->fullBit  (c+304,(vlTOPp->clk));
	vcdp->fullBit  (c+305,(vlTOPp->reset));
	vcdp->fullBit  (c+306,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
				& (IData)(vlTOPp->axil4Ctrl_rready))));
	vcdp->fullBit  (c+307,(0U));
	vcdp->fullBus  (c+308,(0U),2);
    }
}
