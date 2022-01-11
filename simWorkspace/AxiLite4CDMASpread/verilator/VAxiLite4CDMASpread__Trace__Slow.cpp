// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4CDMASpread__Syms.h"


//======================

void VAxiLite4CDMASpread::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VAxiLite4CDMASpread::traceInit, &VAxiLite4CDMASpread::traceFull, &VAxiLite4CDMASpread::traceChg, this);
}
void VAxiLite4CDMASpread::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4CDMASpread* t=(VAxiLite4CDMASpread*)userthis;
    VAxiLite4CDMASpread__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4CDMASpread::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4CDMASpread* t=(VAxiLite4CDMASpread*)userthis;
    VAxiLite4CDMASpread__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VAxiLite4CDMASpread::traceInitThis(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4CDMASpread::traceFullThis(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4CDMASpread::traceInitThis__1(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+93,"axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+94,"axil4Ctrl_awready",-1);
	vcdp->declBus  (c+95,"axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+96,"axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+97,"axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+98,"axil4Ctrl_wready",-1);
	vcdp->declBus  (c+99,"axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+100,"axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+101,"axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+102,"axil4Ctrl_bready",-1);
	vcdp->declBus  (c+103,"axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+104,"axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+105,"axil4Ctrl_arready",-1);
	vcdp->declBus  (c+106,"axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+107,"axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+108,"axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+109,"axil4Ctrl_rready",-1);
	vcdp->declBus  (c+110,"axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+111,"axil4Ctrl_rresp",-1,1,0);
	vcdp->declBit  (c+112,"base_iq_valid",-1);
	vcdp->declBit  (c+113,"base_iq_ready",-1);
	vcdp->declBus  (c+114,"base_iq_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+115,"base_iq_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+116,"base_iq_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+117,"base_iq_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+118,"base_iq_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+119,"base_iq_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+120,"base_iq_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+121,"base_iq_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+122,"base_iq_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+123,"base_iq_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+124,"base_iq_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+125,"base_iq_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+126,"base_iq_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+127,"base_iq_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+128,"base_iq_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+129,"base_iq_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+130,"mod_iq_valid",-1);
	vcdp->declBus  (c+131,"mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+132,"mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"rf_clk",-1);
	vcdp->declBit  (c+134,"rf_resetn",-1);
	vcdp->declBit  (c+135,"clk",-1);
	vcdp->declBit  (c+136,"reset",-1);
	vcdp->declBit  (c+93,"AxiLite4CDMASpread axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+94,"AxiLite4CDMASpread axil4Ctrl_awready",-1);
	vcdp->declBus  (c+95,"AxiLite4CDMASpread axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+96,"AxiLite4CDMASpread axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+97,"AxiLite4CDMASpread axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+98,"AxiLite4CDMASpread axil4Ctrl_wready",-1);
	vcdp->declBus  (c+99,"AxiLite4CDMASpread axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+100,"AxiLite4CDMASpread axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+101,"AxiLite4CDMASpread axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+102,"AxiLite4CDMASpread axil4Ctrl_bready",-1);
	vcdp->declBus  (c+103,"AxiLite4CDMASpread axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+104,"AxiLite4CDMASpread axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+105,"AxiLite4CDMASpread axil4Ctrl_arready",-1);
	vcdp->declBus  (c+106,"AxiLite4CDMASpread axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+107,"AxiLite4CDMASpread axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+108,"AxiLite4CDMASpread axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+109,"AxiLite4CDMASpread axil4Ctrl_rready",-1);
	vcdp->declBus  (c+110,"AxiLite4CDMASpread axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+111,"AxiLite4CDMASpread axil4Ctrl_rresp",-1,1,0);
	vcdp->declBit  (c+112,"AxiLite4CDMASpread base_iq_valid",-1);
	vcdp->declBit  (c+113,"AxiLite4CDMASpread base_iq_ready",-1);
	vcdp->declBus  (c+114,"AxiLite4CDMASpread base_iq_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+115,"AxiLite4CDMASpread base_iq_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+116,"AxiLite4CDMASpread base_iq_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+117,"AxiLite4CDMASpread base_iq_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+118,"AxiLite4CDMASpread base_iq_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+119,"AxiLite4CDMASpread base_iq_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+120,"AxiLite4CDMASpread base_iq_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+121,"AxiLite4CDMASpread base_iq_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+122,"AxiLite4CDMASpread base_iq_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+123,"AxiLite4CDMASpread base_iq_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+124,"AxiLite4CDMASpread base_iq_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+125,"AxiLite4CDMASpread base_iq_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+126,"AxiLite4CDMASpread base_iq_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+127,"AxiLite4CDMASpread base_iq_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+128,"AxiLite4CDMASpread base_iq_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+129,"AxiLite4CDMASpread base_iq_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+130,"AxiLite4CDMASpread mod_iq_valid",-1);
	vcdp->declBus  (c+131,"AxiLite4CDMASpread mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+132,"AxiLite4CDMASpread mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rf_resetn",-1);
	vcdp->declBit  (c+135,"AxiLite4CDMASpread clk",-1);
	vcdp->declBit  (c+136,"AxiLite4CDMASpread reset",-1);
	vcdp->declBit  (c+1,"AxiLite4CDMASpread rfClockArea_cdma_spread_base_iq_ready",-1);
	vcdp->declBit  (c+6,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+7,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+8,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+9,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+10,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+11,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+12,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+13,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+14,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+15,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+16,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+17,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+18,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+19,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+20,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+21,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+22,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+23,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+24,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+25,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+27,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+28,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+29,"AxiLite4CDMASpread rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+30,"AxiLite4CDMASpread rfClockArea_cdma_code_sum_mod_iq_valid",-1);
	vcdp->declBus  (c+31,"AxiLite4CDMASpread rfClockArea_cdma_code_sum_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+32,"AxiLite4CDMASpread rfClockArea_cdma_code_sum_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+33,"AxiLite4CDMASpread clkCrossing_5_dataOut",-1);
	vcdp->declBit  (c+34,"AxiLite4CDMASpread clkCrossing_6_dataOut",-1);
	vcdp->declBus  (c+35,"AxiLite4CDMASpread clkCrossing_7_dataOut",-1,2,0);
	vcdp->declBus  (c+36,"AxiLite4CDMASpread clkCrossing_8_dataOut",-1,7,0);
	vcdp->declBus  (c+37,"AxiLite4CDMASpread clkCrossing_9_dataOut",-1,2,0);
	vcdp->declBit  (c+140,"AxiLite4CDMASpread readHaltRequest",-1);
	vcdp->declBit  (c+140,"AxiLite4CDMASpread writeHaltRequest",-1);
	vcdp->declBit  (c+3,"AxiLite4CDMASpread writeJoinEvent_valid",-1);
	vcdp->declBit  (c+4,"AxiLite4CDMASpread writeJoinEvent_ready",-1);
	vcdp->declBit  (c+5,"AxiLite4CDMASpread writeJoinEvent_fire",-1);
	vcdp->declBus  (c+141,"AxiLite4CDMASpread writeRsp_resp",-1,1,0);
	vcdp->declBit  (c+3,"AxiLite4CDMASpread writeJoinEvent_translated_valid",-1);
	vcdp->declBit  (c+4,"AxiLite4CDMASpread writeJoinEvent_translated_ready",-1);
	vcdp->declBus  (c+141,"AxiLite4CDMASpread writeJoinEvent_translated_payload_resp",-1,1,0);
	// Tracing: AxiLite4CDMASpread _zz_axil4Ctrl_bvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:95
	// Tracing: AxiLite4CDMASpread _zz_writeJoinEvent_translated_ready // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:96
	// Tracing: AxiLite4CDMASpread _zz_axil4Ctrl_bvalid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:97
	// Tracing: AxiLite4CDMASpread _zz_axil4Ctrl_bvalid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:98
	// Tracing: AxiLite4CDMASpread _zz_axil4Ctrl_bresp // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:99
	vcdp->declBit  (c+86,"AxiLite4CDMASpread when_Stream_l342",-1);
	vcdp->declBit  (c+87,"AxiLite4CDMASpread axil4Ctrl_ar_readDataStage_valid",-1);
	vcdp->declBit  (c+109,"AxiLite4CDMASpread axil4Ctrl_ar_readDataStage_ready",-1);
	vcdp->declBus  (c+78,"AxiLite4CDMASpread axil4Ctrl_ar_readDataStage_payload_addr",-1,7,0);
	vcdp->declBus  (c+79,"AxiLite4CDMASpread axil4Ctrl_ar_readDataStage_payload_prot",-1,2,0);
	vcdp->declBit  (c+87,"AxiLite4CDMASpread axil4Ctrl_ar_rValid",-1);
	vcdp->declBus  (c+78,"AxiLite4CDMASpread axil4Ctrl_ar_rData_addr",-1,7,0);
	vcdp->declBus  (c+79,"AxiLite4CDMASpread axil4Ctrl_ar_rData_prot",-1,2,0);
	vcdp->declBit  (c+88,"AxiLite4CDMASpread when_Stream_l342_1",-1);
	vcdp->declBus  (c+2,"AxiLite4CDMASpread readRsp_data",-1,31,0);
	vcdp->declBus  (c+141,"AxiLite4CDMASpread readRsp_resp",-1,1,0);
	// Tracing: AxiLite4CDMASpread _zz_axil4Ctrl_rvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:111
	vcdp->declBit  (c+5,"AxiLite4CDMASpread writeOccur",-1);
	vcdp->declBit  (c+137,"AxiLite4CDMASpread readOccur",-1);
	vcdp->declBit  (c+89,"AxiLite4CDMASpread cdma_spread_bridge_clc",-1);
	vcdp->declBit  (c+89,"AxiLite4CDMASpread cdma_spread_bridge_clc_driver",-1);
	// Tracing: AxiLite4CDMASpread _zz_dataIn // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:116
	// Tracing: AxiLite4CDMASpread _zz_dataIn_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:117
	// Tracing: AxiLite4CDMASpread _zz_dataIn_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:118
	// Tracing: AxiLite4CDMASpread _zz_dataIn_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:119
	vcdp->declBit  (c+34,"AxiLite4CDMASpread rfClockArea_cdma_spread w_en",-1);
	vcdp->declBus  (c+35,"AxiLite4CDMASpread rfClockArea_cdma_spread w_addr",-1,2,0);
	vcdp->declBus  (c+36,"AxiLite4CDMASpread rfClockArea_cdma_spread w_data",-1,7,0);
	vcdp->declBit  (c+33,"AxiLite4CDMASpread rfClockArea_cdma_spread clc",-1);
	vcdp->declBus  (c+37,"AxiLite4CDMASpread rfClockArea_cdma_spread cnt_limit",-1,2,0);
	vcdp->declBit  (c+112,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_valid",-1);
	vcdp->declBit  (c+1,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_ready",-1);
	vcdp->declBus  (c+114,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+115,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+116,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+117,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+118,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+119,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+120,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+121,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+122,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+123,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+124,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+125,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+126,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+127,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+128,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+129,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+6,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+7,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+8,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+9,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+10,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+11,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+12,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+13,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+14,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+15,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+16,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+17,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+18,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+19,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+20,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+21,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+22,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+23,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+24,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+25,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+27,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+28,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+29,"AxiLite4CDMASpread rfClockArea_cdma_spread mod_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_map_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:720
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_map_port1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:721
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_map_port2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:722
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_map_port3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:723
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_map_port4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:724
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_map_port5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:725
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_map_port6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:726
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_map_port7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:727
	vcdp->declBit  (c+6,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8_mod_iq_valid",-1);
	vcdp->declBus  (c+7,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+8,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+9,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9_mod_iq_valid",-1);
	vcdp->declBus  (c+10,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+11,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+12,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10_mod_iq_valid",-1);
	vcdp->declBus  (c+13,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+14,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+15,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11_mod_iq_valid",-1);
	vcdp->declBus  (c+16,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+17,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+18,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12_mod_iq_valid",-1);
	vcdp->declBus  (c+19,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+20,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+21,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13_mod_iq_valid",-1);
	vcdp->declBus  (c+22,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+23,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+24,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14_mod_iq_valid",-1);
	vcdp->declBus  (c+25,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+27,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15_mod_iq_valid",-1);
	vcdp->declBus  (c+28,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+29,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15_mod_iq_payload_cha_q",-1,15,0);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:752
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:753
	vcdp->declBus  (c+38,"AxiLite4CDMASpread rfClockArea_cdma_spread cnt",-1,2,0);
	vcdp->declBus  (c+39,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_0_cha_i",-1,15,0);
	vcdp->declBus  (c+40,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_0_cha_q",-1,15,0);
	vcdp->declBus  (c+41,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_1_cha_i",-1,15,0);
	vcdp->declBus  (c+42,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_1_cha_q",-1,15,0);
	vcdp->declBus  (c+43,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_2_cha_i",-1,15,0);
	vcdp->declBus  (c+44,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_2_cha_q",-1,15,0);
	vcdp->declBus  (c+45,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_3_cha_i",-1,15,0);
	vcdp->declBus  (c+46,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_3_cha_q",-1,15,0);
	vcdp->declBus  (c+47,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_4_cha_i",-1,15,0);
	vcdp->declBus  (c+48,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_4_cha_q",-1,15,0);
	vcdp->declBus  (c+49,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_5_cha_i",-1,15,0);
	vcdp->declBus  (c+50,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_5_cha_q",-1,15,0);
	vcdp->declBus  (c+51,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_6_cha_i",-1,15,0);
	vcdp->declBus  (c+52,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_6_cha_q",-1,15,0);
	vcdp->declBus  (c+53,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_7_cha_i",-1,15,0);
	vcdp->declBus  (c+54,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_data_vec_7_cha_q",-1,15,0);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread flow_iq_valid",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:772
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:773
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:774
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:775
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:776
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:777
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:778
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread _zz_code_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:779
	vcdp->declBit  (c+138,"AxiLite4CDMASpread rfClockArea_cdma_spread base_iq_fire",-1);
	vcdp->declBit  (c+139,"AxiLite4CDMASpread rfClockArea_cdma_spread when_CDMASpreading_l51",-1);
	vcdp->declBit  (c+56,"AxiLite4CDMASpread rfClockArea_cdma_spread when_CDMASpreading_l65",-1);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+57+i*1,"AxiLite4CDMASpread rfClockArea_cdma_spread code_map",(i+0),7,0);}}
	vcdp->declBit  (c+65,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 code",-1);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 base_iq_valid",-1);
	vcdp->declBus  (c+39,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+40,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+6,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 mod_iq_valid",-1);
	vcdp->declBus  (c+7,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+8,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:998
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:999
	vcdp->declBus  (c+7,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 mod_i",-1,15,0);
	vcdp->declBus  (c+8,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 mod_q",-1,15,0);
	vcdp->declBit  (c+6,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_8 mod_valid",-1);
	vcdp->declBit  (c+66,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 code",-1);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 base_iq_valid",-1);
	vcdp->declBus  (c+41,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+42,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+9,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 mod_iq_valid",-1);
	vcdp->declBus  (c+10,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+11,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:998
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:999
	vcdp->declBus  (c+10,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 mod_i",-1,15,0);
	vcdp->declBus  (c+11,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 mod_q",-1,15,0);
	vcdp->declBit  (c+9,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_9 mod_valid",-1);
	vcdp->declBit  (c+67,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 code",-1);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 base_iq_valid",-1);
	vcdp->declBus  (c+43,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+44,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+12,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 mod_iq_valid",-1);
	vcdp->declBus  (c+13,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+14,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:998
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:999
	vcdp->declBus  (c+13,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 mod_i",-1,15,0);
	vcdp->declBus  (c+14,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 mod_q",-1,15,0);
	vcdp->declBit  (c+12,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_10 mod_valid",-1);
	vcdp->declBit  (c+68,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 code",-1);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 base_iq_valid",-1);
	vcdp->declBus  (c+45,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+46,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+15,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 mod_iq_valid",-1);
	vcdp->declBus  (c+16,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+17,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:998
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:999
	vcdp->declBus  (c+16,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 mod_i",-1,15,0);
	vcdp->declBus  (c+17,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 mod_q",-1,15,0);
	vcdp->declBit  (c+15,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_11 mod_valid",-1);
	vcdp->declBit  (c+69,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 code",-1);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 base_iq_valid",-1);
	vcdp->declBus  (c+47,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+48,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+18,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 mod_iq_valid",-1);
	vcdp->declBus  (c+19,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+20,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:998
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:999
	vcdp->declBus  (c+19,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 mod_i",-1,15,0);
	vcdp->declBus  (c+20,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 mod_q",-1,15,0);
	vcdp->declBit  (c+18,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_12 mod_valid",-1);
	vcdp->declBit  (c+70,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 code",-1);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 base_iq_valid",-1);
	vcdp->declBus  (c+49,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+50,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+21,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 mod_iq_valid",-1);
	vcdp->declBus  (c+22,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+23,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:998
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:999
	vcdp->declBus  (c+22,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 mod_i",-1,15,0);
	vcdp->declBus  (c+23,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 mod_q",-1,15,0);
	vcdp->declBit  (c+21,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_13 mod_valid",-1);
	vcdp->declBit  (c+71,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 code",-1);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 base_iq_valid",-1);
	vcdp->declBus  (c+51,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+52,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+24,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 mod_iq_valid",-1);
	vcdp->declBus  (c+25,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:998
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:999
	vcdp->declBus  (c+25,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 mod_i",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 mod_q",-1,15,0);
	vcdp->declBit  (c+24,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_14 mod_valid",-1);
	vcdp->declBit  (c+72,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 code",-1);
	vcdp->declBit  (c+55,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 base_iq_valid",-1);
	vcdp->declBus  (c+53,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+54,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+27,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 mod_iq_valid",-1);
	vcdp->declBus  (c+28,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+29,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:998
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:999
	vcdp->declBus  (c+28,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 mod_i",-1,15,0);
	vcdp->declBus  (c+29,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 mod_q",-1,15,0);
	vcdp->declBit  (c+27,"AxiLite4CDMASpread rfClockArea_cdma_spread computeUnit_15 mod_valid",-1);
	vcdp->declBit  (c+6,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+7,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+8,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+9,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+10,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+11,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+12,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+13,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+14,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+15,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+16,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+17,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+18,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+19,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+20,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+21,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+22,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+23,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+24,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+25,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+27,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+28,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+29,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+30,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_iq_valid",-1);
	vcdp->declBus  (c+31,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+32,"AxiLite4CDMASpread rfClockArea_cdma_code_sum mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread rfClockArea_cdma_code_sum rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread rfClockArea_cdma_code_sum rf_resetn",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:471
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:472
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:473
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:474
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:475
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:476
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:477
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:478
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:479
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:480
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:481
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:482
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:483
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:484
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:485
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:486
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:487
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:488
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:489
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:490
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:491
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:492
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:493
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:494
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:495
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:496
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:497
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_i_1_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:498
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:499
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:500
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:501
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:502
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:503
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:504
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:505
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:506
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:507
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:508
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:509
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:510
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:511
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:512
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:513
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:514
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:515
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:516
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:517
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:518
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:519
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:520
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:521
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:522
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:523
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:524
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:525
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:526
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:527
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:528
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:529
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz__zz_mod_iq_payload_cha_q_1_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:530
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:531
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:532
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:533
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:534
	vcdp->declBus  (c+7,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_i_data_vec_0",-1,15,0);
	vcdp->declBus  (c+10,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_i_data_vec_1",-1,15,0);
	vcdp->declBus  (c+13,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_i_data_vec_2",-1,15,0);
	vcdp->declBus  (c+16,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_i_data_vec_3",-1,15,0);
	vcdp->declBus  (c+19,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_i_data_vec_4",-1,15,0);
	vcdp->declBus  (c+22,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_i_data_vec_5",-1,15,0);
	vcdp->declBus  (c+25,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_i_data_vec_6",-1,15,0);
	vcdp->declBus  (c+28,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_i_data_vec_7",-1,15,0);
	vcdp->declBus  (c+8,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_q_data_vec_0",-1,15,0);
	vcdp->declBus  (c+11,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_q_data_vec_1",-1,15,0);
	vcdp->declBus  (c+14,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_q_data_vec_2",-1,15,0);
	vcdp->declBus  (c+17,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_q_data_vec_3",-1,15,0);
	vcdp->declBus  (c+20,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_q_data_vec_4",-1,15,0);
	vcdp->declBus  (c+23,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_q_data_vec_5",-1,15,0);
	vcdp->declBus  (c+26,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_q_data_vec_6",-1,15,0);
	vcdp->declBus  (c+29,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_q_data_vec_7",-1,15,0);
	vcdp->declBit  (c+6,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_iqs_valid_vec_0",-1);
	vcdp->declBit  (c+9,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_iqs_valid_vec_1",-1);
	vcdp->declBit  (c+12,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_iqs_valid_vec_2",-1);
	vcdp->declBit  (c+15,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_iqs_valid_vec_3",-1);
	vcdp->declBit  (c+18,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_iqs_valid_vec_4",-1);
	vcdp->declBit  (c+21,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_iqs_valid_vec_5",-1);
	vcdp->declBit  (c+24,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_iqs_valid_vec_6",-1);
	vcdp->declBit  (c+27,"AxiLite4CDMASpread rfClockArea_cdma_code_sum sub_iqs_valid_vec_7",-1);
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:559
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:560
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:561
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:562
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:563
	// Tracing: AxiLite4CDMASpread rfClockArea_cdma_code_sum _zz_mod_iq_valid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/AxiLite4CDMASpread.v:564
	vcdp->declBit  (c+89,"AxiLite4CDMASpread clkCrossing_5 dataIn",-1);
	vcdp->declBit  (c+33,"AxiLite4CDMASpread clkCrossing_5 dataOut",-1);
	vcdp->declBit  (c+135,"AxiLite4CDMASpread clkCrossing_5 clk",-1);
	vcdp->declBit  (c+136,"AxiLite4CDMASpread clkCrossing_5 reset",-1);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread clkCrossing_5 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread clkCrossing_5 rf_resetn",-1);
	vcdp->declBit  (c+80,"AxiLite4CDMASpread clkCrossing_5 area_clkI_reg",-1);
	vcdp->declBit  (c+73,"AxiLite4CDMASpread clkCrossing_5 area_clkO_buf0",-1);
	vcdp->declBit  (c+33,"AxiLite4CDMASpread clkCrossing_5 area_clkO_buf1",-1);
	vcdp->declBit  (c+90,"AxiLite4CDMASpread clkCrossing_6 dataIn",-1);
	vcdp->declBit  (c+34,"AxiLite4CDMASpread clkCrossing_6 dataOut",-1);
	vcdp->declBit  (c+135,"AxiLite4CDMASpread clkCrossing_6 clk",-1);
	vcdp->declBit  (c+136,"AxiLite4CDMASpread clkCrossing_6 reset",-1);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread clkCrossing_6 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread clkCrossing_6 rf_resetn",-1);
	vcdp->declBit  (c+81,"AxiLite4CDMASpread clkCrossing_6 area_clkI_reg",-1);
	vcdp->declBit  (c+74,"AxiLite4CDMASpread clkCrossing_6 area_clkO_buf0",-1);
	vcdp->declBit  (c+34,"AxiLite4CDMASpread clkCrossing_6 area_clkO_buf1",-1);
	vcdp->declBus  (c+91,"AxiLite4CDMASpread clkCrossing_7 dataIn",-1,2,0);
	vcdp->declBus  (c+35,"AxiLite4CDMASpread clkCrossing_7 dataOut",-1,2,0);
	vcdp->declBit  (c+135,"AxiLite4CDMASpread clkCrossing_7 clk",-1);
	vcdp->declBit  (c+136,"AxiLite4CDMASpread clkCrossing_7 reset",-1);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread clkCrossing_7 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread clkCrossing_7 rf_resetn",-1);
	vcdp->declBus  (c+82,"AxiLite4CDMASpread clkCrossing_7 area_clkI_reg",-1,2,0);
	vcdp->declBus  (c+75,"AxiLite4CDMASpread clkCrossing_7 area_clkO_buf0",-1,2,0);
	vcdp->declBus  (c+35,"AxiLite4CDMASpread clkCrossing_7 area_clkO_buf1",-1,2,0);
	vcdp->declBus  (c+92,"AxiLite4CDMASpread clkCrossing_8 dataIn",-1,7,0);
	vcdp->declBus  (c+36,"AxiLite4CDMASpread clkCrossing_8 dataOut",-1,7,0);
	vcdp->declBit  (c+135,"AxiLite4CDMASpread clkCrossing_8 clk",-1);
	vcdp->declBit  (c+136,"AxiLite4CDMASpread clkCrossing_8 reset",-1);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread clkCrossing_8 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread clkCrossing_8 rf_resetn",-1);
	vcdp->declBus  (c+83,"AxiLite4CDMASpread clkCrossing_8 area_clkI_reg",-1,7,0);
	vcdp->declBus  (c+76,"AxiLite4CDMASpread clkCrossing_8 area_clkO_buf0",-1,7,0);
	vcdp->declBus  (c+36,"AxiLite4CDMASpread clkCrossing_8 area_clkO_buf1",-1,7,0);
	vcdp->declBus  (c+84,"AxiLite4CDMASpread clkCrossing_9 dataIn",-1,2,0);
	vcdp->declBus  (c+37,"AxiLite4CDMASpread clkCrossing_9 dataOut",-1,2,0);
	vcdp->declBit  (c+135,"AxiLite4CDMASpread clkCrossing_9 clk",-1);
	vcdp->declBit  (c+136,"AxiLite4CDMASpread clkCrossing_9 reset",-1);
	vcdp->declBit  (c+133,"AxiLite4CDMASpread clkCrossing_9 rf_clk",-1);
	vcdp->declBit  (c+134,"AxiLite4CDMASpread clkCrossing_9 rf_resetn",-1);
	vcdp->declBus  (c+85,"AxiLite4CDMASpread clkCrossing_9 area_clkI_reg",-1,2,0);
	vcdp->declBus  (c+77,"AxiLite4CDMASpread clkCrossing_9 area_clkO_buf0",-1,2,0);
	vcdp->declBus  (c+37,"AxiLite4CDMASpread clkCrossing_9 area_clkO_buf1",-1,2,0);
    }
}

void VAxiLite4CDMASpread::traceFullThis__1(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready));
	vcdp->fullBus  (c+2,(vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data),32);
	vcdp->fullBit  (c+3,(vlTOPp->AxiLite4CDMASpread__DOT__writeJoinEvent_valid));
	vcdp->fullBit  (c+4,(vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->fullBit  (c+5,(vlTOPp->AxiLite4CDMASpread__DOT__writeOccur));
	vcdp->fullBit  (c+6,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid));
	vcdp->fullBus  (c+7,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i),16);
	vcdp->fullBus  (c+8,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q),16);
	vcdp->fullBit  (c+9,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid));
	vcdp->fullBus  (c+10,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i),16);
	vcdp->fullBus  (c+11,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q),16);
	vcdp->fullBit  (c+12,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid));
	vcdp->fullBus  (c+13,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i),16);
	vcdp->fullBus  (c+14,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q),16);
	vcdp->fullBit  (c+15,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid));
	vcdp->fullBus  (c+16,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i),16);
	vcdp->fullBus  (c+17,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q),16);
	vcdp->fullBit  (c+18,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid));
	vcdp->fullBus  (c+19,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i),16);
	vcdp->fullBus  (c+20,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q),16);
	vcdp->fullBit  (c+21,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid));
	vcdp->fullBus  (c+22,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i),16);
	vcdp->fullBus  (c+23,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q),16);
	vcdp->fullBit  (c+24,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid));
	vcdp->fullBus  (c+25,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i),16);
	vcdp->fullBus  (c+26,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q),16);
	vcdp->fullBit  (c+27,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid));
	vcdp->fullBus  (c+28,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i),16);
	vcdp->fullBus  (c+29,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q),16);
	vcdp->fullBit  (c+30,(((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid) 
			       & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1))));
	vcdp->fullBus  (c+31,((0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i) 
					  + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1)))),16);
	vcdp->fullBus  (c+32,((0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q) 
					  + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1)))),16);
	vcdp->fullBit  (c+33,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf1));
	vcdp->fullBit  (c+34,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf1));
	vcdp->fullBus  (c+35,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf1),3);
	vcdp->fullBus  (c+36,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf1),8);
	vcdp->fullBus  (c+37,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf1),3);
	vcdp->fullBus  (c+38,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt),3);
	vcdp->fullBus  (c+39,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i),16);
	vcdp->fullBus  (c+40,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q),16);
	vcdp->fullBus  (c+41,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i),16);
	vcdp->fullBus  (c+42,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q),16);
	vcdp->fullBus  (c+43,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i),16);
	vcdp->fullBus  (c+44,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q),16);
	vcdp->fullBus  (c+45,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i),16);
	vcdp->fullBus  (c+46,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q),16);
	vcdp->fullBus  (c+47,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i),16);
	vcdp->fullBus  (c+48,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q),16);
	vcdp->fullBus  (c+49,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i),16);
	vcdp->fullBus  (c+50,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q),16);
	vcdp->fullBus  (c+51,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i),16);
	vcdp->fullBus  (c+52,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q),16);
	vcdp->fullBus  (c+53,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i),16);
	vcdp->fullBus  (c+54,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q),16);
	vcdp->fullBit  (c+55,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid));
	vcdp->fullBit  (c+56,((0U == (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt))));
	vcdp->fullBus  (c+57,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[0]),8);
	vcdp->fullBus  (c+58,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[1]),8);
	vcdp->fullBus  (c+59,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[2]),8);
	vcdp->fullBus  (c+60,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[3]),8);
	vcdp->fullBus  (c+61,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[4]),8);
	vcdp->fullBus  (c+62,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[5]),8);
	vcdp->fullBus  (c+63,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[6]),8);
	vcdp->fullBus  (c+64,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[7]),8);
	vcdp->fullBit  (c+65,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code));
	vcdp->fullBit  (c+66,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1));
	vcdp->fullBit  (c+67,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2));
	vcdp->fullBit  (c+68,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3));
	vcdp->fullBit  (c+69,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4));
	vcdp->fullBit  (c+70,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5));
	vcdp->fullBit  (c+71,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6));
	vcdp->fullBit  (c+72,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7));
	vcdp->fullBit  (c+73,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf0));
	vcdp->fullBit  (c+74,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf0));
	vcdp->fullBus  (c+75,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf0),3);
	vcdp->fullBus  (c+76,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf0),8);
	vcdp->fullBus  (c+77,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf0),3);
	vcdp->fullBus  (c+78,(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->fullBus  (c+79,(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->fullBit  (c+80,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkI_reg));
	vcdp->fullBit  (c+81,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkI_reg));
	vcdp->fullBus  (c+82,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkI_reg),3);
	vcdp->fullBus  (c+83,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkI_reg),8);
	vcdp->fullBus  (c+84,(vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_3),3);
	vcdp->fullBus  (c+85,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkI_reg),3);
	vcdp->fullBit  (c+86,((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->fullBit  (c+87,(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid));
	vcdp->fullBit  (c+88,((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->fullBit  (c+89,(vlTOPp->AxiLite4CDMASpread__DOT__cdma_spread_bridge_clc_driver));
	vcdp->fullBit  (c+90,(vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn));
	vcdp->fullBus  (c+91,(vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_1),3);
	vcdp->fullBus  (c+92,(vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_2),8);
	vcdp->fullBit  (c+93,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->fullBit  (c+94,(vlTOPp->axil4Ctrl_awready));
	vcdp->fullBus  (c+95,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->fullBus  (c+96,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->fullBit  (c+97,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->fullBit  (c+98,(vlTOPp->axil4Ctrl_wready));
	vcdp->fullBus  (c+99,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->fullBus  (c+100,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->fullBit  (c+101,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->fullBit  (c+102,(vlTOPp->axil4Ctrl_bready));
	vcdp->fullBus  (c+103,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->fullBit  (c+104,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->fullBit  (c+105,(vlTOPp->axil4Ctrl_arready));
	vcdp->fullBus  (c+106,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->fullBus  (c+107,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->fullBit  (c+108,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->fullBit  (c+109,(vlTOPp->axil4Ctrl_rready));
	vcdp->fullBus  (c+110,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->fullBus  (c+111,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->fullBit  (c+112,(vlTOPp->base_iq_valid));
	vcdp->fullBit  (c+113,(vlTOPp->base_iq_ready));
	vcdp->fullBus  (c+114,(vlTOPp->base_iq_payload_0_cha_i),16);
	vcdp->fullBus  (c+115,(vlTOPp->base_iq_payload_0_cha_q),16);
	vcdp->fullBus  (c+116,(vlTOPp->base_iq_payload_1_cha_i),16);
	vcdp->fullBus  (c+117,(vlTOPp->base_iq_payload_1_cha_q),16);
	vcdp->fullBus  (c+118,(vlTOPp->base_iq_payload_2_cha_i),16);
	vcdp->fullBus  (c+119,(vlTOPp->base_iq_payload_2_cha_q),16);
	vcdp->fullBus  (c+120,(vlTOPp->base_iq_payload_3_cha_i),16);
	vcdp->fullBus  (c+121,(vlTOPp->base_iq_payload_3_cha_q),16);
	vcdp->fullBus  (c+122,(vlTOPp->base_iq_payload_4_cha_i),16);
	vcdp->fullBus  (c+123,(vlTOPp->base_iq_payload_4_cha_q),16);
	vcdp->fullBus  (c+124,(vlTOPp->base_iq_payload_5_cha_i),16);
	vcdp->fullBus  (c+125,(vlTOPp->base_iq_payload_5_cha_q),16);
	vcdp->fullBus  (c+126,(vlTOPp->base_iq_payload_6_cha_i),16);
	vcdp->fullBus  (c+127,(vlTOPp->base_iq_payload_6_cha_q),16);
	vcdp->fullBus  (c+128,(vlTOPp->base_iq_payload_7_cha_i),16);
	vcdp->fullBus  (c+129,(vlTOPp->base_iq_payload_7_cha_q),16);
	vcdp->fullBit  (c+130,(vlTOPp->mod_iq_valid));
	vcdp->fullBus  (c+131,(vlTOPp->mod_iq_payload_cha_i),16);
	vcdp->fullBus  (c+132,(vlTOPp->mod_iq_payload_cha_q),16);
	vcdp->fullBit  (c+133,(vlTOPp->rf_clk));
	vcdp->fullBit  (c+134,(vlTOPp->rf_resetn));
	vcdp->fullBit  (c+135,(vlTOPp->clk));
	vcdp->fullBit  (c+136,(vlTOPp->reset));
	vcdp->fullBit  (c+137,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
				& (IData)(vlTOPp->axil4Ctrl_rready))));
	vcdp->fullBit  (c+138,(((IData)(vlTOPp->base_iq_valid) 
				& (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready))));
	vcdp->fullBit  (c+139,((((IData)(vlTOPp->base_iq_valid) 
				 & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready)) 
				| (0U != (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt)))));
	vcdp->fullBit  (c+140,(0U));
	vcdp->fullBus  (c+141,(0U),2);
    }
}
