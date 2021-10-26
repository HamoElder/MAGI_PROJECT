// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4CyclicPrefix__Syms.h"


//======================

void VAxiLite4CyclicPrefix::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4CyclicPrefix* t = (VAxiLite4CyclicPrefix*)userthis;
    VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VAxiLite4CyclicPrefix::traceChgThis(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 6U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x40U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4CyclicPrefix::traceChgThis__2(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full)))));
        vcdp->chgBit(c+9,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_pop_valid));
        vcdp->chgBus(c+17,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy),7);
        vcdp->chgBus(c+25,(((((~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch)) 
                             << 6U) | (0x3fU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value))))),7);
        vcdp->chgBit(c+33,((0U != (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy))));
        vcdp->chgBit(c+41,(((0x7fU & (((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf1) 
                                       - (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf1)) 
                                      - (IData)(1U))) 
                            <= (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo_io_occupancy))));
        vcdp->chgBit(c+49,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+57,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext),6);
        vcdp->chgBit(c+65,(((0x3fU == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value)) 
                            & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+73,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+81,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popping));
        vcdp->chgBit(c+89,(((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_ptrMatch) 
                            & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+97,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full));
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__3(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+105,(((~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)) 
                             & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0) 
                                & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core_result_valid)))));
        vcdp->chgBit(c+113,(((0x3fU == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+121,(((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popping))));
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__4(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+129,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core_result_valid));
        vcdp->chgBit(c+137,(vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_valid));
        vcdp->chgBit(c+145,(vlTOPp->AxiLite4CyclicPrefix__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->chgBit(c+153,(vlTOPp->AxiLite4CyclicPrefix__DOT__writeJoinEvent_fire));
        vcdp->chgBit(c+161,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+169,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext),6);
        vcdp->chgBit(c+177,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushing));
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__5(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+185,(vlTOPp->AxiLite4CyclicPrefix__DOT__readRsp_data),32);
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__6(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+193,(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->chgBus(c+201,(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rData_prot),3);
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__7(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+209,((1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->chgBit(c+217,(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid));
        vcdp->chgBit(c+225,((1U & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__axil4Ctrl_ar_rValid)))));
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__8(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+233,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf1),5);
        vcdp->chgBus(c+241,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf1),7);
        vcdp->chgBit(c+249,((1U & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+257,((0xffffU & (IData)((vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                >> 1U)))),16);
        vcdp->chgBus(c+265,((0xffffU & (IData)((vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                >> 0x11U)))),16);
        vcdp->chgBit(c+273,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en));
        vcdp->chgBit(c+281,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__fifo_pop_en));
        vcdp->chgBus(c+289,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state),2);
        vcdp->chgQuad(c+297,(((2U & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state))
                               ? ((1U & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state))
                                   ? VL_ULL(0x44415441202020)
                                   : VL_ULL(0x43502020202020))
                               : ((1U & (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_state))
                                   ? VL_ULL(0x43415054555245)
                                   : VL_ULL(0x49444c45202020)))),56);
        vcdp->chgBus(c+313,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value),6);
        vcdp->chgBit(c+321,((0x3fU == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+329,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value),6);
        vcdp->chgBit(c+337,((0x3fU == (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+345,(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+353,((0x3fU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_popPtr_value)))),6);
        vcdp->chgBus(c+361,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkO_buf0),5);
        vcdp->chgBus(c+369,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkO_buf0),7);
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__9(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+377,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_2__DOT__area_clkI_reg),5);
        vcdp->chgBus(c+385,(vlTOPp->AxiLite4CyclicPrefix__DOT__clkCrossing_3__DOT__area_clkI_reg),7);
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__10(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+393,(vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fcp_len_driver),5);
        vcdp->chgBus(c+401,(vlTOPp->AxiLite4CyclicPrefix__DOT_____05Fdata_len_driver),7);
    }
}

void VAxiLite4CyclicPrefix::traceChgThis__11(VAxiLite4CyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4CyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+409,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->chgBit(c+417,(vlTOPp->axil4Ctrl_awready));
        vcdp->chgBus(c+425,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->chgBus(c+433,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->chgBit(c+441,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->chgBit(c+449,(vlTOPp->axil4Ctrl_wready));
        vcdp->chgBus(c+457,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->chgBus(c+465,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->chgBit(c+473,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->chgBit(c+481,(vlTOPp->axil4Ctrl_bready));
        vcdp->chgBus(c+489,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->chgBit(c+497,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->chgBit(c+505,(vlTOPp->axil4Ctrl_arready));
        vcdp->chgBus(c+513,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->chgBus(c+521,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->chgBit(c+529,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->chgBit(c+537,(vlTOPp->axil4Ctrl_rready));
        vcdp->chgBus(c+545,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->chgBus(c+553,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->chgBit(c+561,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+569,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+577,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+585,(vlTOPp->raw_data_payload_fragment_cha_i),16);
        vcdp->chgBus(c+593,(vlTOPp->raw_data_payload_fragment_cha_q),16);
        vcdp->chgBit(c+601,(vlTOPp->result_valid));
        vcdp->chgBit(c+609,(vlTOPp->result_payload_last));
        vcdp->chgBus(c+617,(vlTOPp->result_payload_fragment_cha_i),16);
        vcdp->chgBus(c+625,(vlTOPp->result_payload_fragment_cha_q),16);
        vcdp->chgBit(c+633,(vlTOPp->rf_clk));
        vcdp->chgBit(c+641,(vlTOPp->rf_resetn));
        vcdp->chgBit(c+649,(vlTOPp->clk));
        vcdp->chgBit(c+657,(vlTOPp->reset));
        vcdp->chgBus(c+665,((0xffffU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)
                                         ? (IData)(vlTOPp->raw_data_payload_fragment_cha_i)
                                         : (IData)(
                                                   (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                    >> 1U))))),16);
        vcdp->chgBus(c+673,((0xffffU & ((IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__cp_en)
                                         ? (IData)(vlTOPp->raw_data_payload_fragment_cha_q)
                                         : (IData)(
                                                   (vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT___zz_logic_ram_port0 
                                                    >> 0x11U))))),16);
        vcdp->chgBit(c+681,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                             & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->chgBit(c+689,(((IData)(vlTOPp->raw_data_valid) 
                             & (~ (IData)(vlTOPp->AxiLite4CyclicPrefix__DOT__rfClockArea_cp_core__DOT__raw_dataFifo__DOT__logic_full)))));
    }
}
