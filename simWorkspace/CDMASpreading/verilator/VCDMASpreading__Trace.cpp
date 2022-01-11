// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCDMASpreading__Syms.h"


//======================

void VCDMASpreading::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCDMASpreading* t=(VCDMASpreading*)userthis;
    VCDMASpreading__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCDMASpreading::traceChgThis(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCDMASpreading::traceChgThis__2(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->CDMASpreading__DOT__code_map[0]),8);
	vcdp->chgBus  (c+2,(vlTOPp->CDMASpreading__DOT__code_map[1]),8);
	vcdp->chgBus  (c+3,(vlTOPp->CDMASpreading__DOT__code_map[2]),8);
	vcdp->chgBus  (c+4,(vlTOPp->CDMASpreading__DOT__code_map[3]),8);
	vcdp->chgBus  (c+5,(vlTOPp->CDMASpreading__DOT__code_map[4]),8);
	vcdp->chgBus  (c+6,(vlTOPp->CDMASpreading__DOT__code_map[5]),8);
	vcdp->chgBus  (c+7,(vlTOPp->CDMASpreading__DOT__code_map[6]),8);
	vcdp->chgBus  (c+8,(vlTOPp->CDMASpreading__DOT__code_map[7]),8);
    }
}

void VCDMASpreading::traceChgThis__3(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+9,(vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_valid));
	vcdp->chgBus  (c+10,(vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_i),16);
	vcdp->chgBus  (c+11,(vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_q),16);
	vcdp->chgBit  (c+12,(vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_valid));
	vcdp->chgBus  (c+13,(vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_i),16);
	vcdp->chgBus  (c+14,(vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_q),16);
	vcdp->chgBit  (c+15,(vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_valid));
	vcdp->chgBus  (c+16,(vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_i),16);
	vcdp->chgBus  (c+17,(vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_q),16);
	vcdp->chgBit  (c+18,(vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_valid));
	vcdp->chgBus  (c+19,(vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_i),16);
	vcdp->chgBus  (c+20,(vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_q),16);
	vcdp->chgBit  (c+21,(vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_valid));
	vcdp->chgBus  (c+22,(vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_i),16);
	vcdp->chgBus  (c+23,(vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_q),16);
	vcdp->chgBit  (c+24,(vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_valid));
	vcdp->chgBus  (c+25,(vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_i),16);
	vcdp->chgBus  (c+26,(vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_q),16);
	vcdp->chgBit  (c+27,(vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_valid));
	vcdp->chgBus  (c+28,(vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_i),16);
	vcdp->chgBus  (c+29,(vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_q),16);
	vcdp->chgBit  (c+30,(vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_valid));
	vcdp->chgBus  (c+31,(vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_i),16);
	vcdp->chgBus  (c+32,(vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_q),16);
	vcdp->chgBit  (c+33,(vlTOPp->CDMASpreading__DOT__flow_iq_valid));
    }
}

void VCDMASpreading::traceChgThis__4(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+34,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_i),16);
	vcdp->chgBus  (c+35,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_0_cha_q),16);
	vcdp->chgBus  (c+36,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_i),16);
	vcdp->chgBus  (c+37,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_1_cha_q),16);
	vcdp->chgBus  (c+38,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_i),16);
	vcdp->chgBus  (c+39,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_2_cha_q),16);
	vcdp->chgBus  (c+40,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_i),16);
	vcdp->chgBus  (c+41,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_3_cha_q),16);
	vcdp->chgBus  (c+42,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_i),16);
	vcdp->chgBus  (c+43,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_4_cha_q),16);
	vcdp->chgBus  (c+44,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_i),16);
	vcdp->chgBus  (c+45,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_5_cha_q),16);
	vcdp->chgBus  (c+46,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_i),16);
	vcdp->chgBus  (c+47,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_6_cha_q),16);
	vcdp->chgBus  (c+48,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_i),16);
	vcdp->chgBus  (c+49,(vlTOPp->CDMASpreading__DOT__flow_iq_data_vec_7_cha_q),16);
	vcdp->chgBit  (c+50,(vlTOPp->CDMASpreading__DOT___zz_code));
	vcdp->chgBit  (c+51,(vlTOPp->CDMASpreading__DOT___zz_code_1));
	vcdp->chgBit  (c+52,(vlTOPp->CDMASpreading__DOT___zz_code_2));
	vcdp->chgBit  (c+53,(vlTOPp->CDMASpreading__DOT___zz_code_3));
	vcdp->chgBit  (c+54,(vlTOPp->CDMASpreading__DOT___zz_code_4));
	vcdp->chgBit  (c+55,(vlTOPp->CDMASpreading__DOT___zz_code_5));
	vcdp->chgBit  (c+56,(vlTOPp->CDMASpreading__DOT___zz_code_6));
	vcdp->chgBit  (c+57,(vlTOPp->CDMASpreading__DOT___zz_code_7));
    }
}

void VCDMASpreading::traceChgThis__5(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+58,(vlTOPp->CDMASpreading__DOT__cnt),3);
	vcdp->chgBit  (c+59,((0U == (IData)(vlTOPp->CDMASpreading__DOT__cnt))));
    }
}

