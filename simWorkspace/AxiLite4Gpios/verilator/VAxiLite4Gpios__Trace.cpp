// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Gpios__Syms.h"


//======================

void VAxiLite4Gpios::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Gpios* t=(VAxiLite4Gpios*)userthis;
    VAxiLite4Gpios__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4Gpios::traceChgThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 2U))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 4U))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				>> 1U) | (vlTOPp->__Vm_traceActivity 
					  >> 2U))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Gpios::traceChgThis__2(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1),16);
    }
}

void VAxiLite4Gpios::traceChgThis__3(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1),16);
	vcdp->chgBus  (c+3,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1),16);
    }
}

void VAxiLite4Gpios::traceChgThis__4(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+4,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write),16);
	vcdp->chgBus  (c+5,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable),16);
	vcdp->chgBus  (c+6,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write),16);
	vcdp->chgBus  (c+7,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable),16);
	vcdp->chgBit  (c+8,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))));
	vcdp->chgBit  (c+9,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				   >> 1U))));
	vcdp->chgBit  (c+10,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 2U))));
	vcdp->chgBit  (c+11,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 3U))));
	vcdp->chgBit  (c+12,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 4U))));
	vcdp->chgBit  (c+13,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 5U))));
	vcdp->chgBit  (c+14,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 6U))));
	vcdp->chgBit  (c+15,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 7U))));
	vcdp->chgBit  (c+16,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 8U))));
	vcdp->chgBit  (c+17,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 9U))));
	vcdp->chgBit  (c+18,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 0xaU))));
	vcdp->chgBit  (c+19,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 0xbU))));
	vcdp->chgBit  (c+20,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 0xcU))));
	vcdp->chgBit  (c+21,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 0xdU))));
	vcdp->chgBit  (c+22,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 0xeU))));
	vcdp->chgBit  (c+23,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
				    >> 0xfU))));
	vcdp->chgBit  (c+24,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))));
	vcdp->chgBit  (c+25,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 1U))));
	vcdp->chgBit  (c+26,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 2U))));
	vcdp->chgBit  (c+27,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 3U))));
	vcdp->chgBit  (c+28,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 4U))));
	vcdp->chgBit  (c+29,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 5U))));
	vcdp->chgBit  (c+30,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 6U))));
	vcdp->chgBit  (c+31,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 7U))));
	vcdp->chgBit  (c+32,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 8U))));
	vcdp->chgBit  (c+33,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 9U))));
	vcdp->chgBit  (c+34,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 0xaU))));
	vcdp->chgBit  (c+35,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 0xbU))));
	vcdp->chgBit  (c+36,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 0xcU))));
	vcdp->chgBit  (c+37,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 0xdU))));
	vcdp->chgBit  (c+38,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 0xeU))));
	vcdp->chgBit  (c+39,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
				    >> 0xfU))));
	vcdp->chgBus  (c+40,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid),16);
    }
}

void VAxiLite4Gpios::traceChgThis__5(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+41,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read),16);
	vcdp->chgBus  (c+42,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read),16);
	vcdp->chgBit  (c+43,(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid));
	vcdp->chgBit  (c+44,(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->chgBit  (c+45,(vlTOPp->AxiLite4Gpios__DOT__writeOccur));
    }
}

void VAxiLite4Gpios::traceChgThis__6(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+46,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt),16);
	vcdp->chgBus  (c+47,(vlTOPp->AxiLite4Gpios__DOT__readRsp_data),32);
    }
}

void VAxiLite4Gpios::traceChgThis__7(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+48,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->chgBus  (c+49,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->chgBus  (c+50,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1),16);
	vcdp->chgBus  (c+51,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last),16);
	vcdp->chgBus  (c+52,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0),16);
	vcdp->chgBus  (c+53,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1),16);
	vcdp->chgBus  (c+54,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last),16);
	vcdp->chgBus  (c+55,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0),16);
    }
}

void VAxiLite4Gpios::traceChgThis__8(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+56,((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver) 
				 & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver) 
				   & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)))) 
			       | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver) 
				  & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1) 
				     & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last))))) 
			      | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver) 
				 & ((~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)) 
				    & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last))))),16);
    }
}

void VAxiLite4Gpios::traceChgThis__9(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+57,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->chgBit  (c+58,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid));
	vcdp->chgBit  (c+59,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->chgBus  (c+60,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver),16);
	vcdp->chgBus  (c+61,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver),16);
	vcdp->chgBus  (c+62,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver),16);
	vcdp->chgBus  (c+63,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver),16);
	vcdp->chgBus  (c+64,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver),16);
	vcdp->chgBus  (c+65,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver),16);
	vcdp->chgBus  (c+66,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver),16);
	vcdp->chgBus  (c+67,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver),16);
	vcdp->chgBus  (c+68,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver),16);
	vcdp->chgBus  (c+69,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver),16);
	vcdp->chgBus  (c+70,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver),16);
	vcdp->chgBus  (c+71,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver),16);
    }
}

void VAxiLite4Gpios::traceChgThis__10(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+72,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->chgBit  (c+73,(vlTOPp->axil4Ctrl_awready));
	vcdp->chgBus  (c+74,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->chgBus  (c+75,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->chgBit  (c+76,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->chgBit  (c+77,(vlTOPp->axil4Ctrl_wready));
	vcdp->chgBus  (c+78,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->chgBus  (c+79,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->chgBit  (c+80,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->chgBit  (c+81,(vlTOPp->axil4Ctrl_bready));
	vcdp->chgBus  (c+82,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->chgBit  (c+83,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->chgBit  (c+84,(vlTOPp->axil4Ctrl_arready));
	vcdp->chgBus  (c+85,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->chgBus  (c+86,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->chgBit  (c+87,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->chgBit  (c+88,(vlTOPp->axil4Ctrl_rready));
	vcdp->chgBus  (c+89,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->chgBus  (c+90,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->chgBus  (c+91,(vlTOPp->gpio_0),16);
	vcdp->chgBus  (c+92,(vlTOPp->gpio_1),16);
	vcdp->chgBit  (c+93,(vlTOPp->interrupt_0));
	vcdp->chgBit  (c+94,(vlTOPp->interrupt_1));
	vcdp->chgBit  (c+95,(vlTOPp->clk));
	vcdp->chgBit  (c+96,(vlTOPp->reset));
	vcdp->chgBit  (c+97,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
			      & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
