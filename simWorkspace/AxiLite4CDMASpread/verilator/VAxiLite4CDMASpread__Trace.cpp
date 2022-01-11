// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4CDMASpread__Syms.h"


//======================

void VAxiLite4CDMASpread::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4CDMASpread* t=(VAxiLite4CDMASpread*)userthis;
    VAxiLite4CDMASpread__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4CDMASpread::traceChgThis(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAxiLite4CDMASpread::traceChgThis__2(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready));
    }
}

void VAxiLite4CDMASpread::traceChgThis__3(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->AxiLite4CDMASpread__DOT__readRsp_data),32);
    }
}

void VAxiLite4CDMASpread::traceChgThis__4(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,(vlTOPp->AxiLite4CDMASpread__DOT__writeJoinEvent_valid));
	vcdp->chgBit  (c+4,(vlTOPp->AxiLite4CDMASpread__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->chgBit  (c+5,(vlTOPp->AxiLite4CDMASpread__DOT__writeOccur));
    }
}

void VAxiLite4CDMASpread::traceChgThis__5(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+6,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid));
	vcdp->chgBus  (c+7,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i),16);
	vcdp->chgBus  (c+8,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q),16);
	vcdp->chgBit  (c+9,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid));
	vcdp->chgBus  (c+10,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i),16);
	vcdp->chgBus  (c+11,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q),16);
	vcdp->chgBit  (c+12,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid));
	vcdp->chgBus  (c+13,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i),16);
	vcdp->chgBus  (c+14,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q),16);
	vcdp->chgBit  (c+15,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid));
	vcdp->chgBus  (c+16,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i),16);
	vcdp->chgBus  (c+17,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q),16);
	vcdp->chgBit  (c+18,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid));
	vcdp->chgBus  (c+19,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i),16);
	vcdp->chgBus  (c+20,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q),16);
	vcdp->chgBit  (c+21,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid));
	vcdp->chgBus  (c+22,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i),16);
	vcdp->chgBus  (c+23,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q),16);
	vcdp->chgBit  (c+24,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid));
	vcdp->chgBus  (c+25,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i),16);
	vcdp->chgBus  (c+26,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q),16);
	vcdp->chgBit  (c+27,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid));
	vcdp->chgBus  (c+28,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i),16);
	vcdp->chgBus  (c+29,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q),16);
	vcdp->chgBit  (c+30,(((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid) 
			      & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1))));
	vcdp->chgBus  (c+31,((0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i) 
					 + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1)))),16);
	vcdp->chgBus  (c+32,((0xffffU & ((IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q) 
					 + (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1)))),16);
	vcdp->chgBit  (c+33,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf1));
	vcdp->chgBit  (c+34,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf1));
	vcdp->chgBus  (c+35,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+36,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf1),8);
	vcdp->chgBus  (c+37,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+38,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt),3);
	vcdp->chgBus  (c+39,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_i),16);
	vcdp->chgBus  (c+40,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_0_cha_q),16);
	vcdp->chgBus  (c+41,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_i),16);
	vcdp->chgBus  (c+42,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_1_cha_q),16);
	vcdp->chgBus  (c+43,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_i),16);
	vcdp->chgBus  (c+44,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_2_cha_q),16);
	vcdp->chgBus  (c+45,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_i),16);
	vcdp->chgBus  (c+46,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_3_cha_q),16);
	vcdp->chgBus  (c+47,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_i),16);
	vcdp->chgBus  (c+48,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_4_cha_q),16);
	vcdp->chgBus  (c+49,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_i),16);
	vcdp->chgBus  (c+50,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_5_cha_q),16);
	vcdp->chgBus  (c+51,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_i),16);
	vcdp->chgBus  (c+52,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_6_cha_q),16);
	vcdp->chgBus  (c+53,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_i),16);
	vcdp->chgBus  (c+54,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_vec_7_cha_q),16);
	vcdp->chgBit  (c+55,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid));
	vcdp->chgBit  (c+56,((0U == (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt))));
	vcdp->chgBus  (c+57,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[0]),8);
	vcdp->chgBus  (c+58,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[1]),8);
	vcdp->chgBus  (c+59,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[2]),8);
	vcdp->chgBus  (c+60,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[3]),8);
	vcdp->chgBus  (c+61,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[4]),8);
	vcdp->chgBus  (c+62,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[5]),8);
	vcdp->chgBus  (c+63,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[6]),8);
	vcdp->chgBus  (c+64,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__code_map[7]),8);
	vcdp->chgBit  (c+65,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code));
	vcdp->chgBit  (c+66,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_1));
	vcdp->chgBit  (c+67,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_2));
	vcdp->chgBit  (c+68,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_3));
	vcdp->chgBit  (c+69,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_4));
	vcdp->chgBit  (c+70,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_5));
	vcdp->chgBit  (c+71,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_6));
	vcdp->chgBit  (c+72,(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT___zz_code_7));
	vcdp->chgBit  (c+73,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkO_buf0));
	vcdp->chgBit  (c+74,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkO_buf0));
	vcdp->chgBus  (c+75,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkO_buf0),3);
	vcdp->chgBus  (c+76,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkO_buf0),8);
	vcdp->chgBus  (c+77,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkO_buf0),3);
    }
}

