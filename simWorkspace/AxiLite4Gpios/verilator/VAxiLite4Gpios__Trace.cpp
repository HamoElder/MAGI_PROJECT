// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Gpios__Syms.h"


//======================

void VAxiLite4Gpios::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Gpios* t = (VAxiLite4Gpios*)userthis;
    VAxiLite4Gpios__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4Gpios::traceChgThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
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
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Gpios::traceChgThis__2(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1),16);
    }
}

void VAxiLite4Gpios::traceChgThis__3(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+9,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1),16);
        vcdp->chgBus(c+17,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1),16);
    }
}

void VAxiLite4Gpios::traceChgThis__4(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write),16);
        vcdp->chgBus(c+33,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable),16);
        vcdp->chgBus(c+41,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt),16);
        vcdp->chgBus(c+49,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write),16);
        vcdp->chgBus(c+57,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable),16);
        vcdp->chgBus(c+65,(vlTOPp->AxiLite4Gpios__DOT__readRsp_data),32);
        vcdp->chgBit(c+73,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))));
        vcdp->chgBit(c+81,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                  >> 1U))));
        vcdp->chgBit(c+89,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                  >> 2U))));
        vcdp->chgBit(c+97,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                  >> 3U))));
        vcdp->chgBit(c+105,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 4U))));
        vcdp->chgBit(c+113,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 5U))));
        vcdp->chgBit(c+121,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 6U))));
        vcdp->chgBit(c+129,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 7U))));
        vcdp->chgBit(c+137,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 8U))));
        vcdp->chgBit(c+145,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 9U))));
        vcdp->chgBit(c+153,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 0xaU))));
        vcdp->chgBit(c+161,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 0xbU))));
        vcdp->chgBit(c+169,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 0xcU))));
        vcdp->chgBit(c+177,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 0xdU))));
        vcdp->chgBit(c+185,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 0xeU))));
        vcdp->chgBit(c+193,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 0xfU))));
        vcdp->chgBit(c+201,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))));
        vcdp->chgBit(c+209,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 1U))));
        vcdp->chgBit(c+217,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 2U))));
        vcdp->chgBit(c+225,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 3U))));
        vcdp->chgBit(c+233,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 4U))));
        vcdp->chgBit(c+241,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 5U))));
        vcdp->chgBit(c+249,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 6U))));
        vcdp->chgBit(c+257,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 7U))));
        vcdp->chgBit(c+265,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 8U))));
        vcdp->chgBit(c+273,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 9U))));
        vcdp->chgBit(c+281,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 0xaU))));
        vcdp->chgBit(c+289,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 0xbU))));
        vcdp->chgBit(c+297,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 0xcU))));
        vcdp->chgBit(c+305,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 0xdU))));
        vcdp->chgBit(c+313,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 0xeU))));
        vcdp->chgBit(c+321,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                   >> 0xfU))));
        vcdp->chgBus(c+329,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid),16);
    }
}

void VAxiLite4Gpios::traceChgThis__5(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+337,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read),16);
        vcdp->chgBus(c+345,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read),16);
        vcdp->chgBit(c+353,(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+361,(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+369,(vlTOPp->AxiLite4Gpios__DOT__writeOccur));
    }
}

void VAxiLite4Gpios::traceChgThis__6(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+377,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+385,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->chgBus(c+393,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1),16);
        vcdp->chgBus(c+401,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last),16);
        vcdp->chgBus(c+409,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0),16);
        vcdp->chgBus(c+417,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1),16);
        vcdp->chgBus(c+425,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last),16);
        vcdp->chgBus(c+433,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0),16);
    }
}

void VAxiLite4Gpios::traceChgThis__7(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+441,((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver) 
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

void VAxiLite4Gpios::traceChgThis__8(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+449,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+457,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+465,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->chgBus(c+473,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver),16);
        vcdp->chgBus(c+481,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver),16);
        vcdp->chgBus(c+489,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver),16);
        vcdp->chgBus(c+497,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver),16);
        vcdp->chgBus(c+505,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver),16);
        vcdp->chgBus(c+513,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver),16);
        vcdp->chgBus(c+521,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver),16);
        vcdp->chgBus(c+529,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver),16);
        vcdp->chgBus(c+537,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver),16);
        vcdp->chgBus(c+545,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver),16);
        vcdp->chgBus(c+553,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver),16);
        vcdp->chgBus(c+561,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver),16);
    }
}

void VAxiLite4Gpios::traceChgThis__9(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+569,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+577,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+585,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+593,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+601,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+609,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+617,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+625,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+633,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+641,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+649,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+657,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+665,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+673,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+681,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+689,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+697,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+705,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+713,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBus(c+721,(vlTOPp->gpio_0),16);
        vcdp->chgBus(c+729,(vlTOPp->gpio_1),16);
        vcdp->chgBit(c+737,(vlTOPp->interrupt_0));
        vcdp->chgBit(c+745,(vlTOPp->interrupt_1));
        vcdp->chgBit(c+753,(vlTOPp->clk));
        vcdp->chgBit(c+761,(vlTOPp->reset));
        vcdp->chgBit(c+769,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                             & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
