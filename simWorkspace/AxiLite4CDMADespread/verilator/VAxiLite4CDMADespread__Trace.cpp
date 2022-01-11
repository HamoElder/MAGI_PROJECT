// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4CDMADespread__Syms.h"


//======================

void VAxiLite4CDMADespread::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4CDMADespread* t=(VAxiLite4CDMADespread*)userthis;
    VAxiLite4CDMADespread__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4CDMADespread::traceChgThis(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4CDMADespread::traceChgThis__2(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port0),8);
	vcdp->chgBus  (c+2,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port1),8);
	vcdp->chgBus  (c+3,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port2),8);
	vcdp->chgBus  (c+4,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port3),8);
	vcdp->chgBus  (c+5,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port4),8);
	vcdp->chgBus  (c+6,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port5),8);
	vcdp->chgBus  (c+7,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port6),8);
	vcdp->chgBus  (c+8,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT___zz_code_map_port7),8);
	vcdp->chgBus  (c+9,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[0]),8);
	vcdp->chgBus  (c+10,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[1]),8);
	vcdp->chgBus  (c+11,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[2]),8);
	vcdp->chgBus  (c+12,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[3]),8);
	vcdp->chgBus  (c+13,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[4]),8);
	vcdp->chgBus  (c+14,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[5]),8);
	vcdp->chgBus  (c+15,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[6]),8);
	vcdp->chgBus  (c+16,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__code_map[7]),8);
    }
}

void VAxiLite4CDMADespread::traceChgThis__3(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+17,(vlTOPp->AxiLite4CDMADespread__DOT__readRsp_data),32);
    }
}

void VAxiLite4CDMADespread::traceChgThis__4(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+18,(vlTOPp->AxiLite4CDMADespread__DOT__writeJoinEvent_valid));
	vcdp->chgBit  (c+19,(vlTOPp->AxiLite4CDMADespread__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->chgBit  (c+20,(vlTOPp->AxiLite4CDMADespread__DOT__writeOccur));
	vcdp->chgBus  (c+21,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_i),16);
	vcdp->chgBus  (c+22,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__data_q),16);
	vcdp->chgBus  (c+23,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i_next),16);
	vcdp->chgBus  (c+24,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q_next),16);
	vcdp->chgBus  (c+25,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_i),16);
	vcdp->chgBus  (c+26,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__data_q),16);
	vcdp->chgBus  (c+27,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i_next),16);
	vcdp->chgBus  (c+28,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q_next),16);
	vcdp->chgBus  (c+29,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_i),16);
	vcdp->chgBus  (c+30,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__data_q),16);
	vcdp->chgBus  (c+31,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i_next),16);
	vcdp->chgBus  (c+32,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q_next),16);
	vcdp->chgBus  (c+33,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_i),16);
	vcdp->chgBus  (c+34,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__data_q),16);
	vcdp->chgBus  (c+35,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i_next),16);
	vcdp->chgBus  (c+36,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q_next),16);
	vcdp->chgBus  (c+37,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_i),16);
	vcdp->chgBus  (c+38,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__data_q),16);
	vcdp->chgBus  (c+39,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i_next),16);
	vcdp->chgBus  (c+40,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q_next),16);
	vcdp->chgBus  (c+41,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_i),16);
	vcdp->chgBus  (c+42,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__data_q),16);
	vcdp->chgBus  (c+43,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i_next),16);
	vcdp->chgBus  (c+44,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q_next),16);
	vcdp->chgBus  (c+45,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_i),16);
	vcdp->chgBus  (c+46,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__data_q),16);
	vcdp->chgBus  (c+47,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i_next),16);
	vcdp->chgBus  (c+48,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q_next),16);
	vcdp->chgBus  (c+49,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_i),16);
	vcdp->chgBus  (c+50,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__data_q),16);
	vcdp->chgBus  (c+51,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i_next),16);
	vcdp->chgBus  (c+52,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q_next),16);
    }
}

