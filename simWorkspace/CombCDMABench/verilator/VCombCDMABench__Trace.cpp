// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCombCDMABench__Syms.h"


//======================

void VCombCDMABench::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCombCDMABench* t=(VCombCDMABench*)userthis;
    VCombCDMABench__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VCombCDMABench::traceChgThis(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
				  >> 3U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 5U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCombCDMABench::traceChgThis__2(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready));
	vcdp->chgBit  (c+2,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_valid));
	vcdp->chgBus  (c+3,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_i),16);
	vcdp->chgBus  (c+4,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_code_sum_mod_iq_payload_cha_q),16);
	vcdp->chgBus  (c+5,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[0]),8);
	vcdp->chgBus  (c+6,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[1]),8);
	vcdp->chgBus  (c+7,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[2]),8);
	vcdp->chgBus  (c+8,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[3]),8);
	vcdp->chgBus  (c+9,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[4]),8);
	vcdp->chgBus  (c+10,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[5]),8);
	vcdp->chgBus  (c+11,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[6]),8);
	vcdp->chgBus  (c+12,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__code_map[7]),8);
	vcdp->chgBus  (c+13,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0),8);
	vcdp->chgBus  (c+14,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1),8);
	vcdp->chgBus  (c+15,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2),8);
	vcdp->chgBus  (c+16,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3),8);
	vcdp->chgBus  (c+17,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4),8);
	vcdp->chgBus  (c+18,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5),8);
	vcdp->chgBus  (c+19,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6),8);
	vcdp->chgBus  (c+20,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7),8);
	vcdp->chgBus  (c+21,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[0]),8);
	vcdp->chgBus  (c+22,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[1]),8);
	vcdp->chgBus  (c+23,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[2]),8);
	vcdp->chgBus  (c+24,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[3]),8);
	vcdp->chgBus  (c+25,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[4]),8);
	vcdp->chgBus  (c+26,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[5]),8);
	vcdp->chgBus  (c+27,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[6]),8);
	vcdp->chgBus  (c+28,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__code_map[7]),8);
    }
}

void VCombCDMABench::traceChgThis__3(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+29,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__readRsp_data),32);
	vcdp->chgBus  (c+30,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__readRsp_data),32);
    }
}

void VCombCDMABench::traceChgThis__4(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+31,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeOccur));
	vcdp->chgBit  (c+32,(vlTOPp->CombCDMABench__DOT__cdma_spread_axil4Ctrl_arready));
	vcdp->chgBit  (c+33,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeOccur));
	vcdp->chgBit  (c+34,(vlTOPp->CombCDMABench__DOT__cdma_despread_axil4Ctrl_arready));
	vcdp->chgBit  (c+35,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__writeJoinEvent_valid));
	vcdp->chgBit  (c+36,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->chgBit  (c+37,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__writeJoinEvent_valid));
	vcdp->chgBit  (c+38,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_writeJoinEvent_translated_ready));
    }
}

void VCombCDMABench::traceChgThis__5(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+39,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_i),16);
	vcdp->chgBus  (c+40,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__data_q),16);
	vcdp->chgBus  (c+41,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next),16);
	vcdp->chgBus  (c+42,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next),16);
	vcdp->chgBus  (c+43,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_i),16);
	vcdp->chgBus  (c+44,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__data_q),16);
	vcdp->chgBus  (c+45,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next),16);
	vcdp->chgBus  (c+46,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next),16);
	vcdp->chgBus  (c+47,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_i),16);
	vcdp->chgBus  (c+48,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__data_q),16);
	vcdp->chgBus  (c+49,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next),16);
	vcdp->chgBus  (c+50,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next),16);
	vcdp->chgBus  (c+51,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_i),16);
	vcdp->chgBus  (c+52,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__data_q),16);
	vcdp->chgBus  (c+53,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next),16);
	vcdp->chgBus  (c+54,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next),16);
	vcdp->chgBus  (c+55,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_i),16);
	vcdp->chgBus  (c+56,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__data_q),16);
	vcdp->chgBus  (c+57,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next),16);
	vcdp->chgBus  (c+58,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next),16);
	vcdp->chgBus  (c+59,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_i),16);
	vcdp->chgBus  (c+60,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__data_q),16);
	vcdp->chgBus  (c+61,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next),16);
	vcdp->chgBus  (c+62,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next),16);
	vcdp->chgBus  (c+63,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_i),16);
	vcdp->chgBus  (c+64,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__data_q),16);
	vcdp->chgBus  (c+65,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next),16);
	vcdp->chgBus  (c+66,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next),16);
	vcdp->chgBus  (c+67,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_i),16);
	vcdp->chgBus  (c+68,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__data_q),16);
	vcdp->chgBus  (c+69,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next),16);
	vcdp->chgBus  (c+70,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next),16);
    }
}

