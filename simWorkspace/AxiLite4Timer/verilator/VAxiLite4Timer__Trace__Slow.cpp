// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Timer__Syms.h"


//======================

void VAxiLite4Timer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxiLite4Timer::traceInit, &VAxiLite4Timer::traceFull, &VAxiLite4Timer::traceChg, this);
}
void VAxiLite4Timer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4Timer* t = (VAxiLite4Timer*)userthis;
    VAxiLite4Timer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4Timer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Timer* t = (VAxiLite4Timer*)userthis;
    VAxiLite4Timer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxiLite4Timer::traceInitThis(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4Timer::traceFullThis(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Timer::traceInitThis__1(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+265,"axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+273,"axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+281,"axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+289,"axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+297,"axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+305,"axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+313,"axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+321,"axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+329,"axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+337,"axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+345,"axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+353,"axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+361,"axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+369,"axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+377,"axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+385,"axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+393,"axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+401,"axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+409,"axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+417,"timer_interrupt", false,-1);
        vcdp->declBit(c+425,"oc", false,-1);
        vcdp->declBit(c+433,"oc_n", false,-1);
        vcdp->declBit(c+441,"clk", false,-1);
        vcdp->declBit(c+449,"reset", false,-1);
        vcdp->declBit(c+265,"AxiLite4Timer axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+273,"AxiLite4Timer axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+281,"AxiLite4Timer axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+289,"AxiLite4Timer axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+297,"AxiLite4Timer axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+305,"AxiLite4Timer axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+313,"AxiLite4Timer axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+321,"AxiLite4Timer axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+329,"AxiLite4Timer axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+337,"AxiLite4Timer axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+345,"AxiLite4Timer axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+353,"AxiLite4Timer axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+361,"AxiLite4Timer axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+369,"AxiLite4Timer axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+377,"AxiLite4Timer axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+385,"AxiLite4Timer axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+393,"AxiLite4Timer axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+401,"AxiLite4Timer axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+409,"AxiLite4Timer axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+417,"AxiLite4Timer timer_interrupt", false,-1);
        vcdp->declBit(c+425,"AxiLite4Timer oc", false,-1);
        vcdp->declBit(c+433,"AxiLite4Timer oc_n", false,-1);
        vcdp->declBit(c+441,"AxiLite4Timer clk", false,-1);
        vcdp->declBit(c+449,"AxiLite4Timer reset", false,-1);
        vcdp->declBit(c+1,"AxiLite4Timer timer_module_interrupt", false,-1);
        vcdp->declBus(c+113,"AxiLite4Timer timer_module_value", false,-1, 15,0);
        vcdp->declBit(c+9,"AxiLite4Timer timer_module_oc", false,-1);
        vcdp->declBit(c+17,"AxiLite4Timer timer_module_oc_n", false,-1);
        vcdp->declBit(c+465,"AxiLite4Timer readHaltRequest", false,-1);
        vcdp->declBit(c+465,"AxiLite4Timer writeHaltRequest", false,-1);
        vcdp->declBit(c+89,"AxiLite4Timer writeJoinEvent_valid", false,-1);
        vcdp->declBit(c+97,"AxiLite4Timer writeJoinEvent_ready", false,-1);
        vcdp->declBit(c+105,"AxiLite4Timer writeJoinEvent_fire", false,-1);
        vcdp->declBus(c+473,"AxiLite4Timer writeRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+89,"AxiLite4Timer writeJoinEvent_translated_valid", false,-1);
        vcdp->declBit(c+97,"AxiLite4Timer writeJoinEvent_translated_ready", false,-1);
        vcdp->declBus(c+473,"AxiLite4Timer writeJoinEvent_translated_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+153,"AxiLite4Timer when_Stream_l342", false,-1);
        vcdp->declBit(c+161,"AxiLite4Timer axil4Ctrl_ar_readDataStage_valid", false,-1);
        vcdp->declBit(c+393,"AxiLite4Timer axil4Ctrl_ar_readDataStage_ready", false,-1);
        vcdp->declBus(c+121,"AxiLite4Timer axil4Ctrl_ar_readDataStage_payload_addr", false,-1, 7,0);
        vcdp->declBus(c+129,"AxiLite4Timer axil4Ctrl_ar_readDataStage_payload_prot", false,-1, 2,0);
        vcdp->declBit(c+161,"AxiLite4Timer axil4Ctrl_ar_rValid", false,-1);
        vcdp->declBus(c+121,"AxiLite4Timer axil4Ctrl_ar_rData_addr", false,-1, 7,0);
        vcdp->declBus(c+129,"AxiLite4Timer axil4Ctrl_ar_rData_prot", false,-1, 2,0);
        vcdp->declBit(c+169,"AxiLite4Timer when_Stream_l342_1", false,-1);
        vcdp->declBus(c+25,"AxiLite4Timer readRsp_data", false,-1, 31,0);
        vcdp->declBus(c+473,"AxiLite4Timer readRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+105,"AxiLite4Timer writeOccur", false,-1);
        vcdp->declBit(c+457,"AxiLite4Timer readOccur", false,-1);
        vcdp->declBit(c+177,"AxiLite4Timer timer_module_enable_driver", false,-1);
        vcdp->declBit(c+185,"AxiLite4Timer timer_module_interrupt_en_driver", false,-1);
        vcdp->declBit(c+193,"AxiLite4Timer timer_module_interrupt_polarity_driver", false,-1);
        vcdp->declBit(c+201,"AxiLite4Timer timer_module_oc_en_driver", false,-1);
        vcdp->declBit(c+177,"AxiLite4Timer timer_module enable", false,-1);
        vcdp->declBus(c+209,"AxiLite4Timer timer_module period", false,-1, 15,0);
        vcdp->declBus(c+217,"AxiLite4Timer timer_module reload_val", false,-1, 15,0);
        vcdp->declBus(c+225,"AxiLite4Timer timer_module divider_A_limit", false,-1, 3,0);
        vcdp->declBus(c+233,"AxiLite4Timer timer_module divider_B_limit", false,-1, 15,0);
        vcdp->declBit(c+185,"AxiLite4Timer timer_module interrupt_en", false,-1);
        vcdp->declBit(c+193,"AxiLite4Timer timer_module interrupt_polarity", false,-1);
        vcdp->declBit(c+1,"AxiLite4Timer timer_module interrupt", false,-1);
        vcdp->declBit(c+241,"AxiLite4Timer timer_module interrupt_clc", false,-1);
        vcdp->declBus(c+113,"AxiLite4Timer timer_module value", false,-1, 15,0);
        vcdp->declBit(c+201,"AxiLite4Timer timer_module oc_en", false,-1);
        vcdp->declBit(c+9,"AxiLite4Timer timer_module oc", false,-1);
        vcdp->declBit(c+17,"AxiLite4Timer timer_module oc_n", false,-1);
        vcdp->declBus(c+249,"AxiLite4Timer timer_module oc_compare_val", false,-1, 15,0);
        vcdp->declBit(c+441,"AxiLite4Timer timer_module clk", false,-1);
        vcdp->declBit(c+449,"AxiLite4Timer timer_module reset", false,-1);
        vcdp->declBit(c+33,"AxiLite4Timer timer_module clock_divider_A_full", false,-1);
        vcdp->declBit(c+41,"AxiLite4Timer timer_module clock_divider_B_full", false,-1);
        vcdp->declBit(c+9,"AxiLite4Timer timer_module outputCompare_1_oc", false,-1);
        vcdp->declBit(c+17,"AxiLite4Timer timer_module outputCompare_1_oc_n", false,-1);
        vcdp->declBus(c+113,"AxiLite4Timer timer_module timer_counter", false,-1, 15,0);
        vcdp->declBit(c+49,"AxiLite4Timer timer_module limit", false,-1);
        vcdp->declBit(c+257,"AxiLite4Timer timer_module when_Timer_l141", false,-1);
        vcdp->declBit(c+57,"AxiLite4Timer timer_module when_Timer_l143", false,-1);
        vcdp->declBit(c+65,"AxiLite4Timer timer_module when_Timer_l147", false,-1);
        vcdp->declBit(c+177,"AxiLite4Timer timer_module clock_divider_A enable", false,-1);
        vcdp->declBus(c+225,"AxiLite4Timer timer_module clock_divider_A limit", false,-1, 3,0);
        vcdp->declBit(c+481,"AxiLite4Timer timer_module clock_divider_A step", false,-1);
        vcdp->declBit(c+33,"AxiLite4Timer timer_module clock_divider_A full", false,-1);
        vcdp->declBit(c+441,"AxiLite4Timer timer_module clock_divider_A clk", false,-1);
        vcdp->declBit(c+449,"AxiLite4Timer timer_module clock_divider_A reset", false,-1);
        vcdp->declBus(c+137,"AxiLite4Timer timer_module clock_divider_A divider_counter", false,-1, 3,0);
        vcdp->declBit(c+73,"AxiLite4Timer timer_module clock_divider_A when_Timer_l27", false,-1);
        vcdp->declBit(c+177,"AxiLite4Timer timer_module clock_divider_B enable", false,-1);
        vcdp->declBus(c+233,"AxiLite4Timer timer_module clock_divider_B limit", false,-1, 15,0);
        vcdp->declBit(c+33,"AxiLite4Timer timer_module clock_divider_B step", false,-1);
        vcdp->declBit(c+41,"AxiLite4Timer timer_module clock_divider_B full", false,-1);
        vcdp->declBit(c+441,"AxiLite4Timer timer_module clock_divider_B clk", false,-1);
        vcdp->declBit(c+449,"AxiLite4Timer timer_module clock_divider_B reset", false,-1);
        vcdp->declBus(c+145,"AxiLite4Timer timer_module clock_divider_B divider_counter", false,-1, 15,0);
        vcdp->declBit(c+81,"AxiLite4Timer timer_module clock_divider_B when_Timer_l27", false,-1);
        vcdp->declBit(c+201,"AxiLite4Timer timer_module outputCompare_1 enable", false,-1);
        vcdp->declBit(c+9,"AxiLite4Timer timer_module outputCompare_1 oc", false,-1);
        vcdp->declBit(c+17,"AxiLite4Timer timer_module outputCompare_1 oc_n", false,-1);
        vcdp->declBus(c+113,"AxiLite4Timer timer_module outputCompare_1 timer_value", false,-1, 15,0);
        vcdp->declBus(c+249,"AxiLite4Timer timer_module outputCompare_1 compare_val", false,-1, 15,0);
    }
}

void VAxiLite4Timer::traceFullThis__1(VAxiLite4Timer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver)
                                   ? ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit)
                                       ? (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver)
                                       : (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver)))
                                   : (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver))))));
        vcdp->fullBit(c+9,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc));
        vcdp->fullBit(c+17,((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc)))));
        vcdp->fullBus(c+25,(vlTOPp->AxiLite4Timer__DOT__readRsp_data),32);
        vcdp->fullBit(c+33,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full));
        vcdp->fullBit(c+41,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full));
        vcdp->fullBit(c+49,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit));
        vcdp->fullBit(c+57,((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit)))));
        vcdp->fullBit(c+65,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit) 
                                   | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))));
        vcdp->fullBit(c+73,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full) 
                                   | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))));
        vcdp->fullBit(c+81,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full) 
                                   | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))));
        vcdp->fullBit(c+89,(vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_valid));
        vcdp->fullBit(c+97,(vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->fullBit(c+105,(vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire));
        vcdp->fullBus(c+113,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter),16);
        vcdp->fullBus(c+121,(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->fullBus(c+129,(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->fullBus(c+137,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A__DOT__divider_counter),4);
        vcdp->fullBus(c+145,(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B__DOT__divider_counter),16);
        vcdp->fullBit(c+153,((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->fullBit(c+161,(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid));
        vcdp->fullBit(c+169,((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->fullBit(c+177,(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver));
        vcdp->fullBit(c+185,(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver));
        vcdp->fullBit(c+193,(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver));
        vcdp->fullBit(c+201,(vlTOPp->AxiLite4Timer__DOT__timer_module_oc_en_driver));
        vcdp->fullBus(c+209,(vlTOPp->AxiLite4Timer__DOT___zz_period),16);
        vcdp->fullBus(c+217,(vlTOPp->AxiLite4Timer__DOT___zz_reload_val),16);
        vcdp->fullBus(c+225,(vlTOPp->AxiLite4Timer__DOT___zz_divider_A_limit),4);
        vcdp->fullBus(c+233,(vlTOPp->AxiLite4Timer__DOT___zz_divider_B_limit),16);
        vcdp->fullBit(c+241,(vlTOPp->AxiLite4Timer__DOT___zz_interrupt_clc));
        vcdp->fullBus(c+249,(vlTOPp->AxiLite4Timer__DOT___zz_oc_compare_val),16);
        vcdp->fullBit(c+257,((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT___zz_interrupt_clc) 
                                    | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))));
        vcdp->fullBit(c+265,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->fullBit(c+273,(vlTOPp->axil4Ctrl_awready));
        vcdp->fullBus(c+281,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->fullBus(c+289,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->fullBit(c+297,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->fullBit(c+305,(vlTOPp->axil4Ctrl_wready));
        vcdp->fullBus(c+313,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->fullBus(c+321,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->fullBit(c+329,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->fullBit(c+337,(vlTOPp->axil4Ctrl_bready));
        vcdp->fullBus(c+345,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->fullBit(c+353,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->fullBit(c+361,(vlTOPp->axil4Ctrl_arready));
        vcdp->fullBus(c+369,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->fullBus(c+377,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->fullBit(c+385,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->fullBit(c+393,(vlTOPp->axil4Ctrl_rready));
        vcdp->fullBus(c+401,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->fullBus(c+409,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->fullBit(c+417,(vlTOPp->timer_interrupt));
        vcdp->fullBit(c+425,(vlTOPp->oc));
        vcdp->fullBit(c+433,(vlTOPp->oc_n));
        vcdp->fullBit(c+441,(vlTOPp->clk));
        vcdp->fullBit(c+449,(vlTOPp->reset));
        vcdp->fullBit(c+457,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->fullBit(c+465,(0U));
        vcdp->fullBus(c+473,(0U),2);
        vcdp->fullBit(c+481,(1U));
    }
}
