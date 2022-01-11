// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCDMADespreading__Syms.h"


//======================

void VCDMADespreading::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCDMADespreading* t=(VCDMADespreading*)userthis;
    VCDMADespreading__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCDMADespreading::traceChgThis(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCDMADespreading::traceChgThis__2(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_i),16);
	vcdp->chgBus  (c+2,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_q),16);
	vcdp->chgBus  (c+3,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next),16);
	vcdp->chgBus  (c+4,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next),16);
	vcdp->chgBus  (c+5,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_i),16);
	vcdp->chgBus  (c+6,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_q),16);
	vcdp->chgBus  (c+7,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next),16);
	vcdp->chgBus  (c+8,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next),16);
	vcdp->chgBus  (c+9,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_i),16);
	vcdp->chgBus  (c+10,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_q),16);
	vcdp->chgBus  (c+11,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next),16);
	vcdp->chgBus  (c+12,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next),16);
	vcdp->chgBus  (c+13,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_i),16);
	vcdp->chgBus  (c+14,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_q),16);
	vcdp->chgBus  (c+15,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next),16);
	vcdp->chgBus  (c+16,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next),16);
	vcdp->chgBus  (c+17,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_i),16);
	vcdp->chgBus  (c+18,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_q),16);
	vcdp->chgBus  (c+19,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next),16);
	vcdp->chgBus  (c+20,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next),16);
	vcdp->chgBus  (c+21,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_i),16);
	vcdp->chgBus  (c+22,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_q),16);
	vcdp->chgBus  (c+23,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next),16);
	vcdp->chgBus  (c+24,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next),16);
	vcdp->chgBus  (c+25,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_i),16);
	vcdp->chgBus  (c+26,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_q),16);
	vcdp->chgBus  (c+27,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next),16);
	vcdp->chgBus  (c+28,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next),16);
	vcdp->chgBus  (c+29,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_i),16);
	vcdp->chgBus  (c+30,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_q),16);
	vcdp->chgBus  (c+31,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next),16);
	vcdp->chgBus  (c+32,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next),16);
    }
}

void VCDMADespreading::traceChgThis__3(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+33,(vlTOPp->CDMADespreading__DOT___zz_code_map_port0),8);
	vcdp->chgBus  (c+34,(vlTOPp->CDMADespreading__DOT___zz_code_map_port1),8);
	vcdp->chgBus  (c+35,(vlTOPp->CDMADespreading__DOT___zz_code_map_port2),8);
	vcdp->chgBus  (c+36,(vlTOPp->CDMADespreading__DOT___zz_code_map_port3),8);
	vcdp->chgBus  (c+37,(vlTOPp->CDMADespreading__DOT___zz_code_map_port4),8);
	vcdp->chgBus  (c+38,(vlTOPp->CDMADespreading__DOT___zz_code_map_port5),8);
	vcdp->chgBus  (c+39,(vlTOPp->CDMADespreading__DOT___zz_code_map_port6),8);
	vcdp->chgBus  (c+40,(vlTOPp->CDMADespreading__DOT___zz_code_map_port7),8);
	vcdp->chgBus  (c+41,(vlTOPp->CDMADespreading__DOT__code_map[0]),8);
	vcdp->chgBus  (c+42,(vlTOPp->CDMADespreading__DOT__code_map[1]),8);
	vcdp->chgBus  (c+43,(vlTOPp->CDMADespreading__DOT__code_map[2]),8);
	vcdp->chgBus  (c+44,(vlTOPp->CDMADespreading__DOT__code_map[3]),8);
	vcdp->chgBus  (c+45,(vlTOPp->CDMADespreading__DOT__code_map[4]),8);
	vcdp->chgBus  (c+46,(vlTOPp->CDMADespreading__DOT__code_map[5]),8);
	vcdp->chgBus  (c+47,(vlTOPp->CDMADespreading__DOT__code_map[6]),8);
	vcdp->chgBus  (c+48,(vlTOPp->CDMADespreading__DOT__code_map[7]),8);
    }
}

void VCDMADespreading::traceChgThis__4(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+49,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+50,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+51,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+52,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+53,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+54,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+55,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+56,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+57,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+58,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+59,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+60,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+61,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+62,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+63,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+64,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+65,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+66,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+67,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+68,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+69,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+70,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+71,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+72,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next_regNext),16);
	vcdp->chgBus  (c+73,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+74,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+75,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+76,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+77,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+78,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+79,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+80,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+81,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+82,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+83,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+84,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+85,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+86,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+87,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+88,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+89,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+90,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+91,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+92,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+93,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+94,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+95,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+96,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+97,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+98,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+99,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+100,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+101,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+102,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+103,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+104,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+105,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+106,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+107,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+108,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+109,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+110,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+111,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+112,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+113,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+114,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+115,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+116,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+117,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+118,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+119,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+120,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+121,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+122,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+123,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+124,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+125,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+126,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+127,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+128,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+129,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+130,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+131,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+132,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+133,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+134,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+135,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+136,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+137,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+138,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+139,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+140,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+141,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+142,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+143,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+144,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+145,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+146,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+147,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+148,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+149,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+150,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+151,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+152,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+153,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+154,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+155,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+156,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+157,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+158,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+159,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+160,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+161,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+162,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+163,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+164,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+165,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+166,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+167,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+168,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+169,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+170,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+171,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+172,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+173,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+174,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+175,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+176,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+177,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+178,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+179,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+180,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+181,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+182,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+183,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+184,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+185,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+186,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+187,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+188,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+189,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+190,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+191,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+192,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+193,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+194,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+195,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+196,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+197,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+198,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+199,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+200,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6),16);
    }
}

