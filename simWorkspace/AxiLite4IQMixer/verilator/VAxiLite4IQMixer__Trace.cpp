// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4IQMixer__Syms.h"


//======================

void VAxiLite4IQMixer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4IQMixer* t = (VAxiLite4IQMixer*)userthis;
    VAxiLite4IQMixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4IQMixer::traceChgThis(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 6U))))) {
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
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4IQMixer::traceChgThis__2(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+9,(vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+17,(vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire));
    }
}

void VAxiLite4IQMixer::traceChgThis__3(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+25,(vlTOPp->AxiLite4IQMixer__DOT__readRsp_data),32);
    }
}

void VAxiLite4IQMixer::traceChgThis__4(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+33,(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+41,(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_prot),3);
    }
}

void VAxiLite4IQMixer::traceChgThis__5(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+49,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_i),16);
        vcdp->chgBus(c+57,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_q),16);
        vcdp->chgBit(c+65,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1));
        vcdp->chgBus(c+73,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_data),32);
        vcdp->chgBus(c+81,(vlTOPp->AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_i),16);
        vcdp->chgBus(c+89,(vlTOPp->AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_q),16);
        vcdp->chgBus(c+97,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1),3);
        vcdp->chgBit(c+105,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf1));
        vcdp->chgBus(c+113,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1),2);
        vcdp->chgBit(c+121,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf1));
        vcdp->chgBus(c+129,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_i_data),16);
        vcdp->chgBus(c+137,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_q_data),16);
        vcdp->chgBus(c+145,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_i_data),16);
        vcdp->chgBus(c+153,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_q_data),16);
        vcdp->chgBus(c+161,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_i_data),32);
        vcdp->chgBus(c+169,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_q_data),32);
        vcdp->chgBit(c+177,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__iq_en));
        vcdp->chgBus(c+185,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf0),3);
        vcdp->chgBit(c+193,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf0));
        vcdp->chgBus(c+201,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf0),2);
        vcdp->chgBit(c+209,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf0));
    }
}

void VAxiLite4IQMixer::traceChgThis__6(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+217,((1U & (~ (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+225,(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+233,((1U & (~ (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid)))));
    }
}

void VAxiLite4IQMixer::traceChgThis__7(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+241,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkI_reg),3);
        vcdp->chgBit(c+249,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkI_reg));
        vcdp->chgBus(c+257,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkI_reg),2);
        vcdp->chgBit(c+265,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkI_reg));
    }
}

void VAxiLite4IQMixer::traceChgThis__8(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+273,(vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_bias_driver),3);
        vcdp->chgBit(c+281,(vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_dir_driver));
        vcdp->chgBus(c+289,(vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data),2);
        vcdp->chgBit(c+297,(vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data_1));
    }
}

void VAxiLite4IQMixer::traceChgThis__9(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vcdp->chgBit(c+457,(vlTOPp->base_iq_0_valid));
        vcdp->chgBus(c+465,(vlTOPp->base_iq_0_payload_cha_i),16);
        vcdp->chgBus(c+473,(vlTOPp->base_iq_0_payload_cha_q),16);
        vcdp->chgBit(c+481,(vlTOPp->carries_iq_valid));
        vcdp->chgBus(c+489,(vlTOPp->carries_iq_payload_cha_i),16);
        vcdp->chgBus(c+497,(vlTOPp->carries_iq_payload_cha_q),16);
        vcdp->chgBit(c+505,(vlTOPp->if_iq_0_valid));
        vcdp->chgBus(c+513,(vlTOPp->if_iq_0_payload),32);
        vcdp->chgBit(c+521,(vlTOPp->rf_clk));
        vcdp->chgBit(c+529,(vlTOPp->rf_resetn));
        vcdp->chgBit(c+537,(vlTOPp->clk));
        vcdp->chgBit(c+545,(vlTOPp->reset));
        vcdp->chgBit(c+553,(vlTOPp->carries_iq_valid));
        vcdp->chgBit(c+561,(vlTOPp->base_iq_0_valid));
        vcdp->chgBit(c+569,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                             & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