void VCDMASpreading::traceChgThis__6(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+60,(vlTOPp->w_en));
	vcdp->chgBus  (c+61,(vlTOPp->w_addr),3);
	vcdp->chgBus  (c+62,(vlTOPp->w_data),8);
	vcdp->chgBit  (c+63,(vlTOPp->clc));
	vcdp->chgBus  (c+64,(vlTOPp->cnt_limit),3);
	vcdp->chgBit  (c+65,(vlTOPp->base_iq_valid));
	vcdp->chgBit  (c+66,(vlTOPp->base_iq_ready));
	vcdp->chgBus  (c+67,(vlTOPp->base_iq_payload_0_cha_i),16);
	vcdp->chgBus  (c+68,(vlTOPp->base_iq_payload_0_cha_q),16);
	vcdp->chgBus  (c+69,(vlTOPp->base_iq_payload_1_cha_i),16);
	vcdp->chgBus  (c+70,(vlTOPp->base_iq_payload_1_cha_q),16);
	vcdp->chgBus  (c+71,(vlTOPp->base_iq_payload_2_cha_i),16);
	vcdp->chgBus  (c+72,(vlTOPp->base_iq_payload_2_cha_q),16);
	vcdp->chgBus  (c+73,(vlTOPp->base_iq_payload_3_cha_i),16);
	vcdp->chgBus  (c+74,(vlTOPp->base_iq_payload_3_cha_q),16);
	vcdp->chgBus  (c+75,(vlTOPp->base_iq_payload_4_cha_i),16);
	vcdp->chgBus  (c+76,(vlTOPp->base_iq_payload_4_cha_q),16);
	vcdp->chgBus  (c+77,(vlTOPp->base_iq_payload_5_cha_i),16);
	vcdp->chgBus  (c+78,(vlTOPp->base_iq_payload_5_cha_q),16);
	vcdp->chgBus  (c+79,(vlTOPp->base_iq_payload_6_cha_i),16);
	vcdp->chgBus  (c+80,(vlTOPp->base_iq_payload_6_cha_q),16);
	vcdp->chgBus  (c+81,(vlTOPp->base_iq_payload_7_cha_i),16);
	vcdp->chgBus  (c+82,(vlTOPp->base_iq_payload_7_cha_q),16);
	vcdp->chgBit  (c+83,(vlTOPp->mod_sub_iqs_0_valid));
	vcdp->chgBus  (c+84,(vlTOPp->mod_sub_iqs_0_payload_cha_i),16);
	vcdp->chgBus  (c+85,(vlTOPp->mod_sub_iqs_0_payload_cha_q),16);
	vcdp->chgBit  (c+86,(vlTOPp->mod_sub_iqs_1_valid));
	vcdp->chgBus  (c+87,(vlTOPp->mod_sub_iqs_1_payload_cha_i),16);
	vcdp->chgBus  (c+88,(vlTOPp->mod_sub_iqs_1_payload_cha_q),16);
	vcdp->chgBit  (c+89,(vlTOPp->mod_sub_iqs_2_valid));
	vcdp->chgBus  (c+90,(vlTOPp->mod_sub_iqs_2_payload_cha_i),16);
	vcdp->chgBus  (c+91,(vlTOPp->mod_sub_iqs_2_payload_cha_q),16);
	vcdp->chgBit  (c+92,(vlTOPp->mod_sub_iqs_3_valid));
	vcdp->chgBus  (c+93,(vlTOPp->mod_sub_iqs_3_payload_cha_i),16);
	vcdp->chgBus  (c+94,(vlTOPp->mod_sub_iqs_3_payload_cha_q),16);
	vcdp->chgBit  (c+95,(vlTOPp->mod_sub_iqs_4_valid));
	vcdp->chgBus  (c+96,(vlTOPp->mod_sub_iqs_4_payload_cha_i),16);
	vcdp->chgBus  (c+97,(vlTOPp->mod_sub_iqs_4_payload_cha_q),16);
	vcdp->chgBit  (c+98,(vlTOPp->mod_sub_iqs_5_valid));
	vcdp->chgBus  (c+99,(vlTOPp->mod_sub_iqs_5_payload_cha_i),16);
	vcdp->chgBus  (c+100,(vlTOPp->mod_sub_iqs_5_payload_cha_q),16);
	vcdp->chgBit  (c+101,(vlTOPp->mod_sub_iqs_6_valid));
	vcdp->chgBus  (c+102,(vlTOPp->mod_sub_iqs_6_payload_cha_i),16);
	vcdp->chgBus  (c+103,(vlTOPp->mod_sub_iqs_6_payload_cha_q),16);
	vcdp->chgBit  (c+104,(vlTOPp->mod_sub_iqs_7_valid));
	vcdp->chgBus  (c+105,(vlTOPp->mod_sub_iqs_7_payload_cha_i),16);
	vcdp->chgBus  (c+106,(vlTOPp->mod_sub_iqs_7_payload_cha_q),16);
	vcdp->chgBit  (c+107,(vlTOPp->clk));
	vcdp->chgBit  (c+108,(vlTOPp->reset));
	vcdp->chgBit  (c+109,(((IData)(vlTOPp->base_iq_valid) 
			       & (IData)(vlTOPp->base_iq_ready))));
	vcdp->chgBit  (c+110,((((IData)(vlTOPp->base_iq_valid) 
				& (IData)(vlTOPp->base_iq_ready)) 
			       | (0U != (IData)(vlTOPp->CDMASpreading__DOT__cnt)))));
    }
}
