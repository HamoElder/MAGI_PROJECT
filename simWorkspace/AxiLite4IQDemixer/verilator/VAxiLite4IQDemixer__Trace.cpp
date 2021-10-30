// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4IQDemixer__Syms.h"


//======================

void VAxiLite4IQDemixer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4IQDemixer* t = (VAxiLite4IQDemixer*)userthis;
    VAxiLite4IQDemixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4IQDemixer::traceChgThis(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
                                  >> 5U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 6U))))) {
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
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4IQDemixer::traceChgThis__2(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data 
                                         >> 0x2fU)))));
        vcdp->chgBit(c+9,((0U != (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data))));
        vcdp->chgBit(c+17,((0U != (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data))));
        vcdp->chgBit(c+25,((1U & (vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                  >> 0x10U))));
        vcdp->chgBit(c+33,((3U != (3U & (vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                         >> 0xfU)))));
        vcdp->chgBit(c+41,((1U & (vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_i_data_1 
                                  >> 0xfU))));
        vcdp->chgBit(c+49,((1U & (IData)((vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data 
                                          >> 0x2fU)))));
        vcdp->chgBit(c+57,((0U != (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data))));
        vcdp->chgBit(c+65,((0U != (IData)(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data))));
        vcdp->chgBit(c+73,((1U & (vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                  >> 0x10U))));
        vcdp->chgBit(c+81,((3U != (3U & (vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                         >> 0xfU)))));
        vcdp->chgBit(c+89,((1U & (vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT___zz_base_q_data_1 
                                  >> 0xfU))));
    }
}

void VAxiLite4IQDemixer::traceChgThis__3(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->AxiLite4IQDemixer__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+105,(vlTOPp->AxiLite4IQDemixer__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+113,(vlTOPp->AxiLite4IQDemixer__DOT__writeJoinEvent_fire));
    }
}

void VAxiLite4IQDemixer::traceChgThis__4(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+121,(vlTOPp->AxiLite4IQDemixer__DOT__readRsp_data),32);
    }
}

void VAxiLite4IQDemixer::traceChgThis__5(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+129,(vlTOPp->AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+137,(vlTOPp->AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rData_prot),3);
    }
}

void VAxiLite4IQDemixer::traceChgThis__6(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+145,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_iq_valid_1));
        vcdp->chgBus(c+153,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_i_data),16);
        vcdp->chgBus(c+161,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__base_q_data),16);
        vcdp->chgBus(c+169,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_i),16);
        vcdp->chgBus(c+177,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_q),16);
        vcdp->chgBus(c+185,(vlTOPp->AxiLite4IQDemixer__DOT__clkCrossing_2__DOT__area_clkO_buf1),3);
        vcdp->chgBit(c+193,(vlTOPp->AxiLite4IQDemixer__DOT__clkCrossing_3__DOT__area_clkO_buf1));
        vcdp->chgBus(c+201,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__if_iq_data),32);
        vcdp->chgBus(c+209,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__carries_i_data),16);
        vcdp->chgBus(c+217,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__carries_q_data),16);
        vcdp->chgBit(c+225,(vlTOPp->AxiLite4IQDemixer__DOT__rfClockArea_demixer_module__DOT__iQDemixerCore_1__DOT__iq_en));
        vcdp->chgBus(c+233,(vlTOPp->AxiLite4IQDemixer__DOT__clkCrossing_2__DOT__area_clkO_buf0),3);
        vcdp->chgBit(c+241,(vlTOPp->AxiLite4IQDemixer__DOT__clkCrossing_3__DOT__area_clkO_buf0));
    }
}

void VAxiLite4IQDemixer::traceChgThis__7(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+249,((1U & (~ (IData)(vlTOPp->AxiLite4IQDemixer__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+257,(vlTOPp->AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+265,((1U & (~ (IData)(vlTOPp->AxiLite4IQDemixer__DOT__axil4Ctrl_ar_rValid)))));
    }
}

void VAxiLite4IQDemixer::traceChgThis__8(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+273,(vlTOPp->AxiLite4IQDemixer__DOT__clkCrossing_2__DOT__area_clkI_reg),3);
        vcdp->chgBit(c+281,(vlTOPp->AxiLite4IQDemixer__DOT__clkCrossing_3__DOT__area_clkI_reg));
    }
}

void VAxiLite4IQDemixer::traceChgThis__9(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+289,(vlTOPp->AxiLite4IQDemixer__DOT_____05Fshift_bias_driver),3);
        vcdp->chgBit(c+297,(vlTOPp->AxiLite4IQDemixer__DOT_____05Fshift_dir_driver));
    }
}

void VAxiLite4IQDemixer::traceChgThis__10(VAxiLite4IQDemixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQDemixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+305,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+313,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+321,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+329,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+337,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+345,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+353,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+361,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+369,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+377,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+385,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+393,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+401,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+409,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+417,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+425,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+433,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+441,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+449,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+457,(vlTOPp->if_iq_0_valid));
        vcdp->chgBus(c+465,(vlTOPp->if_iq_0_payload),32);
        vcdp->chgBit(c+473,(vlTOPp->carries_iq_valid));
        vcdp->chgBus(c+481,(vlTOPp->carries_iq_payload_cha_i),16);
        vcdp->chgBus(c+489,(vlTOPp->carries_iq_payload_cha_q),16);
        vcdp->chgBit(c+497,(vlTOPp->base_iq_0_valid));
        vcdp->chgBus(c+505,(vlTOPp->base_iq_0_payload_cha_i),16);
        vcdp->chgBus(c+513,(vlTOPp->base_iq_0_payload_cha_q),16);
        vcdp->chgBit(c+521,(vlTOPp->rf_clk));
        vcdp->chgBit(c+529,(vlTOPp->rf_resetn));
        vcdp->chgBit(c+537,(vlTOPp->clk));
        vcdp->chgBit(c+545,(vlTOPp->reset));
        vcdp->chgBit(c+553,(vlTOPp->carries_iq_valid));
        vcdp->chgBit(c+561,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                             & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