void VCombCDMABench::traceChgThis__6(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+71,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkO_buf1)))));
	vcdp->chgBit  (c+72,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+73,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+74,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+75,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+76,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+77,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+78,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+79,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+80,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+81,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+82,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+83,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+84,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+85,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+86,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+87,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+88,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+89,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+90,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+91,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+92,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+93,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+94,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+95,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+96,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_valid));
	vcdp->chgBus  (c+97,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i),16);
	vcdp->chgBus  (c+98,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q),16);
	vcdp->chgBit  (c+99,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_valid));
	vcdp->chgBus  (c+100,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i),16);
	vcdp->chgBus  (c+101,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q),16);
	vcdp->chgBit  (c+102,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_valid));
	vcdp->chgBus  (c+103,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i),16);
	vcdp->chgBus  (c+104,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q),16);
	vcdp->chgBit  (c+105,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_valid));
	vcdp->chgBus  (c+106,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i),16);
	vcdp->chgBus  (c+107,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q),16);
	vcdp->chgBit  (c+108,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_valid));
	vcdp->chgBus  (c+109,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i),16);
	vcdp->chgBus  (c+110,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q),16);
	vcdp->chgBit  (c+111,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_valid));
	vcdp->chgBus  (c+112,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i),16);
	vcdp->chgBus  (c+113,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q),16);
	vcdp->chgBit  (c+114,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_valid));
	vcdp->chgBus  (c+115,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i),16);
	vcdp->chgBus  (c+116,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q),16);
	vcdp->chgBit  (c+117,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_valid));
	vcdp->chgBus  (c+118,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i),16);
	vcdp->chgBus  (c+119,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q),16);
	vcdp->chgBit  (c+120,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkO_buf1));
	vcdp->chgBit  (c+121,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkO_buf1));
	vcdp->chgBus  (c+122,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+123,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkO_buf1),8);
	vcdp->chgBus  (c+124,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+125,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt),3);
	vcdp->chgBus  (c+126,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i),16);
	vcdp->chgBus  (c+127,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q),16);
	vcdp->chgBus  (c+128,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i),16);
	vcdp->chgBus  (c+129,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q),16);
	vcdp->chgBus  (c+130,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i),16);
	vcdp->chgBus  (c+131,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q),16);
	vcdp->chgBus  (c+132,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i),16);
	vcdp->chgBus  (c+133,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q),16);
	vcdp->chgBus  (c+134,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i),16);
	vcdp->chgBus  (c+135,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q),16);
	vcdp->chgBus  (c+136,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i),16);
	vcdp->chgBus  (c+137,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q),16);
	vcdp->chgBus  (c+138,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i),16);
	vcdp->chgBus  (c+139,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q),16);
	vcdp->chgBus  (c+140,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i),16);
	vcdp->chgBus  (c+141,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q),16);
	vcdp->chgBit  (c+142,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid));
	vcdp->chgBit  (c+143,((0U == (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt))));
	vcdp->chgBit  (c+144,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code));
	vcdp->chgBit  (c+145,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1));
	vcdp->chgBit  (c+146,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2));
	vcdp->chgBit  (c+147,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3));
	vcdp->chgBit  (c+148,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4));
	vcdp->chgBit  (c+149,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5));
	vcdp->chgBit  (c+150,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6));
	vcdp->chgBit  (c+151,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7));
	vcdp->chgBus  (c+152,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_i) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+153,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_i) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+154,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_i) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+155,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_i) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+156,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_i) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+157,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_i) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+158,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_i) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+159,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_i) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+160,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_16__DOT__mod_q) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+161,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_17__DOT__mod_q) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+162,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_18__DOT__mod_q) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+163,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_19__DOT__mod_q) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+164,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_20__DOT__mod_q) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+165,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_21__DOT__mod_q) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+166,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_22__DOT__mod_q) 
					     >> 3U)))),16);
	vcdp->chgBus  (c+167,(((0xe000U & (VL_NEGATE_I((IData)(
							       (1U 
								& ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q) 
								   >> 0xfU)))) 
					   << 0xdU)) 
			       | (0x1fffU & ((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_23__DOT__mod_q) 
					     >> 3U)))),16);
	vcdp->chgBit  (c+168,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkO_buf0));
	vcdp->chgBit  (c+169,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkO_buf0));
	vcdp->chgBus  (c+170,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkO_buf0),3);
	vcdp->chgBus  (c+171,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkO_buf0),8);
	vcdp->chgBus  (c+172,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkO_buf0),3);
	vcdp->chgBit  (c+173,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkO_buf1));
	vcdp->chgBit  (c+174,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkO_buf1));
	vcdp->chgBus  (c+175,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+176,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkO_buf1),8);
	vcdp->chgBus  (c+177,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+178,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+179,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+180,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_i),16);
	vcdp->chgBus  (c+181,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__base_q),16);
	vcdp->chgBus  (c+182,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__cnt),3);
	vcdp->chgBus  (c+183,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+184,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+185,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+186,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+187,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+188,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+189,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+190,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+191,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+192,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+193,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+194,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+195,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+196,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_16__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+197,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+198,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+199,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_i),16);
	vcdp->chgBus  (c+200,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__base_q),16);
	vcdp->chgBus  (c+201,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__cnt),3);
	vcdp->chgBus  (c+202,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+203,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+204,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+205,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+206,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+207,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_5),16);
    }
}

