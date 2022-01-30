// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOFDMEqualizer__Syms.h"


//======================

void VOFDMEqualizer::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VOFDMEqualizer::traceInit, &VOFDMEqualizer::traceFull, &VOFDMEqualizer::traceChg, this);
}
void VOFDMEqualizer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VOFDMEqualizer* t=(VOFDMEqualizer*)userthis;
    VOFDMEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VOFDMEqualizer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOFDMEqualizer* t=(VOFDMEqualizer*)userthis;
    VOFDMEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VOFDMEqualizer::traceInitThis(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VOFDMEqualizer::traceFullThis(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceFullThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOFDMEqualizer::traceInitThis__1(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+338,"raw_data_valid",-1);
	vcdp->declBit  (c+339,"raw_data_ready",-1);
	vcdp->declBit  (c+340,"raw_data_payload_last",-1);
	vcdp->declBus  (c+341,"raw_data_payload_fragment_cha_i",-1,15,0);
	vcdp->declBus  (c+342,"raw_data_payload_fragment_cha_q",-1,15,0);
	vcdp->declBit  (c+343,"equalized_data_valid",-1);
	vcdp->declBit  (c+344,"equalized_data_payload_last",-1);
	vcdp->declBus  (c+345,"equalized_data_payload_fragment_cha_i",-1,15,0);
	vcdp->declBus  (c+346,"equalized_data_payload_fragment_cha_q",-1,15,0);
	vcdp->declBit  (c+347,"clk",-1);
	vcdp->declBit  (c+348,"reset",-1);
	vcdp->declBit  (c+338,"OFDMEqualizer raw_data_valid",-1);
	vcdp->declBit  (c+339,"OFDMEqualizer raw_data_ready",-1);
	vcdp->declBit  (c+340,"OFDMEqualizer raw_data_payload_last",-1);
	vcdp->declBus  (c+341,"OFDMEqualizer raw_data_payload_fragment_cha_i",-1,15,0);
	vcdp->declBus  (c+342,"OFDMEqualizer raw_data_payload_fragment_cha_q",-1,15,0);
	vcdp->declBit  (c+343,"OFDMEqualizer equalized_data_valid",-1);
	vcdp->declBit  (c+344,"OFDMEqualizer equalized_data_payload_last",-1);
	vcdp->declBus  (c+345,"OFDMEqualizer equalized_data_payload_fragment_cha_i",-1,15,0);
	vcdp->declBus  (c+346,"OFDMEqualizer equalized_data_payload_fragment_cha_q",-1,15,0);
	vcdp->declBit  (c+347,"OFDMEqualizer clk",-1);
	vcdp->declBit  (c+348,"OFDMEqualizer reset",-1);
	vcdp->declBus  (c+3,"OFDMEqualizer i_zf_eq_scale",-1,15,0);
	vcdp->declBus  (c+4,"OFDMEqualizer i_zf_eq_ref_data",-1,15,0);
	vcdp->declBus  (c+5,"OFDMEqualizer q_zf_eq_scale",-1,15,0);
	vcdp->declBus  (c+6,"OFDMEqualizer q_zf_eq_ref_data",-1,15,0);
	vcdp->declBit  (c+354,"OFDMEqualizer i_zf_eq_raw_data_ready",-1);
	vcdp->declBit  (c+328,"OFDMEqualizer i_zf_eq_result_data_valid",-1);
	vcdp->declBus  (c+1,"OFDMEqualizer i_zf_eq_result_data_payload",-1,15,0);
	vcdp->declBit  (c+354,"OFDMEqualizer q_zf_eq_raw_data_ready",-1);
	vcdp->declBit  (c+329,"OFDMEqualizer q_zf_eq_result_data_valid",-1);
	vcdp->declBus  (c+2,"OFDMEqualizer q_zf_eq_result_data_payload",-1,15,0);
	// Tracing: OFDMEqualizer _zz_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:30
	// Tracing: OFDMEqualizer _zz_scale // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:31
	// Tracing: OFDMEqualizer _zz_ref_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:32
	// Tracing: OFDMEqualizer _zz_scale_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:33
	// Tracing: OFDMEqualizer _zz_ref_data_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:34
	// Tracing: OFDMEqualizer _zz_equalized_data_payload_fragment_cha_i // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:35
	// Tracing: OFDMEqualizer _zz_equalized_data_payload_fragment_cha_q // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:36
	vcdp->declBus  (c+12,"OFDMEqualizer cha_i_ref_0",-1,15,0);
	vcdp->declBus  (c+13,"OFDMEqualizer cha_i_ref_1",-1,15,0);
	vcdp->declBus  (c+14,"OFDMEqualizer cha_i_ref_2",-1,15,0);
	vcdp->declBus  (c+15,"OFDMEqualizer cha_i_ref_3",-1,15,0);
	vcdp->declBus  (c+16,"OFDMEqualizer cha_i_ref_4",-1,15,0);
	vcdp->declBus  (c+17,"OFDMEqualizer cha_i_ref_5",-1,15,0);
	vcdp->declBus  (c+18,"OFDMEqualizer cha_i_ref_6",-1,15,0);
	vcdp->declBus  (c+19,"OFDMEqualizer cha_i_ref_7",-1,15,0);
	vcdp->declBus  (c+20,"OFDMEqualizer cha_i_ref_8",-1,15,0);
	vcdp->declBus  (c+21,"OFDMEqualizer cha_i_ref_9",-1,15,0);
	vcdp->declBus  (c+22,"OFDMEqualizer cha_i_ref_10",-1,15,0);
	vcdp->declBus  (c+23,"OFDMEqualizer cha_i_ref_11",-1,15,0);
	vcdp->declBus  (c+24,"OFDMEqualizer cha_i_ref_12",-1,15,0);
	vcdp->declBus  (c+25,"OFDMEqualizer cha_i_ref_13",-1,15,0);
	vcdp->declBus  (c+26,"OFDMEqualizer cha_i_ref_14",-1,15,0);
	vcdp->declBus  (c+27,"OFDMEqualizer cha_i_ref_15",-1,15,0);
	vcdp->declBus  (c+28,"OFDMEqualizer cha_i_ref_16",-1,15,0);
	vcdp->declBus  (c+29,"OFDMEqualizer cha_i_ref_17",-1,15,0);
	vcdp->declBus  (c+30,"OFDMEqualizer cha_i_ref_18",-1,15,0);
	vcdp->declBus  (c+31,"OFDMEqualizer cha_i_ref_19",-1,15,0);
	vcdp->declBus  (c+32,"OFDMEqualizer cha_i_ref_20",-1,15,0);
	vcdp->declBus  (c+33,"OFDMEqualizer cha_i_ref_21",-1,15,0);
	vcdp->declBus  (c+34,"OFDMEqualizer cha_i_ref_22",-1,15,0);
	vcdp->declBus  (c+35,"OFDMEqualizer cha_i_ref_23",-1,15,0);
	vcdp->declBus  (c+36,"OFDMEqualizer cha_i_ref_24",-1,15,0);
	vcdp->declBus  (c+37,"OFDMEqualizer cha_i_ref_25",-1,15,0);
	vcdp->declBus  (c+38,"OFDMEqualizer cha_i_ref_26",-1,15,0);
	vcdp->declBus  (c+39,"OFDMEqualizer cha_i_ref_27",-1,15,0);
	vcdp->declBus  (c+40,"OFDMEqualizer cha_i_ref_28",-1,15,0);
	vcdp->declBus  (c+41,"OFDMEqualizer cha_i_ref_29",-1,15,0);
	vcdp->declBus  (c+42,"OFDMEqualizer cha_i_ref_30",-1,15,0);
	vcdp->declBus  (c+43,"OFDMEqualizer cha_i_ref_31",-1,15,0);
	vcdp->declBus  (c+44,"OFDMEqualizer cha_i_ref_32",-1,15,0);
	vcdp->declBus  (c+45,"OFDMEqualizer cha_i_ref_33",-1,15,0);
	vcdp->declBus  (c+46,"OFDMEqualizer cha_i_ref_34",-1,15,0);
	vcdp->declBus  (c+47,"OFDMEqualizer cha_i_ref_35",-1,15,0);
	vcdp->declBus  (c+48,"OFDMEqualizer cha_i_ref_36",-1,15,0);
	vcdp->declBus  (c+49,"OFDMEqualizer cha_i_ref_37",-1,15,0);
	vcdp->declBus  (c+50,"OFDMEqualizer cha_i_ref_38",-1,15,0);
	vcdp->declBus  (c+51,"OFDMEqualizer cha_i_ref_39",-1,15,0);
	vcdp->declBus  (c+52,"OFDMEqualizer cha_i_ref_40",-1,15,0);
	vcdp->declBus  (c+53,"OFDMEqualizer cha_i_ref_41",-1,15,0);
	vcdp->declBus  (c+54,"OFDMEqualizer cha_i_ref_42",-1,15,0);
	vcdp->declBus  (c+55,"OFDMEqualizer cha_i_ref_43",-1,15,0);
	vcdp->declBus  (c+56,"OFDMEqualizer cha_i_ref_44",-1,15,0);
	vcdp->declBus  (c+57,"OFDMEqualizer cha_i_ref_45",-1,15,0);
	vcdp->declBus  (c+58,"OFDMEqualizer cha_i_ref_46",-1,15,0);
	vcdp->declBus  (c+59,"OFDMEqualizer cha_i_ref_47",-1,15,0);
	vcdp->declBus  (c+60,"OFDMEqualizer cha_i_ref_48",-1,15,0);
	vcdp->declBus  (c+61,"OFDMEqualizer cha_i_ref_49",-1,15,0);
	vcdp->declBus  (c+62,"OFDMEqualizer cha_i_ref_50",-1,15,0);
	vcdp->declBus  (c+63,"OFDMEqualizer cha_i_ref_51",-1,15,0);
	vcdp->declBus  (c+64,"OFDMEqualizer cha_i_ref_52",-1,15,0);
	vcdp->declBus  (c+65,"OFDMEqualizer cha_i_ref_53",-1,15,0);
	vcdp->declBus  (c+66,"OFDMEqualizer cha_i_ref_54",-1,15,0);
	vcdp->declBus  (c+67,"OFDMEqualizer cha_i_ref_55",-1,15,0);
	vcdp->declBus  (c+68,"OFDMEqualizer cha_i_ref_56",-1,15,0);
	vcdp->declBus  (c+69,"OFDMEqualizer cha_i_ref_57",-1,15,0);
	vcdp->declBus  (c+70,"OFDMEqualizer cha_i_ref_58",-1,15,0);
	vcdp->declBus  (c+71,"OFDMEqualizer cha_i_ref_59",-1,15,0);
	vcdp->declBus  (c+72,"OFDMEqualizer cha_i_ref_60",-1,15,0);
	vcdp->declBus  (c+73,"OFDMEqualizer cha_i_ref_61",-1,15,0);
	vcdp->declBus  (c+74,"OFDMEqualizer cha_i_ref_62",-1,15,0);
	vcdp->declBus  (c+75,"OFDMEqualizer cha_i_ref_63",-1,15,0);
	vcdp->declBus  (c+76,"OFDMEqualizer cha_q_ref_0",-1,15,0);
	vcdp->declBus  (c+77,"OFDMEqualizer cha_q_ref_1",-1,15,0);
	vcdp->declBus  (c+78,"OFDMEqualizer cha_q_ref_2",-1,15,0);
	vcdp->declBus  (c+79,"OFDMEqualizer cha_q_ref_3",-1,15,0);
	vcdp->declBus  (c+80,"OFDMEqualizer cha_q_ref_4",-1,15,0);
	vcdp->declBus  (c+81,"OFDMEqualizer cha_q_ref_5",-1,15,0);
	vcdp->declBus  (c+82,"OFDMEqualizer cha_q_ref_6",-1,15,0);
	vcdp->declBus  (c+83,"OFDMEqualizer cha_q_ref_7",-1,15,0);
	vcdp->declBus  (c+84,"OFDMEqualizer cha_q_ref_8",-1,15,0);
	vcdp->declBus  (c+85,"OFDMEqualizer cha_q_ref_9",-1,15,0);
	vcdp->declBus  (c+86,"OFDMEqualizer cha_q_ref_10",-1,15,0);
	vcdp->declBus  (c+87,"OFDMEqualizer cha_q_ref_11",-1,15,0);
	vcdp->declBus  (c+88,"OFDMEqualizer cha_q_ref_12",-1,15,0);
	vcdp->declBus  (c+89,"OFDMEqualizer cha_q_ref_13",-1,15,0);
	vcdp->declBus  (c+90,"OFDMEqualizer cha_q_ref_14",-1,15,0);
	vcdp->declBus  (c+91,"OFDMEqualizer cha_q_ref_15",-1,15,0);
	vcdp->declBus  (c+92,"OFDMEqualizer cha_q_ref_16",-1,15,0);
	vcdp->declBus  (c+93,"OFDMEqualizer cha_q_ref_17",-1,15,0);
	vcdp->declBus  (c+94,"OFDMEqualizer cha_q_ref_18",-1,15,0);
	vcdp->declBus  (c+95,"OFDMEqualizer cha_q_ref_19",-1,15,0);
	vcdp->declBus  (c+96,"OFDMEqualizer cha_q_ref_20",-1,15,0);
	vcdp->declBus  (c+97,"OFDMEqualizer cha_q_ref_21",-1,15,0);
	vcdp->declBus  (c+98,"OFDMEqualizer cha_q_ref_22",-1,15,0);
	vcdp->declBus  (c+99,"OFDMEqualizer cha_q_ref_23",-1,15,0);
	vcdp->declBus  (c+100,"OFDMEqualizer cha_q_ref_24",-1,15,0);
	vcdp->declBus  (c+101,"OFDMEqualizer cha_q_ref_25",-1,15,0);
	vcdp->declBus  (c+102,"OFDMEqualizer cha_q_ref_26",-1,15,0);
	vcdp->declBus  (c+103,"OFDMEqualizer cha_q_ref_27",-1,15,0);
	vcdp->declBus  (c+104,"OFDMEqualizer cha_q_ref_28",-1,15,0);
	vcdp->declBus  (c+105,"OFDMEqualizer cha_q_ref_29",-1,15,0);
	vcdp->declBus  (c+106,"OFDMEqualizer cha_q_ref_30",-1,15,0);
	vcdp->declBus  (c+107,"OFDMEqualizer cha_q_ref_31",-1,15,0);
	vcdp->declBus  (c+108,"OFDMEqualizer cha_q_ref_32",-1,15,0);
	vcdp->declBus  (c+109,"OFDMEqualizer cha_q_ref_33",-1,15,0);
	vcdp->declBus  (c+110,"OFDMEqualizer cha_q_ref_34",-1,15,0);
	vcdp->declBus  (c+111,"OFDMEqualizer cha_q_ref_35",-1,15,0);
	vcdp->declBus  (c+112,"OFDMEqualizer cha_q_ref_36",-1,15,0);
	vcdp->declBus  (c+113,"OFDMEqualizer cha_q_ref_37",-1,15,0);
	vcdp->declBus  (c+114,"OFDMEqualizer cha_q_ref_38",-1,15,0);
	vcdp->declBus  (c+115,"OFDMEqualizer cha_q_ref_39",-1,15,0);
	vcdp->declBus  (c+116,"OFDMEqualizer cha_q_ref_40",-1,15,0);
	vcdp->declBus  (c+117,"OFDMEqualizer cha_q_ref_41",-1,15,0);
	vcdp->declBus  (c+118,"OFDMEqualizer cha_q_ref_42",-1,15,0);
	vcdp->declBus  (c+119,"OFDMEqualizer cha_q_ref_43",-1,15,0);
	vcdp->declBus  (c+120,"OFDMEqualizer cha_q_ref_44",-1,15,0);
	vcdp->declBus  (c+121,"OFDMEqualizer cha_q_ref_45",-1,15,0);
	vcdp->declBus  (c+122,"OFDMEqualizer cha_q_ref_46",-1,15,0);
	vcdp->declBus  (c+123,"OFDMEqualizer cha_q_ref_47",-1,15,0);
	vcdp->declBus  (c+124,"OFDMEqualizer cha_q_ref_48",-1,15,0);
	vcdp->declBus  (c+125,"OFDMEqualizer cha_q_ref_49",-1,15,0);
	vcdp->declBus  (c+126,"OFDMEqualizer cha_q_ref_50",-1,15,0);
	vcdp->declBus  (c+127,"OFDMEqualizer cha_q_ref_51",-1,15,0);
	vcdp->declBus  (c+128,"OFDMEqualizer cha_q_ref_52",-1,15,0);
	vcdp->declBus  (c+129,"OFDMEqualizer cha_q_ref_53",-1,15,0);
	vcdp->declBus  (c+130,"OFDMEqualizer cha_q_ref_54",-1,15,0);
	vcdp->declBus  (c+131,"OFDMEqualizer cha_q_ref_55",-1,15,0);
	vcdp->declBus  (c+132,"OFDMEqualizer cha_q_ref_56",-1,15,0);
	vcdp->declBus  (c+133,"OFDMEqualizer cha_q_ref_57",-1,15,0);
	vcdp->declBus  (c+134,"OFDMEqualizer cha_q_ref_58",-1,15,0);
	vcdp->declBus  (c+135,"OFDMEqualizer cha_q_ref_59",-1,15,0);
	vcdp->declBus  (c+136,"OFDMEqualizer cha_q_ref_60",-1,15,0);
	vcdp->declBus  (c+137,"OFDMEqualizer cha_q_ref_61",-1,15,0);
	vcdp->declBus  (c+138,"OFDMEqualizer cha_q_ref_62",-1,15,0);
	vcdp->declBus  (c+139,"OFDMEqualizer cha_q_ref_63",-1,15,0);
	vcdp->declBus  (c+140,"OFDMEqualizer cha_i_scale_0",-1,15,0);
	vcdp->declBus  (c+141,"OFDMEqualizer cha_i_scale_1",-1,15,0);
	vcdp->declBus  (c+142,"OFDMEqualizer cha_i_scale_2",-1,15,0);
	vcdp->declBus  (c+143,"OFDMEqualizer cha_i_scale_3",-1,15,0);
	vcdp->declBus  (c+144,"OFDMEqualizer cha_i_scale_4",-1,15,0);
	vcdp->declBus  (c+145,"OFDMEqualizer cha_i_scale_5",-1,15,0);
	vcdp->declBus  (c+146,"OFDMEqualizer cha_i_scale_6",-1,15,0);
	vcdp->declBus  (c+147,"OFDMEqualizer cha_i_scale_7",-1,15,0);
	vcdp->declBus  (c+148,"OFDMEqualizer cha_i_scale_8",-1,15,0);
	vcdp->declBus  (c+149,"OFDMEqualizer cha_i_scale_9",-1,15,0);
	vcdp->declBus  (c+150,"OFDMEqualizer cha_i_scale_10",-1,15,0);
	vcdp->declBus  (c+151,"OFDMEqualizer cha_i_scale_11",-1,15,0);
	vcdp->declBus  (c+152,"OFDMEqualizer cha_i_scale_12",-1,15,0);
	vcdp->declBus  (c+153,"OFDMEqualizer cha_i_scale_13",-1,15,0);
	vcdp->declBus  (c+154,"OFDMEqualizer cha_i_scale_14",-1,15,0);
	vcdp->declBus  (c+155,"OFDMEqualizer cha_i_scale_15",-1,15,0);
	vcdp->declBus  (c+156,"OFDMEqualizer cha_i_scale_16",-1,15,0);
	vcdp->declBus  (c+157,"OFDMEqualizer cha_i_scale_17",-1,15,0);
	vcdp->declBus  (c+158,"OFDMEqualizer cha_i_scale_18",-1,15,0);
	vcdp->declBus  (c+159,"OFDMEqualizer cha_i_scale_19",-1,15,0);
	vcdp->declBus  (c+160,"OFDMEqualizer cha_i_scale_20",-1,15,0);
	vcdp->declBus  (c+161,"OFDMEqualizer cha_i_scale_21",-1,15,0);
	vcdp->declBus  (c+162,"OFDMEqualizer cha_i_scale_22",-1,15,0);
	vcdp->declBus  (c+163,"OFDMEqualizer cha_i_scale_23",-1,15,0);
	vcdp->declBus  (c+164,"OFDMEqualizer cha_i_scale_24",-1,15,0);
	vcdp->declBus  (c+165,"OFDMEqualizer cha_i_scale_25",-1,15,0);
	vcdp->declBus  (c+166,"OFDMEqualizer cha_i_scale_26",-1,15,0);
	vcdp->declBus  (c+167,"OFDMEqualizer cha_i_scale_27",-1,15,0);
	vcdp->declBus  (c+168,"OFDMEqualizer cha_i_scale_28",-1,15,0);
	vcdp->declBus  (c+169,"OFDMEqualizer cha_i_scale_29",-1,15,0);
	vcdp->declBus  (c+170,"OFDMEqualizer cha_i_scale_30",-1,15,0);
	vcdp->declBus  (c+171,"OFDMEqualizer cha_i_scale_31",-1,15,0);
	vcdp->declBus  (c+172,"OFDMEqualizer cha_i_scale_32",-1,15,0);
	vcdp->declBus  (c+173,"OFDMEqualizer cha_i_scale_33",-1,15,0);
	vcdp->declBus  (c+174,"OFDMEqualizer cha_i_scale_34",-1,15,0);
	vcdp->declBus  (c+175,"OFDMEqualizer cha_i_scale_35",-1,15,0);
	vcdp->declBus  (c+176,"OFDMEqualizer cha_i_scale_36",-1,15,0);
	vcdp->declBus  (c+177,"OFDMEqualizer cha_i_scale_37",-1,15,0);
	vcdp->declBus  (c+178,"OFDMEqualizer cha_i_scale_38",-1,15,0);
	vcdp->declBus  (c+179,"OFDMEqualizer cha_i_scale_39",-1,15,0);
	vcdp->declBus  (c+180,"OFDMEqualizer cha_i_scale_40",-1,15,0);
	vcdp->declBus  (c+181,"OFDMEqualizer cha_i_scale_41",-1,15,0);
	vcdp->declBus  (c+182,"OFDMEqualizer cha_i_scale_42",-1,15,0);
	vcdp->declBus  (c+183,"OFDMEqualizer cha_i_scale_43",-1,15,0);
	vcdp->declBus  (c+184,"OFDMEqualizer cha_i_scale_44",-1,15,0);
	vcdp->declBus  (c+185,"OFDMEqualizer cha_i_scale_45",-1,15,0);
	vcdp->declBus  (c+186,"OFDMEqualizer cha_i_scale_46",-1,15,0);
	vcdp->declBus  (c+187,"OFDMEqualizer cha_i_scale_47",-1,15,0);
	vcdp->declBus  (c+188,"OFDMEqualizer cha_i_scale_48",-1,15,0);
	vcdp->declBus  (c+189,"OFDMEqualizer cha_i_scale_49",-1,15,0);
	vcdp->declBus  (c+190,"OFDMEqualizer cha_i_scale_50",-1,15,0);
	vcdp->declBus  (c+191,"OFDMEqualizer cha_i_scale_51",-1,15,0);
	vcdp->declBus  (c+192,"OFDMEqualizer cha_i_scale_52",-1,15,0);
	vcdp->declBus  (c+193,"OFDMEqualizer cha_i_scale_53",-1,15,0);
	vcdp->declBus  (c+194,"OFDMEqualizer cha_i_scale_54",-1,15,0);
	vcdp->declBus  (c+195,"OFDMEqualizer cha_i_scale_55",-1,15,0);
	vcdp->declBus  (c+196,"OFDMEqualizer cha_i_scale_56",-1,15,0);
	vcdp->declBus  (c+197,"OFDMEqualizer cha_i_scale_57",-1,15,0);
	vcdp->declBus  (c+198,"OFDMEqualizer cha_i_scale_58",-1,15,0);
	vcdp->declBus  (c+199,"OFDMEqualizer cha_i_scale_59",-1,15,0);
	vcdp->declBus  (c+200,"OFDMEqualizer cha_i_scale_60",-1,15,0);
	vcdp->declBus  (c+201,"OFDMEqualizer cha_i_scale_61",-1,15,0);
	vcdp->declBus  (c+202,"OFDMEqualizer cha_i_scale_62",-1,15,0);
	vcdp->declBus  (c+203,"OFDMEqualizer cha_i_scale_63",-1,15,0);
	vcdp->declBus  (c+204,"OFDMEqualizer cha_q_scale_0",-1,15,0);
	vcdp->declBus  (c+205,"OFDMEqualizer cha_q_scale_1",-1,15,0);
	vcdp->declBus  (c+206,"OFDMEqualizer cha_q_scale_2",-1,15,0);
	vcdp->declBus  (c+207,"OFDMEqualizer cha_q_scale_3",-1,15,0);
	vcdp->declBus  (c+208,"OFDMEqualizer cha_q_scale_4",-1,15,0);
	vcdp->declBus  (c+209,"OFDMEqualizer cha_q_scale_5",-1,15,0);
	vcdp->declBus  (c+210,"OFDMEqualizer cha_q_scale_6",-1,15,0);
	vcdp->declBus  (c+211,"OFDMEqualizer cha_q_scale_7",-1,15,0);
	vcdp->declBus  (c+212,"OFDMEqualizer cha_q_scale_8",-1,15,0);
	vcdp->declBus  (c+213,"OFDMEqualizer cha_q_scale_9",-1,15,0);
	vcdp->declBus  (c+214,"OFDMEqualizer cha_q_scale_10",-1,15,0);
	vcdp->declBus  (c+215,"OFDMEqualizer cha_q_scale_11",-1,15,0);
	vcdp->declBus  (c+216,"OFDMEqualizer cha_q_scale_12",-1,15,0);
	vcdp->declBus  (c+217,"OFDMEqualizer cha_q_scale_13",-1,15,0);
	vcdp->declBus  (c+218,"OFDMEqualizer cha_q_scale_14",-1,15,0);
	vcdp->declBus  (c+219,"OFDMEqualizer cha_q_scale_15",-1,15,0);
	vcdp->declBus  (c+220,"OFDMEqualizer cha_q_scale_16",-1,15,0);
	vcdp->declBus  (c+221,"OFDMEqualizer cha_q_scale_17",-1,15,0);
	vcdp->declBus  (c+222,"OFDMEqualizer cha_q_scale_18",-1,15,0);
	vcdp->declBus  (c+223,"OFDMEqualizer cha_q_scale_19",-1,15,0);
	vcdp->declBus  (c+224,"OFDMEqualizer cha_q_scale_20",-1,15,0);
	vcdp->declBus  (c+225,"OFDMEqualizer cha_q_scale_21",-1,15,0);
	vcdp->declBus  (c+226,"OFDMEqualizer cha_q_scale_22",-1,15,0);
	vcdp->declBus  (c+227,"OFDMEqualizer cha_q_scale_23",-1,15,0);
	vcdp->declBus  (c+228,"OFDMEqualizer cha_q_scale_24",-1,15,0);
	vcdp->declBus  (c+229,"OFDMEqualizer cha_q_scale_25",-1,15,0);
	vcdp->declBus  (c+230,"OFDMEqualizer cha_q_scale_26",-1,15,0);
	vcdp->declBus  (c+231,"OFDMEqualizer cha_q_scale_27",-1,15,0);
	vcdp->declBus  (c+232,"OFDMEqualizer cha_q_scale_28",-1,15,0);
	vcdp->declBus  (c+233,"OFDMEqualizer cha_q_scale_29",-1,15,0);
	vcdp->declBus  (c+234,"OFDMEqualizer cha_q_scale_30",-1,15,0);
	vcdp->declBus  (c+235,"OFDMEqualizer cha_q_scale_31",-1,15,0);
	vcdp->declBus  (c+236,"OFDMEqualizer cha_q_scale_32",-1,15,0);
	vcdp->declBus  (c+237,"OFDMEqualizer cha_q_scale_33",-1,15,0);
	vcdp->declBus  (c+238,"OFDMEqualizer cha_q_scale_34",-1,15,0);
	vcdp->declBus  (c+239,"OFDMEqualizer cha_q_scale_35",-1,15,0);
	vcdp->declBus  (c+240,"OFDMEqualizer cha_q_scale_36",-1,15,0);
	vcdp->declBus  (c+241,"OFDMEqualizer cha_q_scale_37",-1,15,0);
	vcdp->declBus  (c+242,"OFDMEqualizer cha_q_scale_38",-1,15,0);
	vcdp->declBus  (c+243,"OFDMEqualizer cha_q_scale_39",-1,15,0);
	vcdp->declBus  (c+244,"OFDMEqualizer cha_q_scale_40",-1,15,0);
	vcdp->declBus  (c+245,"OFDMEqualizer cha_q_scale_41",-1,15,0);
	vcdp->declBus  (c+246,"OFDMEqualizer cha_q_scale_42",-1,15,0);
	vcdp->declBus  (c+247,"OFDMEqualizer cha_q_scale_43",-1,15,0);
	vcdp->declBus  (c+248,"OFDMEqualizer cha_q_scale_44",-1,15,0);
	vcdp->declBus  (c+249,"OFDMEqualizer cha_q_scale_45",-1,15,0);
	vcdp->declBus  (c+250,"OFDMEqualizer cha_q_scale_46",-1,15,0);
	vcdp->declBus  (c+251,"OFDMEqualizer cha_q_scale_47",-1,15,0);
	vcdp->declBus  (c+252,"OFDMEqualizer cha_q_scale_48",-1,15,0);
	vcdp->declBus  (c+253,"OFDMEqualizer cha_q_scale_49",-1,15,0);
	vcdp->declBus  (c+254,"OFDMEqualizer cha_q_scale_50",-1,15,0);
	vcdp->declBus  (c+255,"OFDMEqualizer cha_q_scale_51",-1,15,0);
	vcdp->declBus  (c+256,"OFDMEqualizer cha_q_scale_52",-1,15,0);
	vcdp->declBus  (c+257,"OFDMEqualizer cha_q_scale_53",-1,15,0);
	vcdp->declBus  (c+258,"OFDMEqualizer cha_q_scale_54",-1,15,0);
	vcdp->declBus  (c+259,"OFDMEqualizer cha_q_scale_55",-1,15,0);
	vcdp->declBus  (c+260,"OFDMEqualizer cha_q_scale_56",-1,15,0);
	vcdp->declBus  (c+261,"OFDMEqualizer cha_q_scale_57",-1,15,0);
	vcdp->declBus  (c+262,"OFDMEqualizer cha_q_scale_58",-1,15,0);
	vcdp->declBus  (c+263,"OFDMEqualizer cha_q_scale_59",-1,15,0);
	vcdp->declBus  (c+264,"OFDMEqualizer cha_q_scale_60",-1,15,0);
	vcdp->declBus  (c+265,"OFDMEqualizer cha_q_scale_61",-1,15,0);
	vcdp->declBus  (c+266,"OFDMEqualizer cha_q_scale_62",-1,15,0);
	vcdp->declBus  (c+267,"OFDMEqualizer cha_q_scale_63",-1,15,0);
	vcdp->declBus  (c+330,"OFDMEqualizer cnt",-1,5,0);
	vcdp->declBit  (c+331,"OFDMEqualizer train_en",-1);
	vcdp->declBit  (c+349,"OFDMEqualizer raw_data_fire",-1);
	vcdp->declBit  (c+332,"OFDMEqualizer when_OFDMEqualizer_l47",-1);
	vcdp->declBus  (c+333,"OFDMEqualizer train_cnt",-1,5,0);
	vcdp->declBit  (c+334,"OFDMEqualizer train_finished",-1);
	vcdp->declBit  (c+335,"OFDMEqualizer when_OFDMEqualizer_l71",-1);
	// Tracing: OFDMEqualizer _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:300
	// Tracing: OFDMEqualizer _zz_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:301
	vcdp->declBit  (c+7,"OFDMEqualizer when_OFDMEqualizer_l69",-1);
	vcdp->declBit  (c+336,"OFDMEqualizer raw_data_ready_1",-1);
	vcdp->declBit  (c+349,"OFDMEqualizer raw_data_fire_1",-1);
	vcdp->declBit  (c+350,"OFDMEqualizer when_OFDMEqualizer_l78",-1);
	vcdp->declBit  (c+351,"OFDMEqualizer when_OFDMEqualizer_l80",-1);
	vcdp->declBit  (c+268,"OFDMEqualizer raw_data_payload_last_delay_1",-1);
	vcdp->declBit  (c+269,"OFDMEqualizer raw_data_payload_last_delay_2",-1);
	vcdp->declBit  (c+270,"OFDMEqualizer raw_data_payload_last_delay_3",-1);
	vcdp->declBit  (c+271,"OFDMEqualizer raw_data_payload_last_delay_4",-1);
	vcdp->declBit  (c+272,"OFDMEqualizer raw_data_payload_last_delay_5",-1);
	vcdp->declBit  (c+273,"OFDMEqualizer raw_data_payload_last_delay_6",-1);
	vcdp->declBit  (c+274,"OFDMEqualizer raw_data_payload_last_delay_7",-1);
	vcdp->declBit  (c+275,"OFDMEqualizer raw_data_payload_last_delay_8",-1);
	vcdp->declBit  (c+276,"OFDMEqualizer raw_data_payload_last_delay_9",-1);
	vcdp->declBit  (c+277,"OFDMEqualizer raw_data_payload_last_delay_10",-1);
	vcdp->declBit  (c+278,"OFDMEqualizer raw_data_payload_last_delay_11",-1);
	vcdp->declBit  (c+279,"OFDMEqualizer raw_data_payload_last_delay_12",-1);
	vcdp->declBit  (c+280,"OFDMEqualizer raw_data_payload_last_delay_13",-1);
	vcdp->declBit  (c+281,"OFDMEqualizer raw_data_payload_last_delay_14",-1);
	vcdp->declBit  (c+282,"OFDMEqualizer raw_data_payload_last_delay_15",-1);
	vcdp->declBit  (c+283,"OFDMEqualizer raw_data_payload_last_delay_16",-1);
	vcdp->declBit  (c+338,"OFDMEqualizer i_zf_eq raw_data_valid",-1);
	vcdp->declBit  (c+354,"OFDMEqualizer i_zf_eq raw_data_ready",-1);
	vcdp->declBus  (c+341,"OFDMEqualizer i_zf_eq raw_data_payload",-1,15,0);
	vcdp->declBus  (c+3,"OFDMEqualizer i_zf_eq scale",-1,15,0);
	vcdp->declBus  (c+4,"OFDMEqualizer i_zf_eq ref_data",-1,15,0);
	vcdp->declBit  (c+331,"OFDMEqualizer i_zf_eq train_en",-1);
	vcdp->declBit  (c+328,"OFDMEqualizer i_zf_eq result_data_valid",-1);
	vcdp->declBus  (c+1,"OFDMEqualizer i_zf_eq result_data_payload",-1,15,0);
	vcdp->declBit  (c+347,"OFDMEqualizer i_zf_eq clk",-1);
	vcdp->declBit  (c+348,"OFDMEqualizer i_zf_eq reset",-1);
	vcdp->declBit  (c+337,"OFDMEqualizer i_zf_eq cal_core_rotate_mode",-1);
	vcdp->declBus  (c+352,"OFDMEqualizer i_zf_eq cal_core_raw_data_payload_x",-1,15,0);
	vcdp->declBus  (c+8,"OFDMEqualizer i_zf_eq cal_core_raw_data_payload_y",-1,15,0);
	vcdp->declBus  (c+9,"OFDMEqualizer i_zf_eq cal_core_raw_data_payload_z",-1,15,0);
	vcdp->declBit  (c+354,"OFDMEqualizer i_zf_eq cal_core_raw_data_ready",-1);
	vcdp->declBit  (c+328,"OFDMEqualizer i_zf_eq cal_core_result_valid",-1);
	vcdp->declBus  (c+284,"OFDMEqualizer i_zf_eq cal_core_result_payload_x",-1,15,0);
	vcdp->declBus  (c+285,"OFDMEqualizer i_zf_eq cal_core_result_payload_y",-1,15,0);
	vcdp->declBus  (c+286,"OFDMEqualizer i_zf_eq cal_core_result_payload_z",-1,15,0);
	// Tracing: OFDMEqualizer i_zf_eq _zz_raw_data_payload_x // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1362
	// Tracing: OFDMEqualizer i_zf_eq _zz_raw_data_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1363
	// Tracing: OFDMEqualizer i_zf_eq _zz_raw_data_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1364
	// Tracing: OFDMEqualizer i_zf_eq _zz_raw_data_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1365
	// Tracing: OFDMEqualizer i_zf_eq _zz_raw_data_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1366
	// Tracing: OFDMEqualizer i_zf_eq _zz_raw_data_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1367
	// Tracing: OFDMEqualizer i_zf_eq _zz_raw_data_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1368
	// Tracing: OFDMEqualizer i_zf_eq _zz_mul_result // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1369
	// Tracing: OFDMEqualizer i_zf_eq _zz_div_result // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1370
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1371
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1372
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1373
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1374
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1375
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1376
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1377
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1378
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1379
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1380
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1381
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1382
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1383
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1384
	// Tracing: OFDMEqualizer i_zf_eq _zz_x_sign_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1385
	vcdp->declBit  (c+287,"OFDMEqualizer i_zf_eq x_sign",-1);
	vcdp->declBus  (c+288,"OFDMEqualizer i_zf_eq mul_result",-1,15,0);
	vcdp->declBus  (c+289,"OFDMEqualizer i_zf_eq div_result",-1,15,0);
	vcdp->declBit  (c+290,"OFDMEqualizer i_zf_eq train_en_delay_1",-1);
	vcdp->declBit  (c+291,"OFDMEqualizer i_zf_eq train_en_delay_2",-1);
	vcdp->declBit  (c+292,"OFDMEqualizer i_zf_eq train_en_delay_3",-1);
	vcdp->declBit  (c+293,"OFDMEqualizer i_zf_eq train_en_delay_4",-1);
	vcdp->declBit  (c+294,"OFDMEqualizer i_zf_eq train_en_delay_5",-1);
	vcdp->declBit  (c+295,"OFDMEqualizer i_zf_eq train_en_delay_6",-1);
	vcdp->declBit  (c+296,"OFDMEqualizer i_zf_eq train_en_delay_7",-1);
	vcdp->declBit  (c+297,"OFDMEqualizer i_zf_eq train_en_delay_8",-1);
	vcdp->declBit  (c+298,"OFDMEqualizer i_zf_eq train_en_delay_9",-1);
	vcdp->declBit  (c+299,"OFDMEqualizer i_zf_eq train_en_delay_10",-1);
	vcdp->declBit  (c+300,"OFDMEqualizer i_zf_eq train_en_delay_11",-1);
	vcdp->declBit  (c+301,"OFDMEqualizer i_zf_eq train_en_delay_12",-1);
	vcdp->declBit  (c+302,"OFDMEqualizer i_zf_eq train_en_delay_13",-1);
	vcdp->declBit  (c+303,"OFDMEqualizer i_zf_eq train_en_delay_14",-1);
	vcdp->declBit  (c+304,"OFDMEqualizer i_zf_eq train_en_delay_15",-1);
	vcdp->declBit  (c+305,"OFDMEqualizer i_zf_eq train_en_delay_16",-1);
	vcdp->declBit  (c+337,"OFDMEqualizer i_zf_eq cal_core rotate_mode",-1);
	vcdp->declBus  (c+355,"OFDMEqualizer i_zf_eq cal_core x_u",-1,1,0);
	vcdp->declBit  (c+338,"OFDMEqualizer i_zf_eq cal_core raw_data_valid",-1);
	vcdp->declBit  (c+354,"OFDMEqualizer i_zf_eq cal_core raw_data_ready",-1);
	vcdp->declBus  (c+352,"OFDMEqualizer i_zf_eq cal_core raw_data_payload_x",-1,15,0);
	vcdp->declBus  (c+8,"OFDMEqualizer i_zf_eq cal_core raw_data_payload_y",-1,15,0);
	vcdp->declBus  (c+9,"OFDMEqualizer i_zf_eq cal_core raw_data_payload_z",-1,15,0);
	vcdp->declBit  (c+328,"OFDMEqualizer i_zf_eq cal_core result_valid",-1);
	vcdp->declBus  (c+284,"OFDMEqualizer i_zf_eq cal_core result_payload_x",-1,15,0);
	vcdp->declBus  (c+285,"OFDMEqualizer i_zf_eq cal_core result_payload_y",-1,15,0);
	vcdp->declBus  (c+286,"OFDMEqualizer i_zf_eq cal_core result_payload_z",-1,15,0);
	vcdp->declBit  (c+347,"OFDMEqualizer i_zf_eq cal_core clk",-1);
	vcdp->declBit  (c+348,"OFDMEqualizer i_zf_eq cal_core reset",-1);
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1494
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_1_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1495
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_1_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1496
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_1_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1497
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1498
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_17_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1499
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1500
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_32_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1501
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1502
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_2_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1503
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_2_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1504
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_2_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1505
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1506
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_18_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1507
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1508
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_33_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1509
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1510
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_3_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1511
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_3_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1512
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_3_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1513
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1514
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_19_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1515
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1516
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_34_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1517
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1518
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_4_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1519
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_4_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1520
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_4_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1521
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1522
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_20_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1523
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1524
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_35_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1525
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1526
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_5_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1527
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_5_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1528
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_5_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1529
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1530
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_21_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1531
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1532
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_36_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1533
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1534
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_6_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1535
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_6_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1536
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_6_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1537
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1538
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_22_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1539
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1540
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_37_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1541
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1542
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_7_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1543
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_7_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1544
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_7_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1545
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1546
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_23_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1547
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1548
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_38_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1549
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1550
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_8_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1551
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_8_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1552
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_8_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1553
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1554
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_24_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1555
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1556
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_39_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1557
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1558
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_9_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1559
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_9_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1560
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_9_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1561
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1562
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_25_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1563
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1564
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_40_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1565
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1566
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_10_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1567
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_10_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1568
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_10_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1569
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1570
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_26_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1571
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1572
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_41_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1573
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1574
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_11_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1575
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_11_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1576
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_11_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1577
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1578
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_27_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1579
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1580
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_42_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1581
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1582
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_12_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1583
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_12_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1584
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_12_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1585
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1586
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_28_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1587
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1588
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_43_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1589
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1590
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_13_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1591
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_13_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1592
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_13_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1593
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1594
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_29_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1595
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1596
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_44_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1597
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1598
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_14_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1599
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_14_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1600
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_14_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1601
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1602
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_30_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1603
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1604
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_45_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1605
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1606
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_15_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1607
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_15_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1608
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_x_15_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1609
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1610
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_y_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1611
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1612
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz__zz_result_payload_z_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1613
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1614
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1615
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1616
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1617
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1618
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1619
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1620
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1621
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1622
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1623
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1624
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1625
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1626
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1627
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1628
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1629
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1630
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1631
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1632
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1633
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1634
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1635
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1636
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1637
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1638
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1639
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1640
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1641
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1642
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1643
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1644
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1645
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_31 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1646
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1647
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1648
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1649
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1650
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1651
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1652
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1653
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1654
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1655
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1656
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1657
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1658
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1659
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1660
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1661
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1662
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1663
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1664
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1665
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1666
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1667
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1668
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1669
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1670
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1671
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1672
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1673
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1674
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1675
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1676
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_valid_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1677
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_46 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1678
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_47 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1679
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_48 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1680
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_49 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1681
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_50 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1682
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_51 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1683
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_52 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1684
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_53 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1685
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_54 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1686
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_55 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1687
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_56 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1688
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_57 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1689
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_58 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1690
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_59 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1691
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_60 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1692
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_61 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1693
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_62 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1694
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_63 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1695
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_64 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1696
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1697
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1698
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1699
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1700
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1701
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1702
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1703
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1704
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1705
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1706
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_z_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1707
	vcdp->declBit  (c+338,"OFDMEqualizer i_zf_eq cal_core raw_data_fire",-1);
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1709
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1710
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1711
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1712
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1713
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1714
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_81 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1715
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_82 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1716
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_83 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1717
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_84 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1718
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_85 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1719
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_86 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1720
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_87 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1721
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_88 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1722
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_89 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1723
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_90 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1724
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_91 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1725
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_92 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1726
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_93 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1727
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_94 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1728
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_95 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1729
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_96 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1730
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_97 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1731
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_98 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1732
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_99 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1733
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_100 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1734
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_101 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1735
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_102 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1736
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_103 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1737
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_104 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1738
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_105 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1739
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_106 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1740
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_107 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1741
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_108 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1742
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_109 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1743
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_110 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1744
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_111 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1745
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_112 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1746
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_113 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1747
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_114 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1748
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_115 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1749
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_116 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1750
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_117 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1751
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_y_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1752
	// Tracing: OFDMEqualizer i_zf_eq cal_core _zz_result_payload_x_118 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1753
	vcdp->declBit  (c+338,"OFDMEqualizer q_zf_eq raw_data_valid",-1);
	vcdp->declBit  (c+354,"OFDMEqualizer q_zf_eq raw_data_ready",-1);
	vcdp->declBus  (c+342,"OFDMEqualizer q_zf_eq raw_data_payload",-1,15,0);
	vcdp->declBus  (c+5,"OFDMEqualizer q_zf_eq scale",-1,15,0);
	vcdp->declBus  (c+6,"OFDMEqualizer q_zf_eq ref_data",-1,15,0);
	vcdp->declBit  (c+331,"OFDMEqualizer q_zf_eq train_en",-1);
	vcdp->declBit  (c+329,"OFDMEqualizer q_zf_eq result_data_valid",-1);
	vcdp->declBus  (c+2,"OFDMEqualizer q_zf_eq result_data_payload",-1,15,0);
	vcdp->declBit  (c+347,"OFDMEqualizer q_zf_eq clk",-1);
	vcdp->declBit  (c+348,"OFDMEqualizer q_zf_eq reset",-1);
	vcdp->declBit  (c+337,"OFDMEqualizer q_zf_eq cal_core_rotate_mode",-1);
	vcdp->declBus  (c+353,"OFDMEqualizer q_zf_eq cal_core_raw_data_payload_x",-1,15,0);
	vcdp->declBus  (c+10,"OFDMEqualizer q_zf_eq cal_core_raw_data_payload_y",-1,15,0);
	vcdp->declBus  (c+11,"OFDMEqualizer q_zf_eq cal_core_raw_data_payload_z",-1,15,0);
	vcdp->declBit  (c+354,"OFDMEqualizer q_zf_eq cal_core_raw_data_ready",-1);
	vcdp->declBit  (c+329,"OFDMEqualizer q_zf_eq cal_core_result_valid",-1);
	vcdp->declBus  (c+306,"OFDMEqualizer q_zf_eq cal_core_result_payload_x",-1,15,0);
	vcdp->declBus  (c+307,"OFDMEqualizer q_zf_eq cal_core_result_payload_y",-1,15,0);
	vcdp->declBus  (c+308,"OFDMEqualizer q_zf_eq cal_core_result_payload_z",-1,15,0);
	// Tracing: OFDMEqualizer q_zf_eq _zz_raw_data_payload_x // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1362
	// Tracing: OFDMEqualizer q_zf_eq _zz_raw_data_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1363
	// Tracing: OFDMEqualizer q_zf_eq _zz_raw_data_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1364
	// Tracing: OFDMEqualizer q_zf_eq _zz_raw_data_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1365
	// Tracing: OFDMEqualizer q_zf_eq _zz_raw_data_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1366
	// Tracing: OFDMEqualizer q_zf_eq _zz_raw_data_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1367
	// Tracing: OFDMEqualizer q_zf_eq _zz_raw_data_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1368
	// Tracing: OFDMEqualizer q_zf_eq _zz_mul_result // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1369
	// Tracing: OFDMEqualizer q_zf_eq _zz_div_result // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1370
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1371
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1372
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1373
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1374
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1375
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1376
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1377
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1378
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1379
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1380
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1381
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1382
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1383
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1384
	// Tracing: OFDMEqualizer q_zf_eq _zz_x_sign_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1385
	vcdp->declBit  (c+309,"OFDMEqualizer q_zf_eq x_sign",-1);
	vcdp->declBus  (c+310,"OFDMEqualizer q_zf_eq mul_result",-1,15,0);
	vcdp->declBus  (c+311,"OFDMEqualizer q_zf_eq div_result",-1,15,0);
	vcdp->declBit  (c+312,"OFDMEqualizer q_zf_eq train_en_delay_1",-1);
	vcdp->declBit  (c+313,"OFDMEqualizer q_zf_eq train_en_delay_2",-1);
	vcdp->declBit  (c+314,"OFDMEqualizer q_zf_eq train_en_delay_3",-1);
	vcdp->declBit  (c+315,"OFDMEqualizer q_zf_eq train_en_delay_4",-1);
	vcdp->declBit  (c+316,"OFDMEqualizer q_zf_eq train_en_delay_5",-1);
	vcdp->declBit  (c+317,"OFDMEqualizer q_zf_eq train_en_delay_6",-1);
	vcdp->declBit  (c+318,"OFDMEqualizer q_zf_eq train_en_delay_7",-1);
	vcdp->declBit  (c+319,"OFDMEqualizer q_zf_eq train_en_delay_8",-1);
	vcdp->declBit  (c+320,"OFDMEqualizer q_zf_eq train_en_delay_9",-1);
	vcdp->declBit  (c+321,"OFDMEqualizer q_zf_eq train_en_delay_10",-1);
	vcdp->declBit  (c+322,"OFDMEqualizer q_zf_eq train_en_delay_11",-1);
	vcdp->declBit  (c+323,"OFDMEqualizer q_zf_eq train_en_delay_12",-1);
	vcdp->declBit  (c+324,"OFDMEqualizer q_zf_eq train_en_delay_13",-1);
	vcdp->declBit  (c+325,"OFDMEqualizer q_zf_eq train_en_delay_14",-1);
	vcdp->declBit  (c+326,"OFDMEqualizer q_zf_eq train_en_delay_15",-1);
	vcdp->declBit  (c+327,"OFDMEqualizer q_zf_eq train_en_delay_16",-1);
	vcdp->declBit  (c+337,"OFDMEqualizer q_zf_eq cal_core rotate_mode",-1);
	vcdp->declBus  (c+355,"OFDMEqualizer q_zf_eq cal_core x_u",-1,1,0);
	vcdp->declBit  (c+338,"OFDMEqualizer q_zf_eq cal_core raw_data_valid",-1);
	vcdp->declBit  (c+354,"OFDMEqualizer q_zf_eq cal_core raw_data_ready",-1);
	vcdp->declBus  (c+353,"OFDMEqualizer q_zf_eq cal_core raw_data_payload_x",-1,15,0);
	vcdp->declBus  (c+10,"OFDMEqualizer q_zf_eq cal_core raw_data_payload_y",-1,15,0);
	vcdp->declBus  (c+11,"OFDMEqualizer q_zf_eq cal_core raw_data_payload_z",-1,15,0);
	vcdp->declBit  (c+329,"OFDMEqualizer q_zf_eq cal_core result_valid",-1);
	vcdp->declBus  (c+306,"OFDMEqualizer q_zf_eq cal_core result_payload_x",-1,15,0);
	vcdp->declBus  (c+307,"OFDMEqualizer q_zf_eq cal_core result_payload_y",-1,15,0);
	vcdp->declBus  (c+308,"OFDMEqualizer q_zf_eq cal_core result_payload_z",-1,15,0);
	vcdp->declBit  (c+347,"OFDMEqualizer q_zf_eq cal_core clk",-1);
	vcdp->declBit  (c+348,"OFDMEqualizer q_zf_eq cal_core reset",-1);
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1494
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_1_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1495
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_1_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1496
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_1_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1497
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1498
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_17_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1499
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1500
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_32_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1501
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1502
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_2_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1503
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_2_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1504
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_2_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1505
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1506
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_18_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1507
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1508
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_33_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1509
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1510
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_3_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1511
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_3_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1512
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_3_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1513
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1514
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_19_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1515
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1516
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_34_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1517
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1518
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_4_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1519
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_4_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1520
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_4_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1521
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1522
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_20_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1523
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1524
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_35_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1525
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1526
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_5_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1527
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_5_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1528
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_5_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1529
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1530
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_21_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1531
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1532
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_36_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1533
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1534
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_6_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1535
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_6_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1536
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_6_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1537
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1538
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_22_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1539
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1540
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_37_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1541
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1542
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_7_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1543
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_7_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1544
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_7_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1545
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1546
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_23_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1547
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1548
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_38_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1549
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1550
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_8_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1551
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_8_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1552
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_8_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1553
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1554
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_24_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1555
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1556
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_39_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1557
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1558
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_9_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1559
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_9_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1560
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_9_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1561
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1562
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_25_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1563
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1564
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_40_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1565
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1566
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_10_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1567
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_10_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1568
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_10_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1569
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1570
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_26_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1571
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1572
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_41_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1573
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1574
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_11_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1575
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_11_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1576
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_11_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1577
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1578
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_27_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1579
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1580
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_42_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1581
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1582
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_12_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1583
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_12_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1584
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_12_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1585
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1586
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_28_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1587
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1588
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_43_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1589
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1590
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_13_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1591
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_13_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1592
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_13_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1593
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1594
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_29_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1595
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1596
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_44_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1597
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1598
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_14_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1599
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_14_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1600
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_14_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1601
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1602
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_30_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1603
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1604
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_45_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1605
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1606
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_15_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1607
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_15_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1608
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_x_15_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1609
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1610
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_y_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1611
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1612
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz__zz_result_payload_z_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1613
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1614
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1615
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1616
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1617
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1618
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1619
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1620
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1621
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1622
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1623
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1624
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1625
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1626
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1627
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1628
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1629
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_16 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1630
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_17 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1631
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_18 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1632
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_19 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1633
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_20 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1634
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_21 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1635
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_22 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1636
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_23 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1637
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_24 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1638
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_25 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1639
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_26 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1640
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_27 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1641
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_28 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1642
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_29 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1643
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_30 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1644
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_y // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1645
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_31 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1646
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_32 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1647
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_33 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1648
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_34 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1649
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_35 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1650
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_36 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1651
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_37 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1652
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_38 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1653
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_39 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1654
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_40 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1655
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_41 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1656
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_42 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1657
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_43 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1658
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_44 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1659
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_45 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1660
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_z // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1661
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1662
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1663
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1664
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1665
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1666
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1667
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1668
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1669
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_8 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1670
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_9 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1671
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_10 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1672
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_11 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1673
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_12 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1674
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_13 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1675
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_14 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1676
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_valid_15 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1677
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_46 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1678
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_47 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1679
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_48 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1680
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_49 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1681
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_50 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1682
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_51 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1683
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_52 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1684
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_53 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1685
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_54 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1686
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_55 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1687
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_56 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1688
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_57 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1689
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_58 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1690
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_59 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1691
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_60 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1692
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_61 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1693
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_62 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1694
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_63 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1695
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_64 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1696
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_65 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1697
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_66 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1698
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1699
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_68 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1700
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_69 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1701
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_70 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1702
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_71 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1703
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_72 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1704
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_73 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1705
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_74 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1706
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_z_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1707
	vcdp->declBit  (c+338,"OFDMEqualizer q_zf_eq cal_core raw_data_fire",-1);
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1709
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_76 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1710
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_77 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1711
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_78 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1712
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_79 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1713
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_80 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1714
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_81 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1715
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_82 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1716
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_83 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1717
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_84 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1718
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_85 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1719
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_86 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1720
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_87 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1721
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_88 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1722
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_89 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1723
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_90 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1724
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_91 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1725
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_92 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1726
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_93 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1727
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_94 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1728
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_95 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1729
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_96 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1730
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_97 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1731
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_98 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1732
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_99 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1733
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_100 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1734
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_101 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1735
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_102 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1736
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_103 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1737
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_104 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1738
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_105 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1739
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_106 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1740
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_107 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1741
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_108 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1742
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_109 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1743
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_110 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1744
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_111 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1745
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_112 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1746
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_113 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1747
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_114 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1748
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_115 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1749
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_116 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1750
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_117 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1751
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_y_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1752
	// Tracing: OFDMEqualizer q_zf_eq cal_core _zz_result_payload_x_118 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/OFDMEqualizer.v:1753
    }
}