void VAxiLite4CDMADespread::traceChgThis__5(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+53,((1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf1)))));
	vcdp->chgBit  (c+54,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+55,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+56,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+57,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+58,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+59,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+60,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+61,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+62,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+63,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+64,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+65,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+66,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+67,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+68,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+69,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+70,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+71,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+72,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+73,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+74,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+75,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT___zz_base_iq_valid));
	vcdp->chgBus  (c+76,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i_next_regNext),16);
	vcdp->chgBus  (c+77,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q_next_regNext),16);
	vcdp->chgBit  (c+78,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf1));
	vcdp->chgBit  (c+79,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkO_buf1));
	vcdp->chgBus  (c+80,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+81,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkO_buf1),8);
	vcdp->chgBus  (c+82,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+83,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+84,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+85,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_i),16);
	vcdp->chgBus  (c+86,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__base_q),16);
	vcdp->chgBus  (c+87,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__cnt),3);
	vcdp->chgBus  (c+88,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+89,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+90,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+91,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+92,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+93,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+94,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+95,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+96,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+97,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+98,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+99,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+100,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+101,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+102,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+103,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+104,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_i),16);
	vcdp->chgBus  (c+105,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__base_q),16);
	vcdp->chgBus  (c+106,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__cnt),3);
	vcdp->chgBus  (c+107,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+108,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+109,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+110,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+111,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+112,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+113,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+114,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+115,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+116,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+117,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+118,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+119,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+120,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+121,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+122,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+123,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_i),16);
	vcdp->chgBus  (c+124,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__base_q),16);
	vcdp->chgBus  (c+125,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__cnt),3);
	vcdp->chgBus  (c+126,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+127,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+128,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+129,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+130,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+131,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+132,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+133,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+134,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+135,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+136,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+137,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+138,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+139,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+140,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+141,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+142,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_i),16);
	vcdp->chgBus  (c+143,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__base_q),16);
	vcdp->chgBus  (c+144,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__cnt),3);
	vcdp->chgBus  (c+145,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+146,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+147,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+148,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+149,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+150,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+151,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+152,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+153,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+154,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+155,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+156,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+157,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+158,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+159,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+160,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+161,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_i),16);
	vcdp->chgBus  (c+162,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__base_q),16);
	vcdp->chgBus  (c+163,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__cnt),3);
	vcdp->chgBus  (c+164,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+165,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+166,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+167,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+168,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+169,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+170,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+171,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+172,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+173,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+174,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+175,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+176,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+177,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+178,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+179,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+180,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_i),16);
	vcdp->chgBus  (c+181,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__base_q),16);
	vcdp->chgBus  (c+182,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__cnt),3);
	vcdp->chgBus  (c+183,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+184,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+185,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+186,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+187,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+188,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+189,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+190,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+191,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+192,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+193,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+194,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+195,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+196,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+197,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+198,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+199,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_i),16);
	vcdp->chgBus  (c+200,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__base_q),16);
	vcdp->chgBus  (c+201,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__cnt),3);
	vcdp->chgBus  (c+202,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+203,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+204,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+205,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+206,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+207,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+208,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+209,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+210,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+211,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+212,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+213,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+214,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+215,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+216,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+217,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7),16);
	vcdp->chgBus  (c+218,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_i),16);
	vcdp->chgBus  (c+219,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__base_q),16);
	vcdp->chgBus  (c+220,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__cnt),3);
	vcdp->chgBus  (c+221,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+222,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+223,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+224,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+225,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+226,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+227,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6),16);
	vcdp->chgBus  (c+228,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0),16);
	vcdp->chgBus  (c+229,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1),16);
	vcdp->chgBus  (c+230,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2),16);
	vcdp->chgBus  (c+231,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3),16);
	vcdp->chgBus  (c+232,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4),16);
	vcdp->chgBus  (c+233,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5),16);
	vcdp->chgBus  (c+234,(vlTOPp->AxiLite4CDMADespread__DOT__rfClockArea_cdma_despread__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6),16);
	vcdp->chgBit  (c+235,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkO_buf0));
	vcdp->chgBit  (c+236,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkO_buf0));
	vcdp->chgBus  (c+237,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkO_buf0),3);
	vcdp->chgBus  (c+238,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkO_buf0),8);
	vcdp->chgBus  (c+239,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkO_buf0),3);
    }
}

void VAxiLite4CDMADespread::traceChgThis__6(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+240,(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->chgBus  (c+241,(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->chgBit  (c+242,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_5__DOT__area_clkI_reg));
	vcdp->chgBit  (c+243,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_6__DOT__area_clkI_reg));
	vcdp->chgBus  (c+244,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_7__DOT__area_clkI_reg),3);
	vcdp->chgBus  (c+245,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_8__DOT__area_clkI_reg),8);
	vcdp->chgBus  (c+246,(vlTOPp->AxiLite4CDMADespread__DOT___zz_dataIn_3),3);
	vcdp->chgBus  (c+247,(vlTOPp->AxiLite4CDMADespread__DOT__clkCrossing_9__DOT__area_clkI_reg),3);
    }
}

