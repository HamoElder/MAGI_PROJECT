// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Timer__Syms.h"


//======================

void VAxiLite4Timer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Timer* t = (VAxiLite4Timer*)userthis;
    VAxiLite4Timer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4Timer::traceChgThis(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Timer::traceChgThis__2(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver)
                                  ? ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit)
                                      ? (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver)
                                      : (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver)))
                                  : (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver))))));
        vcdp->chgBit(c+9,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc));
        vcdp->chgBit(c+17,((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc)))));
        vcdp->chgBus(c+25,(vlTOPp->AxiLite4Timer__DOT__readRsp_data),32);
        vcdp->chgBit(c+33,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full));
        vcdp->chgBit(c+41,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full));
        vcdp->chgBit(c+49,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit));
        vcdp->chgBit(c+57,((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit)))));
        vcdp->chgBit(c+65,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit) 
                                  | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))));
        vcdp->chgBit(c+73,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full) 
                                  | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))));
        vcdp->chgBit(c+81,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full) 
                                  | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))));
    }
}

void VAxiLite4Timer::traceChgThis__3(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+89,(vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+97,(vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+105,(vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire));
    }
}

void VAxiLite4Timer::traceChgThis__4(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+113,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter),16);
        vcdp->chgBus(c+121,(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+129,(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->chgBus(c+137,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A__DOT__divider_counter),4);
        vcdp->chgBus(c+145,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B__DOT__divider_counter),16);
    }
}

void VAxiLite4Timer::traceChgThis__5(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+153,((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+161,(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+169,((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->chgBit(c+177,(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver));
        vcdp->chgBit(c+185,(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver));
        vcdp->chgBit(c+193,(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver));
        vcdp->chgBit(c+201,(vlTOPp->AxiLite4Timer__DOT__timer_module_oc_en_driver));
        vcdp->chgBus(c+209,(vlTOPp->AxiLite4Timer__DOT___zz_period),16);
        vcdp->chgBus(c+217,(vlTOPp->AxiLite4Timer__DOT___zz_reload_val),16);
        vcdp->chgBus(c+225,(vlTOPp->AxiLite4Timer__DOT___zz_divider_A_limit),4);
        vcdp->chgBus(c+233,(vlTOPp->AxiLite4Timer__DOT___zz_divider_B_limit),16);
        vcdp->chgBit(c+241,(vlTOPp->AxiLite4Timer__DOT___zz_interrupt_clc));
        vcdp->chgBus(c+249,(vlTOPp->AxiLite4Timer__DOT___zz_oc_compare_val),16);
        vcdp->chgBit(c+257,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT___zz_interrupt_clc) 
                                   | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))));
    }
}

void VAxiLite4Timer::traceChgThis__6(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+265,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+273,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+281,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+289,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+297,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+305,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+313,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+321,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+329,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+337,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+345,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+353,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+361,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+369,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+377,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+385,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+393,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+401,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+409,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+417,(vlTOPp->timer_interrupt));
        vcdp->chgBit(c+425,(vlTOPp->oc));
        vcdp->chgBit(c+433,(vlTOPp->oc_n));
        vcdp->chgBit(c+441,(vlTOPp->clk));
        vcdp->chgBit(c+449,(vlTOPp->reset));
        vcdp->chgBit(c+457,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                             & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
