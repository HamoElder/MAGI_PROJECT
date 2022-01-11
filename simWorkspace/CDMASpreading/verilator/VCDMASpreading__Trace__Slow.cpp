// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCDMASpreading__Syms.h"


//======================

void VCDMASpreading::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCDMASpreading::traceInit, &VCDMASpreading::traceFull, &VCDMASpreading::traceChg, this);
}
void VCDMASpreading::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCDMASpreading* t=(VCDMASpreading*)userthis;
    VCDMASpreading__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCDMASpreading::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCDMASpreading* t=(VCDMASpreading*)userthis;
    VCDMASpreading__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCDMASpreading::traceInitThis(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCDMASpreading::traceFullThis(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCDMASpreading::traceInitThis__1(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+60,"w_en",-1);
	vcdp->declBus  (c+61,"w_addr",-1,2,0);
	vcdp->declBus  (c+62,"w_data",-1,7,0);
	vcdp->declBit  (c+63,"clc",-1);
	vcdp->declBus  (c+64,"cnt_limit",-1,2,0);
	vcdp->declBit  (c+65,"base_iq_valid",-1);
	vcdp->declBit  (c+66,"base_iq_ready",-1);
	vcdp->declBus  (c+67,"base_iq_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+68,"base_iq_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+69,"base_iq_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+70,"base_iq_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+71,"base_iq_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+72,"base_iq_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+73,"base_iq_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"base_iq_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+75,"base_iq_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+76,"base_iq_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+77,"base_iq_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+78,"base_iq_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+79,"base_iq_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+80,"base_iq_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+81,"base_iq_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+82,"base_iq_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+83,"mod_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+84,"mod_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+85,"mod_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+86,"mod_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+87,"mod_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+88,"mod_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+89,"mod_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+90,"mod_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+91,"mod_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+92,"mod_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+93,"mod_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+94,"mod_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+95,"mod_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+96,"mod_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+97,"mod_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+98,"mod_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+99,"mod_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+100,"mod_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+101,"mod_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+102,"mod_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+103,"mod_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+104,"mod_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+105,"mod_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+106,"mod_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"clk",-1);
	vcdp->declBit  (c+108,"reset",-1);
	vcdp->declBit  (c+60,"CDMASpreading w_en",-1);
	vcdp->declBus  (c+61,"CDMASpreading w_addr",-1,2,0);
	vcdp->declBus  (c+62,"CDMASpreading w_data",-1,7,0);
	vcdp->declBit  (c+63,"CDMASpreading clc",-1);
	vcdp->declBus  (c+64,"CDMASpreading cnt_limit",-1,2,0);
	vcdp->declBit  (c+65,"CDMASpreading base_iq_valid",-1);
	vcdp->declBit  (c+66,"CDMASpreading base_iq_ready",-1);
	vcdp->declBus  (c+67,"CDMASpreading base_iq_payload_0_cha_i",-1,15,0);
	vcdp->declBus  (c+68,"CDMASpreading base_iq_payload_0_cha_q",-1,15,0);
	vcdp->declBus  (c+69,"CDMASpreading base_iq_payload_1_cha_i",-1,15,0);
	vcdp->declBus  (c+70,"CDMASpreading base_iq_payload_1_cha_q",-1,15,0);
	vcdp->declBus  (c+71,"CDMASpreading base_iq_payload_2_cha_i",-1,15,0);
	vcdp->declBus  (c+72,"CDMASpreading base_iq_payload_2_cha_q",-1,15,0);
	vcdp->declBus  (c+73,"CDMASpreading base_iq_payload_3_cha_i",-1,15,0);
	vcdp->declBus  (c+74,"CDMASpreading base_iq_payload_3_cha_q",-1,15,0);
	vcdp->declBus  (c+75,"CDMASpreading base_iq_payload_4_cha_i",-1,15,0);
	vcdp->declBus  (c+76,"CDMASpreading base_iq_payload_4_cha_q",-1,15,0);
	vcdp->declBus  (c+77,"CDMASpreading base_iq_payload_5_cha_i",-1,15,0);
	vcdp->declBus  (c+78,"CDMASpreading base_iq_payload_5_cha_q",-1,15,0);
	vcdp->declBus  (c+79,"CDMASpreading base_iq_payload_6_cha_i",-1,15,0);
	vcdp->declBus  (c+80,"CDMASpreading base_iq_payload_6_cha_q",-1,15,0);
	vcdp->declBus  (c+81,"CDMASpreading base_iq_payload_7_cha_i",-1,15,0);
	vcdp->declBus  (c+82,"CDMASpreading base_iq_payload_7_cha_q",-1,15,0);
	vcdp->declBit  (c+83,"CDMASpreading mod_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+84,"CDMASpreading mod_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+85,"CDMASpreading mod_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+86,"CDMASpreading mod_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+87,"CDMASpreading mod_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+88,"CDMASpreading mod_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+89,"CDMASpreading mod_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+90,"CDMASpreading mod_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+91,"CDMASpreading mod_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+92,"CDMASpreading mod_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+93,"CDMASpreading mod_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+94,"CDMASpreading mod_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+95,"CDMASpreading mod_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+96,"CDMASpreading mod_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+97,"CDMASpreading mod_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+98,"CDMASpreading mod_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+99,"CDMASpreading mod_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+100,"CDMASpreading mod_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+101,"CDMASpreading mod_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+102,"CDMASpreading mod_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+103,"CDMASpreading mod_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+104,"CDMASpreading mod_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+105,"CDMASpreading mod_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+106,"CDMASpreading mod_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading reset",-1);
	// Tracing: CDMASpreading _zz_code_map_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:58
	// Tracing: CDMASpreading _zz_code_map_port1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:59
	// Tracing: CDMASpreading _zz_code_map_port2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:60
	// Tracing: CDMASpreading _zz_code_map_port3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:61
	// Tracing: CDMASpreading _zz_code_map_port4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:62
	// Tracing: CDMASpreading _zz_code_map_port5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:63
	// Tracing: CDMASpreading _zz_code_map_port6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:64
	// Tracing: CDMASpreading _zz_code_map_port7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:65
	vcdp->declBit  (c+9,"CDMASpreading computeUnit_8_mod_iq_valid",-1);
	vcdp->declBus  (c+10,"CDMASpreading computeUnit_8_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+11,"CDMASpreading computeUnit_8_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+12,"CDMASpreading computeUnit_9_mod_iq_valid",-1);
	vcdp->declBus  (c+13,"CDMASpreading computeUnit_9_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+14,"CDMASpreading computeUnit_9_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+15,"CDMASpreading computeUnit_10_mod_iq_valid",-1);
	vcdp->declBus  (c+16,"CDMASpreading computeUnit_10_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+17,"CDMASpreading computeUnit_10_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+18,"CDMASpreading computeUnit_11_mod_iq_valid",-1);
	vcdp->declBus  (c+19,"CDMASpreading computeUnit_11_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+20,"CDMASpreading computeUnit_11_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+21,"CDMASpreading computeUnit_12_mod_iq_valid",-1);
	vcdp->declBus  (c+22,"CDMASpreading computeUnit_12_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+23,"CDMASpreading computeUnit_12_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+24,"CDMASpreading computeUnit_13_mod_iq_valid",-1);
	vcdp->declBus  (c+25,"CDMASpreading computeUnit_13_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+26,"CDMASpreading computeUnit_13_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+27,"CDMASpreading computeUnit_14_mod_iq_valid",-1);
	vcdp->declBus  (c+28,"CDMASpreading computeUnit_14_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+29,"CDMASpreading computeUnit_14_mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+30,"CDMASpreading computeUnit_15_mod_iq_valid",-1);
	vcdp->declBus  (c+31,"CDMASpreading computeUnit_15_mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+32,"CDMASpreading computeUnit_15_mod_iq_payload_cha_q",-1,15,0);
	// Tracing: CDMASpreading _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:90
	// Tracing: CDMASpreading _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:91
	vcdp->declBus  (c+58,"CDMASpreading cnt",-1,2,0);
	vcdp->declBus  (c+34,"CDMASpreading flow_iq_data_vec_0_cha_i",-1,15,0);
	vcdp->declBus  (c+35,"CDMASpreading flow_iq_data_vec_0_cha_q",-1,15,0);
	vcdp->declBus  (c+36,"CDMASpreading flow_iq_data_vec_1_cha_i",-1,15,0);
	vcdp->declBus  (c+37,"CDMASpreading flow_iq_data_vec_1_cha_q",-1,15,0);
	vcdp->declBus  (c+38,"CDMASpreading flow_iq_data_vec_2_cha_i",-1,15,0);
	vcdp->declBus  (c+39,"CDMASpreading flow_iq_data_vec_2_cha_q",-1,15,0);
	vcdp->declBus  (c+40,"CDMASpreading flow_iq_data_vec_3_cha_i",-1,15,0);
	vcdp->declBus  (c+41,"CDMASpreading flow_iq_data_vec_3_cha_q",-1,15,0);
	vcdp->declBus  (c+42,"CDMASpreading flow_iq_data_vec_4_cha_i",-1,15,0);
	vcdp->declBus  (c+43,"CDMASpreading flow_iq_data_vec_4_cha_q",-1,15,0);
	vcdp->declBus  (c+44,"CDMASpreading flow_iq_data_vec_5_cha_i",-1,15,0);
	vcdp->declBus  (c+45,"CDMASpreading flow_iq_data_vec_5_cha_q",-1,15,0);
	vcdp->declBus  (c+46,"CDMASpreading flow_iq_data_vec_6_cha_i",-1,15,0);
	vcdp->declBus  (c+47,"CDMASpreading flow_iq_data_vec_6_cha_q",-1,15,0);
	vcdp->declBus  (c+48,"CDMASpreading flow_iq_data_vec_7_cha_i",-1,15,0);
	vcdp->declBus  (c+49,"CDMASpreading flow_iq_data_vec_7_cha_q",-1,15,0);
	vcdp->declBit  (c+33,"CDMASpreading flow_iq_valid",-1);
	// Tracing: CDMASpreading _zz_code // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:110
	// Tracing: CDMASpreading _zz_code_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:111
	// Tracing: CDMASpreading _zz_code_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:112
	// Tracing: CDMASpreading _zz_code_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:113
	// Tracing: CDMASpreading _zz_code_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:114
	// Tracing: CDMASpreading _zz_code_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:115
	// Tracing: CDMASpreading _zz_code_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:116
	// Tracing: CDMASpreading _zz_code_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:117
	vcdp->declBit  (c+109,"CDMASpreading base_iq_fire",-1);
	vcdp->declBit  (c+110,"CDMASpreading when_CDMASpreading_l51",-1);
	vcdp->declBit  (c+59,"CDMASpreading when_CDMASpreading_l65",-1);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+1+i*1,"CDMASpreading code_map",(i+0),7,0);}}
	vcdp->declBit  (c+50,"CDMASpreading computeUnit_8 code",-1);
	vcdp->declBit  (c+33,"CDMASpreading computeUnit_8 base_iq_valid",-1);
	vcdp->declBus  (c+34,"CDMASpreading computeUnit_8 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+35,"CDMASpreading computeUnit_8 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+9,"CDMASpreading computeUnit_8 mod_iq_valid",-1);
	vcdp->declBus  (c+10,"CDMASpreading computeUnit_8 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+11,"CDMASpreading computeUnit_8 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading computeUnit_8 clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading computeUnit_8 reset",-1);
	// Tracing: CDMASpreading computeUnit_8 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:339
	// Tracing: CDMASpreading computeUnit_8 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:340
	vcdp->declBus  (c+10,"CDMASpreading computeUnit_8 mod_i",-1,15,0);
	vcdp->declBus  (c+11,"CDMASpreading computeUnit_8 mod_q",-1,15,0);
	vcdp->declBit  (c+9,"CDMASpreading computeUnit_8 mod_valid",-1);
	vcdp->declBit  (c+51,"CDMASpreading computeUnit_9 code",-1);
	vcdp->declBit  (c+33,"CDMASpreading computeUnit_9 base_iq_valid",-1);
	vcdp->declBus  (c+36,"CDMASpreading computeUnit_9 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+37,"CDMASpreading computeUnit_9 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+12,"CDMASpreading computeUnit_9 mod_iq_valid",-1);
	vcdp->declBus  (c+13,"CDMASpreading computeUnit_9 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+14,"CDMASpreading computeUnit_9 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading computeUnit_9 clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading computeUnit_9 reset",-1);
	// Tracing: CDMASpreading computeUnit_9 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:339
	// Tracing: CDMASpreading computeUnit_9 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:340
	vcdp->declBus  (c+13,"CDMASpreading computeUnit_9 mod_i",-1,15,0);
	vcdp->declBus  (c+14,"CDMASpreading computeUnit_9 mod_q",-1,15,0);
	vcdp->declBit  (c+12,"CDMASpreading computeUnit_9 mod_valid",-1);
	vcdp->declBit  (c+52,"CDMASpreading computeUnit_10 code",-1);
	vcdp->declBit  (c+33,"CDMASpreading computeUnit_10 base_iq_valid",-1);
	vcdp->declBus  (c+38,"CDMASpreading computeUnit_10 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+39,"CDMASpreading computeUnit_10 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+15,"CDMASpreading computeUnit_10 mod_iq_valid",-1);
	vcdp->declBus  (c+16,"CDMASpreading computeUnit_10 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+17,"CDMASpreading computeUnit_10 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading computeUnit_10 clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading computeUnit_10 reset",-1);
	// Tracing: CDMASpreading computeUnit_10 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:339
	// Tracing: CDMASpreading computeUnit_10 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:340
	vcdp->declBus  (c+16,"CDMASpreading computeUnit_10 mod_i",-1,15,0);
	vcdp->declBus  (c+17,"CDMASpreading computeUnit_10 mod_q",-1,15,0);
	vcdp->declBit  (c+15,"CDMASpreading computeUnit_10 mod_valid",-1);
	vcdp->declBit  (c+53,"CDMASpreading computeUnit_11 code",-1);
	vcdp->declBit  (c+33,"CDMASpreading computeUnit_11 base_iq_valid",-1);
	vcdp->declBus  (c+40,"CDMASpreading computeUnit_11 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+41,"CDMASpreading computeUnit_11 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+18,"CDMASpreading computeUnit_11 mod_iq_valid",-1);
	vcdp->declBus  (c+19,"CDMASpreading computeUnit_11 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+20,"CDMASpreading computeUnit_11 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading computeUnit_11 clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading computeUnit_11 reset",-1);
	// Tracing: CDMASpreading computeUnit_11 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:339
	// Tracing: CDMASpreading computeUnit_11 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:340
	vcdp->declBus  (c+19,"CDMASpreading computeUnit_11 mod_i",-1,15,0);
	vcdp->declBus  (c+20,"CDMASpreading computeUnit_11 mod_q",-1,15,0);
	vcdp->declBit  (c+18,"CDMASpreading computeUnit_11 mod_valid",-1);
	vcdp->declBit  (c+54,"CDMASpreading computeUnit_12 code",-1);
	vcdp->declBit  (c+33,"CDMASpreading computeUnit_12 base_iq_valid",-1);
	vcdp->declBus  (c+42,"CDMASpreading computeUnit_12 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+43,"CDMASpreading computeUnit_12 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+21,"CDMASpreading computeUnit_12 mod_iq_valid",-1);
	vcdp->declBus  (c+22,"CDMASpreading computeUnit_12 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+23,"CDMASpreading computeUnit_12 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading computeUnit_12 clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading computeUnit_12 reset",-1);
	// Tracing: CDMASpreading computeUnit_12 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:339
	// Tracing: CDMASpreading computeUnit_12 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:340
	vcdp->declBus  (c+22,"CDMASpreading computeUnit_12 mod_i",-1,15,0);
	vcdp->declBus  (c+23,"CDMASpreading computeUnit_12 mod_q",-1,15,0);
	vcdp->declBit  (c+21,"CDMASpreading computeUnit_12 mod_valid",-1);
	vcdp->declBit  (c+55,"CDMASpreading computeUnit_13 code",-1);
	vcdp->declBit  (c+33,"CDMASpreading computeUnit_13 base_iq_valid",-1);
	vcdp->declBus  (c+44,"CDMASpreading computeUnit_13 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+45,"CDMASpreading computeUnit_13 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+24,"CDMASpreading computeUnit_13 mod_iq_valid",-1);
	vcdp->declBus  (c+25,"CDMASpreading computeUnit_13 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+26,"CDMASpreading computeUnit_13 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading computeUnit_13 clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading computeUnit_13 reset",-1);
	// Tracing: CDMASpreading computeUnit_13 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:339
	// Tracing: CDMASpreading computeUnit_13 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:340
	vcdp->declBus  (c+25,"CDMASpreading computeUnit_13 mod_i",-1,15,0);
	vcdp->declBus  (c+26,"CDMASpreading computeUnit_13 mod_q",-1,15,0);
	vcdp->declBit  (c+24,"CDMASpreading computeUnit_13 mod_valid",-1);
	vcdp->declBit  (c+56,"CDMASpreading computeUnit_14 code",-1);
	vcdp->declBit  (c+33,"CDMASpreading computeUnit_14 base_iq_valid",-1);
	vcdp->declBus  (c+46,"CDMASpreading computeUnit_14 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+47,"CDMASpreading computeUnit_14 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+27,"CDMASpreading computeUnit_14 mod_iq_valid",-1);
	vcdp->declBus  (c+28,"CDMASpreading computeUnit_14 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+29,"CDMASpreading computeUnit_14 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading computeUnit_14 clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading computeUnit_14 reset",-1);
	// Tracing: CDMASpreading computeUnit_14 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:339
	// Tracing: CDMASpreading computeUnit_14 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:340
	vcdp->declBus  (c+28,"CDMASpreading computeUnit_14 mod_i",-1,15,0);
	vcdp->declBus  (c+29,"CDMASpreading computeUnit_14 mod_q",-1,15,0);
	vcdp->declBit  (c+27,"CDMASpreading computeUnit_14 mod_valid",-1);
	vcdp->declBit  (c+57,"CDMASpreading computeUnit_15 code",-1);
	vcdp->declBit  (c+33,"CDMASpreading computeUnit_15 base_iq_valid",-1);
	vcdp->declBus  (c+48,"CDMASpreading computeUnit_15 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+49,"CDMASpreading computeUnit_15 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+30,"CDMASpreading computeUnit_15 mod_iq_valid",-1);
	vcdp->declBus  (c+31,"CDMASpreading computeUnit_15 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+32,"CDMASpreading computeUnit_15 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+107,"CDMASpreading computeUnit_15 clk",-1);
	vcdp->declBit  (c+108,"CDMASpreading computeUnit_15 reset",-1);
	// Tracing: CDMASpreading computeUnit_15 _zz_mod_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:339
	// Tracing: CDMASpreading computeUnit_15 _zz_mod_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:340
	vcdp->declBus  (c+31,"CDMASpreading computeUnit_15 mod_i",-1,15,0);
	vcdp->declBus  (c+32,"CDMASpreading computeUnit_15 mod_q",-1,15,0);
	vcdp->declBit  (c+30,"CDMASpreading computeUnit_15 mod_valid",-1);
    }
}

void VCDMASpreading::traceFullThis__1(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->CDMASpreading__DOT__code_map[0]),8);
	vcdp->fullBus  (c+2,(vlTOPp->CDMASpreading__DOT__code_map[1]),8);
	vcdp->fullBus  (c+3,(vlTOPp->CDMASpreading__DOT__code_map[2]),8);
	vcdp->fullBus  (c+4,(vlTOPp->CDMASpreading__DOT__code_map[3]),8);
	vcdp->fullBus  (c+5,(vlTOPp->CDMASpreading__DOT__code_map[4]),8);
	vcdp->fullBus  (c+6,(vlTOPp->CDMASpreading__DOT__code_map[5]),8);
	vcdp->fullBus  (c+7,(vlTOPp->CDMASpreading__DOT__code_map[6]),8);
	vcdp->fullBus  (c+8,(vlTOPp->CDMASpreading__DOT__code_map[7]),8);
	vcdp->fullBit  (c+9,(vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_valid));
	vcdp->fullBus  (c+10,(vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_i),16);
	vcdp->fullBus  (c+11,(vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_q),16);
	vcdp->fullBit  (c+12,(vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_valid));
	vcdp->fullBus  (c+13,(vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_i),16);
	vcdp->fullBus  (c+14,(vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_q),16);
	vcdp->fullBit  (c+15,(vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_valid));
	vcdp->fullBus  (c+16,(vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_i),16);
	vcdp->fullBus  (c+17,(vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_q),16);
	vcdp->fullBit  (c+18,(vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_valid));
	vcdp->fullBus  (c+19,(vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_i),16);
	vcdp->fullBus  (c+20,(vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_q),16);
	vcdp->fullBit  (c+21,(vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_valid));
	vcdp->fullBus  (c+22,(vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_i),16);
	vcdp->fullBus  (c+23,(vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_q),16);
	vcdp->fullBit  (c+24,(vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_valid));
	vcdp->fullBus  (c+25,(vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_i),16);
	vcdp->fullBus  (c+26,(vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_q),16);
	vcdp->fullBit  (c+27,(vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_valid));
	vcdp->fullBus  (c+28,(vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_i),16);
	vcdp->fullBus  (c+29,(vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_q),16);
	vcdp->fullBit  (c+30,(vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_valid));
	vcdp->fullBus  (c+31,(vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_i),16);
	vcdp->fullBus  (c+32,(vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_q),16);
	vcdp->fullBit  (c+33,(vlTOPp->CDMASpreading__DOT__flow_iq_valid));
	vcdp->fullBus  (c+34,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_i),16);
	vcdp->fullBus  (c+35,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_q),16);
	vcdp->fullBus  (c+36,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_i),16);
	vcdp->fullBus  (c+37,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_q),16);
	vcdp->fullBus  (c+38,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_i),16);
	vcdp->fullBus  (c+39,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_q),16);
	vcdp->fullBus  (c+40,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_i),16);
	vcdp->fullBus  (c+41,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_q),16);
	vcdp->fullBus  (c+42,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_i),16);
	vcdp->fullBus  (c+43,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_q),16);
	vcdp->fullBus  (c+44,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_i),16);
	vcdp->fullBus  (c+45,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_q),16);
	vcdp->fullBus  (c+46,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_i),16);
	vcdp->fullBus  (c+47,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_q),16);
	vcdp->fullBus  (c+48,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_i),16);
	vcdp->fullBus  (c+49,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_q),16);
	vcdp->fullBit  (c+50,(vlTOPp->CDMASpreading__DOT___zz_code));
	vcdp->fullBit  (c+51,(vlTOPp->CDMASpreading__DOT___zz_code_1));
	vcdp->fullBit  (c+52,(vlTOPp->CDMASpreading__DOT___zz_code_2));
	vcdp->fullBit  (c+53,(vlTOPp->CDMASpreading__DOT___zz_code_3));
	vcdp->fullBit  (c+54,(vlTOPp->CDMASpreading__DOT___zz_code_4));
	vcdp->fullBit  (c+55,(vlTOPp->CDMASpreading__DOT___zz_code_5));
	vcdp->fullBit  (c+56,(vlTOPp->CDMASpreading__DOT___zz_code_6));
	vcdp->fullBit  (c+57,(vlTOPp->CDMASpreading__DOT___zz_code_7));
	vcdp->fullBus  (c+58,(vlTOPp->CDMASpreading__DOT__cnt),3);
	vcdp->fullBit  (c+59,((0U == (IData)(vlTOPp->CDMASpreading__DOT__cnt))));
	vcdp->fullBit  (c+60,(vlTOPp->w_en));
	vcdp->fullBus  (c+61,(vlTOPp->w_addr),3);
	vcdp->fullBus  (c+62,(vlTOPp->w_data),8);
	vcdp->fullBit  (c+63,(vlTOPp->clc));
	vcdp->fullBus  (c+64,(vlTOPp->cnt_limit),3);
	vcdp->fullBit  (c+65,(vlTOPp->base_iq_valid));
	vcdp->fullBit  (c+66,(vlTOPp->base_iq_ready));
	vcdp->fullBus  (c+67,(vlTOPp->base_iq_payload_0_cha_i),16);
	vcdp->fullBus  (c+68,(vlTOPp->base_iq_payload_0_cha_q),16);
	vcdp->fullBus  (c+69,(vlTOPp->base_iq_payload_1_cha_i),16);
	vcdp->fullBus  (c+70,(vlTOPp->base_iq_payload_1_cha_q),16);
	vcdp->fullBus  (c+71,(vlTOPp->base_iq_payload_2_cha_i),16);
	vcdp->fullBus  (c+72,(vlTOPp->base_iq_payload_2_cha_q),16);
	vcdp->fullBus  (c+73,(vlTOPp->base_iq_payload_3_cha_i),16);
	vcdp->fullBus  (c+74,(vlTOPp->base_iq_payload_3_cha_q),16);
	vcdp->fullBus  (c+75,(vlTOPp->base_iq_payload_4_cha_i),16);
	vcdp->fullBus  (c+76,(vlTOPp->base_iq_payload_4_cha_q),16);
	vcdp->fullBus  (c+77,(vlTOPp->base_iq_payload_5_cha_i),16);
	vcdp->fullBus  (c+78,(vlTOPp->base_iq_payload_5_cha_q),16);
	vcdp->fullBus  (c+79,(vlTOPp->base_iq_payload_6_cha_i),16);
	vcdp->fullBus  (c+80,(vlTOPp->base_iq_payload_6_cha_q),16);
	vcdp->fullBus  (c+81,(vlTOPp->base_iq_payload_7_cha_i),16);
	vcdp->fullBus  (c+82,(vlTOPp->base_iq_payload_7_cha_q),16);
	vcdp->fullBit  (c+83,(vlTOPp->mod_sub_iqs_0_valid));
	vcdp->fullBus  (c+84,(vlTOPp->mod_sub_iqs_0_payload_cha_i),16);
	vcdp->fullBus  (c+85,(vlTOPp->mod_sub_iqs_0_payload_cha_q),16);
	vcdp->fullBit  (c+86,(vlTOPp->mod_sub_iqs_1_valid));
	vcdp->fullBus  (c+87,(vlTOPp->mod_sub_iqs_1_payload_cha_i),16);
	vcdp->fullBus  (c+88,(vlTOPp->mod_sub_iqs_1_payload_cha_q),16);
	vcdp->fullBit  (c+89,(vlTOPp->mod_sub_iqs_2_valid));
	vcdp->fullBus  (c+90,(vlTOPp->mod_sub_iqs_2_payload_cha_i),16);
	vcdp->fullBus  (c+91,(vlTOPp->mod_sub_iqs_2_payload_cha_q),16);
	vcdp->fullBit  (c+92,(vlTOPp->mod_sub_iqs_3_valid));
	vcdp->fullBus  (c+93,(vlTOPp->mod_sub_iqs_3_payload_cha_i),16);
	vcdp->fullBus  (c+94,(vlTOPp->mod_sub_iqs_3_payload_cha_q),16);
	vcdp->fullBit  (c+95,(vlTOPp->mod_sub_iqs_4_valid));
	vcdp->fullBus  (c+96,(vlTOPp->mod_sub_iqs_4_payload_cha_i),16);
	vcdp->fullBus  (c+97,(vlTOPp->mod_sub_iqs_4_payload_cha_q),16);
	vcdp->fullBit  (c+98,(vlTOPp->mod_sub_iqs_5_valid));
	vcdp->fullBus  (c+99,(vlTOPp->mod_sub_iqs_5_payload_cha_i),16);
	vcdp->fullBus  (c+100,(vlTOPp->mod_sub_iqs_5_payload_cha_q),16);
	vcdp->fullBit  (c+101,(vlTOPp->mod_sub_iqs_6_valid));
	vcdp->fullBus  (c+102,(vlTOPp->mod_sub_iqs_6_payload_cha_i),16);
	vcdp->fullBus  (c+103,(vlTOPp->mod_sub_iqs_6_payload_cha_q),16);
	vcdp->fullBit  (c+104,(vlTOPp->mod_sub_iqs_7_valid));
	vcdp->fullBus  (c+105,(vlTOPp->mod_sub_iqs_7_payload_cha_i),16);
	vcdp->fullBus  (c+106,(vlTOPp->mod_sub_iqs_7_payload_cha_q),16);
	vcdp->fullBit  (c+107,(vlTOPp->clk));
	vcdp->fullBit  (c+108,(vlTOPp->reset));
	vcdp->fullBit  (c+109,(((IData)(vlTOPp->base_iq_valid) 
				& (IData)(vlTOPp->base_iq_ready))));
	vcdp->fullBit  (c+110,((((IData)(vlTOPp->base_iq_valid) 
				 & (IData)(vlTOPp->base_iq_ready)) 
				| (0U != (IData)(vlTOPp->CDMASpreading__DOT__cnt)))));
    }
}