void VAxiLite4CDMADespread::traceChgThis__7(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+248,((1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->chgBit  (c+249,(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rValid));
	vcdp->chgBit  (c+250,((1U & (~ (IData)(vlTOPp->AxiLite4CDMADespread__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->chgBit  (c+251,(vlTOPp->AxiLite4CDMADespread__DOT__cdma_spread_bridge_clc_driver));
	vcdp->chgBit  (c+252,(vlTOPp->AxiLite4CDMADespread__DOT___zz_dataIn));
	vcdp->chgBus  (c+253,(vlTOPp->AxiLite4CDMADespread__DOT___zz_dataIn_1),3);
	vcdp->chgBus  (c+254,(vlTOPp->AxiLite4CDMADespread__DOT___zz_dataIn_2),8);
    }
}

void VAxiLite4CDMADespread::traceChgThis__8(VAxiLite4CDMADespread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMADespread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+255,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->chgBit  (c+256,(vlTOPp->axil4Ctrl_awready));
	vcdp->chgBus  (c+257,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->chgBus  (c+258,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->chgBit  (c+259,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->chgBit  (c+260,(vlTOPp->axil4Ctrl_wready));
	vcdp->chgBus  (c+261,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->chgBus  (c+262,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->chgBit  (c+263,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->chgBit  (c+264,(vlTOPp->axil4Ctrl_bready));
	vcdp->chgBus  (c+265,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->chgBit  (c+266,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->chgBit  (c+267,(vlTOPp->axil4Ctrl_arready));
	vcdp->chgBus  (c+268,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->chgBus  (c+269,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->chgBit  (c+270,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->chgBit  (c+271,(vlTOPp->axil4Ctrl_rready));
	vcdp->chgBus  (c+272,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->chgBus  (c+273,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->chgBit  (c+274,(vlTOPp->mod_iq_valid));
	vcdp->chgBit  (c+275,(vlTOPp->mod_iq_ready));
	vcdp->chgBus  (c+276,(vlTOPp->mod_iq_payload_cha_i),16);
	vcdp->chgBus  (c+277,(vlTOPp->mod_iq_payload_cha_q),16);
	vcdp->chgBit  (c+278,(vlTOPp->base_sub_iqs_0_valid));
	vcdp->chgBus  (c+279,(vlTOPp->base_sub_iqs_0_payload_cha_i),16);
	vcdp->chgBus  (c+280,(vlTOPp->base_sub_iqs_0_payload_cha_q),16);
	vcdp->chgBit  (c+281,(vlTOPp->base_sub_iqs_1_valid));
	vcdp->chgBus  (c+282,(vlTOPp->base_sub_iqs_1_payload_cha_i),16);
	vcdp->chgBus  (c+283,(vlTOPp->base_sub_iqs_1_payload_cha_q),16);
	vcdp->chgBit  (c+284,(vlTOPp->base_sub_iqs_2_valid));
	vcdp->chgBus  (c+285,(vlTOPp->base_sub_iqs_2_payload_cha_i),16);
	vcdp->chgBus  (c+286,(vlTOPp->base_sub_iqs_2_payload_cha_q),16);
	vcdp->chgBit  (c+287,(vlTOPp->base_sub_iqs_3_valid));
	vcdp->chgBus  (c+288,(vlTOPp->base_sub_iqs_3_payload_cha_i),16);
	vcdp->chgBus  (c+289,(vlTOPp->base_sub_iqs_3_payload_cha_q),16);
	vcdp->chgBit  (c+290,(vlTOPp->base_sub_iqs_4_valid));
	vcdp->chgBus  (c+291,(vlTOPp->base_sub_iqs_4_payload_cha_i),16);
	vcdp->chgBus  (c+292,(vlTOPp->base_sub_iqs_4_payload_cha_q),16);
	vcdp->chgBit  (c+293,(vlTOPp->base_sub_iqs_5_valid));
	vcdp->chgBus  (c+294,(vlTOPp->base_sub_iqs_5_payload_cha_i),16);
	vcdp->chgBus  (c+295,(vlTOPp->base_sub_iqs_5_payload_cha_q),16);
	vcdp->chgBit  (c+296,(vlTOPp->base_sub_iqs_6_valid));
	vcdp->chgBus  (c+297,(vlTOPp->base_sub_iqs_6_payload_cha_i),16);
	vcdp->chgBus  (c+298,(vlTOPp->base_sub_iqs_6_payload_cha_q),16);
	vcdp->chgBit  (c+299,(vlTOPp->base_sub_iqs_7_valid));
	vcdp->chgBus  (c+300,(vlTOPp->base_sub_iqs_7_payload_cha_i),16);
	vcdp->chgBus  (c+301,(vlTOPp->base_sub_iqs_7_payload_cha_q),16);
	vcdp->chgBit  (c+302,(vlTOPp->rf_clk));
	vcdp->chgBit  (c+303,(vlTOPp->rf_resetn));
	vcdp->chgBit  (c+304,(vlTOPp->clk));
	vcdp->chgBit  (c+305,(vlTOPp->reset));
	vcdp->chgBit  (c+306,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
			       & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
