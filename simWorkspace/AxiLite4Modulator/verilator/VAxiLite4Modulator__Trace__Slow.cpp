// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Modulator__Syms.h"


//======================

void VAxiLite4Modulator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxiLite4Modulator::traceInit, &VAxiLite4Modulator::traceFull, &VAxiLite4Modulator::traceChg, this);
}
void VAxiLite4Modulator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4Modulator* t = (VAxiLite4Modulator*)userthis;
    VAxiLite4Modulator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4Modulator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Modulator* t = (VAxiLite4Modulator*)userthis;
    VAxiLite4Modulator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxiLite4Modulator::traceInitThis(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4Modulator::traceFullThis(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Modulator::traceInitThis__1(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+745,"base_data_valid", false,-1);
        vcdp->declBit(c+753,"base_data_ready", false,-1);
        vcdp->declBus(c+761,"base_data_payload", false,-1, 23,0);
        vcdp->declBit(c+769,"axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+777,"axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+785,"axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+793,"axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+801,"axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+809,"axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+817,"axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+825,"axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+833,"axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+841,"axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+849,"axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+857,"axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+865,"axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+873,"axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+881,"axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+889,"axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+897,"axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+905,"axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+913,"axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+921,"mod_iq_valid", false,-1);
        vcdp->declBus(c+929,"mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+937,"mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+945,"rf_clk", false,-1);
        vcdp->declBit(c+953,"rf_resetn", false,-1);
        vcdp->declBit(c+961,"clk", false,-1);
        vcdp->declBit(c+969,"reset", false,-1);
        vcdp->declBit(c+745,"AxiLite4Modulator base_data_valid", false,-1);
        vcdp->declBit(c+753,"AxiLite4Modulator base_data_ready", false,-1);
        vcdp->declBus(c+761,"AxiLite4Modulator base_data_payload", false,-1, 23,0);
        vcdp->declBit(c+769,"AxiLite4Modulator axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+777,"AxiLite4Modulator axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+785,"AxiLite4Modulator axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+793,"AxiLite4Modulator axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+801,"AxiLite4Modulator axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+809,"AxiLite4Modulator axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+817,"AxiLite4Modulator axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+825,"AxiLite4Modulator axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+833,"AxiLite4Modulator axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+841,"AxiLite4Modulator axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+849,"AxiLite4Modulator axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+857,"AxiLite4Modulator axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+865,"AxiLite4Modulator axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+873,"AxiLite4Modulator axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+881,"AxiLite4Modulator axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+889,"AxiLite4Modulator axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+897,"AxiLite4Modulator axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+905,"AxiLite4Modulator axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+913,"AxiLite4Modulator axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+921,"AxiLite4Modulator mod_iq_valid", false,-1);
        vcdp->declBus(c+929,"AxiLite4Modulator mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+937,"AxiLite4Modulator mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+945,"AxiLite4Modulator rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator rf_resetn", false,-1);
        vcdp->declBit(c+961,"AxiLite4Modulator clk", false,-1);
        vcdp->declBit(c+969,"AxiLite4Modulator reset", false,-1);
        vcdp->declBus(c+185,"AxiLite4Modulator rfClockArea_mod_rtl_data_flow_unit_data_payload", false,-1, 3,0);
        vcdp->declBit(c+1,"AxiLite4Modulator rfClockArea_mod_data_div_base_data_ready", false,-1);
        vcdp->declBit(c+193,"AxiLite4Modulator rfClockArea_mod_data_div_unit_data_valid", false,-1);
        vcdp->declBus(c+201,"AxiLite4Modulator rfClockArea_mod_data_div_unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+9,"AxiLite4Modulator rfClockArea_mod_rtl_data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+17,"AxiLite4Modulator rfClockArea_mod_rtl_data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"AxiLite4Modulator rfClockArea_mod_rtl_data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+209,"AxiLite4Modulator clkCrossing_7_dataOut", false,-1);
        vcdp->declBus(c+217,"AxiLite4Modulator clkCrossing_8_dataOut", false,-1, 4,0);
        vcdp->declBus(c+225,"AxiLite4Modulator clkCrossing_9_dataOut", false,-1, 4,0);
        vcdp->declBus(c+233,"AxiLite4Modulator clkCrossing_10_dataOut", false,-1, 0,0);
        vcdp->declBus(c+241,"AxiLite4Modulator clkCrossing_11_dataOut", false,-1, 31,0);
        vcdp->declBus(c+249,"AxiLite4Modulator clkCrossing_12_dataOut", false,-1, 31,0);
        vcdp->declBus(c+257,"AxiLite4Modulator clkCrossing_13_dataOut", false,-1, 1,0);
        vcdp->declBit(c+985,"AxiLite4Modulator readHaltRequest", false,-1);
        vcdp->declBit(c+985,"AxiLite4Modulator writeHaltRequest", false,-1);
        vcdp->declBit(c+105,"AxiLite4Modulator writeJoinEvent_valid", false,-1);
        vcdp->declBit(c+113,"AxiLite4Modulator writeJoinEvent_ready", false,-1);
        vcdp->declBit(c+121,"AxiLite4Modulator writeJoinEvent_fire", false,-1);
        vcdp->declBus(c+993,"AxiLite4Modulator writeRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+105,"AxiLite4Modulator writeJoinEvent_translated_valid", false,-1);
        vcdp->declBit(c+113,"AxiLite4Modulator writeJoinEvent_translated_ready", false,-1);
        vcdp->declBus(c+993,"AxiLite4Modulator writeJoinEvent_translated_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+161,"AxiLite4Modulator when_Stream_l342", false,-1);
        vcdp->declBit(c+169,"AxiLite4Modulator axil4Ctrl_ar_readDataStage_valid", false,-1);
        vcdp->declBit(c+897,"AxiLite4Modulator axil4Ctrl_ar_readDataStage_ready", false,-1);
        vcdp->declBus(c+145,"AxiLite4Modulator axil4Ctrl_ar_readDataStage_payload_addr", false,-1, 7,0);
        vcdp->declBus(c+153,"AxiLite4Modulator axil4Ctrl_ar_readDataStage_payload_prot", false,-1, 2,0);
        vcdp->declBit(c+169,"AxiLite4Modulator axil4Ctrl_ar_rValid", false,-1);
        vcdp->declBus(c+145,"AxiLite4Modulator axil4Ctrl_ar_rData_addr", false,-1, 7,0);
        vcdp->declBus(c+153,"AxiLite4Modulator axil4Ctrl_ar_rData_prot", false,-1, 2,0);
        vcdp->declBit(c+177,"AxiLite4Modulator when_Stream_l342_1", false,-1);
        vcdp->declBus(c+137,"AxiLite4Modulator readRsp_data", false,-1, 31,0);
        vcdp->declBus(c+993,"AxiLite4Modulator readRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+121,"AxiLite4Modulator writeOccur", false,-1);
        vcdp->declBit(c+977,"AxiLite4Modulator readOccur", false,-1);
        vcdp->declBit(c+689,"AxiLite4Modulator mod_data_bridge_enable", false,-1);
        vcdp->declBus(c+697,"AxiLite4Modulator mod_data_bridge_cnt_step", false,-1, 4,0);
        vcdp->declBus(c+705,"AxiLite4Modulator mod_data_bridge_cnt_limit", false,-1, 4,0);
        vcdp->declBit(c+689,"AxiLite4Modulator mod_data_bridge_enable_driver", false,-1);
        vcdp->declBus(c+697,"AxiLite4Modulator mod_data_bridge_cnt_step_driver", false,-1, 4,0);
        vcdp->declBus(c+705,"AxiLite4Modulator mod_data_bridge_cnt_limit_driver", false,-1, 4,0);
        vcdp->declBus(c+713,"AxiLite4Modulator mod_rtl_bridge_select", false,-1, 1,0);
        vcdp->declBus(c+713,"AxiLite4Modulator mod_rtl_bridge_select_driver", false,-1, 1,0);
        vcdp->declBit(c+745,"AxiLite4Modulator rfClockArea_mod_data_div base_data_valid", false,-1);
        vcdp->declBit(c+1,"AxiLite4Modulator rfClockArea_mod_data_div base_data_ready", false,-1);
        vcdp->declBus(c+761,"AxiLite4Modulator rfClockArea_mod_data_div base_data_payload", false,-1, 23,0);
        vcdp->declBit(c+209,"AxiLite4Modulator rfClockArea_mod_data_div enable", false,-1);
        vcdp->declBus(c+217,"AxiLite4Modulator rfClockArea_mod_data_div cnt_step", false,-1, 4,0);
        vcdp->declBus(c+225,"AxiLite4Modulator rfClockArea_mod_data_div cnt_limit", false,-1, 4,0);
        vcdp->declBit(c+193,"AxiLite4Modulator rfClockArea_mod_data_div unit_data_valid", false,-1);
        vcdp->declBus(c+201,"AxiLite4Modulator rfClockArea_mod_data_div unit_data_payload", false,-1, 23,0);
        vcdp->declBit(c+945,"AxiLite4Modulator rfClockArea_mod_data_div rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator rfClockArea_mod_data_div rf_resetn", false,-1);
        vcdp->declBit(c+193,"AxiLite4Modulator rfClockArea_mod_data_div unit_valid", false,-1);
        vcdp->declBus(c+265,"AxiLite4Modulator rfClockArea_mod_data_div base_cnt", false,-1, 4,0);
        vcdp->declBit(c+1,"AxiLite4Modulator rfClockArea_mod_data_div base_ready", false,-1);
        vcdp->declBus(c+201,"AxiLite4Modulator rfClockArea_mod_data_div base_buffer", false,-1, 23,0);
        vcdp->declBit(c+273,"AxiLite4Modulator rfClockArea_mod_data_div when_dataDivDynamic_l40", false,-1);
        vcdp->declBit(c+129,"AxiLite4Modulator rfClockArea_mod_data_div base_data_fire", false,-1);
        vcdp->declBit(c+33,"AxiLite4Modulator rfClockArea_mod_data_div when_dataDivDynamic_l47", false,-1);
        vcdp->declBit(c+193,"AxiLite4Modulator rfClockArea_mod_rtl data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+185,"AxiLite4Modulator rfClockArea_mod_rtl data_flow_unit_data_payload", false,-1, 3,0);
        vcdp->declBit(c+9,"AxiLite4Modulator rfClockArea_mod_rtl data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+17,"AxiLite4Modulator rfClockArea_mod_rtl data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"AxiLite4Modulator rfClockArea_mod_rtl data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBus(c+233,"AxiLite4Modulator rfClockArea_mod_rtl w_en", false,-1, 0,0);
        vcdp->declBus(c+241,"AxiLite4Modulator rfClockArea_mod_rtl w_addr", false,-1, 31,0);
        vcdp->declBus(c+249,"AxiLite4Modulator rfClockArea_mod_rtl w_data", false,-1, 31,0);
        vcdp->declBus(c+257,"AxiLite4Modulator rfClockArea_mod_rtl select_1", false,-1, 1,0);
        vcdp->declBit(c+945,"AxiLite4Modulator rfClockArea_mod_rtl rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator rfClockArea_mod_rtl rf_resetn", false,-1);
        vcdp->declBus(c+281,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_unit_data_payload", false,-1, 0,0);
        vcdp->declBus(c+289,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1_unit_data_payload", false,-1, 1,0);
        vcdp->declBit(c+297,"AxiLite4Modulator rfClockArea_mod_rtl mod_1_w_en", false,-1);
        vcdp->declBus(c+305,"AxiLite4Modulator rfClockArea_mod_rtl mod_1_w_addr", false,-1, 7,0);
        vcdp->declBus(c+313,"AxiLite4Modulator rfClockArea_mod_rtl mod_1_w_data", false,-1, 23,0);
        vcdp->declBus(c+321,"AxiLite4Modulator rfClockArea_mod_rtl mod_1_data_flow_unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+329,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1_outputs_0_valid", false,-1);
        vcdp->declBus(c+337,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1_outputs_0_payload", false,-1, 3,0);
        vcdp->declBit(c+345,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1_outputs_1_valid", false,-1);
        vcdp->declBus(c+353,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1_outputs_1_payload", false,-1, 3,0);
        vcdp->declBit(c+361,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1_outputs_2_valid", false,-1);
        vcdp->declBus(c+369,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1_outputs_2_payload", false,-1, 3,0);
        vcdp->declBit(c+377,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1_outputs_3_valid", false,-1);
        vcdp->declBus(c+385,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1_outputs_3_payload", false,-1, 3,0);
        vcdp->declBit(c+393,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_mod_iq_valid", false,-1);
        vcdp->declBus(c+401,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+409,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+417,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1_mod_iq_valid", false,-1);
        vcdp->declBus(c+41,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+49,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+425,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod_mod_iq_valid", false,-1);
        vcdp->declBus(c+433,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+441,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+57,"AxiLite4Modulator rfClockArea_mod_rtl mod_1_data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+65,"AxiLite4Modulator rfClockArea_mod_rtl mod_1_data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+73,"AxiLite4Modulator rfClockArea_mod_rtl mod_1_data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+9,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1_output_valid", false,-1);
        vcdp->declBus(c+17,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1_output_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1_output_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+193,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 input_valid", false,-1);
        vcdp->declBus(c+185,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 input_payload", false,-1, 3,0);
        vcdp->declBus(c+257,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 select_1", false,-1, 1,0);
        vcdp->declBit(c+329,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 outputs_0_valid", false,-1);
        vcdp->declBus(c+337,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 outputs_0_payload", false,-1, 3,0);
        vcdp->declBit(c+345,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 outputs_1_valid", false,-1);
        vcdp->declBus(c+353,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 outputs_1_payload", false,-1, 3,0);
        vcdp->declBit(c+361,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 outputs_2_valid", false,-1);
        vcdp->declBus(c+369,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 outputs_2_payload", false,-1, 3,0);
        vcdp->declBit(c+377,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 outputs_3_valid", false,-1);
        vcdp->declBus(c+385,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 outputs_3_payload", false,-1, 3,0);
        vcdp->declBit(c+449,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 when_FlowDeMux_l15", false,-1);
        vcdp->declBit(c+457,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 when_FlowDeMux_l15_1", false,-1);
        vcdp->declBit(c+465,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 when_FlowDeMux_l15_2", false,-1);
        vcdp->declBit(c+473,"AxiLite4Modulator rfClockArea_mod_rtl flowDeMux_1 when_FlowDeMux_l15_3", false,-1);
        vcdp->declBit(c+329,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod unit_data_valid", false,-1);
        vcdp->declBus(c+281,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod unit_data_payload", false,-1, 0,0);
        vcdp->declBit(c+393,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod mod_iq_valid", false,-1);
        vcdp->declBus(c+401,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+409,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+945,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod rf_resetn", false,-1);
        vcdp->declBus(c+1001,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod codeTable_0", false,-1, 23,0);
        vcdp->declBus(c+1009,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod codeTable_1", false,-1, 23,0);
        vcdp->declBus(c+481,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod unit_data", false,-1, 0,0);
        vcdp->declBit(c+489,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod unit_valid", false,-1);
        vcdp->declBus(c+497,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod mod_iq_0", false,-1, 11,0);
        vcdp->declBus(c+505,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod mod_iq_1", false,-1, 11,0);
        vcdp->declBit(c+345,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 unit_data_valid", false,-1);
        vcdp->declBus(c+289,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 unit_data_payload", false,-1, 1,0);
        vcdp->declBit(c+417,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 mod_iq_valid", false,-1);
        vcdp->declBus(c+41,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+49,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+945,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 rf_resetn", false,-1);
        vcdp->declBus(c+1017,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 codeTable_0", false,-1, 23,0);
        vcdp->declBus(c+1025,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 codeTable_1", false,-1, 23,0);
        vcdp->declBus(c+1033,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 codeTable_2", false,-1, 23,0);
        vcdp->declBus(c+1041,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 codeTable_3", false,-1, 23,0);
        vcdp->declBus(c+513,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 unit_data", false,-1, 1,0);
        vcdp->declBit(c+521,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 unit_valid", false,-1);
        vcdp->declBus(c+81,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 mod_iq_0", false,-1, 11,0);
        vcdp->declBus(c+89,"AxiLite4Modulator rfClockArea_mod_rtl mPSK_Modulator_Extension_mod_1 mod_iq_1", false,-1, 11,0);
        vcdp->declBit(c+361,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod unit_data_valid", false,-1);
        vcdp->declBus(c+369,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod unit_data_payload", false,-1, 3,0);
        vcdp->declBit(c+425,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod mod_iq_valid", false,-1);
        vcdp->declBus(c+433,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+441,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+945,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod rf_resetn", false,-1);
        vcdp->declBus(c+1049,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod codeTableI_0", false,-1, 11,0);
        vcdp->declBus(c+1057,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod codeTableI_1", false,-1, 11,0);
        vcdp->declBus(c+1065,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod codeTableI_2", false,-1, 11,0);
        vcdp->declBus(c+1073,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod codeTableI_3", false,-1, 11,0);
        vcdp->declBus(c+1049,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod codeTableQ_0", false,-1, 11,0);
        vcdp->declBus(c+1057,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod codeTableQ_1", false,-1, 11,0);
        vcdp->declBus(c+1065,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod codeTableQ_2", false,-1, 11,0);
        vcdp->declBus(c+1073,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod codeTableQ_3", false,-1, 11,0);
        vcdp->declBus(c+529,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod unit_data", false,-1, 3,0);
        vcdp->declBit(c+537,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod unit_valid", false,-1);
        vcdp->declBus(c+545,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod data_div_0", false,-1, 1,0);
        vcdp->declBus(c+553,"AxiLite4Modulator rfClockArea_mod_rtl mQAM_Modulator_Extension_mod data_div_1", false,-1, 1,0);
        vcdp->declBit(c+297,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 w_en", false,-1);
        vcdp->declBus(c+305,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 w_addr", false,-1, 7,0);
        vcdp->declBus(c+313,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 w_data", false,-1, 23,0);
        vcdp->declBit(c+377,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 data_flow_unit_data_valid", false,-1);
        vcdp->declBus(c+321,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 data_flow_unit_data_payload", false,-1, 7,0);
        vcdp->declBit(c+57,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 data_flow_mod_iq_valid", false,-1);
        vcdp->declBus(c+65,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 data_flow_mod_iq_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+73,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 data_flow_mod_iq_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+945,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 rf_resetn", false,-1);
        vcdp->declBus(c+561,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 unit_data", false,-1, 7,0);
        vcdp->declBit(c+569,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 unit_valid", false,-1);
        vcdp->declBit(c+97,"AxiLite4Modulator rfClockArea_mod_rtl mod_1 when_lookUpMod_l84", false,-1);
        vcdp->declBit(c+393,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_0_valid", false,-1);
        vcdp->declBus(c+401,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_0_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+409,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_0_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+417,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_1_valid", false,-1);
        vcdp->declBus(c+41,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_1_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+49,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_1_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+425,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_2_valid", false,-1);
        vcdp->declBus(c+433,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_2_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+441,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_2_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+57,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_3_valid", false,-1);
        vcdp->declBus(c+65,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_3_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+73,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 inputs_3_payload_cha_q", false,-1, 11,0);
        vcdp->declBus(c+257,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 select_1", false,-1, 1,0);
        vcdp->declBit(c+9,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 output_valid", false,-1);
        vcdp->declBus(c+17,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 output_payload_cha_i", false,-1, 11,0);
        vcdp->declBus(c+25,"AxiLite4Modulator rfClockArea_mod_rtl flowMux_1 output_payload_cha_q", false,-1, 11,0);
        vcdp->declBit(c+689,"AxiLite4Modulator clkCrossing_7 dataIn", false,-1);
        vcdp->declBit(c+209,"AxiLite4Modulator clkCrossing_7 dataOut", false,-1);
        vcdp->declBit(c+961,"AxiLite4Modulator clkCrossing_7 clk", false,-1);
        vcdp->declBit(c+969,"AxiLite4Modulator clkCrossing_7 reset", false,-1);
        vcdp->declBit(c+945,"AxiLite4Modulator clkCrossing_7 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator clkCrossing_7 rf_resetn", false,-1);
        vcdp->declBit(c+633,"AxiLite4Modulator clkCrossing_7 area_clkI_reg", false,-1);
        vcdp->declBit(c+577,"AxiLite4Modulator clkCrossing_7 area_clkO_buf0", false,-1);
        vcdp->declBit(c+209,"AxiLite4Modulator clkCrossing_7 area_clkO_buf1", false,-1);
        vcdp->declBus(c+697,"AxiLite4Modulator clkCrossing_8 dataIn", false,-1, 4,0);
        vcdp->declBus(c+217,"AxiLite4Modulator clkCrossing_8 dataOut", false,-1, 4,0);
        vcdp->declBit(c+961,"AxiLite4Modulator clkCrossing_8 clk", false,-1);
        vcdp->declBit(c+969,"AxiLite4Modulator clkCrossing_8 reset", false,-1);
        vcdp->declBit(c+945,"AxiLite4Modulator clkCrossing_8 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator clkCrossing_8 rf_resetn", false,-1);
        vcdp->declBus(c+641,"AxiLite4Modulator clkCrossing_8 area_clkI_reg", false,-1, 4,0);
        vcdp->declBus(c+585,"AxiLite4Modulator clkCrossing_8 area_clkO_buf0", false,-1, 4,0);
        vcdp->declBus(c+217,"AxiLite4Modulator clkCrossing_8 area_clkO_buf1", false,-1, 4,0);
        vcdp->declBus(c+705,"AxiLite4Modulator clkCrossing_9 dataIn", false,-1, 4,0);
        vcdp->declBus(c+225,"AxiLite4Modulator clkCrossing_9 dataOut", false,-1, 4,0);
        vcdp->declBit(c+961,"AxiLite4Modulator clkCrossing_9 clk", false,-1);
        vcdp->declBit(c+969,"AxiLite4Modulator clkCrossing_9 reset", false,-1);
        vcdp->declBit(c+945,"AxiLite4Modulator clkCrossing_9 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator clkCrossing_9 rf_resetn", false,-1);
        vcdp->declBus(c+649,"AxiLite4Modulator clkCrossing_9 area_clkI_reg", false,-1, 4,0);
        vcdp->declBus(c+593,"AxiLite4Modulator clkCrossing_9 area_clkO_buf0", false,-1, 4,0);
        vcdp->declBus(c+225,"AxiLite4Modulator clkCrossing_9 area_clkO_buf1", false,-1, 4,0);
        vcdp->declBus(c+721,"AxiLite4Modulator clkCrossing_10 dataIn", false,-1, 0,0);
        vcdp->declBus(c+233,"AxiLite4Modulator clkCrossing_10 dataOut", false,-1, 0,0);
        vcdp->declBit(c+961,"AxiLite4Modulator clkCrossing_10 clk", false,-1);
        vcdp->declBit(c+969,"AxiLite4Modulator clkCrossing_10 reset", false,-1);
        vcdp->declBit(c+945,"AxiLite4Modulator clkCrossing_10 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator clkCrossing_10 rf_resetn", false,-1);
        vcdp->declBus(c+657,"AxiLite4Modulator clkCrossing_10 area_clkI_reg", false,-1, 0,0);
        vcdp->declBus(c+601,"AxiLite4Modulator clkCrossing_10 area_clkO_buf0", false,-1, 0,0);
        vcdp->declBus(c+233,"AxiLite4Modulator clkCrossing_10 area_clkO_buf1", false,-1, 0,0);
        vcdp->declBus(c+729,"AxiLite4Modulator clkCrossing_11 dataIn", false,-1, 31,0);
        vcdp->declBus(c+241,"AxiLite4Modulator clkCrossing_11 dataOut", false,-1, 31,0);
        vcdp->declBit(c+961,"AxiLite4Modulator clkCrossing_11 clk", false,-1);
        vcdp->declBit(c+969,"AxiLite4Modulator clkCrossing_11 reset", false,-1);
        vcdp->declBit(c+945,"AxiLite4Modulator clkCrossing_11 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator clkCrossing_11 rf_resetn", false,-1);
        vcdp->declBus(c+665,"AxiLite4Modulator clkCrossing_11 area_clkI_reg", false,-1, 31,0);
        vcdp->declBus(c+609,"AxiLite4Modulator clkCrossing_11 area_clkO_buf0", false,-1, 31,0);
        vcdp->declBus(c+241,"AxiLite4Modulator clkCrossing_11 area_clkO_buf1", false,-1, 31,0);
        vcdp->declBus(c+737,"AxiLite4Modulator clkCrossing_12 dataIn", false,-1, 31,0);
        vcdp->declBus(c+249,"AxiLite4Modulator clkCrossing_12 dataOut", false,-1, 31,0);
        vcdp->declBit(c+961,"AxiLite4Modulator clkCrossing_12 clk", false,-1);
        vcdp->declBit(c+969,"AxiLite4Modulator clkCrossing_12 reset", false,-1);
        vcdp->declBit(c+945,"AxiLite4Modulator clkCrossing_12 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator clkCrossing_12 rf_resetn", false,-1);
        vcdp->declBus(c+673,"AxiLite4Modulator clkCrossing_12 area_clkI_reg", false,-1, 31,0);
        vcdp->declBus(c+617,"AxiLite4Modulator clkCrossing_12 area_clkO_buf0", false,-1, 31,0);
        vcdp->declBus(c+249,"AxiLite4Modulator clkCrossing_12 area_clkO_buf1", false,-1, 31,0);
        vcdp->declBus(c+713,"AxiLite4Modulator clkCrossing_13 dataIn", false,-1, 1,0);
        vcdp->declBus(c+257,"AxiLite4Modulator clkCrossing_13 dataOut", false,-1, 1,0);
        vcdp->declBit(c+961,"AxiLite4Modulator clkCrossing_13 clk", false,-1);
        vcdp->declBit(c+969,"AxiLite4Modulator clkCrossing_13 reset", false,-1);
        vcdp->declBit(c+945,"AxiLite4Modulator clkCrossing_13 rf_clk", false,-1);
        vcdp->declBit(c+953,"AxiLite4Modulator clkCrossing_13 rf_resetn", false,-1);
        vcdp->declBus(c+681,"AxiLite4Modulator clkCrossing_13 area_clkI_reg", false,-1, 1,0);
        vcdp->declBus(c+625,"AxiLite4Modulator clkCrossing_13 area_clkO_buf0", false,-1, 1,0);
        vcdp->declBus(c+257,"AxiLite4Modulator clkCrossing_13 area_clkO_buf1", false,-1, 1,0);
    }
}

void VAxiLite4Modulator::traceFullThis__1(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready));
        vcdp->fullBit(c+9,(((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                             ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                             : ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                 ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                 : ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                     ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                     : (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84))))));
        vcdp->fullBus(c+17,((0xfffU & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                        ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                            ? (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                 ? 0x7ff000U
                                                 : 0x801000U) 
                                               >> 0xcU)
                                            : 0U) : 
                                       ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                         ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                             ? (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                >> 0xcU)
                                             : 0U) : 
                                        ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                          ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                      >> 2U)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                       >> 2U)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                              : 0U)
                                          : ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                                              ? (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1 
                                                 >> 0xcU)
                                              : 0U)))))),12);
        vcdp->fullBus(c+25,((0xfffU & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                        ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                            ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                ? 0x7ff000U
                                                : 0x801000U)
                                            : 0U) : 
                                       ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                         ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                             ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                             : 0U) : 
                                        ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                          ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                  ? 0xc35U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                   ? 0xebcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                                              : 0U)
                                          : ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                                              ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1
                                              : 0U)))))),12);
        vcdp->fullBit(c+33,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47));
        vcdp->fullBus(c+41,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                              ? (0xfffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                           >> 0xcU))
                              : 0U)),12);
        vcdp->fullBus(c+49,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                              ? (0xfffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)
                              : 0U)),12);
        vcdp->fullBit(c+57,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84));
        vcdp->fullBus(c+65,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                              ? (0xfffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1 
                                           >> 0xcU))
                              : 0U)),12);
        vcdp->fullBus(c+73,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                              ? (0xfffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1)
                              : 0U)),12);
        vcdp->fullBus(c+81,((0xfffU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0)),12);
        vcdp->fullBus(c+89,((0xfffU & (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                       >> 0xcU))),12);
        vcdp->fullBit(c+97,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84));
        vcdp->fullBit(c+105,(vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid));
        vcdp->fullBit(c+113,(vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->fullBit(c+121,(vlTOPp->AxiLite4Modulator__DOT__writeOccur));
        vcdp->fullBit(c+129,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire));
        vcdp->fullBus(c+137,(vlTOPp->AxiLite4Modulator__DOT__readRsp_data),32);
        vcdp->fullBus(c+145,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->fullBus(c+153,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->fullBit(c+161,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->fullBit(c+169,(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid));
        vcdp->fullBit(c+177,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->fullBus(c+185,((0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer)),4);
        vcdp->fullBit(c+193,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid));
        vcdp->fullBus(c+201,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer),24);
        vcdp->fullBit(c+209,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1));
        vcdp->fullBus(c+217,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1),5);
        vcdp->fullBus(c+225,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1),5);
        vcdp->fullBit(c+233,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1));
        vcdp->fullBus(c+241,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1),32);
        vcdp->fullBus(c+249,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1),32);
        vcdp->fullBus(c+257,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1),2);
        vcdp->fullBus(c+265,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt),5);
        vcdp->fullBit(c+273,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1)))));
        vcdp->fullBit(c+281,(((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                               ? 0U : (1U & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))));
        vcdp->fullBus(c+289,(((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                               ? 0U : (3U & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),2);
        vcdp->fullBit(c+297,((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1)))));
        vcdp->fullBus(c+305,((0xffU & vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1)),8);
        vcdp->fullBus(c+313,((0xffffffU & vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1)),24);
        vcdp->fullBus(c+321,(((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                               ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),8);
        vcdp->fullBit(c+329,(((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->fullBus(c+337,(((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                               ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->fullBit(c+345,(((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->fullBus(c+353,(((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                               ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->fullBit(c+361,(((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->fullBus(c+369,(((2U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                               ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->fullBit(c+377,(((3U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                              & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid))));
        vcdp->fullBus(c+385,(((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                               ? 0U : (0xfU & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))),4);
        vcdp->fullBit(c+393,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBus(c+401,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                               ? (0xfffU & (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                              ? 0x7ff000U
                                              : 0x801000U) 
                                            >> 0xcU))
                               : 0U)),12);
        vcdp->fullBus(c+409,(0U),12);
        vcdp->fullBit(c+417,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->fullBit(c+425,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBus(c+433,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                               ? ((0U == (3U & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                >> 2U)))
                                   ? 0xc35U : ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                    >> 2U)))
                                                ? 0xebcU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                        >> 2U)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                               : 0U)),12);
        vcdp->fullBus(c+441,(((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                               ? ((0U == (3U & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                   ? 0xc35U : ((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                ? 0xebcU
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                    ? 0x3caU
                                                    : 0x143U)))
                               : 0U)),12);
        vcdp->fullBit(c+449,((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))));
        vcdp->fullBit(c+457,((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))));
        vcdp->fullBit(c+465,((2U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))));
        vcdp->fullBit(c+473,((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))));
        vcdp->fullBit(c+481,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data));
        vcdp->fullBit(c+489,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBus(c+497,(0U),12);
        vcdp->fullBus(c+505,((0xfffU & (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                          ? 0x7ff000U
                                          : 0x801000U) 
                                        >> 0xcU))),12);
        vcdp->fullBus(c+513,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data),2);
        vcdp->fullBit(c+521,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid));
        vcdp->fullBus(c+529,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data),4);
        vcdp->fullBit(c+537,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid));
        vcdp->fullBus(c+545,((3U & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data))),2);
        vcdp->fullBus(c+553,((3U & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                    >> 2U))),2);
    }
}

void VAxiLite4Modulator::traceFullThis__8(VAxiLite4Modulator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+561,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_data),8);
        vcdp->fullBit(c+569,(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_valid));
        vcdp->fullBit(c+577,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf0));
        vcdp->fullBus(c+585,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf0),5);
        vcdp->fullBus(c+593,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf0),5);
        vcdp->fullBit(c+601,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf0));
        vcdp->fullBus(c+609,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf0),32);
        vcdp->fullBus(c+617,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf0),32);
        vcdp->fullBus(c+625,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf0),2);
        vcdp->fullBit(c+633,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkI_reg));
        vcdp->fullBus(c+641,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkI_reg),5);
        vcdp->fullBus(c+649,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkI_reg),5);
        vcdp->fullBit(c+657,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkI_reg));
        vcdp->fullBus(c+665,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkI_reg),32);
        vcdp->fullBus(c+673,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkI_reg),32);
        vcdp->fullBus(c+681,(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkI_reg),2);
        vcdp->fullBit(c+689,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_enable_driver));
        vcdp->fullBus(c+697,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver),5);
        vcdp->fullBus(c+705,(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver),5);
        vcdp->fullBus(c+713,(vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver),2);
        vcdp->fullBit(c+721,(vlTOPp->AxiLite4Modulator__DOT___zz_dataIn));
        vcdp->fullBus(c+729,(vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_1),32);
        vcdp->fullBus(c+737,(vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_2),32);
        vcdp->fullBit(c+745,(vlTOPp->base_data_valid));
        vcdp->fullBit(c+753,(vlTOPp->base_data_ready));
        vcdp->fullBus(c+761,(vlTOPp->base_data_payload),24);
        vcdp->fullBit(c+769,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->fullBit(c+777,(vlTOPp->axil4Ctrl_awready));
        vcdp->fullBus(c+785,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->fullBus(c+793,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->fullBit(c+801,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->fullBit(c+809,(vlTOPp->axil4Ctrl_wready));
        vcdp->fullBus(c+817,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->fullBus(c+825,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->fullBit(c+833,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->fullBit(c+841,(vlTOPp->axil4Ctrl_bready));
        vcdp->fullBus(c+849,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->fullBit(c+857,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->fullBit(c+865,(vlTOPp->axil4Ctrl_arready));
        vcdp->fullBus(c+873,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->fullBus(c+881,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->fullBit(c+889,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->fullBit(c+897,(vlTOPp->axil4Ctrl_rready));
        vcdp->fullBus(c+905,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->fullBus(c+913,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->fullBit(c+921,(vlTOPp->mod_iq_valid));
        vcdp->fullBus(c+929,(vlTOPp->mod_iq_payload_cha_i),12);
        vcdp->fullBus(c+937,(vlTOPp->mod_iq_payload_cha_q),12);
        vcdp->fullBit(c+945,(vlTOPp->rf_clk));
        vcdp->fullBit(c+953,(vlTOPp->rf_resetn));
        vcdp->fullBit(c+961,(vlTOPp->clk));
        vcdp->fullBit(c+969,(vlTOPp->reset));
        vcdp->fullBit(c+977,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->fullBit(c+985,(0U));
        vcdp->fullBus(c+993,(0U),2);
        vcdp->fullBus(c+1001,(0x801000U),24);
        vcdp->fullBus(c+1009,(0x7ff000U),24);
        vcdp->fullBus(c+1017,(0xa59a59U),24);
        vcdp->fullBus(c+1025,(0xa595a7U),24);
        vcdp->fullBus(c+1033,(0x5a7a59U),24);
        vcdp->fullBus(c+1041,(0x5a75a7U),24);
        vcdp->fullBus(c+1049,(0xc35U),12);
        vcdp->fullBus(c+1057,(0xebcU),12);
        vcdp->fullBus(c+1065,(0x3caU),12);
        vcdp->fullBus(c+1073,(0x143U),12);
    }
}