void VCombCDMABench::traceChgThis__8(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+208,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+209,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+210,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+211,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+212,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+213,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+214,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+215,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_17__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+216,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+217,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+218,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_i),16);
	vcdp->chgBus  (c+219,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__base_q),16);
	vcdp->chgBus  (c+220,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__cnt),3);
	vcdp->chgBus  (c+221,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+222,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+223,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+224,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+225,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+226,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+227,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+228,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+229,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+230,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+231,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+232,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+233,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+234,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_18__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+235,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+236,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+237,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_i),16);
	vcdp->chgBus  (c+238,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__base_q),16);
	vcdp->chgBus  (c+239,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__cnt),3);
	vcdp->chgBus  (c+240,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+241,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+242,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+243,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+244,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+245,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+246,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+247,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+248,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+249,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+250,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+251,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+252,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+253,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_19__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+254,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+255,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+256,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_i),16);
	vcdp->chgBus  (c+257,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__base_q),16);
	vcdp->chgBus  (c+258,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__cnt),3);
	vcdp->chgBus  (c+259,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+260,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+261,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+262,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+263,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+264,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+265,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+266,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+267,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+268,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+269,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+270,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+271,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+272,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_20__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+273,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+274,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+275,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_i),16);
	vcdp->chgBus  (c+276,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__base_q),16);
	vcdp->chgBus  (c+277,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__cnt),3);
	vcdp->chgBus  (c+278,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+279,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+280,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+281,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+282,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+283,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+284,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+285,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+286,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+287,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+288,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+289,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+290,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+291,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_21__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+292,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+293,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+294,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_i),16);
	vcdp->chgBus  (c+295,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__base_q),16);
	vcdp->chgBus  (c+296,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__cnt),3);
	vcdp->chgBus  (c+297,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+298,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+299,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+300,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+301,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+302,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+303,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+304,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+305,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+306,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+307,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+308,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+309,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+310,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_22__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+311,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+312,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+313,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_i),16);
	vcdp->chgBus  (c+314,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__base_q),16);
	vcdp->chgBus  (c+315,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__cnt),3);
	vcdp->chgBus  (c+316,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+317,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+318,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+319,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+320,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+321,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+322,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+323,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+324,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+325,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+326,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+327,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+328,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+329,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_23__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBit  (c+330,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkO_buf0));
	vcdp->chgBit  (c+331,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkO_buf0));
	vcdp->chgBus  (c+332,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkO_buf0),3);
	vcdp->chgBus  (c+333,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkO_buf0),8);
	vcdp->chgBus  (c+334,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkO_buf0),3);
    }
}

