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
	vcdp->chgBus  (c+1,(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT___zz_1),14);
    }
}

void VAxiLite4Gpios::traceChgThis__3(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read_1),14);
    }
}

void VAxiLite4Gpios::traceChgThis__4(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+3,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write),14);
	vcdp->chgBus  (c+4,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable),14);
	vcdp->chgBit  (c+5,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable))));
	vcdp->chgBit  (c+6,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				   >> 1U))));
	vcdp->chgBit  (c+7,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				   >> 2U))));
	vcdp->chgBit  (c+8,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				   >> 3U))));
	vcdp->chgBit  (c+9,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				   >> 4U))));
	vcdp->chgBit  (c+10,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 5U))));
	vcdp->chgBit  (c+11,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 6U))));
	vcdp->chgBit  (c+12,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 7U))));
	vcdp->chgBit  (c+13,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 8U))));
	vcdp->chgBit  (c+14,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 9U))));
	vcdp->chgBit  (c+15,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 0xaU))));
	vcdp->chgBit  (c+16,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 0xbU))));
	vcdp->chgBit  (c+17,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 0xcU))));
	vcdp->chgBit  (c+18,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable) 
				    >> 0xdU))));
    }
}

void VAxiLite4Gpios::traceChgThis__5(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+19,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_read),14);
	vcdp->chgBit  (c+20,(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid));
	vcdp->chgBit  (c+21,(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
	vcdp->chgBit  (c+22,(vlTOPp->AxiLite4Gpios__DOT__writeOccur));
    }
}

void VAxiLite4Gpios::traceChgThis__6(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+23,(vlTOPp->AxiLite4Gpios__DOT__readRsp_data),32);
    }
}

void VAxiLite4Gpios::traceChgThis__7(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+24,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr),8);
	vcdp->chgBus  (c+25,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot),3);
	vcdp->chgBus  (c+26,(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1),14);
	vcdp->chgBus  (c+27,(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__last),14);
	vcdp->chgBus  (c+28,(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_0),14);
    }
}

void VAxiLite4Gpios::traceChgThis__8(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+29,((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_high_driver) 
				 & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)) 
				| ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_low_driver) 
				   & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)))) 
			       | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_rise_driver) 
				  & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1) 
				     & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__last))))) 
			      | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_fall_driver) 
				 & ((~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__gpios_read_buffercc__DOT__buffers_1)) 
				    & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_1__DOT__last))))),14);
    }
}

void VAxiLite4Gpios::traceChgThis__9(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+30,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))));
	vcdp->chgBit  (c+31,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid));
	vcdp->chgBit  (c+32,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))));
	vcdp->chgBus  (c+33,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_writeEnable_1_driver),14);
	vcdp->chgBus  (c+34,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_gpios_write_1_driver),14);
	vcdp->chgBus  (c+35,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_high_driver),14);
	vcdp->chgBus  (c+36,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_low_driver),14);
	vcdp->chgBus  (c+37,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_rise_driver),14);
	vcdp->chgBus  (c+38,(vlTOPp->AxiLite4Gpios__DOT__gpios_1_ir_fall_driver),14);
    }
}

void VAxiLite4Gpios::traceChgThis__10(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+39,(vlTOPp->axil4Ctrl_awvalid));
	vcdp->chgBit  (c+40,(vlTOPp->axil4Ctrl_awready));
	vcdp->chgBus  (c+41,(vlTOPp->axil4Ctrl_awaddr),8);
	vcdp->chgBus  (c+42,(vlTOPp->axil4Ctrl_awprot),3);
	vcdp->chgBit  (c+43,(vlTOPp->axil4Ctrl_wvalid));
	vcdp->chgBit  (c+44,(vlTOPp->axil4Ctrl_wready));
	vcdp->chgBus  (c+45,(vlTOPp->axil4Ctrl_wdata),32);
	vcdp->chgBus  (c+46,(vlTOPp->axil4Ctrl_wstrb),4);
	vcdp->chgBit  (c+47,(vlTOPp->axil4Ctrl_bvalid));
	vcdp->chgBit  (c+48,(vlTOPp->axil4Ctrl_bready));
	vcdp->chgBus  (c+49,(vlTOPp->axil4Ctrl_bresp),2);
	vcdp->chgBit  (c+50,(vlTOPp->axil4Ctrl_arvalid));
	vcdp->chgBit  (c+51,(vlTOPp->axil4Ctrl_arready));
	vcdp->chgBus  (c+52,(vlTOPp->axil4Ctrl_araddr),8);
	vcdp->chgBus  (c+53,(vlTOPp->axil4Ctrl_arprot),3);
	vcdp->chgBit  (c+54,(vlTOPp->axil4Ctrl_rvalid));
	vcdp->chgBit  (c+55,(vlTOPp->axil4Ctrl_rready));
	vcdp->chgBus  (c+56,(vlTOPp->axil4Ctrl_rdata),32);
	vcdp->chgBus  (c+57,(vlTOPp->axil4Ctrl_rresp),2);
	vcdp->chgBus  (c+58,(vlTOPp->gpio_0),14);
	vcdp->chgBit  (c+59,(vlTOPp->interrupt_0));
	vcdp->chgBit  (c+60,(vlTOPp->clk));
	vcdp->chgBit  (c+61,(vlTOPp->reset));
	vcdp->chgBit  (c+62,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
			      & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
