// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCDMADespreading__Syms.h"


//======================

void VCDMADespreading::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VCDMADespreading::traceInit, &VCDMADespreading::traceFull, &VCDMADespreading::traceChg, this);
}
void VCDMADespreading::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCDMADespreading* t=(VCDMADespreading*)userthis;
    VCDMADespreading__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCDMADespreading::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCDMADespreading* t=(VCDMADespreading*)userthis;
    VCDMADespreading__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VCDMADespreading::traceInitThis(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
    }
}

void VCDMADespreading::traceFullThis(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceFullThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCDMADespreading::traceInitThis__1(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+225,"w_en",-1);
	vcdp->declBus  (c+226,"w_addr",-1,2,0);
	vcdp->declBus  (c+227,"w_data",-1,7,0);
	vcdp->declBit  (c+228,"clc",-1);
	vcdp->declBus  (c+229,"cnt_limit",-1,2,0);
	vcdp->declBit  (c+230,"mod_iq_valid",-1);
	vcdp->declBit  (c+231,"mod_iq_ready",-1);
	vcdp->declBus  (c+232,"mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+234,"base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+235,"base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+236,"base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+237,"base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+238,"base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+239,"base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+240,"base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+241,"base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+242,"base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+243,"base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+244,"base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+245,"base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+246,"base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+247,"base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+248,"base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+249,"base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+250,"base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+251,"base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+252,"base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+253,"base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+254,"base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+255,"base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+256,"base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+257,"base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+258,"clk",-1);
	vcdp->declBit  (c+259,"reset",-1);
	vcdp->declBit  (c+225,"CDMADespreading w_en",-1);
	vcdp->declBus  (c+226,"CDMADespreading w_addr",-1,2,0);
	vcdp->declBus  (c+227,"CDMADespreading w_data",-1,7,0);
	vcdp->declBit  (c+228,"CDMADespreading clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading cnt_limit",-1,2,0);
	vcdp->declBit  (c+230,"CDMADespreading mod_iq_valid",-1);
	vcdp->declBit  (c+231,"CDMADespreading mod_iq_ready",-1);
	vcdp->declBus  (c+232,"CDMADespreading mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+234,"CDMADespreading base_sub_iqs_0_valid",-1);
	vcdp->declBus  (c+235,"CDMADespreading base_sub_iqs_0_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+236,"CDMADespreading base_sub_iqs_0_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+237,"CDMADespreading base_sub_iqs_1_valid",-1);
	vcdp->declBus  (c+238,"CDMADespreading base_sub_iqs_1_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+239,"CDMADespreading base_sub_iqs_1_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+240,"CDMADespreading base_sub_iqs_2_valid",-1);
	vcdp->declBus  (c+241,"CDMADespreading base_sub_iqs_2_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+242,"CDMADespreading base_sub_iqs_2_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+243,"CDMADespreading base_sub_iqs_3_valid",-1);
	vcdp->declBus  (c+244,"CDMADespreading base_sub_iqs_3_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+245,"CDMADespreading base_sub_iqs_3_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+246,"CDMADespreading base_sub_iqs_4_valid",-1);
	vcdp->declBus  (c+247,"CDMADespreading base_sub_iqs_4_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+248,"CDMADespreading base_sub_iqs_4_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+249,"CDMADespreading base_sub_iqs_5_valid",-1);
	vcdp->declBus  (c+250,"CDMADespreading base_sub_iqs_5_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+251,"CDMADespreading base_sub_iqs_5_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+252,"CDMADespreading base_sub_iqs_6_valid",-1);
	vcdp->declBus  (c+253,"CDMADespreading base_sub_iqs_6_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+254,"CDMADespreading base_sub_iqs_6_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+255,"CDMADespreading base_sub_iqs_7_valid",-1);
	vcdp->declBus  (c+256,"CDMADespreading base_sub_iqs_7_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+257,"CDMADespreading base_sub_iqs_7_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+258,"CDMADespreading clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading reset",-1);
	vcdp->declBus  (c+33,"CDMADespreading computeUnit_8_code",-1,7,0);
	vcdp->declBus  (c+34,"CDMADespreading computeUnit_9_code",-1,7,0);
	vcdp->declBus  (c+35,"CDMADespreading computeUnit_10_code",-1,7,0);
	vcdp->declBus  (c+36,"CDMADespreading computeUnit_11_code",-1,7,0);
	vcdp->declBus  (c+37,"CDMADespreading computeUnit_12_code",-1,7,0);
	vcdp->declBus  (c+38,"CDMADespreading computeUnit_13_code",-1,7,0);
	vcdp->declBus  (c+39,"CDMADespreading computeUnit_14_code",-1,7,0);
	vcdp->declBus  (c+40,"CDMADespreading computeUnit_15_code",-1,7,0);
	// Tracing: CDMADespreading _zz_code_map_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:52
	// Tracing: CDMADespreading _zz_code_map_port1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:53
	// Tracing: CDMADespreading _zz_code_map_port2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:54
	// Tracing: CDMADespreading _zz_code_map_port3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:55
	// Tracing: CDMADespreading _zz_code_map_port4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:56
	// Tracing: CDMADespreading _zz_code_map_port5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:57
	// Tracing: CDMADespreading _zz_code_map_port6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:58
	// Tracing: CDMADespreading _zz_code_map_port7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:59
	vcdp->declBit  (c+49,"CDMADespreading computeUnit_8_base_iq_valid",-1);
	vcdp->declBus  (c+50,"CDMADespreading computeUnit_8_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+51,"CDMADespreading computeUnit_8_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+52,"CDMADespreading computeUnit_9_base_iq_valid",-1);
	vcdp->declBus  (c+53,"CDMADespreading computeUnit_9_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+54,"CDMADespreading computeUnit_9_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+55,"CDMADespreading computeUnit_10_base_iq_valid",-1);
	vcdp->declBus  (c+56,"CDMADespreading computeUnit_10_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+57,"CDMADespreading computeUnit_10_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+58,"CDMADespreading computeUnit_11_base_iq_valid",-1);
	vcdp->declBus  (c+59,"CDMADespreading computeUnit_11_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+60,"CDMADespreading computeUnit_11_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+61,"CDMADespreading computeUnit_12_base_iq_valid",-1);
	vcdp->declBus  (c+62,"CDMADespreading computeUnit_12_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+63,"CDMADespreading computeUnit_12_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+64,"CDMADespreading computeUnit_13_base_iq_valid",-1);
	vcdp->declBus  (c+65,"CDMADespreading computeUnit_13_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+66,"CDMADespreading computeUnit_13_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+67,"CDMADespreading computeUnit_14_base_iq_valid",-1);
	vcdp->declBus  (c+68,"CDMADespreading computeUnit_14_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+69,"CDMADespreading computeUnit_14_base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+70,"CDMADespreading computeUnit_15_base_iq_valid",-1);
	vcdp->declBus  (c+71,"CDMADespreading computeUnit_15_base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+72,"CDMADespreading computeUnit_15_base_iq_payload_cha_q",-1,15,0);
	// Tracing: CDMADespreading _zz_code_map_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:84
	// Tracing: CDMADespreading _zz_code // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:85
	// Tracing: CDMADespreading _zz_code_map_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:86
	// Tracing: CDMADespreading _zz_code_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:87
	// Tracing: CDMADespreading _zz_code_map_port_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:88
	// Tracing: CDMADespreading _zz_code_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:89
	// Tracing: CDMADespreading _zz_code_map_port_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:90
	// Tracing: CDMADespreading _zz_code_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:91
	// Tracing: CDMADespreading _zz_code_map_port_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:92
	// Tracing: CDMADespreading _zz_code_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:93
	// Tracing: CDMADespreading _zz_code_map_port_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:94
	// Tracing: CDMADespreading _zz_code_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:95
	// Tracing: CDMADespreading _zz_code_map_port_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:96
	// Tracing: CDMADespreading _zz_code_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:97
	// Tracing: CDMADespreading _zz_code_map_port_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:98
	// Tracing: CDMADespreading _zz_code_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:99
	// Tracing: CDMADespreading _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:100
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+41+i*1,"CDMADespreading code_map",(i+0),7,0);}}
	vcdp->declBus  (c+33,"CDMADespreading computeUnit_8 code",-1,7,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_8 mod_iq_valid",-1);
	vcdp->declBus  (c+232,"CDMADespreading computeUnit_8 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading computeUnit_8 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+49,"CDMADespreading computeUnit_8 base_iq_valid",-1);
	vcdp->declBus  (c+50,"CDMADespreading computeUnit_8 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+51,"CDMADespreading computeUnit_8 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_8 clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading computeUnit_8 cnt_limit",-1,2,0);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_8 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_8 reset",-1);
	vcdp->declBus  (c+73,"CDMADespreading computeUnit_8 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+74,"CDMADespreading computeUnit_8 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CDMADespreading computeUnit_8 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:304
	// Tracing: CDMADespreading computeUnit_8 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:305
	// Tracing: CDMADespreading computeUnit_8 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:306
	// Tracing: CDMADespreading computeUnit_8 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:307
	// Tracing: CDMADespreading computeUnit_8 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:308
	vcdp->declBus  (c+201,"CDMADespreading computeUnit_8 base_i",-1,15,0);
	vcdp->declBus  (c+202,"CDMADespreading computeUnit_8 base_q",-1,15,0);
	vcdp->declBus  (c+203,"CDMADespreading computeUnit_8 cnt",-1,2,0);
	vcdp->declBus  (c+1,"CDMADespreading computeUnit_8 data_i",-1,15,0);
	vcdp->declBus  (c+2,"CDMADespreading computeUnit_8 data_q",-1,15,0);
	vcdp->declBus  (c+3,"CDMADespreading computeUnit_8 base_i_next",-1,15,0);
	vcdp->declBus  (c+4,"CDMADespreading computeUnit_8 base_q_next",-1,15,0);
	vcdp->declBus  (c+50,"CDMADespreading computeUnit_8 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+51,"CDMADespreading computeUnit_8 base_q_next_regNext",-1,15,0);
	// Tracing: CDMADespreading computeUnit_8 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:318
	vcdp->declBus  (c+1,"CDMADespreading computeUnit_8 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+73,"CDMADespreading computeUnit_8 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_8 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_8 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_8 shiftRegister_16 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_8 shiftRegister_16 reset",-1);
	vcdp->declBus  (c+75,"CDMADespreading computeUnit_8 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+76,"CDMADespreading computeUnit_8 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+77,"CDMADespreading computeUnit_8 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+78,"CDMADespreading computeUnit_8 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+79,"CDMADespreading computeUnit_8 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+80,"CDMADespreading computeUnit_8 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+81,"CDMADespreading computeUnit_8 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+73,"CDMADespreading computeUnit_8 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+2,"CDMADespreading computeUnit_8 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+74,"CDMADespreading computeUnit_8 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_8 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_8 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_8 shiftRegister_17 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_8 shiftRegister_17 reset",-1);
	vcdp->declBus  (c+82,"CDMADespreading computeUnit_8 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+83,"CDMADespreading computeUnit_8 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+84,"CDMADespreading computeUnit_8 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+85,"CDMADespreading computeUnit_8 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+86,"CDMADespreading computeUnit_8 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+87,"CDMADespreading computeUnit_8 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+88,"CDMADespreading computeUnit_8 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+74,"CDMADespreading computeUnit_8 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+34,"CDMADespreading computeUnit_9 code",-1,7,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_9 mod_iq_valid",-1);
	vcdp->declBus  (c+232,"CDMADespreading computeUnit_9 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading computeUnit_9 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+52,"CDMADespreading computeUnit_9 base_iq_valid",-1);
	vcdp->declBus  (c+53,"CDMADespreading computeUnit_9 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+54,"CDMADespreading computeUnit_9 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_9 clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading computeUnit_9 cnt_limit",-1,2,0);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_9 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_9 reset",-1);
	vcdp->declBus  (c+89,"CDMADespreading computeUnit_9 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+90,"CDMADespreading computeUnit_9 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CDMADespreading computeUnit_9 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:304
	// Tracing: CDMADespreading computeUnit_9 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:305
	// Tracing: CDMADespreading computeUnit_9 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:306
	// Tracing: CDMADespreading computeUnit_9 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:307
	// Tracing: CDMADespreading computeUnit_9 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:308
	vcdp->declBus  (c+204,"CDMADespreading computeUnit_9 base_i",-1,15,0);
	vcdp->declBus  (c+205,"CDMADespreading computeUnit_9 base_q",-1,15,0);
	vcdp->declBus  (c+206,"CDMADespreading computeUnit_9 cnt",-1,2,0);
	vcdp->declBus  (c+5,"CDMADespreading computeUnit_9 data_i",-1,15,0);
	vcdp->declBus  (c+6,"CDMADespreading computeUnit_9 data_q",-1,15,0);
	vcdp->declBus  (c+7,"CDMADespreading computeUnit_9 base_i_next",-1,15,0);
	vcdp->declBus  (c+8,"CDMADespreading computeUnit_9 base_q_next",-1,15,0);
	vcdp->declBus  (c+53,"CDMADespreading computeUnit_9 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+54,"CDMADespreading computeUnit_9 base_q_next_regNext",-1,15,0);
	// Tracing: CDMADespreading computeUnit_9 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:318
	vcdp->declBus  (c+5,"CDMADespreading computeUnit_9 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+89,"CDMADespreading computeUnit_9 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_9 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_9 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_9 shiftRegister_16 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_9 shiftRegister_16 reset",-1);
	vcdp->declBus  (c+91,"CDMADespreading computeUnit_9 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+92,"CDMADespreading computeUnit_9 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+93,"CDMADespreading computeUnit_9 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+94,"CDMADespreading computeUnit_9 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+95,"CDMADespreading computeUnit_9 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+96,"CDMADespreading computeUnit_9 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+97,"CDMADespreading computeUnit_9 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+89,"CDMADespreading computeUnit_9 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+6,"CDMADespreading computeUnit_9 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+90,"CDMADespreading computeUnit_9 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_9 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_9 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_9 shiftRegister_17 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_9 shiftRegister_17 reset",-1);
	vcdp->declBus  (c+98,"CDMADespreading computeUnit_9 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+99,"CDMADespreading computeUnit_9 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+100,"CDMADespreading computeUnit_9 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+101,"CDMADespreading computeUnit_9 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+102,"CDMADespreading computeUnit_9 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+103,"CDMADespreading computeUnit_9 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+104,"CDMADespreading computeUnit_9 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+90,"CDMADespreading computeUnit_9 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+35,"CDMADespreading computeUnit_10 code",-1,7,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_10 mod_iq_valid",-1);
	vcdp->declBus  (c+232,"CDMADespreading computeUnit_10 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading computeUnit_10 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+55,"CDMADespreading computeUnit_10 base_iq_valid",-1);
	vcdp->declBus  (c+56,"CDMADespreading computeUnit_10 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+57,"CDMADespreading computeUnit_10 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_10 clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading computeUnit_10 cnt_limit",-1,2,0);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_10 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_10 reset",-1);
	vcdp->declBus  (c+105,"CDMADespreading computeUnit_10 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+106,"CDMADespreading computeUnit_10 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CDMADespreading computeUnit_10 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:304
	// Tracing: CDMADespreading computeUnit_10 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:305
	// Tracing: CDMADespreading computeUnit_10 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:306
	// Tracing: CDMADespreading computeUnit_10 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:307
	// Tracing: CDMADespreading computeUnit_10 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:308
	vcdp->declBus  (c+207,"CDMADespreading computeUnit_10 base_i",-1,15,0);
	vcdp->declBus  (c+208,"CDMADespreading computeUnit_10 base_q",-1,15,0);
	vcdp->declBus  (c+209,"CDMADespreading computeUnit_10 cnt",-1,2,0);
	vcdp->declBus  (c+9,"CDMADespreading computeUnit_10 data_i",-1,15,0);
	vcdp->declBus  (c+10,"CDMADespreading computeUnit_10 data_q",-1,15,0);
	vcdp->declBus  (c+11,"CDMADespreading computeUnit_10 base_i_next",-1,15,0);
	vcdp->declBus  (c+12,"CDMADespreading computeUnit_10 base_q_next",-1,15,0);
	vcdp->declBus  (c+56,"CDMADespreading computeUnit_10 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+57,"CDMADespreading computeUnit_10 base_q_next_regNext",-1,15,0);
	// Tracing: CDMADespreading computeUnit_10 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:318
	vcdp->declBus  (c+9,"CDMADespreading computeUnit_10 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+105,"CDMADespreading computeUnit_10 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_10 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_10 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_10 shiftRegister_16 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_10 shiftRegister_16 reset",-1);
	vcdp->declBus  (c+107,"CDMADespreading computeUnit_10 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+108,"CDMADespreading computeUnit_10 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+109,"CDMADespreading computeUnit_10 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+110,"CDMADespreading computeUnit_10 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+111,"CDMADespreading computeUnit_10 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+112,"CDMADespreading computeUnit_10 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+113,"CDMADespreading computeUnit_10 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+105,"CDMADespreading computeUnit_10 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+10,"CDMADespreading computeUnit_10 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+106,"CDMADespreading computeUnit_10 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_10 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_10 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_10 shiftRegister_17 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_10 shiftRegister_17 reset",-1);
	vcdp->declBus  (c+114,"CDMADespreading computeUnit_10 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+115,"CDMADespreading computeUnit_10 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+116,"CDMADespreading computeUnit_10 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+117,"CDMADespreading computeUnit_10 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+118,"CDMADespreading computeUnit_10 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+119,"CDMADespreading computeUnit_10 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+120,"CDMADespreading computeUnit_10 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+106,"CDMADespreading computeUnit_10 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+36,"CDMADespreading computeUnit_11 code",-1,7,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_11 mod_iq_valid",-1);
	vcdp->declBus  (c+232,"CDMADespreading computeUnit_11 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading computeUnit_11 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+58,"CDMADespreading computeUnit_11 base_iq_valid",-1);
	vcdp->declBus  (c+59,"CDMADespreading computeUnit_11 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+60,"CDMADespreading computeUnit_11 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_11 clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading computeUnit_11 cnt_limit",-1,2,0);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_11 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_11 reset",-1);
	vcdp->declBus  (c+121,"CDMADespreading computeUnit_11 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+122,"CDMADespreading computeUnit_11 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CDMADespreading computeUnit_11 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:304
	// Tracing: CDMADespreading computeUnit_11 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:305
	// Tracing: CDMADespreading computeUnit_11 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:306
	// Tracing: CDMADespreading computeUnit_11 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:307
	// Tracing: CDMADespreading computeUnit_11 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:308
	vcdp->declBus  (c+210,"CDMADespreading computeUnit_11 base_i",-1,15,0);
	vcdp->declBus  (c+211,"CDMADespreading computeUnit_11 base_q",-1,15,0);
	vcdp->declBus  (c+212,"CDMADespreading computeUnit_11 cnt",-1,2,0);
	vcdp->declBus  (c+13,"CDMADespreading computeUnit_11 data_i",-1,15,0);
	vcdp->declBus  (c+14,"CDMADespreading computeUnit_11 data_q",-1,15,0);
	vcdp->declBus  (c+15,"CDMADespreading computeUnit_11 base_i_next",-1,15,0);
	vcdp->declBus  (c+16,"CDMADespreading computeUnit_11 base_q_next",-1,15,0);
	vcdp->declBus  (c+59,"CDMADespreading computeUnit_11 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+60,"CDMADespreading computeUnit_11 base_q_next_regNext",-1,15,0);
	// Tracing: CDMADespreading computeUnit_11 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:318
	vcdp->declBus  (c+13,"CDMADespreading computeUnit_11 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+121,"CDMADespreading computeUnit_11 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_11 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_11 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_11 shiftRegister_16 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_11 shiftRegister_16 reset",-1);
	vcdp->declBus  (c+123,"CDMADespreading computeUnit_11 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+124,"CDMADespreading computeUnit_11 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+125,"CDMADespreading computeUnit_11 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+126,"CDMADespreading computeUnit_11 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+127,"CDMADespreading computeUnit_11 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+128,"CDMADespreading computeUnit_11 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+129,"CDMADespreading computeUnit_11 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+121,"CDMADespreading computeUnit_11 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+14,"CDMADespreading computeUnit_11 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+122,"CDMADespreading computeUnit_11 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_11 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_11 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_11 shiftRegister_17 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_11 shiftRegister_17 reset",-1);
	vcdp->declBus  (c+130,"CDMADespreading computeUnit_11 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+131,"CDMADespreading computeUnit_11 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+132,"CDMADespreading computeUnit_11 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+133,"CDMADespreading computeUnit_11 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+134,"CDMADespreading computeUnit_11 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+135,"CDMADespreading computeUnit_11 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+136,"CDMADespreading computeUnit_11 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+122,"CDMADespreading computeUnit_11 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+37,"CDMADespreading computeUnit_12 code",-1,7,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_12 mod_iq_valid",-1);
	vcdp->declBus  (c+232,"CDMADespreading computeUnit_12 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading computeUnit_12 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+61,"CDMADespreading computeUnit_12 base_iq_valid",-1);
	vcdp->declBus  (c+62,"CDMADespreading computeUnit_12 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+63,"CDMADespreading computeUnit_12 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_12 clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading computeUnit_12 cnt_limit",-1,2,0);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_12 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_12 reset",-1);
	vcdp->declBus  (c+137,"CDMADespreading computeUnit_12 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+138,"CDMADespreading computeUnit_12 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CDMADespreading computeUnit_12 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:304
	// Tracing: CDMADespreading computeUnit_12 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:305
	// Tracing: CDMADespreading computeUnit_12 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:306
	// Tracing: CDMADespreading computeUnit_12 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:307
	// Tracing: CDMADespreading computeUnit_12 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:308
	vcdp->declBus  (c+213,"CDMADespreading computeUnit_12 base_i",-1,15,0);
	vcdp->declBus  (c+214,"CDMADespreading computeUnit_12 base_q",-1,15,0);
	vcdp->declBus  (c+215,"CDMADespreading computeUnit_12 cnt",-1,2,0);
	vcdp->declBus  (c+17,"CDMADespreading computeUnit_12 data_i",-1,15,0);
	vcdp->declBus  (c+18,"CDMADespreading computeUnit_12 data_q",-1,15,0);
	vcdp->declBus  (c+19,"CDMADespreading computeUnit_12 base_i_next",-1,15,0);
	vcdp->declBus  (c+20,"CDMADespreading computeUnit_12 base_q_next",-1,15,0);
	vcdp->declBus  (c+62,"CDMADespreading computeUnit_12 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+63,"CDMADespreading computeUnit_12 base_q_next_regNext",-1,15,0);
	// Tracing: CDMADespreading computeUnit_12 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:318
	vcdp->declBus  (c+17,"CDMADespreading computeUnit_12 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+137,"CDMADespreading computeUnit_12 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_12 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_12 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_12 shiftRegister_16 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_12 shiftRegister_16 reset",-1);
	vcdp->declBus  (c+139,"CDMADespreading computeUnit_12 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+140,"CDMADespreading computeUnit_12 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+141,"CDMADespreading computeUnit_12 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+142,"CDMADespreading computeUnit_12 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+143,"CDMADespreading computeUnit_12 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+144,"CDMADespreading computeUnit_12 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+145,"CDMADespreading computeUnit_12 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+137,"CDMADespreading computeUnit_12 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+18,"CDMADespreading computeUnit_12 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+138,"CDMADespreading computeUnit_12 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_12 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_12 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_12 shiftRegister_17 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_12 shiftRegister_17 reset",-1);
	vcdp->declBus  (c+146,"CDMADespreading computeUnit_12 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+147,"CDMADespreading computeUnit_12 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+148,"CDMADespreading computeUnit_12 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+149,"CDMADespreading computeUnit_12 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+150,"CDMADespreading computeUnit_12 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+151,"CDMADespreading computeUnit_12 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+152,"CDMADespreading computeUnit_12 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+138,"CDMADespreading computeUnit_12 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+38,"CDMADespreading computeUnit_13 code",-1,7,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_13 mod_iq_valid",-1);
	vcdp->declBus  (c+232,"CDMADespreading computeUnit_13 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading computeUnit_13 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+64,"CDMADespreading computeUnit_13 base_iq_valid",-1);
	vcdp->declBus  (c+65,"CDMADespreading computeUnit_13 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+66,"CDMADespreading computeUnit_13 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_13 clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading computeUnit_13 cnt_limit",-1,2,0);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_13 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_13 reset",-1);
	vcdp->declBus  (c+153,"CDMADespreading computeUnit_13 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+154,"CDMADespreading computeUnit_13 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CDMADespreading computeUnit_13 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:304
	// Tracing: CDMADespreading computeUnit_13 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:305
	// Tracing: CDMADespreading computeUnit_13 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:306
	// Tracing: CDMADespreading computeUnit_13 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:307
	// Tracing: CDMADespreading computeUnit_13 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:308
	vcdp->declBus  (c+216,"CDMADespreading computeUnit_13 base_i",-1,15,0);
	vcdp->declBus  (c+217,"CDMADespreading computeUnit_13 base_q",-1,15,0);
	vcdp->declBus  (c+218,"CDMADespreading computeUnit_13 cnt",-1,2,0);
	vcdp->declBus  (c+21,"CDMADespreading computeUnit_13 data_i",-1,15,0);
	vcdp->declBus  (c+22,"CDMADespreading computeUnit_13 data_q",-1,15,0);
	vcdp->declBus  (c+23,"CDMADespreading computeUnit_13 base_i_next",-1,15,0);
	vcdp->declBus  (c+24,"CDMADespreading computeUnit_13 base_q_next",-1,15,0);
	vcdp->declBus  (c+65,"CDMADespreading computeUnit_13 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+66,"CDMADespreading computeUnit_13 base_q_next_regNext",-1,15,0);
	// Tracing: CDMADespreading computeUnit_13 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:318
	vcdp->declBus  (c+21,"CDMADespreading computeUnit_13 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+153,"CDMADespreading computeUnit_13 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_13 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_13 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_13 shiftRegister_16 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_13 shiftRegister_16 reset",-1);
	vcdp->declBus  (c+155,"CDMADespreading computeUnit_13 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+156,"CDMADespreading computeUnit_13 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+157,"CDMADespreading computeUnit_13 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+158,"CDMADespreading computeUnit_13 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+159,"CDMADespreading computeUnit_13 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+160,"CDMADespreading computeUnit_13 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+161,"CDMADespreading computeUnit_13 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+153,"CDMADespreading computeUnit_13 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+22,"CDMADespreading computeUnit_13 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+154,"CDMADespreading computeUnit_13 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_13 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_13 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_13 shiftRegister_17 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_13 shiftRegister_17 reset",-1);
	vcdp->declBus  (c+162,"CDMADespreading computeUnit_13 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+163,"CDMADespreading computeUnit_13 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+164,"CDMADespreading computeUnit_13 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+165,"CDMADespreading computeUnit_13 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+166,"CDMADespreading computeUnit_13 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+167,"CDMADespreading computeUnit_13 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+168,"CDMADespreading computeUnit_13 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+154,"CDMADespreading computeUnit_13 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+39,"CDMADespreading computeUnit_14 code",-1,7,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_14 mod_iq_valid",-1);
	vcdp->declBus  (c+232,"CDMADespreading computeUnit_14 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading computeUnit_14 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+67,"CDMADespreading computeUnit_14 base_iq_valid",-1);
	vcdp->declBus  (c+68,"CDMADespreading computeUnit_14 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+69,"CDMADespreading computeUnit_14 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_14 clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading computeUnit_14 cnt_limit",-1,2,0);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_14 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_14 reset",-1);
	vcdp->declBus  (c+169,"CDMADespreading computeUnit_14 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+170,"CDMADespreading computeUnit_14 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CDMADespreading computeUnit_14 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:304
	// Tracing: CDMADespreading computeUnit_14 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:305
	// Tracing: CDMADespreading computeUnit_14 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:306
	// Tracing: CDMADespreading computeUnit_14 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:307
	// Tracing: CDMADespreading computeUnit_14 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:308
	vcdp->declBus  (c+219,"CDMADespreading computeUnit_14 base_i",-1,15,0);
	vcdp->declBus  (c+220,"CDMADespreading computeUnit_14 base_q",-1,15,0);
	vcdp->declBus  (c+221,"CDMADespreading computeUnit_14 cnt",-1,2,0);
	vcdp->declBus  (c+25,"CDMADespreading computeUnit_14 data_i",-1,15,0);
	vcdp->declBus  (c+26,"CDMADespreading computeUnit_14 data_q",-1,15,0);
	vcdp->declBus  (c+27,"CDMADespreading computeUnit_14 base_i_next",-1,15,0);
	vcdp->declBus  (c+28,"CDMADespreading computeUnit_14 base_q_next",-1,15,0);
	vcdp->declBus  (c+68,"CDMADespreading computeUnit_14 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+69,"CDMADespreading computeUnit_14 base_q_next_regNext",-1,15,0);
	// Tracing: CDMADespreading computeUnit_14 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:318
	vcdp->declBus  (c+25,"CDMADespreading computeUnit_14 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+169,"CDMADespreading computeUnit_14 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_14 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_14 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_14 shiftRegister_16 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_14 shiftRegister_16 reset",-1);
	vcdp->declBus  (c+171,"CDMADespreading computeUnit_14 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+172,"CDMADespreading computeUnit_14 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+173,"CDMADespreading computeUnit_14 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+174,"CDMADespreading computeUnit_14 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+175,"CDMADespreading computeUnit_14 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+176,"CDMADespreading computeUnit_14 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+177,"CDMADespreading computeUnit_14 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+169,"CDMADespreading computeUnit_14 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+26,"CDMADespreading computeUnit_14 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+170,"CDMADespreading computeUnit_14 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_14 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_14 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_14 shiftRegister_17 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_14 shiftRegister_17 reset",-1);
	vcdp->declBus  (c+178,"CDMADespreading computeUnit_14 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+179,"CDMADespreading computeUnit_14 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+180,"CDMADespreading computeUnit_14 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+181,"CDMADespreading computeUnit_14 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+182,"CDMADespreading computeUnit_14 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+183,"CDMADespreading computeUnit_14 shiftRegister_17 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+184,"CDMADespreading computeUnit_14 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+170,"CDMADespreading computeUnit_14 shiftRegister_17 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+40,"CDMADespreading computeUnit_15 code",-1,7,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_15 mod_iq_valid",-1);
	vcdp->declBus  (c+232,"CDMADespreading computeUnit_15 mod_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+233,"CDMADespreading computeUnit_15 mod_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+70,"CDMADespreading computeUnit_15 base_iq_valid",-1);
	vcdp->declBus  (c+71,"CDMADespreading computeUnit_15 base_iq_payload_cha_i",-1,15,0);
	vcdp->declBus  (c+72,"CDMADespreading computeUnit_15 base_iq_payload_cha_q",-1,15,0);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_15 clc",-1);
	vcdp->declBus  (c+229,"CDMADespreading computeUnit_15 cnt_limit",-1,2,0);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_15 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_15 reset",-1);
	vcdp->declBus  (c+185,"CDMADespreading computeUnit_15 shiftRegister_16_output_1",-1,15,0);
	vcdp->declBus  (c+186,"CDMADespreading computeUnit_15 shiftRegister_17_output_1",-1,15,0);
	// Tracing: CDMADespreading computeUnit_15 _zz_data_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:304
	// Tracing: CDMADespreading computeUnit_15 _zz_data_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:305
	// Tracing: CDMADespreading computeUnit_15 _zz_base_i_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:306
	// Tracing: CDMADespreading computeUnit_15 _zz_base_q_next // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:307
	// Tracing: CDMADespreading computeUnit_15 _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:308
	vcdp->declBus  (c+222,"CDMADespreading computeUnit_15 base_i",-1,15,0);
	vcdp->declBus  (c+223,"CDMADespreading computeUnit_15 base_q",-1,15,0);
	vcdp->declBus  (c+224,"CDMADespreading computeUnit_15 cnt",-1,2,0);
	vcdp->declBus  (c+29,"CDMADespreading computeUnit_15 data_i",-1,15,0);
	vcdp->declBus  (c+30,"CDMADespreading computeUnit_15 data_q",-1,15,0);
	vcdp->declBus  (c+31,"CDMADespreading computeUnit_15 base_i_next",-1,15,0);
	vcdp->declBus  (c+32,"CDMADespreading computeUnit_15 base_q_next",-1,15,0);
	vcdp->declBus  (c+71,"CDMADespreading computeUnit_15 base_i_next_regNext",-1,15,0);
	vcdp->declBus  (c+72,"CDMADespreading computeUnit_15 base_q_next_regNext",-1,15,0);
	// Tracing: CDMADespreading computeUnit_15 _zz_base_iq_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:318
	vcdp->declBus  (c+29,"CDMADespreading computeUnit_15 shiftRegister_16 input_1",-1,15,0);
	vcdp->declBus  (c+185,"CDMADespreading computeUnit_15 shiftRegister_16 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_15 shiftRegister_16 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_15 shiftRegister_16 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_15 shiftRegister_16 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_15 shiftRegister_16 reset",-1);
	vcdp->declBus  (c+187,"CDMADespreading computeUnit_15 shiftRegister_16 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+188,"CDMADespreading computeUnit_15 shiftRegister_16 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+189,"CDMADespreading computeUnit_15 shiftRegister_16 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+190,"CDMADespreading computeUnit_15 shiftRegister_16 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+191,"CDMADespreading computeUnit_15 shiftRegister_16 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+192,"CDMADespreading computeUnit_15 shiftRegister_16 shift_reg_5",-1,15,0);
	vcdp->declBus  (c+193,"CDMADespreading computeUnit_15 shiftRegister_16 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+185,"CDMADespreading computeUnit_15 shiftRegister_16 shift_reg_7",-1,15,0);
	vcdp->declBus  (c+30,"CDMADespreading computeUnit_15 shiftRegister_17 input_1",-1,15,0);
	vcdp->declBus  (c+186,"CDMADespreading computeUnit_15 shiftRegister_17 output_1",-1,15,0);
	vcdp->declBit  (c+230,"CDMADespreading computeUnit_15 shiftRegister_17 enable",-1);
	vcdp->declBit  (c+228,"CDMADespreading computeUnit_15 shiftRegister_17 clc",-1);
	vcdp->declBit  (c+258,"CDMADespreading computeUnit_15 shiftRegister_17 clk",-1);
	vcdp->declBit  (c+259,"CDMADespreading computeUnit_15 shiftRegister_17 reset",-1);
	vcdp->declBus  (c+194,"CDMADespreading computeUnit_15 shiftRegister_17 shift_reg_0",-1,15,0);
	vcdp->declBus  (c+195,"CDMADespreading computeUnit_15 shiftRegister_17 shift_reg_1",-1,15,0);
	vcdp->declBus  (c+196,"CDMADespreading computeUnit_15 shiftRegister_17 shift_reg_2",-1,15,0);
	vcdp->declBus  (c+197,"CDMADespreading computeUnit_15 shiftRegister_17 shift_reg_3",-1,15,0);
	vcdp->declBus  (c+198,"CDMADespreading computeUnit_15 shiftRegister_17 shift_reg_4",-1,15,0);
	vcdp->declBus  (c+199,"CDMADespreading computeUnit_15 shiftRegister_17 shift_reg_5",-1,15,0);
    }
}

void VCDMADespreading::traceInitThis__2(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBus  (c+200,"CDMADespreading computeUnit_15 shiftRegister_17 shift_reg_6",-1,15,0);
	vcdp->declBus  (c+186,"CDMADespreading computeUnit_15 shiftRegister_17 shift_reg_7",-1,15,0);
    }
}

void VCDMADespreading::traceFullThis__1(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_i),16);
	vcdp->fullBus  (c+2,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_q),16);
	vcdp->fullBus  (c+3,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next),16);
	vcdp->fullBus  (c+4,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next),16);
	vcdp->fullBus  (c+5,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_i),16);
	vcdp->fullBus  (c+6,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_q),16);
	vcdp->fullBus  (c+7,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next),16);
	vcdp->fullBus  (c+8,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next),16);
	vcdp->fullBus  (c+9,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_i),16);
	vcdp->fullBus  (c+10,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_q),16);
	vcdp->fullBus  (c+11,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next),16);
	vcdp->fullBus  (c+12,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next),16);
	vcdp->fullBus  (c+13,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_i),16);
	vcdp->fullBus  (c+14,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_q),16);
	vcdp->fullBus  (c+15,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next),16);
	vcdp->fullBus  (c+16,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next),16);
	vcdp->fullBus  (c+17,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_i),16);
	vcdp->fullBus  (c+18,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_q),16);
	vcdp->fullBus  (c+19,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next),16);
	vcdp->fullBus  (c+20,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next),16);
	vcdp->fullBus  (c+21,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_i),16);
	vcdp->fullBus  (c+22,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_q),16);
	vcdp->fullBus  (c+23,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next),16);
	vcdp->fullBus  (c+24,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next),16);
	vcdp->fullBus  (c+25,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_i),16);
	vcdp->fullBus  (c+26,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_q),16);
	vcdp->fullBus  (c+27,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next),16);
	vcdp->fullBus  (c+28,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next),16);
	vcdp->fullBus  (c+29,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_i),16);
	vcdp->fullBus  (c+30,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_q),16);
	vcdp->fullBus  (c+31,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next),16);
	vcdp->fullBus  (c+32,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next),16);
	vcdp->fullBus  (c+33,(vlTOPp->CDMADespreading__DOT___zz_code_map_port0),8);
	vcdp->fullBus  (c+34,(vlTOPp->CDMADespreading__DOT___zz_code_map_port1),8);
	vcdp->fullBus  (c+35,(vlTOPp->CDMADespreading__DOT___zz_code_map_port2),8);
	vcdp->fullBus  (c+36,(vlTOPp->CDMADespreading__DOT___zz_code_map_port3),8);
	vcdp->fullBus  (c+37,(vlTOPp->CDMADespreading__DOT___zz_code_map_port4),8);
	vcdp->fullBus  (c+38,(vlTOPp->CDMADespreading__DOT___zz_code_map_port5),8);
	vcdp->fullBus  (c+39,(vlTOPp->CDMADespreading__DOT___zz_code_map_port6),8);
	vcdp->fullBus  (c+40,(vlTOPp->CDMADespreading__DOT___zz_code_map_port7),8);
	vcdp->fullBus  (c+41,(vlTOPp->CDMADespreading__DOT__code_map[0]),8);
	vcdp->fullBus  (c+42,(vlTOPp->CDMADespreading__DOT__code_map[1]),8);
	vcdp->fullBus  (c+43,(vlTOPp->CDMADespreading__DOT__code_map[2]),8);
	vcdp->fullBus  (c+44,(vlTOPp->CDMADespreading__DOT__code_map[3]),8);
	vcdp->fullBus  (c+45,(vlTOPp->CDMADespreading__DOT__code_map[4]),8);
	vcdp->fullBus  (c+46,(vlTOPp->CDMADespreading__DOT__code_map[5]),8);
	vcdp->fullBus  (c+47,(vlTOPp->CDMADespreading__DOT__code_map[6]),8);
	vcdp->fullBus  (c+48,(vlTOPp->CDMADespreading__DOT__code_map[7]),8);
	vcdp->fullBit  (c+49,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+50,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+51,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+52,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+53,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+54,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+55,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+56,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+57,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+58,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+59,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+60,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+61,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+62,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+63,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+64,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+65,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+66,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+67,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+68,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+69,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next_regNext),16);
	vcdp->fullBit  (c+70,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT___zz_base_iq_valid));
	vcdp->fullBus  (c+71,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next_regNext),16);
	vcdp->fullBus  (c+72,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next_regNext),16);
	vcdp->fullBus  (c+73,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+74,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+75,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+76,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+77,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+78,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+79,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+80,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+81,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+82,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+83,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+84,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+85,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+86,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+87,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+88,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+89,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+90,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+91,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+92,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+93,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+94,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+95,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+96,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+97,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+98,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+99,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+100,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+101,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+102,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+103,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+104,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+105,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+106,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+107,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+108,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+109,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+110,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+111,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+112,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+113,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+114,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+115,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+116,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+117,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+118,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+119,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+120,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+121,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+122,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+123,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+124,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+125,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+126,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+127,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+128,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+129,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+130,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+131,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+132,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+133,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+134,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+135,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+136,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+137,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+138,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+139,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+140,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+141,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+142,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+143,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+144,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+145,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+146,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+147,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+148,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+149,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+150,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+151,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+152,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+153,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+154,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+155,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+156,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+157,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+158,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+159,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+160,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+161,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+162,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+163,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+164,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+165,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+166,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+167,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+168,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+169,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+170,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+171,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+172,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+173,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+174,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+175,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+176,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+177,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+178,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+179,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+180,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+181,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+182,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+183,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+184,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+185,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+186,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->fullBus  (c+187,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+188,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+189,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+190,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+191,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+192,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+193,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+194,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->fullBus  (c+195,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->fullBus  (c+196,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->fullBus  (c+197,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->fullBus  (c+198,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->fullBus  (c+199,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->fullBus  (c+200,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->fullBus  (c+201,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i),16);
	vcdp->fullBus  (c+202,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q),16);
	vcdp->fullBus  (c+203,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt),3);
	vcdp->fullBus  (c+204,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i),16);
	vcdp->fullBus  (c+205,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q),16);
	vcdp->fullBus  (c+206,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt),3);
	vcdp->fullBus  (c+207,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i),16);
	vcdp->fullBus  (c+208,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q),16);
	vcdp->fullBus  (c+209,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt),3);
	vcdp->fullBus  (c+210,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i),16);
	vcdp->fullBus  (c+211,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q),16);
	vcdp->fullBus  (c+212,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt),3);
	vcdp->fullBus  (c+213,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i),16);
	vcdp->fullBus  (c+214,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q),16);
	vcdp->fullBus  (c+215,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt),3);
	vcdp->fullBus  (c+216,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i),16);
	vcdp->fullBus  (c+217,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q),16);
	vcdp->fullBus  (c+218,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt),3);
	vcdp->fullBus  (c+219,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i),16);
	vcdp->fullBus  (c+220,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q),16);
	vcdp->fullBus  (c+221,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt),3);
	vcdp->fullBus  (c+222,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i),16);
	vcdp->fullBus  (c+223,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q),16);
	vcdp->fullBus  (c+224,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt),3);
	vcdp->fullBit  (c+225,(vlTOPp->w_en));
	vcdp->fullBus  (c+226,(vlTOPp->w_addr),3);
	vcdp->fullBus  (c+227,(vlTOPp->w_data),8);
	vcdp->fullBit  (c+228,(vlTOPp->clc));
	vcdp->fullBus  (c+229,(vlTOPp->cnt_limit),3);
	vcdp->fullBit  (c+230,(vlTOPp->mod_iq_valid));
	vcdp->fullBit  (c+231,(vlTOPp->mod_iq_ready));
	vcdp->fullBus  (c+232,(vlTOPp->mod_iq_payload_cha_i),16);
	vcdp->fullBus  (c+233,(vlTOPp->mod_iq_payload_cha_q),16);
	vcdp->fullBit  (c+234,(vlTOPp->base_sub_iqs_0_valid));
	vcdp->fullBus  (c+235,(vlTOPp->base_sub_iqs_0_payload_cha_i),16);
	vcdp->fullBus  (c+236,(vlTOPp->base_sub_iqs_0_payload_cha_q),16);
	vcdp->fullBit  (c+237,(vlTOPp->base_sub_iqs_1_valid));
	vcdp->fullBus  (c+238,(vlTOPp->base_sub_iqs_1_payload_cha_i),16);
	vcdp->fullBus  (c+239,(vlTOPp->base_sub_iqs_1_payload_cha_q),16);
	vcdp->fullBit  (c+240,(vlTOPp->base_sub_iqs_2_valid));
	vcdp->fullBus  (c+241,(vlTOPp->base_sub_iqs_2_payload_cha_i),16);
	vcdp->fullBus  (c+242,(vlTOPp->base_sub_iqs_2_payload_cha_q),16);
	vcdp->fullBit  (c+243,(vlTOPp->base_sub_iqs_3_valid));
	vcdp->fullBus  (c+244,(vlTOPp->base_sub_iqs_3_payload_cha_i),16);
	vcdp->fullBus  (c+245,(vlTOPp->base_sub_iqs_3_payload_cha_q),16);
	vcdp->fullBit  (c+246,(vlTOPp->base_sub_iqs_4_valid));
	vcdp->fullBus  (c+247,(vlTOPp->base_sub_iqs_4_payload_cha_i),16);
	vcdp->fullBus  (c+248,(vlTOPp->base_sub_iqs_4_payload_cha_q),16);
	vcdp->fullBit  (c+249,(vlTOPp->base_sub_iqs_5_valid));
	vcdp->fullBus  (c+250,(vlTOPp->base_sub_iqs_5_payload_cha_i),16);
	vcdp->fullBus  (c+251,(vlTOPp->base_sub_iqs_5_payload_cha_q),16);
	vcdp->fullBit  (c+252,(vlTOPp->base_sub_iqs_6_valid));
	vcdp->fullBus  (c+253,(vlTOPp->base_sub_iqs_6_payload_cha_i),16);
	vcdp->fullBus  (c+254,(vlTOPp->base_sub_iqs_6_payload_cha_q),16);
	vcdp->fullBit  (c+255,(vlTOPp->base_sub_iqs_7_valid));
	vcdp->fullBus  (c+256,(vlTOPp->base_sub_iqs_7_payload_cha_i),16);
	vcdp->fullBus  (c+257,(vlTOPp->base_sub_iqs_7_payload_cha_q),16);
	vcdp->fullBit  (c+258,(vlTOPp->clk));
    }
}

void VCDMADespreading::traceFullThis__7(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+259,(vlTOPp->reset));
    }
}