void VCombCDMABench::traceChgThis__9(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+335,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bresp),2);
	vcdp->chgBus  (c+336,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bresp),2);
	vcdp->chgBus  (c+337,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->chgBus  (c+338,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->chgBit  (c+339,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_10__DOT__area_clkI_reg));
	vcdp->chgBit  (c+340,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_11__DOT__area_clkI_reg));
	vcdp->chgBus  (c+341,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_12__DOT__area_clkI_reg),3);
	vcdp->chgBus  (c+342,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_13__DOT__area_clkI_reg),8);
	vcdp->chgBus  (c+343,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_3),3);
	vcdp->chgBus  (c+344,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__clkCrossing_14__DOT__area_clkI_reg),3);
	vcdp->chgBus  (c+345,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->chgBus  (c+346,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->chgBit  (c+347,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_10__DOT__area_clkI_reg));
	vcdp->chgBit  (c+348,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_11__DOT__area_clkI_reg));
	vcdp->chgBus  (c+349,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_12__DOT__area_clkI_reg),3);
	vcdp->chgBus  (c+350,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_13__DOT__area_clkI_reg),8);
	vcdp->chgBus  (c+351,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_3),3);
	vcdp->chgBus  (c+352,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__clkCrossing_14__DOT__area_clkI_reg),3);
    }
}