void VCDMADespreading::traceChgThis__5(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+201,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i),16);
	vcdp->chgBus  (c+202,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q),16);
	vcdp->chgBus  (c+203,(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt),3);
	vcdp->chgBus  (c+204,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i),16);
	vcdp->chgBus  (c+205,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q),16);
	vcdp->chgBus  (c+206,(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt),3);
	vcdp->chgBus  (c+207,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i),16);
	vcdp->chgBus  (c+208,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q),16);
	vcdp->chgBus  (c+209,(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt),3);
	vcdp->chgBus  (c+210,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i),16);
	vcdp->chgBus  (c+211,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q),16);
	vcdp->chgBus  (c+212,(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt),3);
	vcdp->chgBus  (c+213,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i),16);
	vcdp->chgBus  (c+214,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q),16);
	vcdp->chgBus  (c+215,(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt),3);
	vcdp->chgBus  (c+216,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i),16);
	vcdp->chgBus  (c+217,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q),16);
	vcdp->chgBus  (c+218,(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt),3);
	vcdp->chgBus  (c+219,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i),16);
	vcdp->chgBus  (c+220,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q),16);
	vcdp->chgBus  (c+221,(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt),3);
	vcdp->chgBus  (c+222,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i),16);
	vcdp->chgBus  (c+223,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q),16);
	vcdp->chgBus  (c+224,(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt),3);
    }
}

void VCDMADespreading::traceChgThis__6(VCDMADespreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+225,(vlTOPp->w_en));
	vcdp->chgBus  (c+226,(vlTOPp->w_addr),3);
	vcdp->chgBus  (c+227,(vlTOPp->w_data),8);
	vcdp->chgBit  (c+228,(vlTOPp->clc));
	vcdp->chgBus  (c+229,(vlTOPp->cnt_limit),3);
	vcdp->chgBit  (c+230,(vlTOPp->mod_iq_valid));
	vcdp->chgBit  (c+231,(vlTOPp->mod_iq_ready));
	vcdp->chgBus  (c+232,(vlTOPp->mod_iq_payload_cha_i),16);
	vcdp->chgBus  (c+233,(vlTOPp->mod_iq_payload_cha_q),16);
	vcdp->chgBit  (c+234,(vlTOPp->base_sub_iqs_0_valid));
	vcdp->chgBus  (c+235,(vlTOPp->base_sub_iqs_0_payload_cha_i),16);
	vcdp->chgBus  (c+236,(vlTOPp->base_sub_iqs_0_payload_cha_q),16);
	vcdp->chgBit  (c+237,(vlTOPp->base_sub_iqs_1_valid));
	vcdp->chgBus  (c+238,(vlTOPp->base_sub_iqs_1_payload_cha_i),16);
	vcdp->chgBus  (c+239,(vlTOPp->base_sub_iqs_1_payload_cha_q),16);
	vcdp->chgBit  (c+240,(vlTOPp->base_sub_iqs_2_valid));
	vcdp->chgBus  (c+241,(vlTOPp->base_sub_iqs_2_payload_cha_i),16);
	vcdp->chgBus  (c+242,(vlTOPp->base_sub_iqs_2_payload_cha_q),16);
	vcdp->chgBit  (c+243,(vlTOPp->base_sub_iqs_3_valid));
	vcdp->chgBus  (c+244,(vlTOPp->base_sub_iqs_3_payload_cha_i),16);
	vcdp->chgBus  (c+245,(vlTOPp->base_sub_iqs_3_payload_cha_q),16);
	vcdp->chgBit  (c+246,(vlTOPp->base_sub_iqs_4_valid));
	vcdp->chgBus  (c+247,(vlTOPp->base_sub_iqs_4_payload_cha_i),16);
	vcdp->chgBus  (c+248,(vlTOPp->base_sub_iqs_4_payload_cha_q),16);
	vcdp->chgBit  (c+249,(vlTOPp->base_sub_iqs_5_valid));
	vcdp->chgBus  (c+250,(vlTOPp->base_sub_iqs_5_payload_cha_i),16);
	vcdp->chgBus  (c+251,(vlTOPp->base_sub_iqs_5_payload_cha_q),16);
	vcdp->chgBit  (c+252,(vlTOPp->base_sub_iqs_6_valid));
	vcdp->chgBus  (c+253,(vlTOPp->base_sub_iqs_6_payload_cha_i),16);
	vcdp->chgBus  (c+254,(vlTOPp->base_sub_iqs_6_payload_cha_q),16);
	vcdp->chgBit  (c+255,(vlTOPp->base_sub_iqs_7_valid));
	vcdp->chgBus  (c+256,(vlTOPp->base_sub_iqs_7_payload_cha_i),16);
	vcdp->chgBus  (c+257,(vlTOPp->base_sub_iqs_7_payload_cha_q),16);
	vcdp->chgBit  (c+258,(vlTOPp->clk));
	vcdp->chgBit  (c+259,(vlTOPp->reset));
    }
}