void VOFDMEqualizer::traceFullThis__1(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload),16);
	vcdp->fullBus  (c+2,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload),16);
	vcdp->fullBus  (c+3,(vlTOPp->OFDMEqualizer__DOT___zz_scale),16);
	vcdp->fullBus  (c+4,(vlTOPp->OFDMEqualizer__DOT___zz_ref_data),16);
	vcdp->fullBus  (c+5,(vlTOPp->OFDMEqualizer__DOT___zz_scale_1),16);
	vcdp->fullBus  (c+6,(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1),16);
	vcdp->fullBit  (c+7,(vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69));
	vcdp->fullBus  (c+8,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
			       ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data)
			       : 0U)),16);
	vcdp->fullBus  (c+9,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
			       ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale))),16);
	vcdp->fullBus  (c+10,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
			        ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1)
			        : 0U)),16);
	vcdp->fullBus  (c+11,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
			        ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale_1))),16);
	vcdp->fullBus  (c+12,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_0),16);
	vcdp->fullBus  (c+13,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_1),16);
	vcdp->fullBus  (c+14,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_2),16);
	vcdp->fullBus  (c+15,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_3),16);
	vcdp->fullBus  (c+16,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_4),16);
	vcdp->fullBus  (c+17,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_5),16);
	vcdp->fullBus  (c+18,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_6),16);
	vcdp->fullBus  (c+19,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_7),16);
	vcdp->fullBus  (c+20,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_8),16);
	vcdp->fullBus  (c+21,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_9),16);
	vcdp->fullBus  (c+22,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_10),16);
	vcdp->fullBus  (c+23,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_11),16);
	vcdp->fullBus  (c+24,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_12),16);
	vcdp->fullBus  (c+25,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_13),16);
	vcdp->fullBus  (c+26,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_14),16);
	vcdp->fullBus  (c+27,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_15),16);
	vcdp->fullBus  (c+28,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_16),16);
	vcdp->fullBus  (c+29,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_17),16);
	vcdp->fullBus  (c+30,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_18),16);
	vcdp->fullBus  (c+31,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_19),16);
	vcdp->fullBus  (c+32,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_20),16);
	vcdp->fullBus  (c+33,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_21),16);
	vcdp->fullBus  (c+34,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_22),16);
	vcdp->fullBus  (c+35,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_23),16);
	vcdp->fullBus  (c+36,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_24),16);
	vcdp->fullBus  (c+37,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_25),16);
	vcdp->fullBus  (c+38,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_26),16);
	vcdp->fullBus  (c+39,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_27),16);
	vcdp->fullBus  (c+40,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_28),16);
	vcdp->fullBus  (c+41,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_29),16);
	vcdp->fullBus  (c+42,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_30),16);
	vcdp->fullBus  (c+43,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_31),16);
	vcdp->fullBus  (c+44,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_32),16);
	vcdp->fullBus  (c+45,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_33),16);
	vcdp->fullBus  (c+46,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_34),16);
	vcdp->fullBus  (c+47,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_35),16);
	vcdp->fullBus  (c+48,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_36),16);
	vcdp->fullBus  (c+49,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_37),16);
	vcdp->fullBus  (c+50,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_38),16);
	vcdp->fullBus  (c+51,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_39),16);
	vcdp->fullBus  (c+52,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_40),16);
	vcdp->fullBus  (c+53,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_41),16);
	vcdp->fullBus  (c+54,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_42),16);
	vcdp->fullBus  (c+55,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_43),16);
	vcdp->fullBus  (c+56,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_44),16);
	vcdp->fullBus  (c+57,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_45),16);
	vcdp->fullBus  (c+58,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_46),16);
	vcdp->fullBus  (c+59,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_47),16);
	vcdp->fullBus  (c+60,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_48),16);
	vcdp->fullBus  (c+61,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_49),16);
	vcdp->fullBus  (c+62,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_50),16);
	vcdp->fullBus  (c+63,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_51),16);
	vcdp->fullBus  (c+64,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_52),16);
	vcdp->fullBus  (c+65,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_53),16);
	vcdp->fullBus  (c+66,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_54),16);
	vcdp->fullBus  (c+67,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_55),16);
	vcdp->fullBus  (c+68,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_56),16);
	vcdp->fullBus  (c+69,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_57),16);
	vcdp->fullBus  (c+70,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_58),16);
	vcdp->fullBus  (c+71,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_59),16);
	vcdp->fullBus  (c+72,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_60),16);
	vcdp->fullBus  (c+73,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_61),16);
	vcdp->fullBus  (c+74,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_62),16);
	vcdp->fullBus  (c+75,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_63),16);
	vcdp->fullBus  (c+76,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_0),16);
	vcdp->fullBus  (c+77,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_1),16);
	vcdp->fullBus  (c+78,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_2),16);
	vcdp->fullBus  (c+79,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_3),16);
	vcdp->fullBus  (c+80,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_4),16);
	vcdp->fullBus  (c+81,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_5),16);
	vcdp->fullBus  (c+82,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_6),16);
	vcdp->fullBus  (c+83,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_7),16);
	vcdp->fullBus  (c+84,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_8),16);
	vcdp->fullBus  (c+85,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_9),16);
	vcdp->fullBus  (c+86,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_10),16);
	vcdp->fullBus  (c+87,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_11),16);
	vcdp->fullBus  (c+88,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_12),16);
	vcdp->fullBus  (c+89,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_13),16);
	vcdp->fullBus  (c+90,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_14),16);
	vcdp->fullBus  (c+91,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_15),16);
	vcdp->fullBus  (c+92,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_16),16);
	vcdp->fullBus  (c+93,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_17),16);
	vcdp->fullBus  (c+94,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_18),16);
	vcdp->fullBus  (c+95,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_19),16);
	vcdp->fullBus  (c+96,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_20),16);
	vcdp->fullBus  (c+97,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_21),16);
	vcdp->fullBus  (c+98,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_22),16);
	vcdp->fullBus  (c+99,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_23),16);
	vcdp->fullBus  (c+100,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_24),16);
	vcdp->fullBus  (c+101,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_25),16);
	vcdp->fullBus  (c+102,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_26),16);
	vcdp->fullBus  (c+103,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_27),16);
	vcdp->fullBus  (c+104,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_28),16);
	vcdp->fullBus  (c+105,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_29),16);
	vcdp->fullBus  (c+106,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_30),16);
	vcdp->fullBus  (c+107,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_31),16);
	vcdp->fullBus  (c+108,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_32),16);
	vcdp->fullBus  (c+109,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_33),16);
	vcdp->fullBus  (c+110,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_34),16);
	vcdp->fullBus  (c+111,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_35),16);
	vcdp->fullBus  (c+112,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_36),16);
	vcdp->fullBus  (c+113,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_37),16);
	vcdp->fullBus  (c+114,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_38),16);
	vcdp->fullBus  (c+115,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_39),16);
	vcdp->fullBus  (c+116,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_40),16);
	vcdp->fullBus  (c+117,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_41),16);
	vcdp->fullBus  (c+118,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_42),16);
	vcdp->fullBus  (c+119,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_43),16);
	vcdp->fullBus  (c+120,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_44),16);
	vcdp->fullBus  (c+121,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_45),16);
	vcdp->fullBus  (c+122,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_46),16);
	vcdp->fullBus  (c+123,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_47),16);
	vcdp->fullBus  (c+124,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_48),16);
	vcdp->fullBus  (c+125,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_49),16);
	vcdp->fullBus  (c+126,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_50),16);
	vcdp->fullBus  (c+127,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_51),16);
	vcdp->fullBus  (c+128,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_52),16);
	vcdp->fullBus  (c+129,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_53),16);
	vcdp->fullBus  (c+130,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_54),16);
	vcdp->fullBus  (c+131,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_55),16);
	vcdp->fullBus  (c+132,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_56),16);
	vcdp->fullBus  (c+133,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_57),16);
	vcdp->fullBus  (c+134,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_58),16);
	vcdp->fullBus  (c+135,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_59),16);
	vcdp->fullBus  (c+136,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_60),16);
	vcdp->fullBus  (c+137,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_61),16);
	vcdp->fullBus  (c+138,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_62),16);
	vcdp->fullBus  (c+139,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_63),16);
	vcdp->fullBus  (c+140,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_0),16);
	vcdp->fullBus  (c+141,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_1),16);
	vcdp->fullBus  (c+142,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_2),16);
	vcdp->fullBus  (c+143,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_3),16);
	vcdp->fullBus  (c+144,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_4),16);
	vcdp->fullBus  (c+145,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_5),16);
	vcdp->fullBus  (c+146,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_6),16);
	vcdp->fullBus  (c+147,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_7),16);
	vcdp->fullBus  (c+148,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_8),16);
	vcdp->fullBus  (c+149,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_9),16);
	vcdp->fullBus  (c+150,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_10),16);
	vcdp->fullBus  (c+151,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_11),16);
	vcdp->fullBus  (c+152,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_12),16);
	vcdp->fullBus  (c+153,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_13),16);
	vcdp->fullBus  (c+154,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_14),16);
	vcdp->fullBus  (c+155,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_15),16);
	vcdp->fullBus  (c+156,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_16),16);
	vcdp->fullBus  (c+157,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_17),16);
	vcdp->fullBus  (c+158,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_18),16);
	vcdp->fullBus  (c+159,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_19),16);
	vcdp->fullBus  (c+160,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_20),16);
	vcdp->fullBus  (c+161,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_21),16);
	vcdp->fullBus  (c+162,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_22),16);
	vcdp->fullBus  (c+163,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_23),16);
	vcdp->fullBus  (c+164,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_24),16);
	vcdp->fullBus  (c+165,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_25),16);
	vcdp->fullBus  (c+166,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_26),16);
	vcdp->fullBus  (c+167,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_27),16);
	vcdp->fullBus  (c+168,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_28),16);
	vcdp->fullBus  (c+169,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_29),16);
	vcdp->fullBus  (c+170,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_30),16);
	vcdp->fullBus  (c+171,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_31),16);
	vcdp->fullBus  (c+172,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_32),16);
	vcdp->fullBus  (c+173,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_33),16);
	vcdp->fullBus  (c+174,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_34),16);
	vcdp->fullBus  (c+175,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_35),16);
	vcdp->fullBus  (c+176,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_36),16);
	vcdp->fullBus  (c+177,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_37),16);
	vcdp->fullBus  (c+178,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_38),16);
	vcdp->fullBus  (c+179,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_39),16);
	vcdp->fullBus  (c+180,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_40),16);
	vcdp->fullBus  (c+181,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_41),16);
	vcdp->fullBus  (c+182,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_42),16);
	vcdp->fullBus  (c+183,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_43),16);
	vcdp->fullBus  (c+184,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_44),16);
	vcdp->fullBus  (c+185,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_45),16);
	vcdp->fullBus  (c+186,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_46),16);
	vcdp->fullBus  (c+187,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_47),16);
	vcdp->fullBus  (c+188,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_48),16);
	vcdp->fullBus  (c+189,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_49),16);
	vcdp->fullBus  (c+190,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_50),16);
	vcdp->fullBus  (c+191,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_51),16);
	vcdp->fullBus  (c+192,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_52),16);
	vcdp->fullBus  (c+193,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_53),16);
	vcdp->fullBus  (c+194,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_54),16);
	vcdp->fullBus  (c+195,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_55),16);
	vcdp->fullBus  (c+196,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_56),16);
	vcdp->fullBus  (c+197,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_57),16);
	vcdp->fullBus  (c+198,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_58),16);
	vcdp->fullBus  (c+199,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_59),16);
	vcdp->fullBus  (c+200,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_60),16);
	vcdp->fullBus  (c+201,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_61),16);
	vcdp->fullBus  (c+202,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_62),16);
	vcdp->fullBus  (c+203,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_63),16);
	vcdp->fullBus  (c+204,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_0),16);
	vcdp->fullBus  (c+205,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_1),16);
	vcdp->fullBus  (c+206,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_2),16);
	vcdp->fullBus  (c+207,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_3),16);
	vcdp->fullBus  (c+208,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_4),16);
	vcdp->fullBus  (c+209,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_5),16);
	vcdp->fullBus  (c+210,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_6),16);
	vcdp->fullBus  (c+211,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_7),16);
	vcdp->fullBus  (c+212,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_8),16);
	vcdp->fullBus  (c+213,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_9),16);
	vcdp->fullBus  (c+214,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_10),16);
	vcdp->fullBus  (c+215,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_11),16);
	vcdp->fullBus  (c+216,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_12),16);
	vcdp->fullBus  (c+217,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_13),16);
	vcdp->fullBus  (c+218,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_14),16);
	vcdp->fullBus  (c+219,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_15),16);
	vcdp->fullBus  (c+220,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_16),16);
	vcdp->fullBus  (c+221,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_17),16);
	vcdp->fullBus  (c+222,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_18),16);
	vcdp->fullBus  (c+223,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_19),16);
	vcdp->fullBus  (c+224,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_20),16);
	vcdp->fullBus  (c+225,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_21),16);
	vcdp->fullBus  (c+226,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_22),16);
	vcdp->fullBus  (c+227,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_23),16);
	vcdp->fullBus  (c+228,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_24),16);
	vcdp->fullBus  (c+229,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_25),16);
	vcdp->fullBus  (c+230,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_26),16);
	vcdp->fullBus  (c+231,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_27),16);
	vcdp->fullBus  (c+232,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_28),16);
	vcdp->fullBus  (c+233,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_29),16);
	vcdp->fullBus  (c+234,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_30),16);
	vcdp->fullBus  (c+235,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_31),16);
	vcdp->fullBus  (c+236,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_32),16);
	vcdp->fullBus  (c+237,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_33),16);
	vcdp->fullBus  (c+238,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_34),16);
	vcdp->fullBus  (c+239,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_35),16);
	vcdp->fullBus  (c+240,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_36),16);
	vcdp->fullBus  (c+241,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_37),16);
	vcdp->fullBus  (c+242,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_38),16);
	vcdp->fullBus  (c+243,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_39),16);
	vcdp->fullBus  (c+244,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_40),16);
	vcdp->fullBus  (c+245,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_41),16);
    }
}

