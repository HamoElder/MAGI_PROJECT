// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCombCDMABench__Syms.h"


//======================

void VCombCDMABench::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCombCDMABench::traceInit, &VCombCDMABench::traceFull, &VCombCDMABench::traceChg, this);
}
void VCombCDMABench::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCombCDMABench* t=(VCombCDMABench*)userthis;
    VCombCDMABench__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCombCDMABench::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCombCDMABench* t=(VCombCDMABench*)userthis;
    VCombCDMABench__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCombCDMABench::traceInitThis(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
	vlTOPp->traceInitThis__3(vlSymsp, vcdp, code);
    }
}

void VCombCDMABench::traceFullThis(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceFullThis__7(vlSymsp, vcdp, code);
	vlTOPp->traceFullThis__12(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCombCDMABench::traceInitThis__1(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+369,"axil4Ctrl_spread_aw_valid",-1);
	vcdp->declBit  (c+370,"axil4Ctrl_spread_aw_ready",-1);
	vcdp->declBus  (c+371,"axil4Ctrl_spread_aw_payload_addr",-1,7,0);
	vcdp->declBus  (c+372,"axil4Ctrl_spread_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+373,"axil4Ctrl_spread_w_valid",-1);
	vcdp->declBit  (c+374,"axil4Ctrl_spread_w_ready",-1);
	vcdp->declBus  (c+375,"axil4Ctrl_spread_w_payload_data",-1,31,0);
	vcdp->declBus  (c+376,"axil4Ctrl_spread_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+377,"axil4Ctrl_spread_b_valid",-1);
	vcdp->declBit  (c+378,"axil4Ctrl_spread_b_ready",-1);
	vcdp->declBus  (c+379,"axil4Ctrl_spread_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+380,"axil4Ctrl_spread_ar_valid",-1);
	vcdp->declBit  (c+381,"axil4Ctrl_spread_ar_ready",-1);
	vcdp->declBus  (c+382,"axil4Ctrl_spread_ar_payload_addr",-1,7,0);
	vcdp->declBus  (c+383,"axil4Ctrl_spread_ar_payload_prot",-1,2,0);
	vcdp->declBit  (c+384,"axil4Ctrl_spread_r_valid",-1);
	vcdp->declBit  (c+385,"axil4Ctrl_spread_r_ready",-1);
	vcdp->declBus  (c+386,"axil4Ctrl_spread_r_payload_data",-1,31,0);
	vcdp->declBus  (c+387,"axil4Ctrl_spread_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+388,"axil4Ctrl_despread_aw_valid",-1);
	vcdp->declBit  (c+389,"axil4Ctrl_despread_aw_ready",-1);
	vcdp->declBus  (c+390,"axil4Ctrl_despread_aw_payload_addr",-1,7,0);
	vcdp->declBus  (c+391,"axil4Ctrl_despread_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+392,"axil4Ctrl_despread_w_valid",-1);
	vcdp->declBit  (c+393,"axil4Ctrl_despread_w_ready",-1);
	vcdp->declBus  (c+394,"axil4Ctrl_despread_w_payload_data",-1,31,0);
	vcdp->declBus  (c+395,"axil4Ctrl_despread_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+396,"axil4Ctrl_despread_b_valid",-1);
	vcdp->declBit  (c+397,"axil4Ctrl_despread_b_ready",-1);
	vcdp->declBus  (c+398,"axil4Ctrl_despread_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+399,"axil4Ctrl_despread_ar_valid",-1);
	vcdp->declBit  (c+400,"axil4Ctrl_despread_ar_ready",-1);
	vcdp->declBus  (c+401,"axil4Ctrl_despread_ar_payload_addr",-1,7,0);
	vcdp->declBus  (c+402,"axil4Ctrl_despread_ar_payload_prot",-1,2,0);
	vcdp->declBit  (c+403,"axil4Ctrl_despread_r_valid",-1);
	vcdp->declBit  (c+404,"axil4Ctrl_despread_r_ready",-1);
	vcdp->declBus  (c+405,"axil4Ctrl_despread_r_payload_data",-1,31,0);
	vcdp->declBus  (c+406,"axil4Ctrl_despread_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+407,"base_iq_in_valid",-1);
	vcdp->declBit  (c+408,"base_iq_in_ready",-1);
	vcdp->declBus  (c+409,"base_iq_in_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+410,"base_iq_in_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+411,"base_iq_in_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+412,"base_iq_in_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+413,"base_iq_in_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+414,"base_iq_in_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+415,"base_iq_in_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+416,"base_iq_in_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+417,"base_iq_in_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+418,"base_iq_in_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+419,"base_iq_in_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+420,"base_iq_in_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+421,"base_iq_in_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+422,"base_iq_in_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+423,"base_iq_in_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+424,"base_iq_in_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+425,"base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+426,"base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+427,"base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+428,"base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+429,"base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+430,"base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+431,"base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+432,"base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+433,"base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+434,"base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+435,"base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+436,"base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+437,"base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+438,"base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+439,"base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+440,"base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+441,"base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+442,"base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+443,"base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+444,"base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+445,"base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+446,"base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+447,"base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+448,"base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"rf_clk",-1);
	vcdp->declBit  (c+450,"rf_resetn",-1);
	vcdp->declBit  (c+451,"clk",-1);
	vcdp->declBit  (c+452,"reset",-1);
	vcdp->declBit  (c+369,"CombCDMABench axil4Ctrl_spread_aw_valid",-1);
	vcdp->declBit  (c+370,"CombCDMABench axil4Ctrl_spread_aw_ready",-1);
	vcdp->declBus  (c+371,"CombCDMABench axil4Ctrl_spread_aw_payload_addr",-1,7,0);
	vcdp->declBus  (c+372,"CombCDMABench axil4Ctrl_spread_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+373,"CombCDMABench axil4Ctrl_spread_w_valid",-1);
	vcdp->declBit  (c+374,"CombCDMABench axil4Ctrl_spread_w_ready",-1);
	vcdp->declBus  (c+375,"CombCDMABench axil4Ctrl_spread_w_payload_data",-1,31,0);
	vcdp->declBus  (c+376,"CombCDMABench axil4Ctrl_spread_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+377,"CombCDMABench axil4Ctrl_spread_b_valid",-1);
	vcdp->declBit  (c+378,"CombCDMABench axil4Ctrl_spread_b_ready",-1);
	vcdp->declBus  (c+379,"CombCDMABench axil4Ctrl_spread_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+380,"CombCDMABench axil4Ctrl_spread_ar_valid",-1);
	vcdp->declBit  (c+381,"CombCDMABench axil4Ctrl_spread_ar_ready",-1);
	vcdp->declBus  (c+382,"CombCDMABench axil4Ctrl_spread_ar_payload_addr",-1,7,0);
	vcdp->declBus  (c+383,"CombCDMABench axil4Ctrl_spread_ar_payload_prot",-1,2,0);
	vcdp->declBit  (c+384,"CombCDMABench axil4Ctrl_spread_r_valid",-1);
	vcdp->declBit  (c+385,"CombCDMABench axil4Ctrl_spread_r_ready",-1);
	vcdp->declBus  (c+386,"CombCDMABench axil4Ctrl_spread_r_payload_data",-1,31,0);
	vcdp->declBus  (c+387,"CombCDMABench axil4Ctrl_spread_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+388,"CombCDMABench axil4Ctrl_despread_aw_valid",-1);
	vcdp->declBit  (c+389,"CombCDMABench axil4Ctrl_despread_aw_ready",-1);
	vcdp->declBus  (c+390,"CombCDMABench axil4Ctrl_despread_aw_payload_addr",-1,7,0);
	vcdp->declBus  (c+391,"CombCDMABench axil4Ctrl_despread_aw_payload_prot",-1,2,0);
	vcdp->declBit  (c+392,"CombCDMABench axil4Ctrl_despread_w_valid",-1);
	vcdp->declBit  (c+393,"CombCDMABench axil4Ctrl_despread_w_ready",-1);
	vcdp->declBus  (c+394,"CombCDMABench axil4Ctrl_despread_w_payload_data",-1,31,0);
	vcdp->declBus  (c+395,"CombCDMABench axil4Ctrl_despread_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+396,"CombCDMABench axil4Ctrl_despread_b_valid",-1);
	vcdp->declBit  (c+397,"CombCDMABench axil4Ctrl_despread_b_ready",-1);
	vcdp->declBus  (c+398,"CombCDMABench axil4Ctrl_despread_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+399,"CombCDMABench axil4Ctrl_despread_ar_valid",-1);
	vcdp->declBit  (c+400,"CombCDMABench axil4Ctrl_despread_ar_ready",-1);
	vcdp->declBus  (c+401,"CombCDMABench axil4Ctrl_despread_ar_payload_addr",-1,7,0);
	vcdp->declBus  (c+402,"CombCDMABench axil4Ctrl_despread_ar_payload_prot",-1,2,0);
	vcdp->declBit  (c+403,"CombCDMABench axil4Ctrl_despread_r_valid",-1);
	vcdp->declBit  (c+404,"CombCDMABench axil4Ctrl_despread_r_ready",-1);
	vcdp->declBus  (c+405,"CombCDMABench axil4Ctrl_despread_r_payload_data",-1,31,0);
	vcdp->declBus  (c+406,"CombCDMABench axil4Ctrl_despread_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+407,"CombCDMABench base_iq_in_valid",-1);
	vcdp->declBit  (c+408,"CombCDMABench base_iq_in_ready",-1);
	vcdp->declBus  (c+409,"CombCDMABench base_iq_in_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+410,"CombCDMABench base_iq_in_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+411,"CombCDMABench base_iq_in_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+412,"CombCDMABench base_iq_in_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+413,"CombCDMABench base_iq_in_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+414,"CombCDMABench base_iq_in_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+415,"CombCDMABench base_iq_in_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+416,"CombCDMABench base_iq_in_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+417,"CombCDMABench base_iq_in_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+418,"CombCDMABench base_iq_in_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+419,"CombCDMABench base_iq_in_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+420,"CombCDMABench base_iq_in_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+421,"CombCDMABench base_iq_in_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+422,"CombCDMABench base_iq_in_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+423,"CombCDMABench base_iq_in_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+424,"CombCDMABench base_iq_in_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+425,"CombCDMABench base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+426,"CombCDMABench base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+427,"CombCDMABench base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+428,"CombCDMABench base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+429,"CombCDMABench base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+430,"CombCDMABench base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+431,"CombCDMABench base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+432,"CombCDMABench base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+433,"CombCDMABench base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+434,"CombCDMABench base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+435,"CombCDMABench base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+436,"CombCDMABench base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+437,"CombCDMABench base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+438,"CombCDMABench base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+439,"CombCDMABench base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+440,"CombCDMABench base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+441,"CombCDMABench base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+442,"CombCDMABench base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+443,"CombCDMABench base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+444,"CombCDMABench base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+445,"CombCDMABench base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+446,"CombCDMABench base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+447,"CombCDMABench base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+448,"CombCDMABench base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench rf_resetn",-1);
	vcdp->declBit  (c+451,"CombCDMABench clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench reset",-1);
	vcdp->declBit  (c+31,"CombCDMABench cdma_spread_axil4Ctrl_awready",-1);
	vcdp->declBit  (c+31,"CombCDMABench cdma_spread_axil4Ctrl_wready",-1);
	vcdp->declBit  (c+353,"CombCDMABench cdma_spread_axil4Ctrl_bvalid",-1);
	vcdp->declBus  (c+335,"CombCDMABench cdma_spread_axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+32,"CombCDMABench cdma_spread_axil4Ctrl_arready",-1);
	vcdp->declBit  (c+354,"CombCDMABench cdma_spread_axil4Ctrl_rvalid",-1);
	vcdp->declBus  (c+29,"CombCDMABench cdma_spread_axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+457,"CombCDMABench cdma_spread_axil4Ctrl_rresp",-1,1,0);
	vcdp->declBit  (c+1,"CombCDMABench cdma_spread_base_iq_ready",-1);
	vcdp->declBit  (c+2,"CombCDMABench cdma_spread_mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_spread_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_spread_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+33,"CombCDMABench cdma_despread_axil4Ctrl_awready",-1);
	vcdp->declBit  (c+33,"CombCDMABench cdma_despread_axil4Ctrl_wready",-1);
	vcdp->declBit  (c+355,"CombCDMABench cdma_despread_axil4Ctrl_bvalid",-1);
	vcdp->declBus  (c+336,"CombCDMABench cdma_despread_axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+34,"CombCDMABench cdma_despread_axil4Ctrl_arready",-1);
	vcdp->declBit  (c+356,"CombCDMABench cdma_despread_axil4Ctrl_rvalid",-1);
	vcdp->declBus  (c+30,"CombCDMABench cdma_despread_axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+457,"CombCDMABench cdma_despread_axil4Ctrl_rresp",-1,1,0);
	vcdp->declBit  (c+71,"CombCDMABench cdma_despread_mod_iq_ready",-1);
	vcdp->declBit  (c+72,"CombCDMABench cdma_despread_base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+73,"CombCDMABench cdma_despread_base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"CombCDMABench cdma_despread_base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"CombCDMABench cdma_despread_base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+76,"CombCDMABench cdma_despread_base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"CombCDMABench cdma_despread_base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"CombCDMABench cdma_despread_base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+79,"CombCDMABench cdma_despread_base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+80,"CombCDMABench cdma_despread_base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+81,"CombCDMABench cdma_despread_base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+82,"CombCDMABench cdma_despread_base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+83,"CombCDMABench cdma_despread_base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+84,"CombCDMABench cdma_despread_base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+85,"CombCDMABench cdma_despread_base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+86,"CombCDMABench cdma_despread_base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+87,"CombCDMABench cdma_despread_base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+88,"CombCDMABench cdma_despread_base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+89,"CombCDMABench cdma_despread_base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+90,"CombCDMABench cdma_despread_base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+91,"CombCDMABench cdma_despread_base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+92,"CombCDMABench cdma_despread_base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+93,"CombCDMABench cdma_despread_base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+94,"CombCDMABench cdma_despread_base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+95,"CombCDMABench cdma_despread_base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+369,"CombCDMABench cdma_spread axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+31,"CombCDMABench cdma_spread axil4Ctrl_awready",-1);
	vcdp->declBus  (c+371,"CombCDMABench cdma_spread axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+372,"CombCDMABench cdma_spread axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+373,"CombCDMABench cdma_spread axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+31,"CombCDMABench cdma_spread axil4Ctrl_wready",-1);
	vcdp->declBus  (c+375,"CombCDMABench cdma_spread axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+376,"CombCDMABench cdma_spread axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+353,"CombCDMABench cdma_spread axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+378,"CombCDMABench cdma_spread axil4Ctrl_bready",-1);
	vcdp->declBus  (c+335,"CombCDMABench cdma_spread axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+380,"CombCDMABench cdma_spread axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+32,"CombCDMABench cdma_spread axil4Ctrl_arready",-1);
	vcdp->declBus  (c+382,"CombCDMABench cdma_spread axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+383,"CombCDMABench cdma_spread axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+354,"CombCDMABench cdma_spread axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+385,"CombCDMABench cdma_spread axil4Ctrl_rready",-1);
	vcdp->declBus  (c+29,"CombCDMABench cdma_spread axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+457,"CombCDMABench cdma_spread axil4Ctrl_rresp",-1,1,0);
	vcdp->declBit  (c+407,"CombCDMABench cdma_spread base_iq_valid",-1);
	vcdp->declBit  (c+1,"CombCDMABench cdma_spread base_iq_ready",-1);
	vcdp->declBus  (c+409,"CombCDMABench cdma_spread base_iq_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+410,"CombCDMABench cdma_spread base_iq_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+411,"CombCDMABench cdma_spread base_iq_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+412,"CombCDMABench cdma_spread base_iq_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+413,"CombCDMABench cdma_spread base_iq_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+414,"CombCDMABench cdma_spread base_iq_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+415,"CombCDMABench cdma_spread base_iq_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+416,"CombCDMABench cdma_spread base_iq_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+417,"CombCDMABench cdma_spread base_iq_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+418,"CombCDMABench cdma_spread base_iq_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+419,"CombCDMABench cdma_spread base_iq_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+420,"CombCDMABench cdma_spread base_iq_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+421,"CombCDMABench cdma_spread base_iq_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+422,"CombCDMABench cdma_spread base_iq_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+423,"CombCDMABench cdma_spread base_iq_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+424,"CombCDMABench cdma_spread base_iq_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_spread mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_spread mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_spread mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rf_resetn",-1);
	vcdp->declBit  (c+451,"CombCDMABench cdma_spread clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_spread reset",-1);
	vcdp->declBit  (c+1,"CombCDMABench cdma_spread rfClockArea_cdma_spread_base_iq_ready",-1);
	vcdp->declBit  (c+96,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+97,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+98,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+99,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+100,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+101,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+102,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+103,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+104,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+105,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+106,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+107,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+108,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+109,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+110,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+111,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+112,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+113,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+114,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+115,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+116,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+117,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+118,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+119,"CombCDMABench cdma_spread rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum_mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+120,"CombCDMABench cdma_spread clkCrossing_10_dataOut",-1);
	vcdp->declBit  (c+121,"CombCDMABench cdma_spread clkCrossing_11_dataOut",-1);
	vcdp->declBus  (c+122,"CombCDMABench cdma_spread clkCrossing_12_dataOut",-1,2,0);
	vcdp->declBus  (c+123,"CombCDMABench cdma_spread clkCrossing_13_dataOut",-1,7,0);
	vcdp->declBus  (c+124,"CombCDMABench cdma_spread clkCrossing_14_dataOut",-1,2,0);
	vcdp->declBit  (c+458,"CombCDMABench cdma_spread readHaltRequest",-1);
	vcdp->declBit  (c+458,"CombCDMABench cdma_spread writeHaltRequest",-1);
	vcdp->declBit  (c+35,"CombCDMABench cdma_spread writeJoinEvent_valid",-1);
	vcdp->declBit  (c+36,"CombCDMABench cdma_spread writeJoinEvent_ready",-1);
	vcdp->declBit  (c+31,"CombCDMABench cdma_spread writeJoinEvent_fire",-1);
	vcdp->declBus  (c+457,"CombCDMABench cdma_spread writeRsp_resp",-1,1,0);
	vcdp->declBit  (c+35,"CombCDMABench cdma_spread writeJoinEvent_translated_valid",-1);
	vcdp->declBit  (c+36,"CombCDMABench cdma_spread writeJoinEvent_translated_ready",-1);
	vcdp->declBus  (c+457,"CombCDMABench cdma_spread writeJoinEvent_translated_payload_resp",-1,1,0);
	// Tracing: CombCDMABench cdma_spread _zz_axil4Ctrl_bvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:704
	// Tracing: CombCDMABench cdma_spread _zz_writeJoinEvent_translated_ready // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:705
	// Tracing: CombCDMABench cdma_spread _zz_axil4Ctrl_bvalid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:706
	// Tracing: CombCDMABench cdma_spread _zz_axil4Ctrl_bvalid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:707
	// Tracing: CombCDMABench cdma_spread _zz_axil4Ctrl_bresp // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:708
	vcdp->declBit  (c+357,"CombCDMABench cdma_spread when_Stream_l342",-1);
	vcdp->declBit  (c+354,"CombCDMABench cdma_spread axil4Ctrl_ar_readDataStage_valid",-1);
	vcdp->declBit  (c+385,"CombCDMABench cdma_spread axil4Ctrl_ar_readDataStage_ready",-1);
	vcdp->declBus  (c+337,"CombCDMABench cdma_spread axil4Ctrl_ar_readDataStage_payload_addr",-1,7,0);
	vcdp->declBus  (c+338,"CombCDMABench cdma_spread axil4Ctrl_ar_readDataStage_payload_prot",-1,2,0);
	vcdp->declBit  (c+354,"CombCDMABench cdma_spread axil4Ctrl_ar_rValid",-1);
	vcdp->declBus  (c+337,"CombCDMABench cdma_spread axil4Ctrl_ar_rData_addr",-1,7,0);
	vcdp->declBus  (c+338,"CombCDMABench cdma_spread axil4Ctrl_ar_rData_prot",-1,2,0);
	vcdp->declBit  (c+358,"CombCDMABench cdma_spread when_Stream_l342_1",-1);
	vcdp->declBus  (c+29,"CombCDMABench cdma_spread readRsp_data",-1,31,0);
	vcdp->declBus  (c+457,"CombCDMABench cdma_spread readRsp_resp",-1,1,0);
	// Tracing: CombCDMABench cdma_spread _zz_axil4Ctrl_rvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:720
	vcdp->declBit  (c+31,"CombCDMABench cdma_spread writeOccur",-1);
	vcdp->declBit  (c+453,"CombCDMABench cdma_spread readOccur",-1);
	vcdp->declBit  (c+359,"CombCDMABench cdma_spread cdma_spread_bridge_clc",-1);
	vcdp->declBit  (c+359,"CombCDMABench cdma_spread cdma_spread_bridge_clc_driver",-1);
	// Tracing: CombCDMABench cdma_spread _zz_dataIn // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:725
	// Tracing: CombCDMABench cdma_spread _zz_dataIn_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:726
	// Tracing: CombCDMABench cdma_spread _zz_dataIn_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:727
	// Tracing: CombCDMABench cdma_spread _zz_dataIn_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:728
	vcdp->declBit  (c+121,"CombCDMABench cdma_spread rfClockArea_cdma_spread w_en",-1);
	vcdp->declBus  (c+122,"CombCDMABench cdma_spread rfClockArea_cdma_spread w_addr",-1,2,0);
	vcdp->declBus  (c+123,"CombCDMABench cdma_spread rfClockArea_cdma_spread w_data",-1,7,0);
	vcdp->declBit  (c+120,"CombCDMABench cdma_spread rfClockArea_cdma_spread clc",-1);
	vcdp->declBus  (c+124,"CombCDMABench cdma_spread rfClockArea_cdma_spread cnt_limit",-1,2,0);
	vcdp->declBit  (c+407,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_valid",-1);
	vcdp->declBit  (c+1,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_ready",-1);
	vcdp->declBus  (c+409,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+410,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+411,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+412,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+413,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+414,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+415,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+416,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+417,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+418,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+419,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+420,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+421,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+422,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+423,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+424,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+96,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+97,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+98,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+99,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+100,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+101,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+102,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+103,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+104,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+105,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+106,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+107,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+108,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+109,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+110,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+111,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+112,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+113,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+114,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+115,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+116,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+117,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+118,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+119,"CombCDMABench cdma_spread rfClockArea_cdma_spread mod_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_map_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1516
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_map_port1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1517
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_map_port2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1518
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_map_port3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1519
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_map_port4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1520
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_map_port5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1521
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_map_port6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1522
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_map_port7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1523
	vcdp->declBit  (c+96,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16_mod_iq_valid",-1);
	vcdp->declBus  (c+97,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+98,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+99,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17_mod_iq_valid",-1);
	vcdp->declBus  (c+100,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+101,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+102,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18_mod_iq_valid",-1);
	vcdp->declBus  (c+103,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+104,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+105,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19_mod_iq_valid",-1);
	vcdp->declBus  (c+106,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+107,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+108,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20_mod_iq_valid",-1);
	vcdp->declBus  (c+109,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+110,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+111,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21_mod_iq_valid",-1);
	vcdp->declBus  (c+112,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+113,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+114,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22_mod_iq_valid",-1);
	vcdp->declBus  (c+115,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+116,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+117,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23_mod_iq_valid",-1);
	vcdp->declBus  (c+118,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+119,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23_mod_iq_payload_cha_q",-1,15,0);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1548
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1549
	vcdp->declBus  (c+125,"CombCDMABench cdma_spread rfClockArea_cdma_spread cnt",-1,2,0);
	vcdp->declBus  (c+126,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_0_cha_i",-1,15,0);
	vcdp->declBus  (c+127,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_0_cha_q",-1,15,0);
	vcdp->declBus  (c+128,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_1_cha_i",-1,15,0);
	vcdp->declBus  (c+129,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_1_cha_q",-1,15,0);
	vcdp->declBus  (c+130,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_2_cha_i",-1,15,0);
	vcdp->declBus  (c+131,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_2_cha_q",-1,15,0);
	vcdp->declBus  (c+132,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_3_cha_i",-1,15,0);
	vcdp->declBus  (c+133,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_3_cha_q",-1,15,0);
	vcdp->declBus  (c+134,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_4_cha_i",-1,15,0);
	vcdp->declBus  (c+135,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_4_cha_q",-1,15,0);
	vcdp->declBus  (c+136,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_5_cha_i",-1,15,0);
	vcdp->declBus  (c+137,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_5_cha_q",-1,15,0);
	vcdp->declBus  (c+138,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_6_cha_i",-1,15,0);
	vcdp->declBus  (c+139,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_6_cha_q",-1,15,0);
	vcdp->declBus  (c+140,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_7_cha_i",-1,15,0);
	vcdp->declBus  (c+141,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_data_vec_7_cha_q",-1,15,0);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread flow_iq_valid",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1568
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1569
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1570
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1571
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1572
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1573
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1574
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread _zz_code_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1575
	vcdp->declBit  (c+454,"CombCDMABench cdma_spread rfClockArea_cdma_spread base_iq_fire",-1);
	vcdp->declBit  (c+455,"CombCDMABench cdma_spread rfClockArea_cdma_spread when_CDMASpreading_l51",-1);
	vcdp->declBit  (c+143,"CombCDMABench cdma_spread rfClockArea_cdma_spread when_CDMASpreading_l65",-1);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+5+i*1,"CombCDMABench cdma_spread rfClockArea_cdma_spread code_map",(i+0),7,0);}}
	vcdp->declBit  (c+144,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 code",-1);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 base_iq_valid",-1);
	vcdp->declBus  (c+126,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+127,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+96,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 mod_iq_valid",-1);
	vcdp->declBus  (c+97,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+98,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1903
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1904
	vcdp->declBus  (c+97,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 mod_i",-1,15,0);
	vcdp->declBus  (c+98,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 mod_q",-1,15,0);
	vcdp->declBit  (c+96,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_16 mod_valid",-1);
	vcdp->declBit  (c+145,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 code",-1);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 base_iq_valid",-1);
	vcdp->declBus  (c+128,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+129,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+99,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 mod_iq_valid",-1);
	vcdp->declBus  (c+100,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+101,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1903
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1904
	vcdp->declBus  (c+100,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 mod_i",-1,15,0);
	vcdp->declBus  (c+101,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 mod_q",-1,15,0);
	vcdp->declBit  (c+99,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_17 mod_valid",-1);
	vcdp->declBit  (c+146,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 code",-1);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 base_iq_valid",-1);
	vcdp->declBus  (c+130,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+131,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+102,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 mod_iq_valid",-1);
	vcdp->declBus  (c+103,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+104,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1903
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1904
	vcdp->declBus  (c+103,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 mod_i",-1,15,0);
	vcdp->declBus  (c+104,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 mod_q",-1,15,0);
	vcdp->declBit  (c+102,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_18 mod_valid",-1);
	vcdp->declBit  (c+147,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 code",-1);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 base_iq_valid",-1);
	vcdp->declBus  (c+132,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+133,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+105,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 mod_iq_valid",-1);
	vcdp->declBus  (c+106,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+107,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1903
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1904
	vcdp->declBus  (c+106,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 mod_i",-1,15,0);
	vcdp->declBus  (c+107,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 mod_q",-1,15,0);
	vcdp->declBit  (c+105,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_19 mod_valid",-1);
	vcdp->declBit  (c+148,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 code",-1);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 base_iq_valid",-1);
	vcdp->declBus  (c+134,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+135,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+108,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 mod_iq_valid",-1);
	vcdp->declBus  (c+109,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+110,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1903
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1904
	vcdp->declBus  (c+109,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 mod_i",-1,15,0);
	vcdp->declBus  (c+110,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 mod_q",-1,15,0);
	vcdp->declBit  (c+108,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_20 mod_valid",-1);
	vcdp->declBit  (c+149,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 code",-1);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 base_iq_valid",-1);
	vcdp->declBus  (c+136,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+137,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+111,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 mod_iq_valid",-1);
	vcdp->declBus  (c+112,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+113,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1903
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1904
	vcdp->declBus  (c+112,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 mod_i",-1,15,0);
	vcdp->declBus  (c+113,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 mod_q",-1,15,0);
	vcdp->declBit  (c+111,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_21 mod_valid",-1);
	vcdp->declBit  (c+150,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 code",-1);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 base_iq_valid",-1);
	vcdp->declBus  (c+138,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+139,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+114,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 mod_iq_valid",-1);
	vcdp->declBus  (c+115,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+116,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1903
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1904
	vcdp->declBus  (c+115,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 mod_i",-1,15,0);
	vcdp->declBus  (c+116,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 mod_q",-1,15,0);
	vcdp->declBit  (c+114,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_22 mod_valid",-1);
	vcdp->declBit  (c+151,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 code",-1);
	vcdp->declBit  (c+142,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 base_iq_valid",-1);
	vcdp->declBus  (c+140,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+141,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+117,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 mod_iq_valid",-1);
	vcdp->declBus  (c+118,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+119,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 rf_clk",-1);
    }
}

void VCombCDMABench::traceInitThis__2(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 rf_resetn",-1);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1903
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1904
	vcdp->declBus  (c+118,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 mod_i",-1,15,0);
	vcdp->declBus  (c+119,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 mod_q",-1,15,0);
	vcdp->declBit  (c+117,"CombCDMABench cdma_spread rfClockArea_cdma_spread computeUnit_23 mod_valid",-1);
	vcdp->declBit  (c+96,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+97,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+98,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+99,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+100,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+101,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+102,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+103,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+104,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+105,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+106,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+107,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+108,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+109,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+110,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+111,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+112,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+113,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+114,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+115,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+116,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+117,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+118,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+119,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum mod_iq_payload_cha_q",-1,15,0);
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_i_data_vec_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1354
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_q_data_vec_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1355
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_i_data_vec_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1356
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_q_data_vec_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1357
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_i_data_vec_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1358
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_q_data_vec_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1359
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_i_data_vec_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1360
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_q_data_vec_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1361
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_i_data_vec_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1362
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_q_data_vec_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1363
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_i_data_vec_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1364
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_q_data_vec_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1365
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_i_data_vec_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1366
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_q_data_vec_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1367
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_i_data_vec_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1368
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_sub_q_data_vec_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1369
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1370
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1371
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1372
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1373
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1374
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_i_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1375
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1376
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1377
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1378
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1379
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1380
	// Tracing: CombCDMABench cdma_spread rfClockArea_cdma_code_sum _zz_mod_iq_payload_cha_q_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1381
	vcdp->declBus  (c+152,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_i_data_vec_0",-1,15,0);
	vcdp->declBus  (c+153,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_i_data_vec_1",-1,15,0);
	vcdp->declBus  (c+154,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_i_data_vec_2",-1,15,0);
	vcdp->declBus  (c+155,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_i_data_vec_3",-1,15,0);
	vcdp->declBus  (c+156,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_i_data_vec_4",-1,15,0);
	vcdp->declBus  (c+157,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_i_data_vec_5",-1,15,0);
	vcdp->declBus  (c+158,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_i_data_vec_6",-1,15,0);
	vcdp->declBus  (c+159,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_i_data_vec_7",-1,15,0);
	vcdp->declBus  (c+160,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_q_data_vec_0",-1,15,0);
	vcdp->declBus  (c+161,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_q_data_vec_1",-1,15,0);
	vcdp->declBus  (c+162,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_q_data_vec_2",-1,15,0);
	vcdp->declBus  (c+163,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_q_data_vec_3",-1,15,0);
	vcdp->declBus  (c+164,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_q_data_vec_4",-1,15,0);
	vcdp->declBus  (c+165,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_q_data_vec_5",-1,15,0);
	vcdp->declBus  (c+166,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_q_data_vec_6",-1,15,0);
	vcdp->declBus  (c+167,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_q_data_vec_7",-1,15,0);
	vcdp->declBit  (c+96,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_iqs_valid_vec_0",-1);
	vcdp->declBit  (c+99,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_iqs_valid_vec_1",-1);
	vcdp->declBit  (c+102,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_iqs_valid_vec_2",-1);
	vcdp->declBit  (c+105,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_iqs_valid_vec_3",-1);
	vcdp->declBit  (c+108,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_iqs_valid_vec_4",-1);
	vcdp->declBit  (c+111,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_iqs_valid_vec_5",-1);
	vcdp->declBit  (c+114,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_iqs_valid_vec_6",-1);
	vcdp->declBit  (c+117,"CombCDMABench cdma_spread rfClockArea_cdma_code_sum sub_iqs_valid_vec_7",-1);
	vcdp->declBit  (c+359,"CombCDMABench cdma_spread clkCrossing_10 dataIn",-1);
	vcdp->declBit  (c+120,"CombCDMABench cdma_spread clkCrossing_10 dataOut",-1);
	vcdp->declBit  (c+451,"CombCDMABench cdma_spread clkCrossing_10 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_spread clkCrossing_10 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread clkCrossing_10 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread clkCrossing_10 rf_resetn",-1);
	vcdp->declBit  (c+339,"CombCDMABench cdma_spread clkCrossing_10 area_clkI_reg",-1);
	vcdp->declBit  (c+168,"CombCDMABench cdma_spread clkCrossing_10 area_clkO_buf0",-1);
	vcdp->declBit  (c+120,"CombCDMABench cdma_spread clkCrossing_10 area_clkO_buf1",-1);
	vcdp->declBit  (c+360,"CombCDMABench cdma_spread clkCrossing_11 dataIn",-1);
	vcdp->declBit  (c+121,"CombCDMABench cdma_spread clkCrossing_11 dataOut",-1);
	vcdp->declBit  (c+451,"CombCDMABench cdma_spread clkCrossing_11 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_spread clkCrossing_11 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread clkCrossing_11 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread clkCrossing_11 rf_resetn",-1);
	vcdp->declBit  (c+340,"CombCDMABench cdma_spread clkCrossing_11 area_clkI_reg",-1);
	vcdp->declBit  (c+169,"CombCDMABench cdma_spread clkCrossing_11 area_clkO_buf0",-1);
	vcdp->declBit  (c+121,"CombCDMABench cdma_spread clkCrossing_11 area_clkO_buf1",-1);
	vcdp->declBus  (c+361,"CombCDMABench cdma_spread clkCrossing_12 dataIn",-1,2,0);
	vcdp->declBus  (c+122,"CombCDMABench cdma_spread clkCrossing_12 dataOut",-1,2,0);
	vcdp->declBit  (c+451,"CombCDMABench cdma_spread clkCrossing_12 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_spread clkCrossing_12 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread clkCrossing_12 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread clkCrossing_12 rf_resetn",-1);
	vcdp->declBus  (c+341,"CombCDMABench cdma_spread clkCrossing_12 area_clkI_reg",-1,2,0);
	vcdp->declBus  (c+170,"CombCDMABench cdma_spread clkCrossing_12 area_clkO_buf0",-1,2,0);
	vcdp->declBus  (c+122,"CombCDMABench cdma_spread clkCrossing_12 area_clkO_buf1",-1,2,0);
	vcdp->declBus  (c+362,"CombCDMABench cdma_spread clkCrossing_13 dataIn",-1,7,0);
	vcdp->declBus  (c+123,"CombCDMABench cdma_spread clkCrossing_13 dataOut",-1,7,0);
	vcdp->declBit  (c+451,"CombCDMABench cdma_spread clkCrossing_13 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_spread clkCrossing_13 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread clkCrossing_13 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread clkCrossing_13 rf_resetn",-1);
	vcdp->declBus  (c+342,"CombCDMABench cdma_spread clkCrossing_13 area_clkI_reg",-1,7,0);
	vcdp->declBus  (c+171,"CombCDMABench cdma_spread clkCrossing_13 area_clkO_buf0",-1,7,0);
	vcdp->declBus  (c+123,"CombCDMABench cdma_spread clkCrossing_13 area_clkO_buf1",-1,7,0);
	vcdp->declBus  (c+343,"CombCDMABench cdma_spread clkCrossing_14 dataIn",-1,2,0);
	vcdp->declBus  (c+124,"CombCDMABench cdma_spread clkCrossing_14 dataOut",-1,2,0);
	vcdp->declBit  (c+451,"CombCDMABench cdma_spread clkCrossing_14 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_spread clkCrossing_14 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_spread clkCrossing_14 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_spread clkCrossing_14 rf_resetn",-1);
	vcdp->declBus  (c+344,"CombCDMABench cdma_spread clkCrossing_14 area_clkI_reg",-1,2,0);
	vcdp->declBus  (c+172,"CombCDMABench cdma_spread clkCrossing_14 area_clkO_buf0",-1,2,0);
	vcdp->declBus  (c+124,"CombCDMABench cdma_spread clkCrossing_14 area_clkO_buf1",-1,2,0);
	vcdp->declBit  (c+388,"CombCDMABench cdma_despread axil4Ctrl_awvalid",-1);
	vcdp->declBit  (c+33,"CombCDMABench cdma_despread axil4Ctrl_awready",-1);
	vcdp->declBus  (c+390,"CombCDMABench cdma_despread axil4Ctrl_awaddr",-1,7,0);
	vcdp->declBus  (c+391,"CombCDMABench cdma_despread axil4Ctrl_awprot",-1,2,0);
	vcdp->declBit  (c+392,"CombCDMABench cdma_despread axil4Ctrl_wvalid",-1);
	vcdp->declBit  (c+33,"CombCDMABench cdma_despread axil4Ctrl_wready",-1);
	vcdp->declBus  (c+394,"CombCDMABench cdma_despread axil4Ctrl_wdata",-1,31,0);
	vcdp->declBus  (c+395,"CombCDMABench cdma_despread axil4Ctrl_wstrb",-1,3,0);
	vcdp->declBit  (c+355,"CombCDMABench cdma_despread axil4Ctrl_bvalid",-1);
	vcdp->declBit  (c+397,"CombCDMABench cdma_despread axil4Ctrl_bready",-1);
	vcdp->declBus  (c+336,"CombCDMABench cdma_despread axil4Ctrl_bresp",-1,1,0);
	vcdp->declBit  (c+399,"CombCDMABench cdma_despread axil4Ctrl_arvalid",-1);
	vcdp->declBit  (c+34,"CombCDMABench cdma_despread axil4Ctrl_arready",-1);
	vcdp->declBus  (c+401,"CombCDMABench cdma_despread axil4Ctrl_araddr",-1,7,0);
	vcdp->declBus  (c+402,"CombCDMABench cdma_despread axil4Ctrl_arprot",-1,2,0);
	vcdp->declBit  (c+356,"CombCDMABench cdma_despread axil4Ctrl_rvalid",-1);
	vcdp->declBit  (c+404,"CombCDMABench cdma_despread axil4Ctrl_rready",-1);
	vcdp->declBus  (c+30,"CombCDMABench cdma_despread axil4Ctrl_rdata",-1,31,0);
	vcdp->declBus  (c+457,"CombCDMABench cdma_despread axil4Ctrl_rresp",-1,1,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread mod_iq_valid",-1);
	vcdp->declBit  (c+71,"CombCDMABench cdma_despread mod_iq_ready",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+72,"CombCDMABench cdma_despread base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+73,"CombCDMABench cdma_despread base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"CombCDMABench cdma_despread base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"CombCDMABench cdma_despread base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+76,"CombCDMABench cdma_despread base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"CombCDMABench cdma_despread base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"CombCDMABench cdma_despread base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+79,"CombCDMABench cdma_despread base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+80,"CombCDMABench cdma_despread base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+81,"CombCDMABench cdma_despread base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+82,"CombCDMABench cdma_despread base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+83,"CombCDMABench cdma_despread base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+84,"CombCDMABench cdma_despread base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+85,"CombCDMABench cdma_despread base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+86,"CombCDMABench cdma_despread base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+87,"CombCDMABench cdma_despread base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+88,"CombCDMABench cdma_despread base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+89,"CombCDMABench cdma_despread base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+90,"CombCDMABench cdma_despread base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+91,"CombCDMABench cdma_despread base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+92,"CombCDMABench cdma_despread base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+93,"CombCDMABench cdma_despread base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+94,"CombCDMABench cdma_despread base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+95,"CombCDMABench cdma_despread base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rf_resetn",-1);
	vcdp->declBit  (c+451,"CombCDMABench cdma_despread clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_despread reset",-1);
	vcdp->declBit  (c+71,"CombCDMABench cdma_despread rfClockArea_cdma_despread_mod_iq_ready",-1);
	vcdp->declBit  (c+72,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+73,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+76,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+79,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+80,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+81,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+82,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+83,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+84,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+85,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+86,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+87,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+88,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+89,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+90,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+91,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+92,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+93,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+94,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+95,"CombCDMABench cdma_despread rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread clkCrossing_10_dataOut",-1);
	vcdp->declBit  (c+174,"CombCDMABench cdma_despread clkCrossing_11_dataOut",-1);
	vcdp->declBus  (c+175,"CombCDMABench cdma_despread clkCrossing_12_dataOut",-1,2,0);
	vcdp->declBus  (c+176,"CombCDMABench cdma_despread clkCrossing_13_dataOut",-1,7,0);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread clkCrossing_14_dataOut",-1,2,0);
	vcdp->declBit  (c+458,"CombCDMABench cdma_despread readHaltRequest",-1);
	vcdp->declBit  (c+458,"CombCDMABench cdma_despread writeHaltRequest",-1);
	vcdp->declBit  (c+37,"CombCDMABench cdma_despread writeJoinEvent_valid",-1);
	vcdp->declBit  (c+38,"CombCDMABench cdma_despread writeJoinEvent_ready",-1);
	vcdp->declBit  (c+33,"CombCDMABench cdma_despread writeJoinEvent_fire",-1);
	vcdp->declBus  (c+457,"CombCDMABench cdma_despread writeRsp_resp",-1,1,0);
	vcdp->declBit  (c+37,"CombCDMABench cdma_despread writeJoinEvent_translated_valid",-1);
	vcdp->declBit  (c+38,"CombCDMABench cdma_despread writeJoinEvent_translated_ready",-1);
	vcdp->declBus  (c+457,"CombCDMABench cdma_despread writeJoinEvent_translated_payload_resp",-1,1,0);
	// Tracing: CombCDMABench cdma_despread _zz_axil4Ctrl_bvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:374
	// Tracing: CombCDMABench cdma_despread _zz_writeJoinEvent_translated_ready // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:375
	// Tracing: CombCDMABench cdma_despread _zz_axil4Ctrl_bvalid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:376
	// Tracing: CombCDMABench cdma_despread _zz_axil4Ctrl_bvalid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:377
	// Tracing: CombCDMABench cdma_despread _zz_axil4Ctrl_bresp // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:378
	vcdp->declBit  (c+363,"CombCDMABench cdma_despread when_Stream_l342",-1);
	vcdp->declBit  (c+356,"CombCDMABench cdma_despread axil4Ctrl_ar_readDataStage_valid",-1);
	vcdp->declBit  (c+404,"CombCDMABench cdma_despread axil4Ctrl_ar_readDataStage_ready",-1);
	vcdp->declBus  (c+345,"CombCDMABench cdma_despread axil4Ctrl_ar_readDataStage_payload_addr",-1,7,0);
	vcdp->declBus  (c+346,"CombCDMABench cdma_despread axil4Ctrl_ar_readDataStage_payload_prot",-1,2,0);
	vcdp->declBit  (c+356,"CombCDMABench cdma_despread axil4Ctrl_ar_rValid",-1);
	vcdp->declBus  (c+345,"CombCDMABench cdma_despread axil4Ctrl_ar_rData_addr",-1,7,0);
	vcdp->declBus  (c+346,"CombCDMABench cdma_despread axil4Ctrl_ar_rData_prot",-1,2,0);
	vcdp->declBit  (c+364,"CombCDMABench cdma_despread when_Stream_l342_1",-1);
	vcdp->declBus  (c+30,"CombCDMABench cdma_despread readRsp_data",-1,31,0);
	vcdp->declBus  (c+457,"CombCDMABench cdma_despread readRsp_resp",-1,1,0);
	// Tracing: CombCDMABench cdma_despread _zz_axil4Ctrl_rvalid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:390
	vcdp->declBit  (c+33,"CombCDMABench cdma_despread writeOccur",-1);
	vcdp->declBit  (c+456,"CombCDMABench cdma_despread readOccur",-1);
	vcdp->declBit  (c+365,"CombCDMABench cdma_despread cdma_spread_bridge_clc",-1);
	vcdp->declBit  (c+365,"CombCDMABench cdma_despread cdma_spread_bridge_clc_driver",-1);
	// Tracing: CombCDMABench cdma_despread _zz_dataIn // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:395
	// Tracing: CombCDMABench cdma_despread _zz_dataIn_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:396
	// Tracing: CombCDMABench cdma_despread _zz_dataIn_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:397
	// Tracing: CombCDMABench cdma_despread _zz_dataIn_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:398
	vcdp->declBit  (c+174,"CombCDMABench cdma_despread rfClockArea_cdma_despread w_en",-1);
	vcdp->declBus  (c+175,"CombCDMABench cdma_despread rfClockArea_cdma_despread w_addr",-1,2,0);
	vcdp->declBus  (c+176,"CombCDMABench cdma_despread rfClockArea_cdma_despread w_data",-1,7,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread cnt_limit",-1,2,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread mod_iq_valid",-1);
	vcdp->declBit  (c+71,"CombCDMABench cdma_despread rfClockArea_cdma_despread mod_iq_ready",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+72,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+73,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+76,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+79,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+80,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+81,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+82,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+83,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+84,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+85,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+86,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+87,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+88,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+89,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+90,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+91,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+92,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+93,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+94,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+95,"CombCDMABench cdma_despread rfClockArea_cdma_despread base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread rf_resetn",-1);
	vcdp->declBus  (c+13,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16_code",-1,7,0);
	vcdp->declBus  (c+14,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17_code",-1,7,0);
	vcdp->declBus  (c+15,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18_code",-1,7,0);
	vcdp->declBus  (c+16,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19_code",-1,7,0);
	vcdp->declBus  (c+17,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20_code",-1,7,0);
	vcdp->declBus  (c+18,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21_code",-1,7,0);
	vcdp->declBus  (c+19,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22_code",-1,7,0);
	vcdp->declBus  (c+20,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23_code",-1,7,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1023
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1024
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1025
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1026
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1027
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1028
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1029
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1030
	vcdp->declBit  (c+72,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16_base_iq_valid",-1);
	vcdp->declBus  (c+73,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17_base_iq_valid",-1);
	vcdp->declBus  (c+76,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18_base_iq_valid",-1);
	vcdp->declBus  (c+79,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+80,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+81,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19_base_iq_valid",-1);
	vcdp->declBus  (c+82,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+83,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+84,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20_base_iq_valid",-1);
	vcdp->declBus  (c+85,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+86,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+87,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21_base_iq_valid",-1);
	vcdp->declBus  (c+88,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+89,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+90,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22_base_iq_valid",-1);
	vcdp->declBus  (c+91,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+92,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+93,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23_base_iq_valid",-1);
	vcdp->declBus  (c+94,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+95,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23_base_iq_payload_cha_q",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1055
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1056
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1057
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1058
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1059
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1060
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1061
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1062
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1063
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1064
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1065
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1066
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1067
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1068
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_map_port_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1069
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_code_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1070
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1071
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+21+i*1,"CombCDMABench cdma_despread rfClockArea_cdma_despread code_map",(i+0),7,0);}}
	vcdp->declBus  (c+13,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 code",-1,7,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+72,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_iq_valid",-1);
	vcdp->declBus  (c+73,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 cnt_limit",-1,2,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 rf_resetn",-1);
	vcdp->declBus  (c+178,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+179,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1801
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1802
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1803
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1804
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1805
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1806
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1807
	vcdp->declBus  (c+180,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_i",-1,15,0);
	vcdp->declBus  (c+181,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_q",-1,15,0);
	vcdp->declBus  (c+182,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 cnt",-1,2,0);
	vcdp->declBus  (c+39,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 data_i",-1,15,0);
	vcdp->declBus  (c+40,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 data_q",-1,15,0);
	vcdp->declBus  (c+41,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_i_next",-1,15,0);
	vcdp->declBus  (c+42,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_q_next",-1,15,0);
	vcdp->declBus  (c+73,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+74,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 base_q_next_regNext",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1817
	vcdp->declBus  (c+39,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+178,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+183,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+184,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+185,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+186,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+187,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+188,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+189,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+178,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+40,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+179,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+190,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+191,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+192,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+193,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+194,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+195,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+196,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+179,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_16 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+14,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 code",-1,7,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+75,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_iq_valid",-1);
	vcdp->declBus  (c+76,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+77,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 cnt_limit",-1,2,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 rf_resetn",-1);
	vcdp->declBus  (c+197,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+198,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1801
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1802
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1803
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1804
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1805
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1806
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1807
	vcdp->declBus  (c+199,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_i",-1,15,0);
	vcdp->declBus  (c+200,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_q",-1,15,0);
	vcdp->declBus  (c+201,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 cnt",-1,2,0);
	vcdp->declBus  (c+43,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 data_i",-1,15,0);
	vcdp->declBus  (c+44,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 data_q",-1,15,0);
	vcdp->declBus  (c+45,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_i_next",-1,15,0);
	vcdp->declBus  (c+46,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_q_next",-1,15,0);
	vcdp->declBus  (c+76,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+77,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 base_q_next_regNext",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1817
	vcdp->declBus  (c+43,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+197,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+202,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+203,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+204,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+205,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+206,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+207,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+208,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+197,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+44,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+198,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+209,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+210,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+211,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+212,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+213,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+214,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+215,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+198,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_17 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+15,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 code",-1,7,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+78,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_iq_valid",-1);
	vcdp->declBus  (c+79,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+80,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 cnt_limit",-1,2,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 rf_resetn",-1);
	vcdp->declBus  (c+216,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+217,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1801
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1802
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1803
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1804
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1805
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1806
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1807
	vcdp->declBus  (c+218,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_i",-1,15,0);
	vcdp->declBus  (c+219,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_q",-1,15,0);
	vcdp->declBus  (c+220,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 cnt",-1,2,0);
	vcdp->declBus  (c+47,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 data_i",-1,15,0);
	vcdp->declBus  (c+48,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 data_q",-1,15,0);
	vcdp->declBus  (c+49,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_i_next",-1,15,0);
	vcdp->declBus  (c+50,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_q_next",-1,15,0);
	vcdp->declBus  (c+79,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+80,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 base_q_next_regNext",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1817
	vcdp->declBus  (c+47,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+216,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+221,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+222,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+223,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+224,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+225,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+226,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+227,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+216,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+48,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+217,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+228,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+229,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+230,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+231,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+232,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+233,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+234,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+217,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_18 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+16,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 code",-1,7,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+81,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_iq_valid",-1);
	vcdp->declBus  (c+82,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+83,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 cnt_limit",-1,2,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 rf_resetn",-1);
	vcdp->declBus  (c+235,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+236,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1801
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1802
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1803
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1804
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1805
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1806
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1807
	vcdp->declBus  (c+237,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_i",-1,15,0);
	vcdp->declBus  (c+238,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_q",-1,15,0);
	vcdp->declBus  (c+239,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 cnt",-1,2,0);
	vcdp->declBus  (c+51,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 data_i",-1,15,0);
	vcdp->declBus  (c+52,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 data_q",-1,15,0);
	vcdp->declBus  (c+53,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_i_next",-1,15,0);
	vcdp->declBus  (c+54,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_q_next",-1,15,0);
	vcdp->declBus  (c+82,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+83,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 base_q_next_regNext",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1817
	vcdp->declBus  (c+51,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+235,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+240,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+241,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+242,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+243,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+244,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+245,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+246,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+235,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+52,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+236,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+247,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+248,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+249,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+250,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+251,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+252,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+253,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+236,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_19 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+17,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 code",-1,7,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+84,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_iq_valid",-1);
	vcdp->declBus  (c+85,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+86,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 cnt_limit",-1,2,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 rf_resetn",-1);
	vcdp->declBus  (c+254,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+255,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1801
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1802
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1803
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1804
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1805
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1806
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1807
	vcdp->declBus  (c+256,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_i",-1,15,0);
	vcdp->declBus  (c+257,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_q",-1,15,0);
	vcdp->declBus  (c+258,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 cnt",-1,2,0);
	vcdp->declBus  (c+55,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 data_i",-1,15,0);
	vcdp->declBus  (c+56,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 data_q",-1,15,0);
	vcdp->declBus  (c+57,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_i_next",-1,15,0);
	vcdp->declBus  (c+58,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_q_next",-1,15,0);
	vcdp->declBus  (c+85,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+86,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 base_q_next_regNext",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1817
	vcdp->declBus  (c+55,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+254,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 rf_resetn",-1);
    }
}

void VCombCDMABench::traceInitThis__3(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+259,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+260,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+261,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+262,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+263,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+264,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+265,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+254,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+56,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+255,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+266,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+267,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+268,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+269,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+270,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+271,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+272,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+255,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_20 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+18,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 code",-1,7,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+87,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_iq_valid",-1);
	vcdp->declBus  (c+88,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+89,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 cnt_limit",-1,2,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 rf_resetn",-1);
	vcdp->declBus  (c+273,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+274,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1801
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1802
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1803
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1804
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1805
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1806
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1807
	vcdp->declBus  (c+275,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_i",-1,15,0);
	vcdp->declBus  (c+276,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_q",-1,15,0);
	vcdp->declBus  (c+277,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 cnt",-1,2,0);
	vcdp->declBus  (c+59,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 data_i",-1,15,0);
	vcdp->declBus  (c+60,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 data_q",-1,15,0);
	vcdp->declBus  (c+61,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_i_next",-1,15,0);
	vcdp->declBus  (c+62,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_q_next",-1,15,0);
	vcdp->declBus  (c+88,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+89,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 base_q_next_regNext",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1817
	vcdp->declBus  (c+59,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+273,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+278,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+279,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+280,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+281,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+282,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+283,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+284,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+273,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+60,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+274,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+285,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+286,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+287,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+288,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+289,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+290,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+291,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+274,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_21 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+19,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 code",-1,7,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+90,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_iq_valid",-1);
	vcdp->declBus  (c+91,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+92,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 cnt_limit",-1,2,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 rf_resetn",-1);
	vcdp->declBus  (c+292,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+293,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1801
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1802
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1803
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1804
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1805
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1806
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1807
	vcdp->declBus  (c+294,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_i",-1,15,0);
	vcdp->declBus  (c+295,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_q",-1,15,0);
	vcdp->declBus  (c+296,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 cnt",-1,2,0);
	vcdp->declBus  (c+63,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 data_i",-1,15,0);
	vcdp->declBus  (c+64,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 data_q",-1,15,0);
	vcdp->declBus  (c+65,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_i_next",-1,15,0);
	vcdp->declBus  (c+66,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_q_next",-1,15,0);
	vcdp->declBus  (c+91,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+92,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 base_q_next_regNext",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1817
	vcdp->declBus  (c+63,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+292,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+297,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+298,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+299,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+300,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+301,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+302,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+303,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+292,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+64,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+293,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+304,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+305,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+306,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+307,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+308,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+309,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+310,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+293,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_22 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+20,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 code",-1,7,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 mod_iq_valid",-1);
	vcdp->declBus  (c+3,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+4,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+93,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_iq_valid",-1);
	vcdp->declBus  (c+94,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+95,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 clc",-1);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 cnt_limit",-1,2,0);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 rf_resetn",-1);
	vcdp->declBus  (c+311,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+312,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1801
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 _zz_data_i_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1802
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1803
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 _zz_data_q_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1804
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1805
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1806
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1807
	vcdp->declBus  (c+313,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_i",-1,15,0);
	vcdp->declBus  (c+314,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_q",-1,15,0);
	vcdp->declBus  (c+315,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 cnt",-1,2,0);
	vcdp->declBus  (c+67,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 data_i",-1,15,0);
	vcdp->declBus  (c+68,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 data_q",-1,15,0);
	vcdp->declBus  (c+69,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_i_next",-1,15,0);
	vcdp->declBus  (c+70,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_q_next",-1,15,0);
	vcdp->declBus  (c+94,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+95,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 base_q_next_regNext",-1,15,0);
	// Tracing: CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CombCDMABench.v:1817
	vcdp->declBus  (c+67,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+311,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 rf_resetn",-1);
	vcdp->declBus  (c+316,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+317,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+318,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+319,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+320,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+321,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+322,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+311,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+68,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+312,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+2,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 rf_resetn",-1);
	vcdp->declBus  (c+323,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+324,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+325,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+326,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+327,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+328,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+329,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+312,"CombCDMABench cdma_despread rfClockArea_cdma_despread computeUnit_23 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBit  (c+365,"CombCDMABench cdma_despread clkCrossing_10 dataIn",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread clkCrossing_10 dataOut",-1);
	vcdp->declBit  (c+451,"CombCDMABench cdma_despread clkCrossing_10 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_despread clkCrossing_10 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread clkCrossing_10 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread clkCrossing_10 rf_resetn",-1);
	vcdp->declBit  (c+347,"CombCDMABench cdma_despread clkCrossing_10 area_clkI_reg",-1);
	vcdp->declBit  (c+330,"CombCDMABench cdma_despread clkCrossing_10 area_clkO_buf0",-1);
	vcdp->declBit  (c+173,"CombCDMABench cdma_despread clkCrossing_10 area_clkO_buf1",-1);
	vcdp->declBit  (c+366,"CombCDMABench cdma_despread clkCrossing_11 dataIn",-1);
	vcdp->declBit  (c+174,"CombCDMABench cdma_despread clkCrossing_11 dataOut",-1);
	vcdp->declBit  (c+451,"CombCDMABench cdma_despread clkCrossing_11 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_despread clkCrossing_11 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread clkCrossing_11 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread clkCrossing_11 rf_resetn",-1);
	vcdp->declBit  (c+348,"CombCDMABench cdma_despread clkCrossing_11 area_clkI_reg",-1);
	vcdp->declBit  (c+331,"CombCDMABench cdma_despread clkCrossing_11 area_clkO_buf0",-1);
	vcdp->declBit  (c+174,"CombCDMABench cdma_despread clkCrossing_11 area_clkO_buf1",-1);
	vcdp->declBus  (c+367,"CombCDMABench cdma_despread clkCrossing_12 dataIn",-1,2,0);
	vcdp->declBus  (c+175,"CombCDMABench cdma_despread clkCrossing_12 dataOut",-1,2,0);
	vcdp->declBit  (c+451,"CombCDMABench cdma_despread clkCrossing_12 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_despread clkCrossing_12 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread clkCrossing_12 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread clkCrossing_12 rf_resetn",-1);
	vcdp->declBus  (c+349,"CombCDMABench cdma_despread clkCrossing_12 area_clkI_reg",-1,2,0);
	vcdp->declBus  (c+332,"CombCDMABench cdma_despread clkCrossing_12 area_clkO_buf0",-1,2,0);
	vcdp->declBus  (c+175,"CombCDMABench cdma_despread clkCrossing_12 area_clkO_buf1",-1,2,0);
	vcdp->declBus  (c+368,"CombCDMABench cdma_despread clkCrossing_13 dataIn",-1,7,0);
	vcdp->declBus  (c+176,"CombCDMABench cdma_despread clkCrossing_13 dataOut",-1,7,0);
	vcdp->declBit  (c+451,"CombCDMABench cdma_despread clkCrossing_13 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_despread clkCrossing_13 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread clkCrossing_13 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread clkCrossing_13 rf_resetn",-1);
	vcdp->declBus  (c+350,"CombCDMABench cdma_despread clkCrossing_13 area_clkI_reg",-1,7,0);
	vcdp->declBus  (c+333,"CombCDMABench cdma_despread clkCrossing_13 area_clkO_buf0",-1,7,0);
	vcdp->declBus  (c+176,"CombCDMABench cdma_despread clkCrossing_13 area_clkO_buf1",-1,7,0);
	vcdp->declBus  (c+351,"CombCDMABench cdma_despread clkCrossing_14 dataIn",-1,2,0);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread clkCrossing_14 dataOut",-1,2,0);
	vcdp->declBit  (c+451,"CombCDMABench cdma_despread clkCrossing_14 clk",-1);
	vcdp->declBit  (c+452,"CombCDMABench cdma_despread clkCrossing_14 reset",-1);
	vcdp->declBit  (c+449,"CombCDMABench cdma_despread clkCrossing_14 rf_clk",-1);
	vcdp->declBit  (c+450,"CombCDMABench cdma_despread clkCrossing_14 rf_resetn",-1);
	vcdp->declBus  (c+352,"CombCDMABench cdma_despread clkCrossing_14 area_clkI_reg",-1,2,0);
	vcdp->declBus  (c+334,"CombCDMABench cdma_despread clkCrossing_14 area_clkO_buf0",-1,2,0);
	vcdp->declBus  (c+177,"CombCDMABench cdma_despread clkCrossing_14 area_clkO_buf1",-1,2,0);
    }
}

void VCombCDMABench::traceFullThis__1(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready));
	vcdp->fullBit  (c+2,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_valid));
	vcdp->fullBus  (c+3,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i),16);
	vcdp->fullBus  (c+4,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q),16);
	vcdp->fullBus  (c+5,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[0]),8);
	vcdp->fullBus  (c+6,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[1]),8);
	vcdp->fullBus  (c+7,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[2]),8);
	vcdp->fullBus  (c+8,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[3]),8);
	vcdp->fullBus  (c+9,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[4]),8);
	vcdp->fullBus  (c+10,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[5]),8);
	vcdp->fullBus  (c+11,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[6]),8);
	vcdp->fullBus  (c+12,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[7]),8);
	vcdp->fullBus  (c+13,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0),8);
	vcdp->fullBus  (c+14,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1),8);
	vcdp->fullBus  (c+15,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2),8);
	vcdp->fullBus  (c+16,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3),8);
	vcdp->fullBus  (c+17,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4),8);
	vcdp->fullBus  (c+18,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5),8);
	vcdp->fullBus  (c+19,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6),8);
	vcdp->fullBus  (c+20,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7),8);
	vcdp->fullBus  (c+21,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[0]),8);
	vcdp->fullBus  (c+22,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[1]),8);
	vcdp->fullBus  (c+23,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[2]),8);
	vcdp->fullBus  (c+24,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[3]),8);
	vcdp->fullBus  (c+25,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[4]),8);
	vcdp->fullBus  (c+26,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[5]),8);
	vcdp->fullBus  (c+27,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[6]),8);
	vcdp->fullBus  (c+28,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[7]),8);
	vcdp->fullBus  (c+29,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__readRsp_data),32);
	vcdp->fullBus  (c+30,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__readRsp_data),32);
	vcdp->fullBit  (c+31,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeOccur));
	vcdp->fullBit  (c+32,(vlTOPp->CombCDMABench__DOT__cdma_spread_axil4Ctrl_arready));
	vcdp->fullBit  (c+33,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeOccur));
	vcdp->fullBit  (c+34,(vlTOPp->CombCDMABench__DOT__cdma_despread_axil4Ctrl_arready));
	vcdp->fullBit  (c+35,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeJoinEvent_valid));
	vcdp->fullBit  (c+36,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->fullBit  (c+37,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeJoinEvent_valid));
	vcdp->fullBit  (c+38,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->fullBus  (c+39,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_i),16);
	vcdp->fullBus  (c+40,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_q),16);
	vcdp->fullBus  (c+41,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next),16);
	vcdp->fullBus  (c+42,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next),16);
	vcdp->fullBus  (c+43,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_i),16);
	vcdp->fullBus  (c+44,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_q),16);
	vcdp->fullBus  (c+45,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next),16);
	vcdp->fullBus  (c+46,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next),16);
	vcdp->fullBus  (c+47,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_i),16);
	vcdp->fullBus  (c+48,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_q),16);
	vcdp->fullBus  (c+49,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next),16);
	vcdp->fullBus  (c+50,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next),16);
	vcdp->fullBus  (c+51,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_i),16);
	vcdp->fullBus  (c+52,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_q),16);
	vcdp->fullBus  (c+53,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next),16);
	vcdp->fullBus  (c+54,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next),16);
	vcdp->fullBus  (c+55,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_i),16);
	vcdp->fullBus  (c+56,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_q),16);
	vcdp->fullBus  (c+57,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next),16);
	vcdp->fullBus  (c+58,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next),16);
	vcdp->fullBus  (c+59,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_i),16);
	vcdp->fullBus  (c+60,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_q),16);
	vcdp->fullBus  (c+61,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next),16);
	vcdp->fullBus  (c+62,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next),16);
	vcdp->fullBus  (c+63,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_i),16);
	vcdp->fullBus  (c+64,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_q),16);
	vcdp->fullBus  (c+65,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next),16);
	vcdp->fullBus  (c+66,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next),16);
	vcdp->fullBus  (c+67,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_i),16);
	vcdp->fullBus  (c+68,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_q),16);
	vcdp->fullBus  (c+69,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next),16);
	vcdp->fullBus  (c+70,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next),16);
	vcdp->fullBit  (c+71,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkO_buf1)))));
	vcdp->fullBit  (c+72,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+73,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+74,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+75,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+76,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+77,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+78,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+79,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+80,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+81,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+82,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+83,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+84,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+85,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+86,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+87,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+88,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+89,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+90,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+91,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+92,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+93,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+94,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+95,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+96,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_valid));
	vcdp->fullBus  (c+97,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i),16);
	vcdp->fullBus  (c+98,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q),16);
	vcdp->fullBit  (c+99,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_valid));
	vcdp->fullBus  (c+100,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i),16);
	vcdp->fullBus  (c+101,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q),16);
	vcdp->fullBit  (c+102,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_valid));
	vcdp->fullBus  (c+103,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i),16);
	vcdp->fullBus  (c+104,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q),16);
	vcdp->fullBit  (c+105,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_valid));
	vcdp->fullBus  (c+106,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i),16);
	vcdp->fullBus  (c+107,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q),16);
	vcdp->fullBit  (c+108,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_valid));
	vcdp->fullBus  (c+109,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i),16);
	vcdp->fullBus  (c+110,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q),16);
	vcdp->fullBit  (c+111,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_valid));
	vcdp->fullBus  (c+112,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i),16);
	vcdp->fullBus  (c+113,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q),16);
	vcdp->fullBit  (c+114,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_valid));
	vcdp->fullBus  (c+115,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i),16);
	vcdp->fullBus  (c+116,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q),16);
	vcdp->fullBit  (c+117,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_valid));
	vcdp->fullBus  (c+118,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i),16);
	vcdp->fullBus  (c+119,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q),16);
	vcdp->fullBit  (c+120,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkO_buf1));
	vcdp->fullBit  (c+121,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkO_buf1));
	vcdp->fullBus  (c+122,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkO_buf1),3);
	vcdp->fullBus  (c+123,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkO_buf1),8);
	vcdp->fullBus  (c+124,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkO_buf1),3);
	vcdp->fullBus  (c+125,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt),3);
	vcdp->fullBus  (c+126,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i),16);
	vcdp->fullBus  (c+127,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q),16);
	vcdp->fullBus  (c+128,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i),16);
	vcdp->fullBus  (c+129,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q),16);
	vcdp->fullBus  (c+130,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i),16);
	vcdp->fullBus  (c+131,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q),16);
	vcdp->fullBus  (c+132,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i),16);
	vcdp->fullBus  (c+133,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q),16);
	vcdp->fullBus  (c+134,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i),16);
	vcdp->fullBus  (c+135,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q),16);
	vcdp->fullBus  (c+136,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i),16);
	vcdp->fullBus  (c+137,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q),16);
	vcdp->fullBus  (c+138,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i),16);
	vcdp->fullBus  (c+139,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q),16);
	vcdp->fullBus  (c+140,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i),16);
	vcdp->fullBus  (c+141,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q),16);
	vcdp->fullBit  (c+142,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid));
	vcdp->fullBit  (c+143,((0U == (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt))));
	vcdp->fullBit  (c+144,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code));
	vcdp->fullBit  (c+145,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1));
	vcdp->fullBit  (c+146,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2));
	vcdp->fullBit  (c+147,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3));
	vcdp->fullBit  (c+148,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4));
	vcdp->fullBit  (c+149,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5));
	vcdp->fullBit  (c+150,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6));
	vcdp->fullBit  (c+151,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7));
	vcdp->fullBus  (c+152,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+153,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+154,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+155,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+156,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+157,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+158,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+159,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+160,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+161,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+162,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+163,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+164,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+165,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q) 
					      >> 3U)))),16);
    }
}

void VCombCDMABench::traceFullThis__7(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+166,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q) 
					      >> 3U)))),16);
	vcdp->fullBus  (c+167,(((0xe000U & (VL_NEGATE_I((IData)(
								(1U 
								 & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q) 
								    >> 0xfU)))) 
					    << 0xdU)) 
				| (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q) 
					      >> 3U)))),16);
	vcdp->fullBit  (c+168,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkO_buf0));
	vcdp->fullBit  (c+169,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkO_buf0));
	vcdp->fullBus  (c+170,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkO_buf0),3);
	vcdp->fullBus  (c+171,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkO_buf0),8);
	vcdp->fullBus  (c+172,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkO_buf0),3);
	vcdp->fullBit  (c+173,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkO_buf1));
	vcdp->fullBit  (c+174,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkO_buf1));
	vcdp->fullBus  (c+175,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkO_buf1),3);
	vcdp->fullBus  (c+176,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkO_buf1),8);
	vcdp->fullBus  (c+177,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkO_buf1),3);
	vcdp->fullBus  (c+178,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+179,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+180,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i),16);
	vcdp->fullBus  (c+181,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q),16);
	vcdp->fullBus  (c+182,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt),3);
	vcdp->fullBus  (c+183,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+184,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+185,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+186,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+187,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+188,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+189,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+190,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+191,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+192,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+193,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+194,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+195,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+196,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+197,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+198,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+199,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i),16);
	vcdp->fullBus  (c+200,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q),16);
	vcdp->fullBus  (c+201,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt),3);
	vcdp->fullBus  (c+202,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+203,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+204,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+205,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+206,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+207,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+208,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+209,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+210,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+211,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+212,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+213,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+214,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+215,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+216,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+217,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+218,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i),16);
	vcdp->fullBus  (c+219,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q),16);
	vcdp->fullBus  (c+220,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt),3);
	vcdp->fullBus  (c+221,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+222,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+223,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+224,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+225,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+226,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+227,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+228,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+229,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+230,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+231,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+232,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+233,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+234,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+235,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+236,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+237,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i),16);
	vcdp->fullBus  (c+238,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q),16);
	vcdp->fullBus  (c+239,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt),3);
	vcdp->fullBus  (c+240,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+241,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+242,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+243,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+244,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+245,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+246,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+247,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+248,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+249,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+250,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+251,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+252,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+253,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+254,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+255,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+256,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i),16);
	vcdp->fullBus  (c+257,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q),16);
	vcdp->fullBus  (c+258,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt),3);
	vcdp->fullBus  (c+259,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+260,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+261,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+262,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+263,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+264,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+265,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+266,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+267,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+268,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+269,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+270,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+271,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+272,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+273,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+274,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+275,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i),16);
	vcdp->fullBus  (c+276,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q),16);
	vcdp->fullBus  (c+277,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt),3);
	vcdp->fullBus  (c+278,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+279,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+280,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+281,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+282,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+283,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+284,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+285,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+286,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+287,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+288,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+289,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+290,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+291,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+292,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+293,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+294,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i),16);
	vcdp->fullBus  (c+295,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q),16);
	vcdp->fullBus  (c+296,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt),3);
	vcdp->fullBus  (c+297,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+298,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+299,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+300,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+301,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+302,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+303,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+304,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+305,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+306,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+307,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+308,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+309,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+310,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+311,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+312,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+313,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i),16);
	vcdp->fullBus  (c+314,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q),16);
	vcdp->fullBus  (c+315,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt),3);
	vcdp->fullBus  (c+316,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+317,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+318,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+319,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+320,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+321,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+322,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+323,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+324,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+325,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+326,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+327,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+328,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+329,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBit  (c+330,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkO_buf0));
	vcdp->fullBit  (c+331,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkO_buf0));
	vcdp->fullBus  (c+332,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkO_buf0),3);
	vcdp->fullBus  (c+333,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkO_buf0),8);
	vcdp->fullBus  (c+334,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkO_buf0),3);
	vcdp->fullBus  (c+335,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bresp),2);
	vcdp->fullBus  (c+336,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bresp),2);
	vcdp->fullBus  (c+337,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->fullBus  (c+338,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->fullBit  (c+339,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkI_reg));
	vcdp->fullBit  (c+340,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkI_reg));
	vcdp->fullBus  (c+341,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkI_reg),3);
	vcdp->fullBus  (c+342,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkI_reg),8);
	vcdp->fullBus  (c+343,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_3),3);
	vcdp->fullBus  (c+344,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkI_reg),3);
	vcdp->fullBus  (c+345,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->fullBus  (c+346,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->fullBit  (c+347,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkI_reg));
	vcdp->fullBit  (c+348,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkI_reg));
	vcdp->fullBus  (c+349,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkI_reg),3);
	vcdp->fullBus  (c+350,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkI_reg),8);
	vcdp->fullBus  (c+351,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_3),3);
	vcdp->fullBus  (c+352,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkI_reg),3);
	vcdp->fullBit  (c+353,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bvalid_2));
	vcdp->fullBit  (c+354,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid));
	vcdp->fullBit  (c+355,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bvalid_2));
	vcdp->fullBit  (c+356,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid));
	vcdp->fullBit  (c+357,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->fullBit  (c+358,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->fullBit  (c+359,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__cdma_spread_bridge_clc_driver));
	vcdp->fullBit  (c+360,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn));
	vcdp->fullBus  (c+361,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_1),3);
	vcdp->fullBus  (c+362,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_2),8);
	vcdp->fullBit  (c+363,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->fullBit  (c+364,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->fullBit  (c+365,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__cdma_spread_bridge_clc_driver));
	vcdp->fullBit  (c+366,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn));
	vcdp->fullBus  (c+367,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_1),3);
	vcdp->fullBus  (c+368,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_2),8);
	vcdp->fullBit  (c+369,(vlTOPp->axil4Ctrl_spread_aw_valid));
	vcdp->fullBit  (c+370,(vlTOPp->axil4Ctrl_spread_aw_ready));
	vcdp->fullBus  (c+371,(vlTOPp->axil4Ctrl_spread_aw_payload_addr),8);
	vcdp->fullBus  (c+372,(vlTOPp->axil4Ctrl_spread_aw_payload_prot),3);
	vcdp->fullBit  (c+373,(vlTOPp->axil4Ctrl_spread_w_valid));
	vcdp->fullBit  (c+374,(vlTOPp->axil4Ctrl_spread_w_ready));
	vcdp->fullBus  (c+375,(vlTOPp->axil4Ctrl_spread_w_payload_data),32);
	vcdp->fullBus  (c+376,(vlTOPp->axil4Ctrl_spread_w_payload_strb),4);
	vcdp->fullBit  (c+377,(vlTOPp->axil4Ctrl_spread_b_valid));
	vcdp->fullBit  (c+378,(vlTOPp->axil4Ctrl_spread_b_ready));
	vcdp->fullBus  (c+379,(vlTOPp->axil4Ctrl_spread_b_payload_resp),2);
	vcdp->fullBit  (c+380,(vlTOPp->axil4Ctrl_spread_ar_valid));
	vcdp->fullBit  (c+381,(vlTOPp->axil4Ctrl_spread_ar_ready));
	vcdp->fullBus  (c+382,(vlTOPp->axil4Ctrl_spread_ar_payload_addr),8);
	vcdp->fullBus  (c+383,(vlTOPp->axil4Ctrl_spread_ar_payload_prot),3);
	vcdp->fullBit  (c+384,(vlTOPp->axil4Ctrl_spread_r_valid));
	vcdp->fullBit  (c+385,(vlTOPp->axil4Ctrl_spread_r_ready));
	vcdp->fullBus  (c+386,(vlTOPp->axil4Ctrl_spread_r_payload_data),32);
	vcdp->fullBus  (c+387,(vlTOPp->axil4Ctrl_spread_r_payload_resp),2);
	vcdp->fullBit  (c+388,(vlTOPp->axil4Ctrl_despread_aw_valid));
	vcdp->fullBit  (c+389,(vlTOPp->axil4Ctrl_despread_aw_ready));
	vcdp->fullBus  (c+390,(vlTOPp->axil4Ctrl_despread_aw_payload_addr),8);
	vcdp->fullBus  (c+391,(vlTOPp->axil4Ctrl_despread_aw_payload_prot),3);
	vcdp->fullBit  (c+392,(vlTOPp->axil4Ctrl_despread_w_valid));
	vcdp->fullBit  (c+393,(vlTOPp->axil4Ctrl_despread_w_ready));
	vcdp->fullBus  (c+394,(vlTOPp->axil4Ctrl_despread_w_payload_data),32);
	vcdp->fullBus  (c+395,(vlTOPp->axil4Ctrl_despread_w_payload_strb),4);
	vcdp->fullBit  (c+396,(vlTOPp->axil4Ctrl_despread_b_valid));
	vcdp->fullBit  (c+397,(vlTOPp->axil4Ctrl_despread_b_ready));
	vcdp->fullBus  (c+398,(vlTOPp->axil4Ctrl_despread_b_payload_resp),2);
	vcdp->fullBit  (c+399,(vlTOPp->axil4Ctrl_despread_ar_valid));
	vcdp->fullBit  (c+400,(vlTOPp->axil4Ctrl_despread_ar_ready));
    }
}

void VCombCDMABench::traceFullThis__12(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+401,(vlTOPp->axil4Ctrl_despread_ar_payload_addr),8);
	vcdp->fullBus  (c+402,(vlTOPp->axil4Ctrl_despread_ar_payload_prot),3);
	vcdp->fullBit  (c+403,(vlTOPp->axil4Ctrl_despread_r_valid));
	vcdp->fullBit  (c+404,(vlTOPp->axil4Ctrl_despread_r_ready));
	vcdp->fullBus  (c+405,(vlTOPp->axil4Ctrl_despread_r_payload_data),32);
	vcdp->fullBus  (c+406,(vlTOPp->axil4Ctrl_despread_r_payload_resp),2);
	vcdp->fullBit  (c+407,(vlTOPp->base_iq_in_valid));
	vcdp->fullBit  (c+408,(vlTOPp->base_iq_in_ready));
	vcdp->fullBus  (c+409,(vlTOPp->base_iq_in_payload_0_cha_i),16);
	vcdp->fullBus  (c+410,(vlTOPp->base_iq_in_payload_0_cha_q),16);
	vcdp->fullBus  (c+411,(vlTOPp->base_iq_in_payload_1_cha_i),16);
	vcdp->fullBus  (c+412,(vlTOPp->base_iq_in_payload_1_cha_q),16);
	vcdp->fullBus  (c+413,(vlTOPp->base_iq_in_payload_2_cha_i),16);
	vcdp->fullBus  (c+414,(vlTOPp->base_iq_in_payload_2_cha_q),16);
	vcdp->fullBus  (c+415,(vlTOPp->base_iq_in_payload_3_cha_i),16);
	vcdp->fullBus  (c+416,(vlTOPp->base_iq_in_payload_3_cha_q),16);
	vcdp->fullBus  (c+417,(vlTOPp->base_iq_in_payload_4_cha_i),16);
	vcdp->fullBus  (c+418,(vlTOPp->base_iq_in_payload_4_cha_q),16);
	vcdp->fullBus  (c+419,(vlTOPp->base_iq_in_payload_5_cha_i),16);
	vcdp->fullBus  (c+420,(vlTOPp->base_iq_in_payload_5_cha_q),16);
	vcdp->fullBus  (c+421,(vlTOPp->base_iq_in_payload_6_cha_i),16);
	vcdp->fullBus  (c+422,(vlTOPp->base_iq_in_payload_6_cha_q),16);
	vcdp->fullBus  (c+423,(vlTOPp->base_iq_in_payload_7_cha_i),16);
	vcdp->fullBus  (c+424,(vlTOPp->base_iq_in_payload_7_cha_q),16);
	vcdp->fullBit  (c+425,(vlTOPp->base_sub_iqs_0_valid));
	vcdp->fullBus  (c+426,(vlTOPp->base_sub_iqs_0_payload_cha_i),16);
	vcdp->fullBus  (c+427,(vlTOPp->base_sub_iqs_0_payload_cha_q),16);
	vcdp->fullBit  (c+428,(vlTOPp->base_sub_iqs_1_valid));
	vcdp->fullBus  (c+429,(vlTOPp->base_sub_iqs_1_payload_cha_i),16);
	vcdp->fullBus  (c+430,(vlTOPp->base_sub_iqs_1_payload_cha_q),16);
	vcdp->fullBit  (c+431,(vlTOPp->base_sub_iqs_2_valid));
	vcdp->fullBus  (c+432,(vlTOPp->base_sub_iqs_2_payload_cha_i),16);
	vcdp->fullBus  (c+433,(vlTOPp->base_sub_iqs_2_payload_cha_q),16);
	vcdp->fullBit  (c+434,(vlTOPp->base_sub_iqs_3_valid));
	vcdp->fullBus  (c+435,(vlTOPp->base_sub_iqs_3_payload_cha_i),16);
	vcdp->fullBus  (c+436,(vlTOPp->base_sub_iqs_3_payload_cha_q),16);
	vcdp->fullBit  (c+437,(vlTOPp->base_sub_iqs_4_valid));
	vcdp->fullBus  (c+438,(vlTOPp->base_sub_iqs_4_payload_cha_i),16);
	vcdp->fullBus  (c+439,(vlTOPp->base_sub_iqs_4_payload_cha_q),16);
	vcdp->fullBit  (c+440,(vlTOPp->base_sub_iqs_5_valid));
	vcdp->fullBus  (c+441,(vlTOPp->base_sub_iqs_5_payload_cha_i),16);
	vcdp->fullBus  (c+442,(vlTOPp->base_sub_iqs_5_payload_cha_q),16);
	vcdp->fullBit  (c+443,(vlTOPp->base_sub_iqs_6_valid));
	vcdp->fullBus  (c+444,(vlTOPp->base_sub_iqs_6_payload_cha_i),16);
	vcdp->fullBus  (c+445,(vlTOPp->base_sub_iqs_6_payload_cha_q),16);
	vcdp->fullBit  (c+446,(vlTOPp->base_sub_iqs_7_valid));
	vcdp->fullBus  (c+447,(vlTOPp->base_sub_iqs_7_payload_cha_i),16);
	vcdp->fullBus  (c+448,(vlTOPp->base_sub_iqs_7_payload_cha_q),16);
	vcdp->fullBit  (c+449,(vlTOPp->rf_clk));
	vcdp->fullBit  (c+450,(vlTOPp->rf_resetn));
	vcdp->fullBit  (c+451,(vlTOPp->clk));
	vcdp->fullBit  (c+452,(vlTOPp->reset));
	vcdp->fullBit  (c+453,(((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid) 
				& (IData)(vlTOPp->axil4Ctrl_spread_r_ready))));
	vcdp->fullBit  (c+454,(((IData)(vlTOPp->base_iq_in_valid) 
				& (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready))));
	vcdp->fullBit  (c+455,((((IData)(vlTOPp->base_iq_in_valid) 
				 & (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready)) 
				| (0U != (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt)))));
	vcdp->fullBit  (c+456,(((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid) 
				& (IData)(vlTOPp->axil4Ctrl_despread_r_ready))));
	vcdp->fullBus  (c+457,(0U),2);
	vcdp->fullBit  (c+458,(0U));
    }
}
