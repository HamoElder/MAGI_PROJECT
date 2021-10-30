// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4DDS__Syms.h"


//======================

void VAxiLite4DDS::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4DDS* t = (VAxiLite4DDS*)userthis;
    VAxiLite4DDS__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4DDS::traceChgThis(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VAxiLite4DDS::traceChgThis__2(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__module_en));
        vcdp->chgBit(c+9,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__module_en));
    }
}

void VAxiLite4DDS::traceChgThis__3(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17,(vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+25,(vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+33,(vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire));
    }
}

void VAxiLite4DDS::traceChgThis__4(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+41,(vlTOPp->AxiLite4DDS__DOT__readRsp_data),32);
    }
}

void VAxiLite4DDS::traceChgThis__5(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+49,(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+57,(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_prot),3);
    }
}

void VAxiLite4DDS::traceChgThis__6(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1));
        vcdp->chgBit(c+73,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf));
        vcdp->chgBus(c+81,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_mem_port1),24);
        vcdp->chgBus(c+89,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_payload),10);
        vcdp->chgBit(c+97,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf1));
        vcdp->chgBus(c+105,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf1),10);
        vcdp->chgBus(c+113,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf1),24);
        vcdp->chgBus(c+121,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf1),10);
        vcdp->chgBus(c+129,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf1),10);
        vcdp->chgBit(c+137,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf1));
        vcdp->chgBus(c+145,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1),10);
        vcdp->chgBit(c+153,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf));
        vcdp->chgBus(c+161,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_mem_port1),24);
        vcdp->chgBus(c+169,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_payload),10);
        vcdp->chgBit(c+177,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf1));
        vcdp->chgBus(c+185,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf1),10);
        vcdp->chgBus(c+193,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf1),24);
        vcdp->chgBus(c+201,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf1),10);
        vcdp->chgBus(c+209,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf1),10);
        vcdp->chgBit(c+217,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf1));
        vcdp->chgBus(c+225,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1),10);
        vcdp->chgBit(c+233,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf0));
        vcdp->chgBus(c+241,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor),10);
        vcdp->chgBit(c+249,(((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1) 
                             <= (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor))));
        vcdp->chgBit(c+257,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf0));
        vcdp->chgBus(c+265,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf0),10);
        vcdp->chgBus(c+273,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf0),24);
        vcdp->chgBus(c+281,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf0),10);
        vcdp->chgBus(c+289,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf0),10);
        vcdp->chgBit(c+297,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf0));
        vcdp->chgBus(c+305,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf0),10);
        vcdp->chgBus(c+313,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor),10);
        vcdp->chgBit(c+321,(((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1) 
                             <= (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor))));
        vcdp->chgBit(c+329,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf0));
        vcdp->chgBus(c+337,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf0),10);
        vcdp->chgBus(c+345,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf0),24);
        vcdp->chgBus(c+353,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf0),10);
        vcdp->chgBus(c+361,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf0),10);
        vcdp->chgBit(c+369,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf0));
        vcdp->chgBus(c+377,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf0),10);
    }
}

void VAxiLite4DDS::traceChgThis__7(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+385,((1U & (~ (IData)(vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+393,(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+401,((1U & (~ (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid)))));
    }
}

void VAxiLite4DDS::traceChgThis__8(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+409,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkI_reg));
        vcdp->chgBit(c+417,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkI_reg));
        vcdp->chgBus(c+425,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkI_reg),10);
        vcdp->chgBus(c+433,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkI_reg),24);
        vcdp->chgBus(c+441,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkI_reg),10);
        vcdp->chgBus(c+449,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkI_reg),10);
        vcdp->chgBit(c+457,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkI_reg));
        vcdp->chgBus(c+465,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkI_reg),10);
        vcdp->chgBit(c+473,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkI_reg));
        vcdp->chgBus(c+481,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkI_reg),10);
        vcdp->chgBus(c+489,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkI_reg),24);
        vcdp->chgBus(c+497,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkI_reg),10);
        vcdp->chgBus(c+505,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkI_reg),10);
        vcdp->chgBit(c+513,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkI_reg));
        vcdp->chgBus(c+521,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkI_reg),10);
    }
}

void VAxiLite4DDS::traceChgThis__9(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+529,(vlTOPp->AxiLite4DDS__DOT__global_en_driver));
        vcdp->chgBit(c+537,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn));
        vcdp->chgBus(c+545,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_1),10);
        vcdp->chgBus(c+553,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_2),24);
        vcdp->chgBus(c+561,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_2),10);
        vcdp->chgBus(c+569,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_3),10);
        vcdp->chgBit(c+577,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data));
        vcdp->chgBus(c+585,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_1),10);
        vcdp->chgBit(c+593,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_3));
        vcdp->chgBus(c+601,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_4),10);
        vcdp->chgBus(c+609,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_5),24);
        vcdp->chgBus(c+617,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_6),10);
        vcdp->chgBus(c+625,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_7),10);
        vcdp->chgBit(c+633,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_4));
        vcdp->chgBus(c+641,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_5),10);
    }
}

void VAxiLite4DDS::traceChgThis__10(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+649,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+657,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+665,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+673,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+681,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+689,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+697,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+705,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+713,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+721,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+729,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+737,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+745,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+753,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+761,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+769,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+777,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+785,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+793,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+801,(vlTOPp->data_0_valid));
        vcdp->chgBus(c+809,(vlTOPp->data_0_payload),24);
        vcdp->chgBit(c+817,(vlTOPp->data_1_valid));
        vcdp->chgBus(c+825,(vlTOPp->data_1_payload),24);
        vcdp->chgBit(c+833,(vlTOPp->phase_0_valid));
        vcdp->chgBus(c+841,(vlTOPp->phase_0_payload),10);
        vcdp->chgBit(c+849,(vlTOPp->phase_1_valid));
        vcdp->chgBus(c+857,(vlTOPp->phase_1_payload),10);
        vcdp->chgBit(c+865,(vlTOPp->rf_clk));
        vcdp->chgBit(c+873,(vlTOPp->rf_resetn));
        vcdp->chgBit(c+881,(vlTOPp->clk));
        vcdp->chgBit(c+889,(vlTOPp->reset));
        vcdp->chgBit(c+897,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                             & (IData)(vlTOPp->axil4Ctrl_rready))));
    }
}
