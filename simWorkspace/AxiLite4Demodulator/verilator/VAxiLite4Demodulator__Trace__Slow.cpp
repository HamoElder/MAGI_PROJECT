// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Demodulator__Syms.h"


//======================

void VAxiLite4Demodulator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxiLite4Demodulator::traceInit, &VAxiLite4Demodulator::traceFull, &VAxiLite4Demodulator::traceChg, this);
}
void VAxiLite4Demodulator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4Demodulator* t = (VAxiLite4Demodulator*)userthis;
    VAxiLite4Demodulator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4Demodulator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Demodulator* t = (VAxiLite4Demodulator*)userthis;
    VAxiLite4Demodulator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxiLite4Demodulator::traceInitThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4Demodulator::traceFullThis(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Demodulator::traceInitThis__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+577,"axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+585,"axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+593,"axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+601,"axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+609,"axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+617,"axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+625,"axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+633,"axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+641,"axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+649,"axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+657,"axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+665,"axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+673,"axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+681,"axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+689,"axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+697,"axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+705,"axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+713,"axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+721,"axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+729,"mod_iq_valid", false,-1);
        vcdp->declBus(c+737,"mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+745,"mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+753,"base_data_valid", false,-1);
        vcdp->declBus(c+761,"base_data_payload", false,-1, 23,0);
        vcdp->declBit(c+769,"rf_clk", false,-1);
        vcdp->declBit(c+777,"rf_resetn", false,-1);
        vcdp->declBit(c+785,"clk", false,-1);
        vcdp->declBit(c+793,"reset", false,-1);
        vcdp->declBit(c+577,"AxiLite4Demodulator axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+585,"AxiLite4Demodulator axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+593,"AxiLite4Demodulator axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+601,"AxiLite4Demodulator axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+609,"AxiLite4Demodulator axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+617,"AxiLite4Demodulator axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+625,"AxiLite4Demodulator axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+633,"AxiLite4Demodulator axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+641,"AxiLite4Demodulator axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+649,"AxiLite4Demodulator axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+657,"AxiLite4Demodulator axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+665,"AxiLite4Demodulator axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+673,"AxiLite4Demodulator axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+681,"AxiLite4Demodulator axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+689,"AxiLite4Demodulator axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+697,"AxiLite4Demodulator axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+705,"AxiLite4Demodulator axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+713,"AxiLite4Demodulator axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+721,"AxiLite4Demodulator axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+729,"AxiLite4Demodulator mod_iq_valid", false,-1);
        vcdp->declBus(c+737,"AxiLite4Demodulator mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+745,"AxiLite4Demodulator mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+753,"AxiLite4Demodulator base_data_valid", false,-1);
        vcdp->declBus(c+761,"AxiLite4Demodulator base_data_payload", false,-1, 23,0);
        vcdp->declBit(c+769,"AxiLite4Demodulator rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator rf_resetn", false,-1);
        vcdp->declBit(c+785,"AxiLite4Demodulator clk", false,-1);
        vcdp->declBit(c+793,"AxiLite4Demodulator reset", false,-1);
        vcdp->declBit(c+81,"AxiLite4Demodulator rfClockArea_demod_rtl_data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+89,"AxiLite4Demodulator rfClockArea_demod_rtl_data_flow_unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+97,"AxiLite4Demodulator rfClockArea_data_combination_base_data_valid", false,-1);
        vcdp->declBus(c+105,"AxiLite4Demodulator rfClockArea_data_combination_base_data_payload", false,-1, 23,0);
        vcdp->declBus(c+113,"AxiLite4Demodulator clkCrossing_4_dataOut", false,-1, 1,0);
        vcdp->declBit(c+121,"AxiLite4Demodulator clkCrossing_5_dataOut", false,-1);
        vcdp->declBus(c+129,"AxiLite4Demodulator clkCrossing_6_dataOut", false,-1, 4,0);
        vcdp->declBus(c+137,"AxiLite4Demodulator clkCrossing_7_dataOut", false,-1, 4,0);
        vcdp->declBit(c+865,"AxiLite4Demodulator readHaltRequest", false,-1);
        vcdp->declBit(c+865,"AxiLite4Demodulator writeHaltRequest", false,-1);
        vcdp->declBit(c+17,"AxiLite4Demodulator writeJoinEvent_valid", false,-1);
        vcdp->declBit(c+25,"AxiLite4Demodulator writeJoinEvent_ready", false,-1);
        vcdp->declBit(c+33,"AxiLite4Demodulator writeJoinEvent_fire", false,-1);
        vcdp->declBus(c+873,"AxiLite4Demodulator writeRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+17,"AxiLite4Demodulator writeJoinEvent_translated_valid", false,-1);
        vcdp->declBit(c+25,"AxiLite4Demodulator writeJoinEvent_translated_ready", false,-1);
        vcdp->declBus(c+873,"AxiLite4Demodulator writeJoinEvent_translated_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+489,"AxiLite4Demodulator when_Stream_l342", false,-1);
        vcdp->declBit(c+497,"AxiLite4Demodulator axil4Ctrl_ar_readDataStage_valid", false,-1);
        vcdp->declBit(c+705,"AxiLite4Demodulator axil4Ctrl_ar_readDataStage_ready", false,-1);
        vcdp->declBus(c+65,"AxiLite4Demodulator axil4Ctrl_ar_readDataStage_payload_addr", false,-1, 7,0);
        vcdp->declBus(c+73,"AxiLite4Demodulator axil4Ctrl_ar_readDataStage_payload_prot", false,-1, 2,0);
        vcdp->declBit(c+497,"AxiLite4Demodulator axil4Ctrl_ar_rValid", false,-1);
        vcdp->declBus(c+65,"AxiLite4Demodulator axil4Ctrl_ar_rData_addr", false,-1, 7,0);
        vcdp->declBus(c+73,"AxiLite4Demodulator axil4Ctrl_ar_rData_prot", false,-1, 2,0);
        vcdp->declBit(c+505,"AxiLite4Demodulator when_Stream_l342_1", false,-1);
        vcdp->declBus(c+57,"AxiLite4Demodulator readRsp_data", false,-1, 31,0);
        vcdp->declBus(c+873,"AxiLite4Demodulator readRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+33,"AxiLite4Demodulator writeOccur", false,-1);
        vcdp->declBit(c+801,"AxiLite4Demodulator readOccur", false,-1);
        vcdp->declBus(c+545,"AxiLite4Demodulator demod_rtl_bridge_select", false,-1, 1,0);
        vcdp->declBit(c+553,"AxiLite4Demodulator data_comb_bridge_enable", false,-1);
        vcdp->declBus(c+561,"AxiLite4Demodulator data_comb_bridge_cnt_step", false,-1, 4,0);
        vcdp->declBus(c+569,"AxiLite4Demodulator data_comb_bridge_cnt_limit", false,-1, 4,0);
        vcdp->declBit(c+553,"AxiLite4Demodulator data_comb_bridge_enable_driver", false,-1);
        vcdp->declBus(c+561,"AxiLite4Demodulator data_comb_bridge_cnt_step_driver", false,-1, 4,0);
        vcdp->declBus(c+569,"AxiLite4Demodulator data_comb_bridge_cnt_limit_driver", false,-1, 4,0);
        vcdp->declBus(c+113,"AxiLite4Demodulator rfClockArea_demod_rtl select_1", false,-1, 1,0);
        vcdp->declBit(c+81,"AxiLite4Demodulator rfClockArea_demod_rtl data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+89,"AxiLite4Demodulator rfClockArea_demod_rtl data_flow_unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+729,"AxiLite4Demodulator rfClockArea_demod_rtl data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+737,"AxiLite4Demodulator rfClockArea_demod_rtl data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+745,"AxiLite4Demodulator rfClockArea_demod_rtl data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+769,"AxiLite4Demodulator rfClockArea_demod_rtl rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator rfClockArea_demod_rtl rf_resetn", false,-1);
        vcdp->declBit(c+809,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_0_valid", false,-1);
        vcdp->declBus(c+817,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+825,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+41,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_1_valid", false,-1);
        vcdp->declBus(c+833,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+841,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+49,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_2_valid", false,-1);
        vcdp->declBus(c+849,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_2_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+857,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1_outputs_2_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+145,"AxiLite4Demodulator rfClockArea_demod_rtl demod_unit_data_valid", false,-1);
        vcdp->declBus(c+153,"AxiLite4Demodulator rfClockArea_demod_rtl demod_unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+161,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1_unit_data_valid", false,-1);
        vcdp->declBus(c+169,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1_unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+177,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2_unit_data_valid", false,-1);
        vcdp->declBus(c+185,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2_unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+81,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1_output_valid", false,-1);
        vcdp->declBus(c+89,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1_output_payload", false,-1, 23,0);
        vcdp->declBit(c+729,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 input_valid", false,-1);
        vcdp->declBus(c+737,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 input_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+745,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 input_payload_cha_q", false,-1, 11,0);
        vcdp->declBus(c+113,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 select_1", false,-1, 1,0);
        vcdp->declBit(c+809,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_0_valid", false,-1);
        vcdp->declBus(c+817,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+825,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+41,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_1_valid", false,-1);
        vcdp->declBus(c+833,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+841,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+49,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_2_valid", false,-1);
        vcdp->declBus(c+849,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_2_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+857,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 outputs_2_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+193,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 when_FlowDeMux_l15", false,-1);
        vcdp->declBit(c+201,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 when_FlowDeMux_l15_1", false,-1);
        vcdp->declBit(c+209,"AxiLite4Demodulator rfClockArea_demod_rtl flowDeMux_1 when_FlowDeMux_l15_2", false,-1);
        vcdp->declBit(c+145,"AxiLite4Demodulator rfClockArea_demod_rtl demod unit_data_valid", false,-1);
        vcdp->declBus(c+153,"AxiLite4Demodulator rfClockArea_demod_rtl demod unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+809,"AxiLite4Demodulator rfClockArea_demod_rtl demod mod_iq_valid", false,-1);
        vcdp->declBus(c+817,"AxiLite4Demodulator rfClockArea_demod_rtl demod mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+825,"AxiLite4Demodulator rfClockArea_demod_rtl demod mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+769,"AxiLite4Demodulator rfClockArea_demod_rtl demod rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator rfClockArea_demod_rtl demod rf_resetn", false,-1);
        vcdp->declBus(c+217,"AxiLite4Demodulator rfClockArea_demod_rtl demod demod_data_i", false,-1, 11,0);
        vcdp->declBit(c+225,"AxiLite4Demodulator rfClockArea_demod_rtl demod demod_valid_i", false,-1);
        vcdp->declBus(c+233,"AxiLite4Demodulator rfClockArea_demod_rtl demod comp_cmp_i", false,-1, 0,0);
        vcdp->declBus(c+241,"AxiLite4Demodulator rfClockArea_demod_rtl demod compTable_i", false,-1, 0,0);
        vcdp->declBit(c+249,"AxiLite4Demodulator rfClockArea_demod_rtl demod demod_valid", false,-1);
        vcdp->declBus(c+257,"AxiLite4Demodulator rfClockArea_demod_rtl demod unit_data_i", false,-1, 0,0);
        vcdp->declBit(c+145,"AxiLite4Demodulator rfClockArea_demod_rtl demod unit_valid", false,-1);
        vcdp->declBit(c+161,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 unit_data_valid", false,-1);
        vcdp->declBus(c+169,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+41,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 mod_iq_valid", false,-1);
        vcdp->declBus(c+833,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+841,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+769,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 rf_resetn", false,-1);
        vcdp->declBus(c+265,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 demod_data_i", false,-1, 11,0);
        vcdp->declBit(c+273,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 demod_valid_i", false,-1);
        vcdp->declBus(c+281,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 demod_data_q", false,-1, 11,0);
        vcdp->declBit(c+289,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 demod_valid_q", false,-1);
        vcdp->declBus(c+297,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 comp_cmp_i", false,-1, 0,0);
        vcdp->declBus(c+305,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 comp_cmp_q", false,-1, 0,0);
        vcdp->declBus(c+313,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 compTable_i", false,-1, 0,0);
        vcdp->declBus(c+321,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 codeTable_q", false,-1, 0,0);
        vcdp->declBit(c+329,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 demod_valid", false,-1);
        vcdp->declBus(c+337,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 unit_data_i", false,-1, 0,0);
        vcdp->declBus(c+345,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 unit_data_q", false,-1, 0,0);
        vcdp->declBit(c+161,"AxiLite4Demodulator rfClockArea_demod_rtl demod_1 unit_valid", false,-1);
        vcdp->declBit(c+177,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 unit_data_valid", false,-1);
        vcdp->declBus(c+185,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+49,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 mod_iq_valid", false,-1);
        vcdp->declBus(c+849,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+857,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+769,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 rf_resetn", false,-1);
        vcdp->declBus(c+353,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 demod_data_i", false,-1, 11,0);
        vcdp->declBit(c+361,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 demod_valid_i", false,-1);
        vcdp->declBus(c+369,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 demod_data_q", false,-1, 11,0);
        vcdp->declBit(c+377,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 demod_valid_q", false,-1);
        vcdp->declBus(c+1,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 comp_cmp_i", false,-1, 2,0);
        vcdp->declBus(c+9,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 comp_cmp_q", false,-1, 2,0);
        vcdp->declBus(c+385,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 compTable_i", false,-1, 2,0);
        vcdp->declBus(c+393,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 codeTable_q", false,-1, 2,0);
        vcdp->declBit(c+401,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 demod_valid", false,-1);
        vcdp->declBus(c+409,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 unit_data_i", false,-1, 1,0);
        vcdp->declBus(c+417,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 unit_data_q", false,-1, 1,0);
        vcdp->declBit(c+177,"AxiLite4Demodulator rfClockArea_demod_rtl demod_2 unit_valid", false,-1);
        vcdp->declBit(c+145,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 inputs_0_valid", false,-1);
        vcdp->declBus(c+153,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 inputs_0_payload", false,-1, 23,0);
        vcdp->declBit(c+161,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 inputs_1_valid", false,-1);
        vcdp->declBus(c+169,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 inputs_1_payload", false,-1, 23,0);
        vcdp->declBit(c+177,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 inputs_2_valid", false,-1);
        vcdp->declBus(c+185,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 inputs_2_payload", false,-1, 23,0);
        vcdp->declBus(c+113,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 select_1", false,-1, 1,0);
        vcdp->declBit(c+81,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 output_valid", false,-1);
        vcdp->declBus(c+89,"AxiLite4Demodulator rfClockArea_demod_rtl flowMux_1 output_payload", false,-1, 23,0);
        vcdp->declBit(c+81,"AxiLite4Demodulator rfClockArea_data_combination unit_data_valid", false,-1);
        vcdp->declBus(c+89,"AxiLite4Demodulator rfClockArea_data_combination unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+97,"AxiLite4Demodulator rfClockArea_data_combination base_data_valid", false,-1);
        vcdp->declBus(c+105,"AxiLite4Demodulator rfClockArea_data_combination base_data_payload", false,-1, 23,0);
        vcdp->declBit(c+121,"AxiLite4Demodulator rfClockArea_data_combination enable", false,-1);
        vcdp->declBus(c+129,"AxiLite4Demodulator rfClockArea_data_combination cnt_step", false,-1, 4,0);
        vcdp->declBus(c+137,"AxiLite4Demodulator rfClockArea_data_combination cnt_limit", false,-1, 4,0);
        vcdp->declBit(c+769,"AxiLite4Demodulator rfClockArea_data_combination rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator rfClockArea_data_combination rf_resetn", false,-1);
        vcdp->declBus(c+425,"AxiLite4Demodulator rfClockArea_data_combination base_cnt", false,-1, 4,0);
        vcdp->declBus(c+433,"AxiLite4Demodulator rfClockArea_data_combination unit_data_buffer", false,-1, 23,0);
        vcdp->declBit(c+441,"AxiLite4Demodulator rfClockArea_data_combination unit_data_valid_1", false,-1);
        vcdp->declBus(c+105,"AxiLite4Demodulator rfClockArea_data_combination base_data_buffer", false,-1, 23,0);
        vcdp->declBit(c+97,"AxiLite4Demodulator rfClockArea_data_combination base_data_valid_1", false,-1);
        vcdp->declBit(c+449,"AxiLite4Demodulator rfClockArea_data_combination when_dataCombination_l40", false,-1);
        vcdp->declBus(c+545,"AxiLite4Demodulator clkCrossing_4 dataIn", false,-1, 1,0);
        vcdp->declBus(c+113,"AxiLite4Demodulator clkCrossing_4 dataOut", false,-1, 1,0);
        vcdp->declBit(c+785,"AxiLite4Demodulator clkCrossing_4 clk", false,-1);
        vcdp->declBit(c+793,"AxiLite4Demodulator clkCrossing_4 reset", false,-1);
        vcdp->declBit(c+769,"AxiLite4Demodulator clkCrossing_4 rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator clkCrossing_4 rf_resetn", false,-1);
        vcdp->declBus(c+513,"AxiLite4Demodulator clkCrossing_4 area_clkI_reg", false,-1, 1,0);
        vcdp->declBus(c+457,"AxiLite4Demodulator clkCrossing_4 area_clkO_buf0", false,-1, 1,0);
        vcdp->declBus(c+113,"AxiLite4Demodulator clkCrossing_4 area_clkO_buf1", false,-1, 1,0);
        vcdp->declBit(c+553,"AxiLite4Demodulator clkCrossing_5 dataIn", false,-1);
        vcdp->declBit(c+121,"AxiLite4Demodulator clkCrossing_5 dataOut", false,-1);
        vcdp->declBit(c+785,"AxiLite4Demodulator clkCrossing_5 clk", false,-1);
        vcdp->declBit(c+793,"AxiLite4Demodulator clkCrossing_5 reset", false,-1);
        vcdp->declBit(c+769,"AxiLite4Demodulator clkCrossing_5 rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator clkCrossing_5 rf_resetn", false,-1);
        vcdp->declBit(c+521,"AxiLite4Demodulator clkCrossing_5 area_clkI_reg", false,-1);
        vcdp->declBit(c+465,"AxiLite4Demodulator clkCrossing_5 area_clkO_buf0", false,-1);
        vcdp->declBit(c+121,"AxiLite4Demodulator clkCrossing_5 area_clkO_buf1", false,-1);
        vcdp->declBus(c+561,"AxiLite4Demodulator clkCrossing_6 dataIn", false,-1, 4,0);
        vcdp->declBus(c+129,"AxiLite4Demodulator clkCrossing_6 dataOut", false,-1, 4,0);
        vcdp->declBit(c+785,"AxiLite4Demodulator clkCrossing_6 clk", false,-1);
        vcdp->declBit(c+793,"AxiLite4Demodulator clkCrossing_6 reset", false,-1);
        vcdp->declBit(c+769,"AxiLite4Demodulator clkCrossing_6 rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator clkCrossing_6 rf_resetn", false,-1);
        vcdp->declBus(c+529,"AxiLite4Demodulator clkCrossing_6 area_clkI_reg", false,-1, 4,0);
        vcdp->declBus(c+473,"AxiLite4Demodulator clkCrossing_6 area_clkO_buf0", false,-1, 4,0);
        vcdp->declBus(c+129,"AxiLite4Demodulator clkCrossing_6 area_clkO_buf1", false,-1, 4,0);
        vcdp->declBus(c+569,"AxiLite4Demodulator clkCrossing_7 dataIn", false,-1, 4,0);
        vcdp->declBus(c+137,"AxiLite4Demodulator clkCrossing_7 dataOut", false,-1, 4,0);
        vcdp->declBit(c+785,"AxiLite4Demodulator clkCrossing_7 clk", false,-1);
        vcdp->declBit(c+793,"AxiLite4Demodulator clkCrossing_7 reset", false,-1);
        vcdp->declBit(c+769,"AxiLite4Demodulator clkCrossing_7 rf_clk", false,-1);
        vcdp->declBit(c+777,"AxiLite4Demodulator clkCrossing_7 rf_resetn", false,-1);
        vcdp->declBus(c+537,"AxiLite4Demodulator clkCrossing_7 area_clkI_reg", false,-1, 4,0);
        vcdp->declBus(c+481,"AxiLite4Demodulator clkCrossing_7 area_clkO_buf0", false,-1, 4,0);
        vcdp->declBus(c+137,"AxiLite4Demodulator clkCrossing_7 area_clkO_buf1", false,-1, 4,0);
    }
}

void VAxiLite4Demodulator::traceFullThis__1(VAxiLite4Demodulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i),3);
        vcdp->fullBus(c+9,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q),3);
        vcdp->fullBit(c+17,(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid));
        vcdp->fullBit(c+25,(vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->fullBit(c+33,(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire));
        vcdp->fullBit(c+41,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid));
        vcdp->fullBit(c+49,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid));
        vcdp->fullBus(c+57,(vlTOPp->AxiLite4Demodulator__DOT__readRsp_data),32);
        vcdp->fullBus(c+65,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->fullBus(c+73,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->fullBit(c+81,(((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                              ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_valid)
                              : ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                  ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_valid)
                                  : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_valid)))));
        vcdp->fullBus(c+89,(((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                              ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i)
                              : ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                  ? (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i) 
                                      << 1U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q))
                                  : (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i) 
                                      << 2U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q))))),24);
        vcdp->fullBit(c+97,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1));
        vcdp->fullBus(c+105,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer),24);
        vcdp->fullBus(c+113,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1),2);
        vcdp->fullBit(c+121,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf1));
        vcdp->fullBus(c+129,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1),5);
        vcdp->fullBus(c+137,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf1),5);
        vcdp->fullBit(c+145,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_valid));
        vcdp->fullBus(c+153,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i),24);
        vcdp->fullBit(c+161,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_valid));
        vcdp->fullBus(c+169,((((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i) 
                               << 1U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q))),24);
        vcdp->fullBit(c+177,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_valid));
        vcdp->fullBus(c+185,((((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i) 
                               << 2U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q))),24);
        vcdp->fullBit(c+193,((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))));
        vcdp->fullBit(c+201,((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))));
        vcdp->fullBit(c+209,((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))));
        vcdp->fullBus(c+217,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_data_i),12);
        vcdp->fullBit(c+225,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid_i));
        vcdp->fullBit(c+233,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_data_i))));
        vcdp->fullBit(c+241,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__compTable_i));
        vcdp->fullBit(c+249,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid));
        vcdp->fullBit(c+257,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i));
        vcdp->fullBus(c+265,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_i),12);
        vcdp->fullBit(c+273,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_i));
        vcdp->fullBus(c+281,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_q),12);
        vcdp->fullBit(c+289,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_q));
        vcdp->fullBit(c+297,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_i))));
        vcdp->fullBit(c+305,(VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_q))));
        vcdp->fullBit(c+313,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__compTable_i));
        vcdp->fullBit(c+321,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__codeTable_q));
        vcdp->fullBit(c+329,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid));
        vcdp->fullBit(c+337,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i));
        vcdp->fullBit(c+345,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q));
        vcdp->fullBus(c+353,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i),12);
        vcdp->fullBit(c+361,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_i));
        vcdp->fullBus(c+369,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q),12);
        vcdp->fullBit(c+377,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_q));
        vcdp->fullBus(c+385,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__compTable_i),3);
        vcdp->fullBus(c+393,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__codeTable_q),3);
        vcdp->fullBit(c+401,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid));
        vcdp->fullBus(c+409,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i),2);
        vcdp->fullBus(c+417,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q),2);
        vcdp->fullBus(c+425,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt),5);
        vcdp->fullBus(c+433,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer),24);
        vcdp->fullBit(c+441,(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1));
        vcdp->fullBit(c+449,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf1)))));
        vcdp->fullBus(c+457,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf0),2);
        vcdp->fullBit(c+465,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf0));
        vcdp->fullBus(c+473,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf0),5);
        vcdp->fullBus(c+481,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf0),5);
        vcdp->fullBit(c+489,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->fullBit(c+497,(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid));
        vcdp->fullBit(c+505,((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->fullBus(c+513,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkI_reg),2);
        vcdp->fullBit(c+521,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkI_reg));
        vcdp->fullBus(c+529,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkI_reg),5);
        vcdp->fullBus(c+537,(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkI_reg),5);
        vcdp->fullBus(c+545,(vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select),2);
        vcdp->fullBit(c+553,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver));
        vcdp->fullBus(c+561,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver),5);
        vcdp->fullBus(c+569,(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver),5);
        vcdp->fullBit(c+577,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->fullBit(c+585,(vlTOPp->axil4Ctrl_awready));
        vcdp->fullBus(c+593,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->fullBus(c+601,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->fullBit(c+609,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->fullBit(c+617,(vlTOPp->axil4Ctrl_wready));
        vcdp->fullBus(c+625,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->fullBus(c+633,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->fullBit(c+641,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->fullBit(c+649,(vlTOPp->axil4Ctrl_bready));
        vcdp->fullBus(c+657,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->fullBit(c+665,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->fullBit(c+673,(vlTOPp->axil4Ctrl_arready));
        vcdp->fullBus(c+681,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->fullBus(c+689,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->fullBit(c+697,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->fullBit(c+705,(vlTOPp->axil4Ctrl_rready));
        vcdp->fullBus(c+713,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->fullBus(c+721,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->fullBit(c+729,(vlTOPp->mod_iq_valid));
        vcdp->fullBus(c+737,(vlTOPp->mod_iq_payload_cha_i),12);
        vcdp->fullBus(c+745,(vlTOPp->mod_iq_payload_cha_q),12);
        vcdp->fullBit(c+753,(vlTOPp->base_data_valid));
        vcdp->fullBus(c+761,(vlTOPp->base_data_payload),24);
        vcdp->fullBit(c+769,(vlTOPp->rf_clk));
        vcdp->fullBit(c+777,(vlTOPp->rf_resetn));
        vcdp->fullBit(c+785,(vlTOPp->clk));
        vcdp->fullBit(c+793,(vlTOPp->reset));
        vcdp->fullBit(c+801,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->fullBit(c+809,(((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->mod_iq_valid))));
        vcdp->fullBus(c+817,(((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),12);
        vcdp->fullBus(c+825,(((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),12);
        vcdp->fullBus(c+833,(((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),12);
        vcdp->fullBus(c+841,(((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),12);
        vcdp->fullBus(c+849,(((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))),12);
        vcdp->fullBus(c+857,(((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                               ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))),12);
        vcdp->fullBit(c+865,(0U));
        vcdp->fullBus(c+873,(0U),2);
    }
}
