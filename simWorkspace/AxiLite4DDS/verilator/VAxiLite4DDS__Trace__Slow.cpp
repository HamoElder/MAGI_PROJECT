// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4DDS__Syms.h"


//======================

void VAxiLite4DDS::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxiLite4DDS::traceInit, &VAxiLite4DDS::traceFull, &VAxiLite4DDS::traceChg, this);
}
void VAxiLite4DDS::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4DDS* t = (VAxiLite4DDS*)userthis;
    VAxiLite4DDS__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4DDS::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4DDS* t = (VAxiLite4DDS*)userthis;
    VAxiLite4DDS__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxiLite4DDS::traceInitThis(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4DDS::traceFullThis(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4DDS::traceInitThis__1(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+649,"axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+657,"axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+665,"axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+673,"axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+681,"axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+689,"axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+697,"axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+705,"axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+713,"axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+721,"axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+729,"axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+737,"axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+745,"axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+753,"axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+761,"axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+769,"axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+777,"axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+785,"axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+793,"axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+801,"data_0_valid", false,-1);
        vcdp->declBus(c+809,"data_0_payload", false,-1, 23,0);
        vcdp->declBit(c+817,"data_1_valid", false,-1);
        vcdp->declBus(c+825,"data_1_payload", false,-1, 23,0);
        vcdp->declBit(c+833,"phase_0_valid", false,-1);
        vcdp->declBus(c+841,"phase_0_payload", false,-1, 9,0);
        vcdp->declBit(c+849,"phase_1_valid", false,-1);
        vcdp->declBus(c+857,"phase_1_payload", false,-1, 9,0);
        vcdp->declBit(c+865,"rf_clk", false,-1);
        vcdp->declBit(c+873,"rf_resetn", false,-1);
        vcdp->declBit(c+881,"clk", false,-1);
        vcdp->declBit(c+889,"reset", false,-1);
        vcdp->declBit(c+649,"AxiLite4DDS axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+657,"AxiLite4DDS axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+665,"AxiLite4DDS axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+673,"AxiLite4DDS axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+681,"AxiLite4DDS axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+689,"AxiLite4DDS axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+697,"AxiLite4DDS axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+705,"AxiLite4DDS axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+713,"AxiLite4DDS axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+721,"AxiLite4DDS axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+729,"AxiLite4DDS axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+737,"AxiLite4DDS axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+745,"AxiLite4DDS axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+753,"AxiLite4DDS axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+761,"AxiLite4DDS axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+769,"AxiLite4DDS axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+777,"AxiLite4DDS axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+785,"AxiLite4DDS axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+793,"AxiLite4DDS axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+801,"AxiLite4DDS data_0_valid", false,-1);
        vcdp->declBus(c+809,"AxiLite4DDS data_0_payload", false,-1, 23,0);
        vcdp->declBit(c+817,"AxiLite4DDS data_1_valid", false,-1);
        vcdp->declBus(c+825,"AxiLite4DDS data_1_payload", false,-1, 23,0);
        vcdp->declBit(c+833,"AxiLite4DDS phase_0_valid", false,-1);
        vcdp->declBus(c+841,"AxiLite4DDS phase_0_payload", false,-1, 9,0);
        vcdp->declBit(c+849,"AxiLite4DDS phase_1_valid", false,-1);
        vcdp->declBus(c+857,"AxiLite4DDS phase_1_payload", false,-1, 9,0);
        vcdp->declBit(c+865,"AxiLite4DDS rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS rf_resetn", false,-1);
        vcdp->declBit(c+881,"AxiLite4DDS clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS reset", false,-1);
        vcdp->declBit(c+65,"AxiLite4DDS clkCrossing_15_dataOut", false,-1);
        vcdp->declBit(c+73,"AxiLite4DDS dDS_2_data_valid", false,-1);
        vcdp->declBus(c+81,"AxiLite4DDS dDS_2_data_payload", false,-1, 23,0);
        vcdp->declBit(c+73,"AxiLite4DDS dDS_2_phase_valid", false,-1);
        vcdp->declBus(c+89,"AxiLite4DDS dDS_2_phase_payload", false,-1, 9,0);
        vcdp->declBit(c+97,"AxiLite4DDS clkCrossing_16_dataOut", false,-1);
        vcdp->declBus(c+105,"AxiLite4DDS clkCrossing_17_dataOut", false,-1, 9,0);
        vcdp->declBus(c+113,"AxiLite4DDS clkCrossing_18_dataOut", false,-1, 23,0);
        vcdp->declBus(c+121,"AxiLite4DDS clkCrossing_19_dataOut", false,-1, 9,0);
        vcdp->declBus(c+129,"AxiLite4DDS clkCrossing_20_dataOut", false,-1, 9,0);
        vcdp->declBit(c+137,"AxiLite4DDS clkCrossing_21_dataOut", false,-1);
        vcdp->declBus(c+145,"AxiLite4DDS clkCrossing_22_dataOut", false,-1, 9,0);
        vcdp->declBit(c+153,"AxiLite4DDS dDS_3_data_valid", false,-1);
        vcdp->declBus(c+161,"AxiLite4DDS dDS_3_data_payload", false,-1, 23,0);
        vcdp->declBit(c+153,"AxiLite4DDS dDS_3_phase_valid", false,-1);
        vcdp->declBus(c+169,"AxiLite4DDS dDS_3_phase_payload", false,-1, 9,0);
        vcdp->declBit(c+177,"AxiLite4DDS clkCrossing_23_dataOut", false,-1);
        vcdp->declBus(c+185,"AxiLite4DDS clkCrossing_24_dataOut", false,-1, 9,0);
        vcdp->declBus(c+193,"AxiLite4DDS clkCrossing_25_dataOut", false,-1, 23,0);
        vcdp->declBus(c+201,"AxiLite4DDS clkCrossing_26_dataOut", false,-1, 9,0);
        vcdp->declBus(c+209,"AxiLite4DDS clkCrossing_27_dataOut", false,-1, 9,0);
        vcdp->declBit(c+217,"AxiLite4DDS clkCrossing_28_dataOut", false,-1);
        vcdp->declBus(c+225,"AxiLite4DDS clkCrossing_29_dataOut", false,-1, 9,0);
        vcdp->declBit(c+529,"AxiLite4DDS global_en", false,-1);
        vcdp->declBit(c+905,"AxiLite4DDS readHaltRequest", false,-1);
        vcdp->declBit(c+905,"AxiLite4DDS writeHaltRequest", false,-1);
        vcdp->declBit(c+17,"AxiLite4DDS writeJoinEvent_valid", false,-1);
        vcdp->declBit(c+25,"AxiLite4DDS writeJoinEvent_ready", false,-1);
        vcdp->declBit(c+33,"AxiLite4DDS writeJoinEvent_fire", false,-1);
        vcdp->declBus(c+913,"AxiLite4DDS writeRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+17,"AxiLite4DDS writeJoinEvent_translated_valid", false,-1);
        vcdp->declBit(c+25,"AxiLite4DDS writeJoinEvent_translated_ready", false,-1);
        vcdp->declBus(c+913,"AxiLite4DDS writeJoinEvent_translated_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+385,"AxiLite4DDS when_Stream_l342", false,-1);
        vcdp->declBit(c+393,"AxiLite4DDS axil4Ctrl_ar_readDataStage_valid", false,-1);
        vcdp->declBit(c+777,"AxiLite4DDS axil4Ctrl_ar_readDataStage_ready", false,-1);
        vcdp->declBus(c+49,"AxiLite4DDS axil4Ctrl_ar_readDataStage_payload_addr", false,-1, 7,0);
        vcdp->declBus(c+57,"AxiLite4DDS axil4Ctrl_ar_readDataStage_payload_prot", false,-1, 2,0);
        vcdp->declBit(c+393,"AxiLite4DDS axil4Ctrl_ar_rValid", false,-1);
        vcdp->declBus(c+49,"AxiLite4DDS axil4Ctrl_ar_rData_addr", false,-1, 7,0);
        vcdp->declBus(c+57,"AxiLite4DDS axil4Ctrl_ar_rData_prot", false,-1, 2,0);
        vcdp->declBit(c+401,"AxiLite4DDS when_Stream_l342_1", false,-1);
        vcdp->declBus(c+41,"AxiLite4DDS readRsp_data", false,-1, 31,0);
        vcdp->declBus(c+913,"AxiLite4DDS readRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+33,"AxiLite4DDS writeOccur", false,-1);
        vcdp->declBit(c+897,"AxiLite4DDS readOccur", false,-1);
        vcdp->declBit(c+529,"AxiLite4DDS global_en_driver", false,-1);
        vcdp->declBit(c+529,"AxiLite4DDS clkCrossing_15 dataIn", false,-1);
        vcdp->declBit(c+65,"AxiLite4DDS clkCrossing_15 dataOut", false,-1);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_15 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_15 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_15 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_15 rf_resetn", false,-1);
        vcdp->declBit(c+409,"AxiLite4DDS clkCrossing_15 area_clkI_reg", false,-1);
        vcdp->declBit(c+233,"AxiLite4DDS clkCrossing_15 area_clkO_buf0", false,-1);
        vcdp->declBit(c+65,"AxiLite4DDS clkCrossing_15 area_clkO_buf1", false,-1);
        vcdp->declBit(c+73,"AxiLite4DDS dDS_2 data_valid", false,-1);
        vcdp->declBus(c+81,"AxiLite4DDS dDS_2 data_payload", false,-1, 23,0);
        vcdp->declBit(c+73,"AxiLite4DDS dDS_2 phase_valid", false,-1);
        vcdp->declBus(c+89,"AxiLite4DDS dDS_2 phase_payload", false,-1, 9,0);
        vcdp->declBit(c+137,"AxiLite4DDS dDS_2 channel_en", false,-1);
        vcdp->declBit(c+65,"AxiLite4DDS dDS_2 sync_en", false,-1);
        vcdp->declBit(c+97,"AxiLite4DDS dDS_2 w_en", false,-1);
        vcdp->declBus(c+105,"AxiLite4DDS dDS_2 w_addr", false,-1, 9,0);
        vcdp->declBus(c+113,"AxiLite4DDS dDS_2 w_data", false,-1, 23,0);
        vcdp->declBus(c+145,"AxiLite4DDS dDS_2 phase_limit", false,-1, 9,0);
        vcdp->declBus(c+121,"AxiLite4DDS dDS_2 phase_offset", false,-1, 9,0);
        vcdp->declBus(c+129,"AxiLite4DDS dDS_2 phase_inc", false,-1, 9,0);
        vcdp->declBit(c+865,"AxiLite4DDS dDS_2 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS dDS_2 rf_resetn", false,-1);
        vcdp->declBit(c+1,"AxiLite4DDS dDS_2 module_en", false,-1);
        vcdp->declBus(c+241,"AxiLite4DDS dDS_2 phase_cursor", false,-1, 9,0);
        vcdp->declBit(c+249,"AxiLite4DDS dDS_2 when_DDS_l53", false,-1);
        vcdp->declBit(c+73,"AxiLite4DDS dDS_2 valid_o_buf", false,-1);
        vcdp->declBit(c+537,"AxiLite4DDS clkCrossing_16 dataIn", false,-1);
        vcdp->declBit(c+97,"AxiLite4DDS clkCrossing_16 dataOut", false,-1);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_16 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_16 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_16 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_16 rf_resetn", false,-1);
        vcdp->declBit(c+417,"AxiLite4DDS clkCrossing_16 area_clkI_reg", false,-1);
        vcdp->declBit(c+257,"AxiLite4DDS clkCrossing_16 area_clkO_buf0", false,-1);
        vcdp->declBit(c+97,"AxiLite4DDS clkCrossing_16 area_clkO_buf1", false,-1);
        vcdp->declBus(c+545,"AxiLite4DDS clkCrossing_17 dataIn", false,-1, 9,0);
        vcdp->declBus(c+105,"AxiLite4DDS clkCrossing_17 dataOut", false,-1, 9,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_17 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_17 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_17 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_17 rf_resetn", false,-1);
        vcdp->declBus(c+425,"AxiLite4DDS clkCrossing_17 area_clkI_reg", false,-1, 9,0);
        vcdp->declBus(c+265,"AxiLite4DDS clkCrossing_17 area_clkO_buf0", false,-1, 9,0);
        vcdp->declBus(c+105,"AxiLite4DDS clkCrossing_17 area_clkO_buf1", false,-1, 9,0);
        vcdp->declBus(c+553,"AxiLite4DDS clkCrossing_18 dataIn", false,-1, 23,0);
        vcdp->declBus(c+113,"AxiLite4DDS clkCrossing_18 dataOut", false,-1, 23,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_18 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_18 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_18 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_18 rf_resetn", false,-1);
        vcdp->declBus(c+433,"AxiLite4DDS clkCrossing_18 area_clkI_reg", false,-1, 23,0);
        vcdp->declBus(c+273,"AxiLite4DDS clkCrossing_18 area_clkO_buf0", false,-1, 23,0);
        vcdp->declBus(c+113,"AxiLite4DDS clkCrossing_18 area_clkO_buf1", false,-1, 23,0);
        vcdp->declBus(c+561,"AxiLite4DDS clkCrossing_19 dataIn", false,-1, 9,0);
        vcdp->declBus(c+121,"AxiLite4DDS clkCrossing_19 dataOut", false,-1, 9,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_19 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_19 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_19 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_19 rf_resetn", false,-1);
        vcdp->declBus(c+441,"AxiLite4DDS clkCrossing_19 area_clkI_reg", false,-1, 9,0);
        vcdp->declBus(c+281,"AxiLite4DDS clkCrossing_19 area_clkO_buf0", false,-1, 9,0);
        vcdp->declBus(c+121,"AxiLite4DDS clkCrossing_19 area_clkO_buf1", false,-1, 9,0);
        vcdp->declBus(c+569,"AxiLite4DDS clkCrossing_20 dataIn", false,-1, 9,0);
        vcdp->declBus(c+129,"AxiLite4DDS clkCrossing_20 dataOut", false,-1, 9,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_20 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_20 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_20 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_20 rf_resetn", false,-1);
        vcdp->declBus(c+449,"AxiLite4DDS clkCrossing_20 area_clkI_reg", false,-1, 9,0);
        vcdp->declBus(c+289,"AxiLite4DDS clkCrossing_20 area_clkO_buf0", false,-1, 9,0);
        vcdp->declBus(c+129,"AxiLite4DDS clkCrossing_20 area_clkO_buf1", false,-1, 9,0);
        vcdp->declBit(c+577,"AxiLite4DDS clkCrossing_21 dataIn", false,-1);
        vcdp->declBit(c+137,"AxiLite4DDS clkCrossing_21 dataOut", false,-1);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_21 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_21 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_21 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_21 rf_resetn", false,-1);
        vcdp->declBit(c+457,"AxiLite4DDS clkCrossing_21 area_clkI_reg", false,-1);
        vcdp->declBit(c+297,"AxiLite4DDS clkCrossing_21 area_clkO_buf0", false,-1);
        vcdp->declBit(c+137,"AxiLite4DDS clkCrossing_21 area_clkO_buf1", false,-1);
        vcdp->declBus(c+585,"AxiLite4DDS clkCrossing_22 dataIn", false,-1, 9,0);
        vcdp->declBus(c+145,"AxiLite4DDS clkCrossing_22 dataOut", false,-1, 9,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_22 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_22 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_22 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_22 rf_resetn", false,-1);
        vcdp->declBus(c+465,"AxiLite4DDS clkCrossing_22 area_clkI_reg", false,-1, 9,0);
        vcdp->declBus(c+305,"AxiLite4DDS clkCrossing_22 area_clkO_buf0", false,-1, 9,0);
        vcdp->declBus(c+145,"AxiLite4DDS clkCrossing_22 area_clkO_buf1", false,-1, 9,0);
        vcdp->declBit(c+153,"AxiLite4DDS dDS_3 data_valid", false,-1);
        vcdp->declBus(c+161,"AxiLite4DDS dDS_3 data_payload", false,-1, 23,0);
        vcdp->declBit(c+153,"AxiLite4DDS dDS_3 phase_valid", false,-1);
        vcdp->declBus(c+169,"AxiLite4DDS dDS_3 phase_payload", false,-1, 9,0);
        vcdp->declBit(c+217,"AxiLite4DDS dDS_3 channel_en", false,-1);
        vcdp->declBit(c+65,"AxiLite4DDS dDS_3 sync_en", false,-1);
        vcdp->declBit(c+177,"AxiLite4DDS dDS_3 w_en", false,-1);
        vcdp->declBus(c+185,"AxiLite4DDS dDS_3 w_addr", false,-1, 9,0);
        vcdp->declBus(c+193,"AxiLite4DDS dDS_3 w_data", false,-1, 23,0);
        vcdp->declBus(c+225,"AxiLite4DDS dDS_3 phase_limit", false,-1, 9,0);
        vcdp->declBus(c+201,"AxiLite4DDS dDS_3 phase_offset", false,-1, 9,0);
        vcdp->declBus(c+209,"AxiLite4DDS dDS_3 phase_inc", false,-1, 9,0);
        vcdp->declBit(c+865,"AxiLite4DDS dDS_3 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS dDS_3 rf_resetn", false,-1);
        vcdp->declBit(c+9,"AxiLite4DDS dDS_3 module_en", false,-1);
        vcdp->declBus(c+313,"AxiLite4DDS dDS_3 phase_cursor", false,-1, 9,0);
        vcdp->declBit(c+321,"AxiLite4DDS dDS_3 when_DDS_l53", false,-1);
        vcdp->declBit(c+153,"AxiLite4DDS dDS_3 valid_o_buf", false,-1);
        vcdp->declBit(c+593,"AxiLite4DDS clkCrossing_23 dataIn", false,-1);
        vcdp->declBit(c+177,"AxiLite4DDS clkCrossing_23 dataOut", false,-1);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_23 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_23 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_23 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_23 rf_resetn", false,-1);
        vcdp->declBit(c+473,"AxiLite4DDS clkCrossing_23 area_clkI_reg", false,-1);
        vcdp->declBit(c+329,"AxiLite4DDS clkCrossing_23 area_clkO_buf0", false,-1);
        vcdp->declBit(c+177,"AxiLite4DDS clkCrossing_23 area_clkO_buf1", false,-1);
        vcdp->declBus(c+601,"AxiLite4DDS clkCrossing_24 dataIn", false,-1, 9,0);
        vcdp->declBus(c+185,"AxiLite4DDS clkCrossing_24 dataOut", false,-1, 9,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_24 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_24 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_24 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_24 rf_resetn", false,-1);
        vcdp->declBus(c+481,"AxiLite4DDS clkCrossing_24 area_clkI_reg", false,-1, 9,0);
        vcdp->declBus(c+337,"AxiLite4DDS clkCrossing_24 area_clkO_buf0", false,-1, 9,0);
        vcdp->declBus(c+185,"AxiLite4DDS clkCrossing_24 area_clkO_buf1", false,-1, 9,0);
        vcdp->declBus(c+609,"AxiLite4DDS clkCrossing_25 dataIn", false,-1, 23,0);
        vcdp->declBus(c+193,"AxiLite4DDS clkCrossing_25 dataOut", false,-1, 23,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_25 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_25 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_25 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_25 rf_resetn", false,-1);
        vcdp->declBus(c+489,"AxiLite4DDS clkCrossing_25 area_clkI_reg", false,-1, 23,0);
        vcdp->declBus(c+345,"AxiLite4DDS clkCrossing_25 area_clkO_buf0", false,-1, 23,0);
        vcdp->declBus(c+193,"AxiLite4DDS clkCrossing_25 area_clkO_buf1", false,-1, 23,0);
        vcdp->declBus(c+617,"AxiLite4DDS clkCrossing_26 dataIn", false,-1, 9,0);
        vcdp->declBus(c+201,"AxiLite4DDS clkCrossing_26 dataOut", false,-1, 9,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_26 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_26 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_26 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_26 rf_resetn", false,-1);
        vcdp->declBus(c+497,"AxiLite4DDS clkCrossing_26 area_clkI_reg", false,-1, 9,0);
        vcdp->declBus(c+353,"AxiLite4DDS clkCrossing_26 area_clkO_buf0", false,-1, 9,0);
        vcdp->declBus(c+201,"AxiLite4DDS clkCrossing_26 area_clkO_buf1", false,-1, 9,0);
        vcdp->declBus(c+625,"AxiLite4DDS clkCrossing_27 dataIn", false,-1, 9,0);
        vcdp->declBus(c+209,"AxiLite4DDS clkCrossing_27 dataOut", false,-1, 9,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_27 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_27 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_27 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_27 rf_resetn", false,-1);
        vcdp->declBus(c+505,"AxiLite4DDS clkCrossing_27 area_clkI_reg", false,-1, 9,0);
        vcdp->declBus(c+361,"AxiLite4DDS clkCrossing_27 area_clkO_buf0", false,-1, 9,0);
        vcdp->declBus(c+209,"AxiLite4DDS clkCrossing_27 area_clkO_buf1", false,-1, 9,0);
        vcdp->declBit(c+633,"AxiLite4DDS clkCrossing_28 dataIn", false,-1);
        vcdp->declBit(c+217,"AxiLite4DDS clkCrossing_28 dataOut", false,-1);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_28 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_28 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_28 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_28 rf_resetn", false,-1);
        vcdp->declBit(c+513,"AxiLite4DDS clkCrossing_28 area_clkI_reg", false,-1);
        vcdp->declBit(c+369,"AxiLite4DDS clkCrossing_28 area_clkO_buf0", false,-1);
        vcdp->declBit(c+217,"AxiLite4DDS clkCrossing_28 area_clkO_buf1", false,-1);
        vcdp->declBus(c+641,"AxiLite4DDS clkCrossing_29 dataIn", false,-1, 9,0);
        vcdp->declBus(c+225,"AxiLite4DDS clkCrossing_29 dataOut", false,-1, 9,0);
        vcdp->declBit(c+881,"AxiLite4DDS clkCrossing_29 clk", false,-1);
        vcdp->declBit(c+889,"AxiLite4DDS clkCrossing_29 reset", false,-1);
        vcdp->declBit(c+865,"AxiLite4DDS clkCrossing_29 rf_clk", false,-1);
        vcdp->declBit(c+873,"AxiLite4DDS clkCrossing_29 rf_resetn", false,-1);
        vcdp->declBus(c+521,"AxiLite4DDS clkCrossing_29 area_clkI_reg", false,-1, 9,0);
        vcdp->declBus(c+377,"AxiLite4DDS clkCrossing_29 area_clkO_buf0", false,-1, 9,0);
        vcdp->declBus(c+225,"AxiLite4DDS clkCrossing_29 area_clkO_buf1", false,-1, 9,0);
    }
}

void VAxiLite4DDS::traceFullThis__1(VAxiLite4DDS__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__module_en));
        vcdp->fullBit(c+9,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__module_en));
        vcdp->fullBit(c+17,(vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_valid));
        vcdp->fullBit(c+25,(vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->fullBit(c+33,(vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire));
        vcdp->fullBus(c+41,(vlTOPp->AxiLite4DDS__DOT__readRsp_data),32);
        vcdp->fullBus(c+49,(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->fullBus(c+57,(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->fullBit(c+65,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1));
        vcdp->fullBit(c+73,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf));
        vcdp->fullBus(c+81,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_mem_port1),24);
        vcdp->fullBus(c+89,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_payload),10);
        vcdp->fullBit(c+97,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf1));
        vcdp->fullBus(c+105,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf1),10);
        vcdp->fullBus(c+113,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf1),24);
        vcdp->fullBus(c+121,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf1),10);
        vcdp->fullBus(c+129,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf1),10);
        vcdp->fullBit(c+137,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf1));
        vcdp->fullBus(c+145,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1),10);
        vcdp->fullBit(c+153,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf));
        vcdp->fullBus(c+161,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_mem_port1),24);
        vcdp->fullBus(c+169,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_payload),10);
        vcdp->fullBit(c+177,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf1));
        vcdp->fullBus(c+185,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf1),10);
        vcdp->fullBus(c+193,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf1),24);
        vcdp->fullBus(c+201,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf1),10);
        vcdp->fullBus(c+209,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf1),10);
        vcdp->fullBit(c+217,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf1));
        vcdp->fullBus(c+225,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1),10);
        vcdp->fullBit(c+233,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf0));
        vcdp->fullBus(c+241,(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor),10);
        vcdp->fullBit(c+249,(((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1) 
                              <= (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor))));
        vcdp->fullBit(c+257,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf0));
        vcdp->fullBus(c+265,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf0),10);
        vcdp->fullBus(c+273,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf0),24);
        vcdp->fullBus(c+281,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf0),10);
        vcdp->fullBus(c+289,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf0),10);
        vcdp->fullBit(c+297,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf0));
        vcdp->fullBus(c+305,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf0),10);
        vcdp->fullBus(c+313,(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor),10);
        vcdp->fullBit(c+321,(((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1) 
                              <= (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor))));
        vcdp->fullBit(c+329,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf0));
        vcdp->fullBus(c+337,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf0),10);
        vcdp->fullBus(c+345,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf0),24);
        vcdp->fullBus(c+353,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf0),10);
        vcdp->fullBus(c+361,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf0),10);
        vcdp->fullBit(c+369,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf0));
        vcdp->fullBus(c+377,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf0),10);
        vcdp->fullBit(c+385,((1U & (~ (IData)(vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->fullBit(c+393,(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid));
        vcdp->fullBit(c+401,((1U & (~ (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->fullBit(c+409,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkI_reg));
        vcdp->fullBit(c+417,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkI_reg));
        vcdp->fullBus(c+425,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkI_reg),10);
        vcdp->fullBus(c+433,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkI_reg),24);
        vcdp->fullBus(c+441,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkI_reg),10);
        vcdp->fullBus(c+449,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkI_reg),10);
        vcdp->fullBit(c+457,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkI_reg));
        vcdp->fullBus(c+465,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkI_reg),10);
        vcdp->fullBit(c+473,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkI_reg));
        vcdp->fullBus(c+481,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkI_reg),10);
        vcdp->fullBus(c+489,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkI_reg),24);
        vcdp->fullBus(c+497,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkI_reg),10);
        vcdp->fullBus(c+505,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkI_reg),10);
        vcdp->fullBit(c+513,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkI_reg));
        vcdp->fullBus(c+521,(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkI_reg),10);
        vcdp->fullBit(c+529,(vlTOPp->AxiLite4DDS__DOT__global_en_driver));
        vcdp->fullBit(c+537,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn));
        vcdp->fullBus(c+545,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_1),10);
        vcdp->fullBus(c+553,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_2),24);
        vcdp->fullBus(c+561,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_2),10);
        vcdp->fullBus(c+569,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_3),10);
        vcdp->fullBit(c+577,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data));
        vcdp->fullBus(c+585,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_1),10);
        vcdp->fullBit(c+593,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_3));
        vcdp->fullBus(c+601,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_4),10);
        vcdp->fullBus(c+609,(vlTOPp->AxiLite4DDS__DOT___zz_dataIn_5),24);
        vcdp->fullBus(c+617,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_6),10);
        vcdp->fullBus(c+625,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_7),10);
        vcdp->fullBit(c+633,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_4));
        vcdp->fullBus(c+641,(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_5),10);
        vcdp->fullBit(c+649,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->fullBit(c+657,(vlTOPp->axil4Ctrl_awready));
        vcdp->fullBus(c+665,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->fullBus(c+673,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->fullBit(c+681,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->fullBit(c+689,(vlTOPp->axil4Ctrl_wready));
        vcdp->fullBus(c+697,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->fullBus(c+705,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->fullBit(c+713,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->fullBit(c+721,(vlTOPp->axil4Ctrl_bready));
        vcdp->fullBus(c+729,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->fullBit(c+737,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->fullBit(c+745,(vlTOPp->axil4Ctrl_arready));
        vcdp->fullBus(c+753,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->fullBus(c+761,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->fullBit(c+769,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->fullBit(c+777,(vlTOPp->axil4Ctrl_rready));
        vcdp->fullBus(c+785,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->fullBus(c+793,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->fullBit(c+801,(vlTOPp->data_0_valid));
        vcdp->fullBus(c+809,(vlTOPp->data_0_payload),24);
        vcdp->fullBit(c+817,(vlTOPp->data_1_valid));
        vcdp->fullBus(c+825,(vlTOPp->data_1_payload),24);
        vcdp->fullBit(c+833,(vlTOPp->phase_0_valid));
        vcdp->fullBus(c+841,(vlTOPp->phase_0_payload),10);
        vcdp->fullBit(c+849,(vlTOPp->phase_1_valid));
        vcdp->fullBus(c+857,(vlTOPp->phase_1_payload),10);
        vcdp->fullBit(c+865,(vlTOPp->rf_clk));
        vcdp->fullBit(c+873,(vlTOPp->rf_resetn));
        vcdp->fullBit(c+881,(vlTOPp->clk));
        vcdp->fullBit(c+889,(vlTOPp->reset));
        vcdp->fullBit(c+897,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->fullBit(c+905,(0U));
        vcdp->fullBus(c+913,(0U),2);
    }
}