void VOFDMEqualizer::traceFullThis__5(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+246,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_42),16);
	vcdp->fullBus  (c+247,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_43),16);
	vcdp->fullBus  (c+248,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_44),16);
	vcdp->fullBus  (c+249,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_45),16);
	vcdp->fullBus  (c+250,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_46),16);
	vcdp->fullBus  (c+251,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_47),16);
	vcdp->fullBus  (c+252,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_48),16);
	vcdp->fullBus  (c+253,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_49),16);
	vcdp->fullBus  (c+254,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_50),16);
	vcdp->fullBus  (c+255,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_51),16);
	vcdp->fullBus  (c+256,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_52),16);
	vcdp->fullBus  (c+257,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_53),16);
	vcdp->fullBus  (c+258,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_54),16);
	vcdp->fullBus  (c+259,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_55),16);
	vcdp->fullBus  (c+260,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_56),16);
	vcdp->fullBus  (c+261,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_57),16);
	vcdp->fullBus  (c+262,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_58),16);
	vcdp->fullBus  (c+263,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_59),16);
	vcdp->fullBus  (c+264,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_60),16);
	vcdp->fullBus  (c+265,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_61),16);
	vcdp->fullBus  (c+266,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_62),16);
	vcdp->fullBus  (c+267,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_63),16);
	vcdp->fullBit  (c+268,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_1));
	vcdp->fullBit  (c+269,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_2));
	vcdp->fullBit  (c+270,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_3));
	vcdp->fullBit  (c+271,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_4));
	vcdp->fullBit  (c+272,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_5));
	vcdp->fullBit  (c+273,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_6));
	vcdp->fullBit  (c+274,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_7));
	vcdp->fullBit  (c+275,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_8));
	vcdp->fullBit  (c+276,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_9));
	vcdp->fullBit  (c+277,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_10));
	vcdp->fullBit  (c+278,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_11));
	vcdp->fullBit  (c+279,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_12));
	vcdp->fullBit  (c+280,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_13));
	vcdp->fullBit  (c+281,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_14));
	vcdp->fullBit  (c+282,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_15));
	vcdp->fullBit  (c+283,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16));
	vcdp->fullBus  (c+284,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
	vcdp->fullBus  (c+285,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
	vcdp->fullBus  (c+286,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
	vcdp->fullBit  (c+287,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign));
	vcdp->fullBus  (c+288,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
					    ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
					    : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
	vcdp->fullBus  (c+289,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
					    ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
					    : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
	vcdp->fullBit  (c+290,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1));
	vcdp->fullBit  (c+291,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2));
	vcdp->fullBit  (c+292,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3));
	vcdp->fullBit  (c+293,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4));
	vcdp->fullBit  (c+294,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5));
	vcdp->fullBit  (c+295,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6));
	vcdp->fullBit  (c+296,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7));
	vcdp->fullBit  (c+297,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8));
	vcdp->fullBit  (c+298,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9));
	vcdp->fullBit  (c+299,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10));
	vcdp->fullBit  (c+300,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11));
	vcdp->fullBit  (c+301,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12));
	vcdp->fullBit  (c+302,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13));
	vcdp->fullBit  (c+303,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14));
	vcdp->fullBit  (c+304,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15));
	vcdp->fullBit  (c+305,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16));
	vcdp->fullBus  (c+306,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
	vcdp->fullBus  (c+307,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
	vcdp->fullBus  (c+308,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
	vcdp->fullBit  (c+309,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign));
	vcdp->fullBus  (c+310,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
					    ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
					    : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
	vcdp->fullBus  (c+311,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
					    ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
					    : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
	vcdp->fullBit  (c+312,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_1));
	vcdp->fullBit  (c+313,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_2));
	vcdp->fullBit  (c+314,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_3));
	vcdp->fullBit  (c+315,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_4));
	vcdp->fullBit  (c+316,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_5));
	vcdp->fullBit  (c+317,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_6));
	vcdp->fullBit  (c+318,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_7));
	vcdp->fullBit  (c+319,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_8));
	vcdp->fullBit  (c+320,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_9));
	vcdp->fullBit  (c+321,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_10));
	vcdp->fullBit  (c+322,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_11));
	vcdp->fullBit  (c+323,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_12));
	vcdp->fullBit  (c+324,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_13));
	vcdp->fullBit  (c+325,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_14));
	vcdp->fullBit  (c+326,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_15));
	vcdp->fullBit  (c+327,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_16));
	vcdp->fullBit  (c+328,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
	vcdp->fullBit  (c+329,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
	vcdp->fullBus  (c+330,(vlTOPp->OFDMEqualizer__DOT__cnt),6);
	vcdp->fullBit  (c+331,(vlTOPp->OFDMEqualizer__DOT__train_en));
	vcdp->fullBit  (c+332,((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))));
	vcdp->fullBus  (c+333,(vlTOPp->OFDMEqualizer__DOT__train_cnt),6);
	vcdp->fullBit  (c+334,(vlTOPp->OFDMEqualizer__DOT__train_finished));
	vcdp->fullBit  (c+335,((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))));
	vcdp->fullBit  (c+336,(vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1));
	vcdp->fullBit  (c+337,((1U & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_en)))));
	vcdp->fullBit  (c+338,(vlTOPp->raw_data_valid));
	vcdp->fullBit  (c+339,(vlTOPp->raw_data_ready));
	vcdp->fullBit  (c+340,(vlTOPp->raw_data_payload_last));
	vcdp->fullBus  (c+341,(vlTOPp->raw_data_payload_fragment_cha_i),16);
	vcdp->fullBus  (c+342,(vlTOPp->raw_data_payload_fragment_cha_q),16);
	vcdp->fullBit  (c+343,(vlTOPp->equalized_data_valid));
	vcdp->fullBit  (c+344,(vlTOPp->equalized_data_payload_last));
	vcdp->fullBus  (c+345,(vlTOPp->equalized_data_payload_fragment_cha_i),16);
	vcdp->fullBus  (c+346,(vlTOPp->equalized_data_payload_fragment_cha_q),16);
	vcdp->fullBit  (c+347,(vlTOPp->clk));
	vcdp->fullBit  (c+348,(vlTOPp->reset));
	vcdp->fullBit  (c+349,(((IData)(vlTOPp->raw_data_valid) 
				& (IData)(vlTOPp->raw_data_ready))));
	vcdp->fullBit  (c+350,(((IData)(vlTOPp->raw_data_payload_last) 
				& ((IData)(vlTOPp->raw_data_valid) 
				   & (IData)(vlTOPp->raw_data_ready)))));
	vcdp->fullBit  (c+351,(((IData)(vlTOPp->equalized_data_payload_last) 
				& (IData)(vlTOPp->equalized_data_valid))));
	vcdp->fullBus  (c+352,((0xffffU & (((0x8000U 
					     & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
					     ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
					     : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
					   + (1U & 
					      ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
					       >> 0xfU))))),16);
	vcdp->fullBus  (c+353,((0xffffU & (((0x8000U 
					     & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
					     ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
					     : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
					   + (1U & 
					      ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
					       >> 0xfU))))),16);
	vcdp->fullBit  (c+354,(1U));
	vcdp->fullBus  (c+355,(1U),2);
    }
}