void VAxiLite4CDMASpread::traceChgThis__6(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+78,(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->chgBus  (c+79,(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->chgBit  (c+80,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_5__DOT__area_clkI_reg));
	vcdp->chgBit  (c+81,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_6__DOT__area_clkI_reg));
	vcdp->chgBus  (c+82,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_7__DOT__area_clkI_reg),3);
	vcdp->chgBus  (c+83,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_8__DOT__area_clkI_reg),8);
	vcdp->chgBus  (c+84,(vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_3),3);
	vcdp->chgBus  (c+85,(vlTOPp->AxiLite4CDMASpread__DOT__clkCrossing_9__DOT__area_clkI_reg),3);
    }
}

void VAxiLite4CDMASpread::traceChgThis__7(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+86,((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->chgBit  (c+87,(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid));
	vcdp->chgBit  (c+88,((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpread__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->chgBit  (c+89,(vlTOPp->AxiLite4CDMASpread__DOT__cdma_spread_bridge_clc_driver));
	vcdp->chgBit  (c+90,(vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn));
	vcdp->chgBus  (c+91,(vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_1),3);
	vcdp->chgBus  (c+92,(vlTOPp->AxiLite4CDMASpread__DOT___zz_dataIn_2),8);
    }
}

void VAxiLite4CDMASpread::traceChgThis__8(VAxiLite4CDMASpread__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpread* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+93,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->chgBit  (c+94,(vlTOPp->axil4Ctrl_awready));
	vcdp->chgBus  (c+95,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->chgBus  (c+96,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->chgBit  (c+97,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->chgBit  (c+98,(vlTOPp->axil4Ctrl_wready));
	vcdp->chgBus  (c+99,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->chgBus  (c+100,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->chgBit  (c+101,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->chgBit  (c+102,(vlTOPp->axil4Ctrl_bready));
	vcdp->chgBus  (c+103,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->chgBit  (c+104,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->chgBit  (c+105,(vlTOPp->axil4Ctrl_arready));
	vcdp->chgBus  (c+106,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->chgBus  (c+107,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->chgBit  (c+108,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->chgBit  (c+109,(vlTOPp->axil4Ctrl_rready));
	vcdp->chgBus  (c+110,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->chgBus  (c+111,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->chgBit  (c+112,(vlTOPp->base_iq_valid));
	vcdp->chgBit  (c+113,(vlTOPp->base_iq_ready));
	vcdp->chgBus  (c+114,(vlTOPp->base_iq_payload_0_cha_i),16);
	vcdp->chgBus  (c+115,(vlTOPp->base_iq_payload_0_cha_q),16);
	vcdp->chgBus  (c+116,(vlTOPp->base_iq_payload_1_cha_i),16);
	vcdp->chgBus  (c+117,(vlTOPp->base_iq_payload_1_cha_q),16);
	vcdp->chgBus  (c+118,(vlTOPp->base_iq_payload_2_cha_i),16);
	vcdp->chgBus  (c+119,(vlTOPp->base_iq_payload_2_cha_q),16);
	vcdp->chgBus  (c+120,(vlTOPp->base_iq_payload_3_cha_i),16);
	vcdp->chgBus  (c+121,(vlTOPp->base_iq_payload_3_cha_q),16);
	vcdp->chgBus  (c+122,(vlTOPp->base_iq_payload_4_cha_i),16);
	vcdp->chgBus  (c+123,(vlTOPp->base_iq_payload_4_cha_q),16);
	vcdp->chgBus  (c+124,(vlTOPp->base_iq_payload_5_cha_i),16);
	vcdp->chgBus  (c+125,(vlTOPp->base_iq_payload_5_cha_q),16);
	vcdp->chgBus  (c+126,(vlTOPp->base_iq_payload_6_cha_i),16);
	vcdp->chgBus  (c+127,(vlTOPp->base_iq_payload_6_cha_q),16);
	vcdp->chgBus  (c+128,(vlTOPp->base_iq_payload_7_cha_i),16);
	vcdp->chgBus  (c+129,(vlTOPp->base_iq_payload_7_cha_q),16);
	vcdp->chgBit  (c+130,(vlTOPp->mod_iq_valid));
	vcdp->chgBus  (c+131,(vlTOPp->mod_iq_payload_cha_i),16);
	vcdp->chgBus  (c+132,(vlTOPp->mod_iq_payload_cha_q),16);
	vcdp->chgBit  (c+133,(vlTOPp->rf_clk));
	vcdp->chgBit  (c+134,(vlTOPp->rf_resetn));
	vcdp->chgBit  (c+135,(vlTOPp->clk));
	vcdp->chgBit  (c+136,(vlTOPp->reset));
	vcdp->chgBit  (c+137,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
			       & (IData)(vlTOPp->axil4Ctrl_rready))));
	vcdp->chgBit  (c+138,(((IData)(vlTOPp->base_iq_valid) 
			       & (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready))));
	vcdp->chgBit  (c+139,((((IData)(vlTOPp->base_iq_valid) 
				& (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread_base_iq_ready)) 
			       | (0U != (IData)(vlTOPp->AxiLite4CDMASpread__DOT__rfClockArea_cdma_spread__DOT__cnt)))));
    }
}
