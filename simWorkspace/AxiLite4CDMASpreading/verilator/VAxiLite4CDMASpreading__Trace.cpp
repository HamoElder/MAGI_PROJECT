// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4CDMASpreading__Syms.h"


//======================

void VAxiLite4CDMASpreading::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4CDMASpreading* t=(VAxiLite4CDMASpreading*)userthis;
    VAxiLite4CDMASpreading__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4CDMASpreading::traceChgThis(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4CDMASpreading::traceChgThis__2(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->AxiLite4CDMASpreading__DOT__readRsp_data),32);
    }
}

void VAxiLite4CDMASpreading::traceChgThis__3(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->AxiLite4CDMASpreading__DOT__writeJoinEvent_valid));
	vcdp->chgBit  (c+3,(vlTOPp->AxiLite4CDMASpreading__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->chgBit  (c+4,(vlTOPp->AxiLite4CDMASpreading__DOT__writeOccur));
    }
}

void VAxiLite4CDMASpreading::traceChgThis__4(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+5,((0U == (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt))));
	vcdp->chgBit  (c+6,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_valid));
	vcdp->chgBus  (c+7,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_i),16);
	vcdp->chgBus  (c+8,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_8__DOT__mod_q),16);
	vcdp->chgBit  (c+9,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_valid));
	vcdp->chgBus  (c+10,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_i),16);
	vcdp->chgBus  (c+11,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_9__DOT__mod_q),16);
	vcdp->chgBit  (c+12,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_valid));
	vcdp->chgBus  (c+13,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_i),16);
	vcdp->chgBus  (c+14,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_10__DOT__mod_q),16);
	vcdp->chgBit  (c+15,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_valid));
	vcdp->chgBus  (c+16,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_i),16);
	vcdp->chgBus  (c+17,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_11__DOT__mod_q),16);
	vcdp->chgBit  (c+18,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_valid));
	vcdp->chgBus  (c+19,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_i),16);
	vcdp->chgBus  (c+20,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_12__DOT__mod_q),16);
	vcdp->chgBit  (c+21,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_valid));
	vcdp->chgBus  (c+22,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_i),16);
	vcdp->chgBus  (c+23,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_13__DOT__mod_q),16);
	vcdp->chgBit  (c+24,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_valid));
	vcdp->chgBus  (c+25,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_i),16);
	vcdp->chgBus  (c+26,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_14__DOT__mod_q),16);
	vcdp->chgBit  (c+27,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_valid));
	vcdp->chgBus  (c+28,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_i),16);
	vcdp->chgBus  (c+29,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__computeUnit_15__DOT__mod_q),16);
	vcdp->chgBit  (c+30,(((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid) 
			      & (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_valid_1))));
	vcdp->chgBus  (c+31,((0xffffU & (((0xe000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i) 
								      >> 0xfU)))) 
					      << 0xdU)) 
					  | (0x1fffU 
					     & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i) 
						>> 3U))) 
					 + ((0xe000U 
					     & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1) 
									>> 0xfU)))) 
						<< 0xdU)) 
					    | (0x1fffU 
					       & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_i_1) 
						  >> 3U)))))),16);
	vcdp->chgBus  (c+32,((0xffffU & (((0xe000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q) 
								      >> 0xfU)))) 
					      << 0xdU)) 
					  | (0x1fffU 
					     & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q) 
						>> 3U))) 
					 + ((0xe000U 
					     & (VL_NEGATE_I((IData)(
								    (1U 
								     & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1) 
									>> 0xfU)))) 
						<< 0xdU)) 
					    | (0x1fffU 
					       & ((IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_code_sum__DOT___zz_mod_iq_payload_cha_q_1) 
						  >> 3U)))))),16);
	vcdp->chgBit  (c+33,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkO_buf1));
	vcdp->chgBit  (c+34,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkO_buf1));
	vcdp->chgBus  (c+35,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+36,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkO_buf1),8);
	vcdp->chgBus  (c+37,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkO_buf1),3);
	vcdp->chgBus  (c+38,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt),3);
	vcdp->chgBus  (c+39,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_i),16);
	vcdp->chgBus  (c+40,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_data_cha_q),16);
	vcdp->chgBit  (c+41,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__flow_iq_valid));
	vcdp->chgBus  (c+42,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[0]),8);
	vcdp->chgBus  (c+43,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[1]),8);
	vcdp->chgBus  (c+44,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[2]),8);
	vcdp->chgBus  (c+45,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[3]),8);
	vcdp->chgBus  (c+46,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[4]),8);
	vcdp->chgBus  (c+47,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[5]),8);
	vcdp->chgBus  (c+48,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[6]),8);
	vcdp->chgBus  (c+49,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__code_map[7]),8);
	vcdp->chgBit  (c+50,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code));
	vcdp->chgBit  (c+51,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_1));
	vcdp->chgBit  (c+52,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_2));
	vcdp->chgBit  (c+53,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_3));
	vcdp->chgBit  (c+54,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_4));
	vcdp->chgBit  (c+55,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_5));
	vcdp->chgBit  (c+56,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_6));
	vcdp->chgBit  (c+57,(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT___zz_code_7));
	vcdp->chgBit  (c+58,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkO_buf0));
	vcdp->chgBit  (c+59,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkO_buf0));
	vcdp->chgBus  (c+60,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkO_buf0),3);
	vcdp->chgBus  (c+61,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkO_buf0),8);
	vcdp->chgBus  (c+62,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkO_buf0),3);
    }
}

