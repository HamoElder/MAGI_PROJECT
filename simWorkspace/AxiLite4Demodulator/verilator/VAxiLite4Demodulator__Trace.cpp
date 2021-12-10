// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Demodulator__Syms.h"


//======================

void VAxiLite4Demodulator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Demodulator* t = (VAxiLite4Demodulator*)userthis;
    VAxiLite4Demodulator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4Demodulator::traceChgThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAxiLite4Demodulator::traceChgThis__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i),3);
        vcdp->chgBus(c+9,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q),3);
    }
}

void VAxiLite4Demodulator::traceChgThis__3(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17,(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+25,(vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+33,(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire));
        vcdp->chgBit(c+41,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid));
        vcdp->chgBit(c+49,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid));
    }
}

void VAxiLite4Demodulator::traceChgThis__4(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+57,(vlTOPp->AxiLite4Demodulator__DOT__readRsp_data),32);
    }
}

void VAxiLite4Demodulator::traceChgThis__5(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+65,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+73,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_prot),3);
    }
}

void VAxiLite4Demodulator::traceChgThis__6(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+81,(((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                             ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_valid)
                             : ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                 ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_valid)
                                 : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_valid)))));
        vcdp->chgBus(c+89,(((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                             ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i)
                             : ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                 ? (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i) 
                                     << 1U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q))
                                 : (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i) 
                                     << 2U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q))))),24);
        vcdp->chgBit(c+97,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1));
        vcdp->chgBus(c+105,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer),24);
        vcdp->chgBus(c+113,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1),2);
        vcdp->chgBit(c+121,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf1));
        vcdp->chgBus(c+129,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1),5);
        vcdp->chgBus(c+137,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf1),5);
        vcdp->chgBit(c+145,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_valid));
        vcdp->chgBus(c+153,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i),24);
        vcdp->chgBit(c+161,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_valid));
        vcdp->chgBus(c+169,((((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i) 
                              << 1U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q))),24);
        vcdp->chgBit(c+177,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_valid));
        vcdp->chgBus(c+185,((((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i) 
                              << 2U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q))),24);
        vcdp->chgBit(c+193,((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+201,((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))));
        vcdp->chgBit(c+209,((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))));
        vcdp->chgBus(c+217,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_data_i),12);
        vcdp->chgBit(c+225,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid_i));
        vcdp->chgBit(c+233,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_data_i))));
        vcdp->chgBit(c+241,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__compTable_i));
        vcdp->chgBit(c+249,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid));
        vcdp->chgBit(c+257,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i));
        vcdp->chgBus(c+265,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_i),12);
        vcdp->chgBit(c+273,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_i));
        vcdp->chgBus(c+281,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_q),12);
        vcdp->chgBit(c+289,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_q));
        vcdp->chgBit(c+297,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_i))));
        vcdp->chgBit(c+305,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_q))));
        vcdp->chgBit(c+313,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__compTable_i));
        vcdp->chgBit(c+321,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__codeTable_q));
        vcdp->chgBit(c+329,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid));
        vcdp->chgBit(c+337,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i));
        vcdp->chgBit(c+345,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q));
        vcdp->chgBus(c+353,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i),12);
        vcdp->chgBit(c+361,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_i));
        vcdp->chgBus(c+369,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q),12);
        vcdp->chgBit(c+377,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_q));
        vcdp->chgBus(c+385,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__compTable_i),3);
        vcdp->chgBus(c+393,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__codeTable_q),3);
        vcdp->chgBit(c+401,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid));
        vcdp->chgBus(c+409,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i),2);
        vcdp->chgBus(c+417,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q),2);
        vcdp->chgBus(c+425,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt),5);
        vcdp->chgBus(c+433,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer),24);
        vcdp->chgBit(c+441,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1));
        vcdp->chgBit(c+449,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf1)))));
        vcdp->chgBus(c+457,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf0),2);
        vcdp->chgBit(c+465,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf0));
        vcdp->chgBus(c+473,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf0),5);
        vcdp->chgBus(c+481,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf0),5);
    }
}

void VAxiLite4Demodulator::traceChgThis__7(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+489,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+497,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+505,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid)))));
    }
}

void VAxiLite4Demodulator::traceChgThis__8(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+513,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkI_reg),2);
        vcdp->chgBit(c+521,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkI_reg));
        vcdp->chgBus(c+529,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkI_reg),5);
        vcdp->chgBus(c+537,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkI_reg),5);
    }
}

void VAxiLite4Demodulator::traceChgThis__9(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+545,(vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select),2);
        vcdp->chgBit(c+553,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver));
        vcdp->chgBus(c+561,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver),5);
        vcdp->chgBus(c+569,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver),5);
    }
}

void VAxiLite4Demodulator::traceChgThis__10(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+577,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+585,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+593,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+601,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+609,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+617,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+625,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+633,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+641,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+649,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+657,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+665,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+673,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+681,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+689,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+697,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+705,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+713,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+721,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+729,(vlTOPp->mod_iq_valid));
        vcdp->chgBus(c+737,(vlTOPp->mod_iq_payload_cha_i),12);
        vcdp->chgBus(c+745,(vlTOPp->mod_iq_payload_cha_q),12);
        vcdp->chgBit(c+753,(vlTOPp->base_data_valid));
        vcdp->chgBus(c+761,(vlTOPp->base_data_payload),24);
        vcdp->chgBit(c+769,(vlTOPp->rf_clk));
        vcdp->chgBit(c+777,(vlTOPp->rf_resetn));
        vcdp->chgBit(c+785,(vlTOPp->clk));
        vcdp->chgBit(c+793,(vlTOPp->reset));
        vcdp->chgBit(c+801,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                             & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->chgBit(c+809,(((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1)) 
                             & (IData)(vlTOPp->mod_iq_valid))));
        vcdp->chgBus(c+817,(((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                              ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),12);
        vcdp->chgBus(c+825,(((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                              ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),12);
        vcdp->chgBus(c+833,(((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                              ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),12);
        vcdp->chgBus(c+841,(((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                              ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),12);
        vcdp->chgBus(c+849,(((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                              ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),12);
        vcdp->chgBus(c+857,(((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                              ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),12);
    }
}
