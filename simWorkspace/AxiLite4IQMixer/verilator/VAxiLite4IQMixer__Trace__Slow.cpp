// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4IQMixer__Syms.h"


//======================

void VAxiLite4IQMixer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxiLite4IQMixer::traceInit, &VAxiLite4IQMixer::traceFull, &VAxiLite4IQMixer::traceChg, this);
}
void VAxiLite4IQMixer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4IQMixer* t = (VAxiLite4IQMixer*)userthis;
    VAxiLite4IQMixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4IQMixer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4IQMixer* t = (VAxiLite4IQMixer*)userthis;
    VAxiLite4IQMixer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxiLite4IQMixer::traceInitThis(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4IQMixer::traceFullThis(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4IQMixer::traceInitThis__1(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+305,"axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+313,"axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+321,"axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+329,"axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+337,"axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+345,"axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+353,"axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+361,"axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+369,"axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+377,"axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+385,"axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+393,"axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+401,"axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+409,"axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+417,"axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+425,"axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+433,"axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+441,"axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+449,"axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+457,"base_iq_0_valid", false,-1);
        vcdp->declBus(c+465,"base_iq_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+473,"base_iq_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+481,"carries_iq_valid", false,-1);
        vcdp->declBus(c+489,"carries_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+497,"carries_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+505,"if_iq_0_valid", false,-1);
        vcdp->declBus(c+513,"if_iq_0_payload", false,-1, 31,0);
        vcdp->declBit(c+521,"rf_clk", false,-1);
        vcdp->declBit(c+529,"rf_resetn", false,-1);
        vcdp->declBit(c+537,"clk", false,-1);
        vcdp->declBit(c+545,"reset", false,-1);
        vcdp->declBit(c+305,"AxiLite4IQMixer axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+313,"AxiLite4IQMixer axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+321,"AxiLite4IQMixer axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+329,"AxiLite4IQMixer axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+337,"AxiLite4IQMixer axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+345,"AxiLite4IQMixer axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+353,"AxiLite4IQMixer axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+361,"AxiLite4IQMixer axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+369,"AxiLite4IQMixer axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+377,"AxiLite4IQMixer axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+385,"AxiLite4IQMixer axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+393,"AxiLite4IQMixer axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+401,"AxiLite4IQMixer axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+409,"AxiLite4IQMixer axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+417,"AxiLite4IQMixer axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+425,"AxiLite4IQMixer axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+433,"AxiLite4IQMixer axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+441,"AxiLite4IQMixer axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+449,"AxiLite4IQMixer axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+457,"AxiLite4IQMixer base_iq_0_valid", false,-1);
        vcdp->declBus(c+465,"AxiLite4IQMixer base_iq_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+473,"AxiLite4IQMixer base_iq_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+481,"AxiLite4IQMixer carries_iq_valid", false,-1);
        vcdp->declBus(c+489,"AxiLite4IQMixer carries_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+497,"AxiLite4IQMixer carries_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+505,"AxiLite4IQMixer if_iq_0_valid", false,-1);
        vcdp->declBus(c+513,"AxiLite4IQMixer if_iq_0_payload", false,-1, 31,0);
        vcdp->declBit(c+521,"AxiLite4IQMixer rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer rf_resetn", false,-1);
        vcdp->declBit(c+537,"AxiLite4IQMixer clk", false,-1);
        vcdp->declBit(c+545,"AxiLite4IQMixer reset", false,-1);
        vcdp->declBit(c+553,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor_adjusted_data_valid", false,-1);
        vcdp->declBus(c+49,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor_adjusted_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+57,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor_adjusted_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+65,"AxiLite4IQMixer rfClockArea_iqmixer_mod_if_iq_0_valid", false,-1);
        vcdp->declBus(c+73,"AxiLite4IQMixer rfClockArea_iqmixer_mod_if_iq_0_payload", false,-1, 31,0);
        vcdp->declBit(c+561,"AxiLite4IQMixer powerAdjustor_2_adjusted_data_valid", false,-1);
        vcdp->declBus(c+81,"AxiLite4IQMixer powerAdjustor_2_adjusted_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+89,"AxiLite4IQMixer powerAdjustor_2_adjusted_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBus(c+97,"AxiLite4IQMixer clkCrossing_4_dataOut", false,-1, 2,0);
        vcdp->declBit(c+105,"AxiLite4IQMixer clkCrossing_5_dataOut", false,-1);
        vcdp->declBus(c+113,"AxiLite4IQMixer clkCrossing_6_dataOut", false,-1, 1,0);
        vcdp->declBit(c+121,"AxiLite4IQMixer clkCrossing_7_dataOut", false,-1);
        vcdp->declBit(c+577,"AxiLite4IQMixer readHaltRequest", false,-1);
        vcdp->declBit(c+577,"AxiLite4IQMixer writeHaltRequest", false,-1);
        vcdp->declBit(c+1,"AxiLite4IQMixer writeJoinEvent_valid", false,-1);
        vcdp->declBit(c+9,"AxiLite4IQMixer writeJoinEvent_ready", false,-1);
        vcdp->declBit(c+17,"AxiLite4IQMixer writeJoinEvent_fire", false,-1);
        vcdp->declBus(c+585,"AxiLite4IQMixer writeRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+1,"AxiLite4IQMixer writeJoinEvent_translated_valid", false,-1);
        vcdp->declBit(c+9,"AxiLite4IQMixer writeJoinEvent_translated_ready", false,-1);
        vcdp->declBus(c+585,"AxiLite4IQMixer writeJoinEvent_translated_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+217,"AxiLite4IQMixer when_Stream_l342", false,-1);
        vcdp->declBit(c+225,"AxiLite4IQMixer axil4Ctrl_ar_readDataStage_valid", false,-1);
        vcdp->declBit(c+433,"AxiLite4IQMixer axil4Ctrl_ar_readDataStage_ready", false,-1);
        vcdp->declBus(c+33,"AxiLite4IQMixer axil4Ctrl_ar_readDataStage_payload_addr", false,-1, 7,0);
        vcdp->declBus(c+41,"AxiLite4IQMixer axil4Ctrl_ar_readDataStage_payload_prot", false,-1, 2,0);
        vcdp->declBit(c+225,"AxiLite4IQMixer axil4Ctrl_ar_rValid", false,-1);
        vcdp->declBus(c+33,"AxiLite4IQMixer axil4Ctrl_ar_rData_addr", false,-1, 7,0);
        vcdp->declBus(c+41,"AxiLite4IQMixer axil4Ctrl_ar_rData_prot", false,-1, 2,0);
        vcdp->declBit(c+233,"AxiLite4IQMixer when_Stream_l342_1", false,-1);
        vcdp->declBus(c+25,"AxiLite4IQMixer readRsp_data", false,-1, 31,0);
        vcdp->declBus(c+585,"AxiLite4IQMixer readRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+17,"AxiLite4IQMixer writeOccur", false,-1);
        vcdp->declBit(c+569,"AxiLite4IQMixer readOccur", false,-1);
        vcdp->declBit(c+481,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor raw_data_valid", false,-1);
        vcdp->declBus(c+489,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+497,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+553,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor adjusted_data_valid", false,-1);
        vcdp->declBus(c+49,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor adjusted_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+57,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor adjusted_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBus(c+97,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor shift_bias", false,-1, 2,0);
        vcdp->declBit(c+105,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor shift_dir", false,-1);
        vcdp->declBit(c+521,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor rf_resetn", false,-1);
        vcdp->declBus(c+49,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor shifted_data_cha_i", false,-1, 15,0);
        vcdp->declBus(c+57,"AxiLite4IQMixer rfClockArea_carrier_power_adjustor shifted_data_cha_q", false,-1, 15,0);
        vcdp->declBit(c+561,"AxiLite4IQMixer rfClockArea_iqmixer_mod base_iq_0_valid", false,-1);
        vcdp->declBus(c+81,"AxiLite4IQMixer rfClockArea_iqmixer_mod base_iq_0_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+89,"AxiLite4IQMixer rfClockArea_iqmixer_mod base_iq_0_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+553,"AxiLite4IQMixer rfClockArea_iqmixer_mod carries_iq_valid", false,-1);
        vcdp->declBus(c+49,"AxiLite4IQMixer rfClockArea_iqmixer_mod carries_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+57,"AxiLite4IQMixer rfClockArea_iqmixer_mod carries_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+65,"AxiLite4IQMixer rfClockArea_iqmixer_mod if_iq_0_valid", false,-1);
        vcdp->declBus(c+73,"AxiLite4IQMixer rfClockArea_iqmixer_mod if_iq_0_payload", false,-1, 31,0);
        vcdp->declBit(c+521,"AxiLite4IQMixer rfClockArea_iqmixer_mod rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer rfClockArea_iqmixer_mod rf_resetn", false,-1);
        vcdp->declBit(c+65,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1_if_iq_valid", false,-1);
        vcdp->declBus(c+73,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1_if_iq_payload", false,-1, 31,0);
        vcdp->declBit(c+561,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 base_iq_valid", false,-1);
        vcdp->declBus(c+81,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 base_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+89,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 base_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+553,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 carrier_iq_valid", false,-1);
        vcdp->declBus(c+49,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 carrier_iq_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+57,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 carrier_iq_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+65,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 if_iq_valid", false,-1);
        vcdp->declBus(c+73,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 if_iq_payload", false,-1, 31,0);
        vcdp->declBit(c+521,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 rf_resetn", false,-1);
        vcdp->declBus(c+129,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 base_i_data", false,-1, 15,0);
        vcdp->declBus(c+137,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 base_q_data", false,-1, 15,0);
        vcdp->declBus(c+145,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 carrier_i_data", false,-1, 15,0);
        vcdp->declBus(c+153,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 carrier_q_data", false,-1, 15,0);
        vcdp->declBit(c+65,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 if_iq_valid_1", false,-1);
        vcdp->declBus(c+161,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 if_i_data", false,-1, 31,0);
        vcdp->declBus(c+169,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 if_q_data", false,-1, 31,0);
        vcdp->declBus(c+73,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 if_iq_data", false,-1, 31,0);
        vcdp->declBit(c+177,"AxiLite4IQMixer rfClockArea_iqmixer_mod iQMixerCore_1 iq_en", false,-1);
        vcdp->declBit(c+457,"AxiLite4IQMixer powerAdjustor_2 raw_data_valid", false,-1);
        vcdp->declBus(c+465,"AxiLite4IQMixer powerAdjustor_2 raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+473,"AxiLite4IQMixer powerAdjustor_2 raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+561,"AxiLite4IQMixer powerAdjustor_2 adjusted_data_valid", false,-1);
        vcdp->declBus(c+81,"AxiLite4IQMixer powerAdjustor_2 adjusted_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+89,"AxiLite4IQMixer powerAdjustor_2 adjusted_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBus(c+113,"AxiLite4IQMixer powerAdjustor_2 shift_bias", false,-1, 1,0);
        vcdp->declBit(c+121,"AxiLite4IQMixer powerAdjustor_2 shift_dir", false,-1);
        vcdp->declBit(c+521,"AxiLite4IQMixer powerAdjustor_2 rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer powerAdjustor_2 rf_resetn", false,-1);
        vcdp->declBus(c+81,"AxiLite4IQMixer powerAdjustor_2 shifted_data_cha_i", false,-1, 15,0);
        vcdp->declBus(c+89,"AxiLite4IQMixer powerAdjustor_2 shifted_data_cha_q", false,-1, 15,0);
        vcdp->declBus(c+273,"AxiLite4IQMixer clkCrossing_4 dataIn", false,-1, 2,0);
        vcdp->declBus(c+97,"AxiLite4IQMixer clkCrossing_4 dataOut", false,-1, 2,0);
        vcdp->declBit(c+537,"AxiLite4IQMixer clkCrossing_4 clk", false,-1);
        vcdp->declBit(c+545,"AxiLite4IQMixer clkCrossing_4 reset", false,-1);
        vcdp->declBit(c+521,"AxiLite4IQMixer clkCrossing_4 rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer clkCrossing_4 rf_resetn", false,-1);
        vcdp->declBus(c+241,"AxiLite4IQMixer clkCrossing_4 area_clkI_reg", false,-1, 2,0);
        vcdp->declBus(c+185,"AxiLite4IQMixer clkCrossing_4 area_clkO_buf0", false,-1, 2,0);
        vcdp->declBus(c+97,"AxiLite4IQMixer clkCrossing_4 area_clkO_buf1", false,-1, 2,0);
        vcdp->declBit(c+281,"AxiLite4IQMixer clkCrossing_5 dataIn", false,-1);
        vcdp->declBit(c+105,"AxiLite4IQMixer clkCrossing_5 dataOut", false,-1);
        vcdp->declBit(c+537,"AxiLite4IQMixer clkCrossing_5 clk", false,-1);
        vcdp->declBit(c+545,"AxiLite4IQMixer clkCrossing_5 reset", false,-1);
        vcdp->declBit(c+521,"AxiLite4IQMixer clkCrossing_5 rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer clkCrossing_5 rf_resetn", false,-1);
        vcdp->declBit(c+249,"AxiLite4IQMixer clkCrossing_5 area_clkI_reg", false,-1);
        vcdp->declBit(c+193,"AxiLite4IQMixer clkCrossing_5 area_clkO_buf0", false,-1);
        vcdp->declBit(c+105,"AxiLite4IQMixer clkCrossing_5 area_clkO_buf1", false,-1);
        vcdp->declBus(c+289,"AxiLite4IQMixer clkCrossing_6 dataIn", false,-1, 1,0);
        vcdp->declBus(c+113,"AxiLite4IQMixer clkCrossing_6 dataOut", false,-1, 1,0);
        vcdp->declBit(c+537,"AxiLite4IQMixer clkCrossing_6 clk", false,-1);
        vcdp->declBit(c+545,"AxiLite4IQMixer clkCrossing_6 reset", false,-1);
        vcdp->declBit(c+521,"AxiLite4IQMixer clkCrossing_6 rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer clkCrossing_6 rf_resetn", false,-1);
        vcdp->declBus(c+257,"AxiLite4IQMixer clkCrossing_6 area_clkI_reg", false,-1, 1,0);
        vcdp->declBus(c+201,"AxiLite4IQMixer clkCrossing_6 area_clkO_buf0", false,-1, 1,0);
        vcdp->declBus(c+113,"AxiLite4IQMixer clkCrossing_6 area_clkO_buf1", false,-1, 1,0);
        vcdp->declBit(c+297,"AxiLite4IQMixer clkCrossing_7 dataIn", false,-1);
        vcdp->declBit(c+121,"AxiLite4IQMixer clkCrossing_7 dataOut", false,-1);
        vcdp->declBit(c+537,"AxiLite4IQMixer clkCrossing_7 clk", false,-1);
        vcdp->declBit(c+545,"AxiLite4IQMixer clkCrossing_7 reset", false,-1);
        vcdp->declBit(c+521,"AxiLite4IQMixer clkCrossing_7 rf_clk", false,-1);
        vcdp->declBit(c+529,"AxiLite4IQMixer clkCrossing_7 rf_resetn", false,-1);
        vcdp->declBit(c+265,"AxiLite4IQMixer clkCrossing_7 area_clkI_reg", false,-1);
        vcdp->declBit(c+209,"AxiLite4IQMixer clkCrossing_7 area_clkO_buf0", false,-1);
        vcdp->declBit(c+121,"AxiLite4IQMixer clkCrossing_7 area_clkO_buf1", false,-1);
    }
}

void VAxiLite4IQMixer::traceFullThis__1(VAxiLite4IQMixer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4IQMixer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_valid));
        vcdp->fullBit(c+9,(vlTOPp->AxiLite4IQMixer__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->fullBit(c+17,(vlTOPp->AxiLite4IQMixer__DOT__writeJoinEvent_fire));
        vcdp->fullBus(c+25,(vlTOPp->AxiLite4IQMixer__DOT__readRsp_data),32);
        vcdp->fullBus(c+33,(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->fullBus(c+41,(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->fullBus(c+49,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_i),16);
        vcdp->fullBus(c+57,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_carrier_power_adjustor__DOT__shifted_data_cha_q),16);
        vcdp->fullBit(c+65,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_valid_1));
        vcdp->fullBus(c+73,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_iq_data),32);
        vcdp->fullBus(c+81,(vlTOPp->AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_i),16);
        vcdp->fullBus(c+89,(vlTOPp->AxiLite4IQMixer__DOT__powerAdjustor_2__DOT__shifted_data_cha_q),16);
        vcdp->fullBus(c+97,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf1),3);
        vcdp->fullBit(c+105,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf1));
        vcdp->fullBus(c+113,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf1),2);
        vcdp->fullBit(c+121,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf1));
        vcdp->fullBus(c+129,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_i_data),16);
        vcdp->fullBus(c+137,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__base_q_data),16);
        vcdp->fullBus(c+145,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_i_data),16);
        vcdp->fullBus(c+153,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__carrier_q_data),16);
        vcdp->fullBus(c+161,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_i_data),32);
        vcdp->fullBus(c+169,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__if_q_data),32);
        vcdp->fullBit(c+177,(vlTOPp->AxiLite4IQMixer__DOT__rfClockArea_iqmixer_mod__DOT__iQMixerCore_1__DOT__iq_en));
        vcdp->fullBus(c+185,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkO_buf0),3);
        vcdp->fullBit(c+193,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkO_buf0));
        vcdp->fullBus(c+201,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkO_buf0),2);
        vcdp->fullBit(c+209,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkO_buf0));
        vcdp->fullBit(c+217,((1U & (~ (IData)(vlTOPp->AxiLite4IQMixer__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->fullBit(c+225,(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid));
        vcdp->fullBit(c+233,((1U & (~ (IData)(vlTOPp->AxiLite4IQMixer__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->fullBus(c+241,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_4__DOT__area_clkI_reg),3);
        vcdp->fullBit(c+249,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_5__DOT__area_clkI_reg));
        vcdp->fullBus(c+257,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_6__DOT__area_clkI_reg),2);
        vcdp->fullBit(c+265,(vlTOPp->AxiLite4IQMixer__DOT__clkCrossing_7__DOT__area_clkI_reg));
        vcdp->fullBus(c+273,(vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_bias_driver),3);
        vcdp->fullBit(c+281,(vlTOPp->AxiLite4IQMixer__DOT_____05Fshift_dir_driver));
        vcdp->fullBus(c+289,(vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data),2);
        vcdp->fullBit(c+297,(vlTOPp->AxiLite4IQMixer__DOT___zz_readRsp_data_1));
        vcdp->fullBit(c+305,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->fullBit(c+313,(vlTOPp->axil4Ctrl_awready));
        vcdp->fullBus(c+321,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->fullBus(c+329,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->fullBit(c+337,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->fullBit(c+345,(vlTOPp->axil4Ctrl_wready));
        vcdp->fullBus(c+353,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->fullBus(c+361,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->fullBit(c+369,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->fullBit(c+377,(vlTOPp->axil4Ctrl_bready));
        vcdp->fullBus(c+385,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->fullBit(c+393,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->fullBit(c+401,(vlTOPp->axil4Ctrl_arready));
        vcdp->fullBus(c+409,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->fullBus(c+417,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->fullBit(c+425,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->fullBit(c+433,(vlTOPp->axil4Ctrl_rready));
        vcdp->fullBus(c+441,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->fullBus(c+449,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->fullBit(c+457,(vlTOPp->base_iq_0_valid));
        vcdp->fullBus(c+465,(vlTOPp->base_iq_0_payload_cha_i),16);
        vcdp->fullBus(c+473,(vlTOPp->base_iq_0_payload_cha_q),16);
        vcdp->fullBit(c+481,(vlTOPp->carries_iq_valid));
        vcdp->fullBus(c+489,(vlTOPp->carries_iq_payload_cha_i),16);
        vcdp->fullBus(c+497,(vlTOPp->carries_iq_payload_cha_q),16);
        vcdp->fullBit(c+505,(vlTOPp->if_iq_0_valid));
        vcdp->fullBus(c+513,(vlTOPp->if_iq_0_payload),32);
        vcdp->fullBit(c+521,(vlTOPp->rf_clk));
        vcdp->fullBit(c+529,(vlTOPp->rf_resetn));
        vcdp->fullBit(c+537,(vlTOPp->clk));
        vcdp->fullBit(c+545,(vlTOPp->reset));
        vcdp->fullBit(c+553,(vlTOPp->carries_iq_valid));
        vcdp->fullBit(c+561,(vlTOPp->base_iq_0_valid));
        vcdp->fullBit(c+569,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->fullBit(c+577,(0U));
        vcdp->fullBus(c+585,(0U),2);
    }
}