void VAxiLite4CDMASpreading::traceChgThis__5(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+63,(vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->chgBus  (c+64,(vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->chgBit  (c+65,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_5__DOT__area_clkI_reg));
	vcdp->chgBit  (c+66,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_6__DOT__area_clkI_reg));
	vcdp->chgBus  (c+67,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_7__DOT__area_clkI_reg),3);
	vcdp->chgBus  (c+68,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_8__DOT__area_clkI_reg),8);
	vcdp->chgBus  (c+69,(vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_3),3);
	vcdp->chgBus  (c+70,(vlTOPp->AxiLite4CDMASpreading__DOT__clkCrossing_9__DOT__area_clkI_reg),3);
    }
}

void VAxiLite4CDMASpreading::traceChgThis__6(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+71,((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpreading__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->chgBit  (c+72,(vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rValid));
	vcdp->chgBit  (c+73,((1U & (~ (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->chgBit  (c+74,(vlTOPp->AxiLite4CDMASpreading__DOT__cdma_spread_bridge_clc_driver));
	vcdp->chgBit  (c+75,(vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn));
	vcdp->chgBus  (c+76,(vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_1),3);
	vcdp->chgBus  (c+77,(vlTOPp->AxiLite4CDMASpreading__DOT___zz_dataIn_2),8);
    }
}

void VAxiLite4CDMASpreading::traceChgThis__7(VAxiLite4CDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+78,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->chgBit  (c+79,(vlTOPp->axil4Ctrl_awready));
	vcdp->chgBus  (c+80,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->chgBus  (c+81,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->chgBit  (c+82,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->chgBit  (c+83,(vlTOPp->axil4Ctrl_wready));
	vcdp->chgBus  (c+84,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->chgBus  (c+85,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->chgBit  (c+86,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->chgBit  (c+87,(vlTOPp->axil4Ctrl_bready));
	vcdp->chgBus  (c+88,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->chgBit  (c+89,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->chgBit  (c+90,(vlTOPp->axil4Ctrl_arready));
	vcdp->chgBus  (c+91,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->chgBus  (c+92,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->chgBit  (c+93,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->chgBit  (c+94,(vlTOPp->axil4Ctrl_rready));
	vcdp->chgBus  (c+95,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->chgBus  (c+96,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->chgBit  (c+97,(vlTOPp->base_iq_valid));
	vcdp->chgBit  (c+98,(vlTOPp->base_iq_ready));
	vcdp->chgBus  (c+99,(vlTOPp->base_iq_payload_cha_i),16);
	vcdp->chgBus  (c+100,(vlTOPp->base_iq_payload_cha_q),16);
	vcdp->chgBit  (c+101,(vlTOPp->mod_iq_valid));
	vcdp->chgBus  (c+102,(vlTOPp->mod_iq_payload_cha_i),16);
	vcdp->chgBus  (c+103,(vlTOPp->mod_iq_payload_cha_q),16);
	vcdp->chgBit  (c+104,(vlTOPp->rf_clk));
	vcdp->chgBit  (c+105,(vlTOPp->rf_resetn));
	vcdp->chgBit  (c+106,(vlTOPp->clk));
	vcdp->chgBit  (c+107,(vlTOPp->reset));
	vcdp->chgBit  (c+108,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
			       & (IData)(vlTOPp->axil4Ctrl_rready))));
	vcdp->chgBit  (c+109,(((IData)(vlTOPp->base_iq_valid) 
			       & (0U == (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt)))));
	vcdp->chgBit  (c+110,((((IData)(vlTOPp->base_iq_valid) 
				& (0U == (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt))) 
			       | (0U != (IData)(vlTOPp->AxiLite4CDMASpreading__DOT__rfClockArea_cdma_spread__DOT__cnt)))));
    }
}