void VCombCDMABench::traceChgThis__10(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+353,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bvalid_2));
	vcdp->chgBit  (c+354,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid));
	vcdp->chgBit  (c+355,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bvalid_2));
	vcdp->chgBit  (c+356,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid));
	vcdp->chgBit  (c+357,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->chgBit  (c+358,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->chgBit  (c+359,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__cdma_spread_bridge_clc_driver));
	vcdp->chgBit  (c+360,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn));
	vcdp->chgBus  (c+361,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_1),3);
	vcdp->chgBus  (c+362,(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT___zz_dataIn_2),8);
	vcdp->chgBit  (c+363,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->chgBit  (c+364,((1U & (~ (IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->chgBit  (c+365,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__cdma_spread_bridge_clc_driver));
	vcdp->chgBit  (c+366,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn));
	vcdp->chgBus  (c+367,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_1),3);
	vcdp->chgBus  (c+368,(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT___zz_dataIn_2),8);
    }
}

void VCombCDMABench::traceChgThis__11(VCombCDMABench__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCombCDMABench* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+369,(vlTOPp->axil4Ctrl_spread_aw_valid));
	vcdp->chgBit  (c+370,(vlTOPp->axil4Ctrl_spread_aw_ready));
	vcdp->chgBus  (c+371,(vlTOPp->axil4Ctrl_spread_aw_payload_addr),8);
	vcdp->chgBus  (c+372,(vlTOPp->axil4Ctrl_spread_aw_payload_prot),3);
	vcdp->chgBit  (c+373,(vlTOPp->axil4Ctrl_spread_w_valid));
	vcdp->chgBit  (c+374,(vlTOPp->axil4Ctrl_spread_w_ready));
	vcdp->chgBus  (c+375,(vlTOPp->axil4Ctrl_spread_w_payload_data),32);
	vcdp->chgBus  (c+376,(vlTOPp->axil4Ctrl_spread_w_payload_strb),4);
	vcdp->chgBit  (c+377,(vlTOPp->axil4Ctrl_spread_b_valid));
	vcdp->chgBit  (c+378,(vlTOPp->axil4Ctrl_spread_b_ready));
	vcdp->chgBus  (c+379,(vlTOPp->axil4Ctrl_spread_b_payload_resp),2);
	vcdp->chgBit  (c+380,(vlTOPp->axil4Ctrl_spread_ar_valid));
	vcdp->chgBit  (c+381,(vlTOPp->axil4Ctrl_spread_ar_ready));
	vcdp->chgBus  (c+382,(vlTOPp->axil4Ctrl_spread_ar_payload_addr),8);
	vcdp->chgBus  (c+383,(vlTOPp->axil4Ctrl_spread_ar_payload_prot),3);
	vcdp->chgBit  (c+384,(vlTOPp->axil4Ctrl_spread_r_valid));
	vcdp->chgBit  (c+385,(vlTOPp->axil4Ctrl_spread_r_ready));
	vcdp->chgBus  (c+386,(vlTOPp->axil4Ctrl_spread_r_payload_data),32);
	vcdp->chgBus  (c+387,(vlTOPp->axil4Ctrl_spread_r_payload_resp),2);
	vcdp->chgBit  (c+388,(vlTOPp->axil4Ctrl_despread_aw_valid));
	vcdp->chgBit  (c+389,(vlTOPp->axil4Ctrl_despread_aw_ready));
	vcdp->chgBus  (c+390,(vlTOPp->axil4Ctrl_despread_aw_payload_addr),8);
	vcdp->chgBus  (c+391,(vlTOPp->axil4Ctrl_despread_aw_payload_prot),3);
	vcdp->chgBit  (c+392,(vlTOPp->axil4Ctrl_despread_w_valid));
	vcdp->chgBit  (c+393,(vlTOPp->axil4Ctrl_despread_w_ready));
	vcdp->chgBus  (c+394,(vlTOPp->axil4Ctrl_despread_w_payload_data),32);
	vcdp->chgBus  (c+395,(vlTOPp->axil4Ctrl_despread_w_payload_strb),4);
	vcdp->chgBit  (c+396,(vlTOPp->axil4Ctrl_despread_b_valid));
	vcdp->chgBit  (c+397,(vlTOPp->axil4Ctrl_despread_b_ready));
	vcdp->chgBus  (c+398,(vlTOPp->axil4Ctrl_despread_b_payload_resp),2);
	vcdp->chgBit  (c+399,(vlTOPp->axil4Ctrl_despread_ar_valid));
	vcdp->chgBit  (c+400,(vlTOPp->axil4Ctrl_despread_ar_ready));
	vcdp->chgBus  (c+401,(vlTOPp->axil4Ctrl_despread_ar_payload_addr),8);
	vcdp->chgBus  (c+402,(vlTOPp->axil4Ctrl_despread_ar_payload_prot),3);
	vcdp->chgBit  (c+403,(vlTOPp->axil4Ctrl_despread_r_valid));
	vcdp->chgBit  (c+404,(vlTOPp->axil4Ctrl_despread_r_ready));
	vcdp->chgBus  (c+405,(vlTOPp->axil4Ctrl_despread_r_payload_data),32);
	vcdp->chgBus  (c+406,(vlTOPp->axil4Ctrl_despread_r_payload_resp),2);
	vcdp->chgBit  (c+407,(vlTOPp->base_iq_in_valid));
	vcdp->chgBit  (c+408,(vlTOPp->base_iq_in_ready));
	vcdp->chgBus  (c+409,(vlTOPp->base_iq_in_payload_0_cha_i),16);
	vcdp->chgBus  (c+410,(vlTOPp->base_iq_in_payload_0_cha_q),16);
	vcdp->chgBus  (c+411,(vlTOPp->base_iq_in_payload_1_cha_i),16);
	vcdp->chgBus  (c+412,(vlTOPp->base_iq_in_payload_1_cha_q),16);
	vcdp->chgBus  (c+413,(vlTOPp->base_iq_in_payload_2_cha_i),16);
	vcdp->chgBus  (c+414,(vlTOPp->base_iq_in_payload_2_cha_q),16);
	vcdp->chgBus  (c+415,(vlTOPp->base_iq_in_payload_3_cha_i),16);
	vcdp->chgBus  (c+416,(vlTOPp->base_iq_in_payload_3_cha_q),16);
	vcdp->chgBus  (c+417,(vlTOPp->base_iq_in_payload_4_cha_i),16);
	vcdp->chgBus  (c+418,(vlTOPp->base_iq_in_payload_4_cha_q),16);
	vcdp->chgBus  (c+419,(vlTOPp->base_iq_in_payload_5_cha_i),16);
	vcdp->chgBus  (c+420,(vlTOPp->base_iq_in_payload_5_cha_q),16);
	vcdp->chgBus  (c+421,(vlTOPp->base_iq_in_payload_6_cha_i),16);
	vcdp->chgBus  (c+422,(vlTOPp->base_iq_in_payload_6_cha_q),16);
	vcdp->chgBus  (c+423,(vlTOPp->base_iq_in_payload_7_cha_i),16);
	vcdp->chgBus  (c+424,(vlTOPp->base_iq_in_payload_7_cha_q),16);
	vcdp->chgBit  (c+425,(vlTOPp->base_sub_iqs_0_valid));
	vcdp->chgBus  (c+426,(vlTOPp->base_sub_iqs_0_payload_cha_i),16);
	vcdp->chgBus  (c+427,(vlTOPp->base_sub_iqs_0_payload_cha_q),16);
	vcdp->chgBit  (c+428,(vlTOPp->base_sub_iqs_1_valid));
	vcdp->chgBus  (c+429,(vlTOPp->base_sub_iqs_1_payload_cha_i),16);
	vcdp->chgBus  (c+430,(vlTOPp->base_sub_iqs_1_payload_cha_q),16);
	vcdp->chgBit  (c+431,(vlTOPp->base_sub_iqs_2_valid));
	vcdp->chgBus  (c+432,(vlTOPp->base_sub_iqs_2_payload_cha_i),16);
	vcdp->chgBus  (c+433,(vlTOPp->base_sub_iqs_2_payload_cha_q),16);
	vcdp->chgBit  (c+434,(vlTOPp->base_sub_iqs_3_valid));
	vcdp->chgBus  (c+435,(vlTOPp->base_sub_iqs_3_payload_cha_i),16);
	vcdp->chgBus  (c+436,(vlTOPp->base_sub_iqs_3_payload_cha_q),16);
	vcdp->chgBit  (c+437,(vlTOPp->base_sub_iqs_4_valid));
	vcdp->chgBus  (c+438,(vlTOPp->base_sub_iqs_4_payload_cha_i),16);
	vcdp->chgBus  (c+439,(vlTOPp->base_sub_iqs_4_payload_cha_q),16);
	vcdp->chgBit  (c+440,(vlTOPp->base_sub_iqs_5_valid));
	vcdp->chgBus  (c+441,(vlTOPp->base_sub_iqs_5_payload_cha_i),16);
	vcdp->chgBus  (c+442,(vlTOPp->base_sub_iqs_5_payload_cha_q),16);
	vcdp->chgBit  (c+443,(vlTOPp->base_sub_iqs_6_valid));
	vcdp->chgBus  (c+444,(vlTOPp->base_sub_iqs_6_payload_cha_i),16);
	vcdp->chgBus  (c+445,(vlTOPp->base_sub_iqs_6_payload_cha_q),16);
	vcdp->chgBit  (c+446,(vlTOPp->base_sub_iqs_7_valid));
	vcdp->chgBus  (c+447,(vlTOPp->base_sub_iqs_7_payload_cha_i),16);
	vcdp->chgBus  (c+448,(vlTOPp->base_sub_iqs_7_payload_cha_q),16);
	vcdp->chgBit  (c+449,(vlTOPp->rf_clk));
	vcdp->chgBit  (c+450,(vlTOPp->rf_resetn));
	vcdp->chgBit  (c+451,(vlTOPp->clk));
	vcdp->chgBit  (c+452,(vlTOPp->reset));
	vcdp->chgBit  (c+453,(((IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__axil4Ctrl_ar_rValid) 
			       & (IData)(vlTOPp->axil4Ctrl_spread_r_ready))));
	vcdp->chgBit  (c+454,(((IData)(vlTOPp->base_iq_in_valid) 
			       & (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready))));
	vcdp->chgBit  (c+455,((((IData)(vlTOPp->base_iq_in_valid) 
				& (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread_base_iq_ready)) 
			       | (0U != (IData)(vlTOPp->CombCDMABench__DOT__cdma_spread__DOT__rfClockArea_cdma_spread__DOT__cnt)))));
	vcdp->chgBit  (c+456,(((IData)(vlTOPp->CombCDMABench__DOT__cdma_despread__DOT__axil4Ctrl_ar_rValid) 
			       & (IData)(vlTOPp->axil4Ctrl_despread_r_ready))));
    }
}
