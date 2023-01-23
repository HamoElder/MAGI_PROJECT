// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTX__Syms.h"


//======================

void VTX::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTX::traceInit, &VTX::traceFull, &VTX::traceChg, this);
}
void VTX::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTX* t = (VTX*)userthis;
    VTX__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTX::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTX* t = (VTX*)userthis;
    VTX__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTX::traceInitThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
        vlTOPp->traceInitThis__3(vlSymsp, vcdp, code);
    }
}

void VTX::traceFullThis(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__11(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__18(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__26(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTX::traceInitThis__1(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+4361,"raw_data_valid", false,-1);
        vcdp->declBit(c+4369,"raw_data_ready", false,-1);
        vcdp->declBit(c+4377,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+4385,"raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4393,"result_data_valid", false,-1);
        vcdp->declBit(c+4401,"result_data_ready", false,-1);
        vcdp->declBit(c+4409,"result_data_payload_last", false,-1);
        vcdp->declBus(c+4417,"result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4425,"block_msg_ctrl_valid", false,-1);
        vcdp->declBit(c+4433,"block_msg_ctrl_ready", false,-1);
        vcdp->declBus(c+4441,"block_msg_ctrl_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+4449,"block_msg_ctrl_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+4457,"block_msg_ctrl_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+4465,"clk", false,-1);
        vcdp->declBit(c+4473,"reset", false,-1);
        vcdp->declBit(c+4361,"TX raw_data_valid", false,-1);
        vcdp->declBit(c+4369,"TX raw_data_ready", false,-1);
        vcdp->declBit(c+4377,"TX raw_data_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4393,"TX result_data_valid", false,-1);
        vcdp->declBit(c+4401,"TX result_data_ready", false,-1);
        vcdp->declBit(c+4409,"TX result_data_payload_last", false,-1);
        vcdp->declBus(c+4417,"TX result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4425,"TX block_msg_ctrl_valid", false,-1);
        vcdp->declBit(c+4433,"TX block_msg_ctrl_ready", false,-1);
        vcdp->declBus(c+4441,"TX block_msg_ctrl_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+4449,"TX block_msg_ctrl_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+4457,"TX block_msg_ctrl_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+4465,"TX clk", false,-1);
        vcdp->declBit(c+4473,"TX reset", false,-1);
        vcdp->declBus(c+4569,"TX PhysicalChannel_PBCH", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX PhysicalChannel_PCCH", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX PhysicalChannel_PTCH", false,-1, 1,0);
        vcdp->declBus(c+4593,"TX ChannelCodingMethod_Turbo", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX ChannelCodingMethod_TailedConvolutional", false,-1, 0,0);
        vcdp->declBit(c+321,"TX tx_crc_extender_raw_data_ready", false,-1);
        vcdp->declBit(c+1249,"TX tx_crc_extender_result_data_valid", false,-1);
        vcdp->declBit(c+329,"TX tx_crc_extender_result_data_payload_last", false,-1);
        vcdp->declBus(c+4481,"TX tx_crc_extender_result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+337,"TX tx_crc_extender_block_msg_ctrl_in_ready", false,-1);
        vcdp->declBit(c+2969,"TX tx_crc_extender_block_msg_ctrl_out_valid", false,-1);
        vcdp->declBus(c+2137,"TX tx_crc_extender_block_msg_ctrl_out_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+2145,"TX tx_crc_extender_block_msg_ctrl_out_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+2153,"TX tx_crc_extender_block_msg_ctrl_out_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+345,"TX code_block_segment_raw_data_ready", false,-1);
        vcdp->declBit(c+1393,"TX code_block_segment_result_data_valid", false,-1);
        vcdp->declBit(c+1401,"TX code_block_segment_result_data_payload_last", false,-1);
        vcdp->declBus(c+305,"TX code_block_segment_result_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+353,"TX code_block_segment_block_msg_ready", false,-1);
        vcdp->declBit(c+3625,"TX code_block_segment_segment_msg_valid", false,-1);
        vcdp->declBus(c+2953,"TX code_block_segment_segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+1113,"TX code_block_segment_segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+361,"TX channel_code_raw_data_ready", false,-1);
        vcdp->declBit(c+369,"TX channel_code_segment_msg_ready", false,-1);
        vcdp->declBit(c+1409,"TX channel_code_result_data_valid", false,-1);
        vcdp->declBit(c+1417,"TX channel_code_result_data_payload_last", false,-1);
        vcdp->declBus(c+2961,"TX channel_code_result_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+4297,"TX channel_code_coded_msg_valid", false,-1);
        vcdp->declBus(c+3641,"TX channel_code_coded_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2161,"TX channel_code_coded_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+2977,"TX rate_match_raw_data_ready", false,-1);
        vcdp->declBit(c+2985,"TX rate_match_segment_length_ready", false,-1);
        vcdp->declBit(c+377,"TX rate_match_result_data_valid", false,-1);
        vcdp->declBit(c+3649,"TX rate_match_result_data_payload_last", false,-1);
        vcdp->declBus(c+2929,"TX rate_match_result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBus(c+4489,"TX block_msg_ctrl_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declBit(c+4361,"TX tx_crc_extender raw_data_valid", false,-1);
        vcdp->declBit(c+321,"TX tx_crc_extender raw_data_ready", false,-1);
        vcdp->declBit(c+4377,"TX tx_crc_extender raw_data_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1249,"TX tx_crc_extender result_data_valid", false,-1);
        vcdp->declBit(c+345,"TX tx_crc_extender result_data_ready", false,-1);
        vcdp->declBit(c+329,"TX tx_crc_extender result_data_payload_last", false,-1);
        vcdp->declBus(c+4481,"TX tx_crc_extender result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4425,"TX tx_crc_extender block_msg_ctrl_in_valid", false,-1);
        vcdp->declBit(c+337,"TX tx_crc_extender block_msg_ctrl_in_ready", false,-1);
        vcdp->declBus(c+4441,"TX tx_crc_extender block_msg_ctrl_in_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+4449,"TX tx_crc_extender block_msg_ctrl_in_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+4457,"TX tx_crc_extender block_msg_ctrl_in_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+2969,"TX tx_crc_extender block_msg_ctrl_out_valid", false,-1);
        vcdp->declBit(c+353,"TX tx_crc_extender block_msg_ctrl_out_ready", false,-1);
        vcdp->declBus(c+2137,"TX tx_crc_extender block_msg_ctrl_out_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+2145,"TX tx_crc_extender block_msg_ctrl_out_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+2153,"TX tx_crc_extender block_msg_ctrl_out_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+4465,"TX tx_crc_extender clk", false,-1);
        vcdp->declBit(c+4473,"TX tx_crc_extender reset", false,-1);
        vcdp->declBus(c+4569,"TX tx_crc_extender PhysicalChannel_PBCH", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX tx_crc_extender PhysicalChannel_PCCH", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX tx_crc_extender PhysicalChannel_PTCH", false,-1, 1,0);
        vcdp->declBus(c+2169,"TX tx_crc_extender streamDemux_4_io_select", false,-1, 0,0);
        vcdp->declBit(c+1257,"TX tx_crc_extender streamDemux_4_io_input_valid", false,-1);
        vcdp->declBus(c+2169,"TX tx_crc_extender streamMux_3_io_select", false,-1, 0,0);
        vcdp->declBit(c+385,"TX tx_crc_extender crc24a_core_raw_data_ready", false,-1);
        vcdp->declBit(c+1265,"TX tx_crc_extender crc24a_core_result_data_valid", false,-1);
        vcdp->declBit(c+393,"TX tx_crc_extender crc24a_core_result_data_payload_last", false,-1);
        vcdp->declBus(c+4497,"TX tx_crc_extender crc24a_core_result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+401,"TX tx_crc_extender crc16_core_raw_data_ready", false,-1);
        vcdp->declBit(c+1273,"TX tx_crc_extender crc16_core_result_data_valid", false,-1);
        vcdp->declBit(c+409,"TX tx_crc_extender crc16_core_result_data_payload_last", false,-1);
        vcdp->declBus(c+4505,"TX tx_crc_extender crc16_core_result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+417,"TX tx_crc_extender streamDemux_4_io_input_ready", false,-1);
        vcdp->declBit(c+1281,"TX tx_crc_extender streamDemux_4_io_outputs_0_valid", false,-1);
        vcdp->declBit(c+4377,"TX tx_crc_extender streamDemux_4_io_outputs_0_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender streamDemux_4_io_outputs_0_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1289,"TX tx_crc_extender streamDemux_4_io_outputs_1_valid", false,-1);
        vcdp->declBit(c+4377,"TX tx_crc_extender streamDemux_4_io_outputs_1_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender streamDemux_4_io_outputs_1_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+425,"TX tx_crc_extender streamMux_3_io_inputs_0_ready", false,-1);
        vcdp->declBit(c+433,"TX tx_crc_extender streamMux_3_io_inputs_1_ready", false,-1);
        vcdp->declBit(c+1249,"TX tx_crc_extender streamMux_3_io_output_valid", false,-1);
        vcdp->declBit(c+329,"TX tx_crc_extender streamMux_3_io_output_payload_last", false,-1);
        vcdp->declBus(c+4481,"TX tx_crc_extender streamMux_3_io_output_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2993,"TX tx_crc_extender ctrl_in_enable", false,-1);
        vcdp->declBus(c+2137,"TX tx_crc_extender message_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+2145,"TX tx_crc_extender message_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+2153,"TX tx_crc_extender message_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+2969,"TX tx_crc_extender ctrl_out_valid", false,-1);
        vcdp->declBit(c+1297,"TX tx_crc_extender block_msg_ctrl_in_fire", false,-1);
        vcdp->declBit(c+865,"TX tx_crc_extender result_data_fire", false,-1);
        vcdp->declBit(c+873,"TX tx_crc_extender when_PhyTX_l108", false,-1);
        vcdp->declBit(c+441,"TX tx_crc_extender block_msg_ctrl_out_fire", false,-1);
        vcdp->declBit(c+2169,"TX tx_crc_extender path_sel", false,-1);
        vcdp->declBit(c+3001,"TX tx_crc_extender crc_raw_halt", false,-1);
        vcdp->declBit(c+441,"TX tx_crc_extender block_msg_ctrl_out_fire_1", false,-1);
        vcdp->declBit(c+4513,"TX tx_crc_extender raw_data_fire", false,-1);
        vcdp->declBit(c+4521,"TX tx_crc_extender when_PhyTX_l124", false,-1);
        vcdp->declBus(c+4489,"TX tx_crc_extender block_msg_ctrl_in_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declBus(c+2177,"TX tx_crc_extender block_msg_ctrl_out_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declBus(c+2177,"TX tx_crc_extender message_pkg_type_string", false,-1, 31,0);
        vcdp->declBit(c+1281,"TX tx_crc_extender crc24a_core raw_data_valid", false,-1);
        vcdp->declBit(c+385,"TX tx_crc_extender crc24a_core raw_data_ready", false,-1);
        vcdp->declBit(c+4377,"TX tx_crc_extender crc24a_core raw_data_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender crc24a_core raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1265,"TX tx_crc_extender crc24a_core result_data_valid", false,-1);
        vcdp->declBit(c+425,"TX tx_crc_extender crc24a_core result_data_ready", false,-1);
        vcdp->declBit(c+393,"TX tx_crc_extender crc24a_core result_data_payload_last", false,-1);
        vcdp->declBus(c+4497,"TX tx_crc_extender crc24a_core result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4465,"TX tx_crc_extender crc24a_core clk", false,-1);
        vcdp->declBit(c+4473,"TX tx_crc_extender crc24a_core reset", false,-1);
        vcdp->declBit(c+881,"TX tx_crc_extender crc24a_core crc_core_flush", false,-1);
        vcdp->declBus(c+3009,"TX tx_crc_extender crc24a_core crc_core_result", false,-1, 23,0);
        vcdp->declBus(c+4529,"TX tx_crc_extender crc24a_core crc_core_resultNext", false,-1, 23,0);
        vcdp->declBit(c+3017,"TX tx_crc_extender crc24a_core emitCrc", false,-1);
        vcdp->declBit(c+889,"TX tx_crc_extender crc24a_core raw_data_fire", false,-1);
        vcdp->declBit(c+4537,"TX tx_crc_extender crc24a_core when_PhyTX_l47", false,-1);
        vcdp->declBit(c+897,"TX tx_crc_extender crc24a_core result_data_fire", false,-1);
        vcdp->declBit(c+881,"TX tx_crc_extender crc24a_core when_PhyTX_l47_1", false,-1);
        vcdp->declBus(c+3025,"TX tx_crc_extender crc24a_core counter", false,-1, 4,0);
        vcdp->declBit(c+889,"TX tx_crc_extender crc24a_core raw_data_fire_1", false,-1);
        vcdp->declBit(c+897,"TX tx_crc_extender crc24a_core result_data_fire_1", false,-1);
        vcdp->declBit(c+3033,"TX tx_crc_extender crc24a_core when_PhyTX_l57", false,-1);
        vcdp->declBit(c+3041,"TX tx_crc_extender crc24a_core when_PhyTX_l69", false,-1);
        vcdp->declBit(c+881,"TX tx_crc_extender crc24a_core crc_core flush", false,-1);
        vcdp->declBit(c+889,"TX tx_crc_extender crc24a_core crc_core input_valid", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender crc24a_core crc_core input_payload", false,-1, 0,0);
        vcdp->declBus(c+3009,"TX tx_crc_extender crc24a_core crc_core result", false,-1, 23,0);
        vcdp->declBus(c+4529,"TX tx_crc_extender crc24a_core crc_core resultNext", false,-1, 23,0);
        vcdp->declBit(c+4465,"TX tx_crc_extender crc24a_core crc_core clk", false,-1);
        vcdp->declBit(c+4473,"TX tx_crc_extender crc24a_core crc_core reset", false,-1);
        vcdp->declBus(c+4529,"TX tx_crc_extender crc24a_core crc_core state_1", false,-1, 23,0);
        vcdp->declBus(c+3009,"TX tx_crc_extender crc24a_core crc_core state", false,-1, 23,0);
        vcdp->declBus(c+3009,"TX tx_crc_extender crc24a_core crc_core stateXor", false,-1, 23,0);
        vcdp->declBus(c+4529,"TX tx_crc_extender crc24a_core crc_core accXor", false,-1, 23,0);
        vcdp->declBit(c+1289,"TX tx_crc_extender crc16_core raw_data_valid", false,-1);
        vcdp->declBit(c+401,"TX tx_crc_extender crc16_core raw_data_ready", false,-1);
        vcdp->declBit(c+4377,"TX tx_crc_extender crc16_core raw_data_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender crc16_core raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1273,"TX tx_crc_extender crc16_core result_data_valid", false,-1);
        vcdp->declBit(c+433,"TX tx_crc_extender crc16_core result_data_ready", false,-1);
        vcdp->declBit(c+409,"TX tx_crc_extender crc16_core result_data_payload_last", false,-1);
        vcdp->declBus(c+4505,"TX tx_crc_extender crc16_core result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4465,"TX tx_crc_extender crc16_core clk", false,-1);
        vcdp->declBit(c+4473,"TX tx_crc_extender crc16_core reset", false,-1);
        vcdp->declBit(c+905,"TX tx_crc_extender crc16_core crc_core_flush", false,-1);
        vcdp->declBus(c+3049,"TX tx_crc_extender crc16_core crc_core_result", false,-1, 15,0);
        vcdp->declBus(c+4545,"TX tx_crc_extender crc16_core crc_core_resultNext", false,-1, 15,0);
        vcdp->declBit(c+3057,"TX tx_crc_extender crc16_core emitCrc", false,-1);
        vcdp->declBit(c+913,"TX tx_crc_extender crc16_core raw_data_fire", false,-1);
        vcdp->declBit(c+4553,"TX tx_crc_extender crc16_core when_PhyTX_l47", false,-1);
        vcdp->declBit(c+921,"TX tx_crc_extender crc16_core result_data_fire", false,-1);
        vcdp->declBit(c+905,"TX tx_crc_extender crc16_core when_PhyTX_l47_1", false,-1);
        vcdp->declBus(c+3065,"TX tx_crc_extender crc16_core counter", false,-1, 3,0);
        vcdp->declBit(c+913,"TX tx_crc_extender crc16_core raw_data_fire_1", false,-1);
        vcdp->declBit(c+921,"TX tx_crc_extender crc16_core result_data_fire_1", false,-1);
        vcdp->declBit(c+3073,"TX tx_crc_extender crc16_core when_PhyTX_l57", false,-1);
        vcdp->declBit(c+3081,"TX tx_crc_extender crc16_core when_PhyTX_l69", false,-1);
        vcdp->declBit(c+905,"TX tx_crc_extender crc16_core crc_core flush", false,-1);
        vcdp->declBit(c+913,"TX tx_crc_extender crc16_core crc_core input_valid", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender crc16_core crc_core input_payload", false,-1, 0,0);
        vcdp->declBus(c+3049,"TX tx_crc_extender crc16_core crc_core result", false,-1, 15,0);
        vcdp->declBus(c+4545,"TX tx_crc_extender crc16_core crc_core resultNext", false,-1, 15,0);
        vcdp->declBit(c+4465,"TX tx_crc_extender crc16_core crc_core clk", false,-1);
        vcdp->declBit(c+4473,"TX tx_crc_extender crc16_core crc_core reset", false,-1);
        vcdp->declBus(c+4545,"TX tx_crc_extender crc16_core crc_core state_1", false,-1, 15,0);
        vcdp->declBus(c+3049,"TX tx_crc_extender crc16_core crc_core state", false,-1, 15,0);
        vcdp->declBus(c+3049,"TX tx_crc_extender crc16_core crc_core stateXor", false,-1, 15,0);
        vcdp->declBus(c+4545,"TX tx_crc_extender crc16_core crc_core accXor", false,-1, 15,0);
        vcdp->declBus(c+2169,"TX tx_crc_extender streamDemux_4 io_select", false,-1, 0,0);
        vcdp->declBit(c+1257,"TX tx_crc_extender streamDemux_4 io_input_valid", false,-1);
        vcdp->declBit(c+417,"TX tx_crc_extender streamDemux_4 io_input_ready", false,-1);
        vcdp->declBit(c+4377,"TX tx_crc_extender streamDemux_4 io_input_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender streamDemux_4 io_input_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1281,"TX tx_crc_extender streamDemux_4 io_outputs_0_valid", false,-1);
        vcdp->declBit(c+385,"TX tx_crc_extender streamDemux_4 io_outputs_0_ready", false,-1);
        vcdp->declBit(c+4377,"TX tx_crc_extender streamDemux_4 io_outputs_0_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender streamDemux_4 io_outputs_0_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1289,"TX tx_crc_extender streamDemux_4 io_outputs_1_valid", false,-1);
        vcdp->declBit(c+401,"TX tx_crc_extender streamDemux_4 io_outputs_1_ready", false,-1);
        vcdp->declBit(c+4377,"TX tx_crc_extender streamDemux_4 io_outputs_1_payload_last", false,-1);
        vcdp->declBus(c+4385,"TX tx_crc_extender streamDemux_4 io_outputs_1_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+2169,"TX tx_crc_extender streamDemux_4 when_Stream_l908", false,-1);
        vcdp->declBit(c+2185,"TX tx_crc_extender streamDemux_4 when_Stream_l908_1", false,-1);
        vcdp->declBus(c+2169,"TX tx_crc_extender streamMux_3 io_select", false,-1, 0,0);
        vcdp->declBit(c+1265,"TX tx_crc_extender streamMux_3 io_inputs_0_valid", false,-1);
        vcdp->declBit(c+425,"TX tx_crc_extender streamMux_3 io_inputs_0_ready", false,-1);
        vcdp->declBit(c+393,"TX tx_crc_extender streamMux_3 io_inputs_0_payload_last", false,-1);
        vcdp->declBus(c+4497,"TX tx_crc_extender streamMux_3 io_inputs_0_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1273,"TX tx_crc_extender streamMux_3 io_inputs_1_valid", false,-1);
        vcdp->declBit(c+433,"TX tx_crc_extender streamMux_3 io_inputs_1_ready", false,-1);
        vcdp->declBit(c+409,"TX tx_crc_extender streamMux_3 io_inputs_1_payload_last", false,-1);
        vcdp->declBus(c+4505,"TX tx_crc_extender streamMux_3 io_inputs_1_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1249,"TX tx_crc_extender streamMux_3 io_output_valid", false,-1);
        vcdp->declBit(c+345,"TX tx_crc_extender streamMux_3 io_output_ready", false,-1);
        vcdp->declBit(c+329,"TX tx_crc_extender streamMux_3 io_output_payload_last", false,-1);
        vcdp->declBus(c+4481,"TX tx_crc_extender streamMux_3 io_output_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1249,"TX code_block_segment raw_data_valid", false,-1);
        vcdp->declBit(c+345,"TX code_block_segment raw_data_ready", false,-1);
        vcdp->declBit(c+329,"TX code_block_segment raw_data_payload_last", false,-1);
        vcdp->declBus(c+4481,"TX code_block_segment raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1393,"TX code_block_segment result_data_valid", false,-1);
        vcdp->declBit(c+361,"TX code_block_segment result_data_ready", false,-1);
        vcdp->declBit(c+1401,"TX code_block_segment result_data_payload_last", false,-1);
        vcdp->declBus(c+305,"TX code_block_segment result_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+2969,"TX code_block_segment block_msg_valid", false,-1);
        vcdp->declBit(c+353,"TX code_block_segment block_msg_ready", false,-1);
        vcdp->declBus(c+2137,"TX code_block_segment block_msg_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+2145,"TX code_block_segment block_msg_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+2153,"TX code_block_segment block_msg_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+3625,"TX code_block_segment segment_msg_valid", false,-1);
        vcdp->declBit(c+369,"TX code_block_segment segment_msg_ready", false,-1);
        vcdp->declBus(c+2953,"TX code_block_segment segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+1113,"TX code_block_segment segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+4465,"TX code_block_segment clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment reset", false,-1);
        vcdp->declBus(c+4569,"TX code_block_segment PhysicalChannel_PBCH", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX code_block_segment PhysicalChannel_PCCH", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX code_block_segment PhysicalChannel_PTCH", false,-1, 1,0);
        vcdp->declBus(c+4593,"TX code_block_segment ChannelCodingMethod_Turbo", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX code_block_segment ChannelCodingMethod_TailedConvolutional", false,-1, 0,0);
        vcdp->declBus(c+4593,"TX code_block_segment BlockSegmentStatus_IDLE", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX code_block_segment BlockSegmentStatus_BYPASS", false,-1, 0,0);
        vcdp->declBit(c+1425,"TX code_block_segment data_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+1433,"TX code_block_segment msg_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+1441,"TX code_block_segment streamDemux_4_io_input_valid", false,-1);
        vcdp->declBit(c+1449,"TX code_block_segment streamDemux_5_io_input_valid", false,-1);
        vcdp->declBit(c+345,"TX code_block_segment data_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+449,"TX code_block_segment data_fifo_io_pop_valid", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment data_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment data_fifo_io_pop_payload_fragment", false,-1, 0,0);
        vcdp->declBus(c+457,"TX code_block_segment data_fifo_io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+465,"TX code_block_segment data_fifo_io_availability", false,-1, 4,0);
        vcdp->declBit(c+353,"TX code_block_segment msg_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+1457,"TX code_block_segment msg_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment msg_fifo_io_pop_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment msg_fifo_io_pop_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment msg_fifo_io_pop_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBus(c+473,"TX code_block_segment msg_fifo_io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+481,"TX code_block_segment msg_fifo_io_availability", false,-1, 2,0);
        vcdp->declBit(c+3089,"TX code_block_segment broadcast_channel_segment_raw_data_ready", false,-1);
        vcdp->declBit(c+1465,"TX code_block_segment broadcast_channel_segment_block_msg_ready", false,-1);
        vcdp->declBit(c+1473,"TX code_block_segment broadcast_channel_segment_result_data_valid", false,-1);
        vcdp->declBit(c+489,"TX code_block_segment broadcast_channel_segment_result_data_payload_last", false,-1);
        vcdp->declBus(c+2937,"TX code_block_segment broadcast_channel_segment_result_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+3097,"TX code_block_segment broadcast_channel_segment_segment_msg_valid", false,-1);
        vcdp->declBus(c+2209,"TX code_block_segment broadcast_channel_segment_segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2217,"TX code_block_segment broadcast_channel_segment_segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+4609,"TX code_block_segment broadcast_channel_segment_is_last_block", false,-1);
        vcdp->declBit(c+3105,"TX code_block_segment control_channel_segment_raw_data_ready", false,-1);
        vcdp->declBit(c+1481,"TX code_block_segment control_channel_segment_block_msg_ready", false,-1);
        vcdp->declBit(c+1489,"TX code_block_segment control_channel_segment_result_data_valid", false,-1);
        vcdp->declBit(c+497,"TX code_block_segment control_channel_segment_result_data_payload_last", false,-1);
        vcdp->declBus(c+1497,"TX code_block_segment control_channel_segment_result_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+3113,"TX code_block_segment control_channel_segment_segment_msg_valid", false,-1);
        vcdp->declBus(c+3681,"TX code_block_segment control_channel_segment_segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2225,"TX code_block_segment control_channel_segment_segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+4609,"TX code_block_segment control_channel_segment_is_last_block", false,-1);
        vcdp->declBit(c+1177,"TX code_block_segment shared_channel_segment_raw_data_ready", false,-1);
        vcdp->declBit(c+1505,"TX code_block_segment shared_channel_segment_block_msg_ready", false,-1);
        vcdp->declBit(c+1513,"TX code_block_segment shared_channel_segment_result_data_valid", false,-1);
        vcdp->declBit(c+1521,"TX code_block_segment shared_channel_segment_result_data_payload_last", false,-1);
        vcdp->declBus(c+1529,"TX code_block_segment shared_channel_segment_result_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+4305,"TX code_block_segment shared_channel_segment_segment_msg_valid", false,-1);
        vcdp->declBus(c+2233,"TX code_block_segment shared_channel_segment_segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2241,"TX code_block_segment shared_channel_segment_segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+1121,"TX code_block_segment shared_channel_segment_is_last_block", false,-1);
        vcdp->declBit(c+1537,"TX code_block_segment streamDemux_4_io_input_ready", false,-1);
        vcdp->declBit(c+1185,"TX code_block_segment streamDemux_4_io_outputs_0_valid", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment streamDemux_4_io_outputs_0_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment streamDemux_4_io_outputs_0_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1545,"TX code_block_segment streamDemux_4_io_outputs_1_valid", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment streamDemux_4_io_outputs_1_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment streamDemux_4_io_outputs_1_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1193,"TX code_block_segment streamDemux_4_io_outputs_2_valid", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment streamDemux_4_io_outputs_2_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment streamDemux_4_io_outputs_2_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1553,"TX code_block_segment streamDemux_5_io_input_ready", false,-1);
        vcdp->declBit(c+1201,"TX code_block_segment streamDemux_5_io_outputs_0_valid", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment streamDemux_5_io_outputs_0_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment streamDemux_5_io_outputs_0_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment streamDemux_5_io_outputs_0_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1209,"TX code_block_segment streamDemux_5_io_outputs_1_valid", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment streamDemux_5_io_outputs_1_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment streamDemux_5_io_outputs_1_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment streamDemux_5_io_outputs_1_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1217,"TX code_block_segment streamDemux_5_io_outputs_2_valid", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment streamDemux_5_io_outputs_2_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment streamDemux_5_io_outputs_2_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment streamDemux_5_io_outputs_2_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1561,"TX code_block_segment streamMux_3_io_inputs_0_ready", false,-1);
        vcdp->declBit(c+1569,"TX code_block_segment streamMux_3_io_inputs_1_ready", false,-1);
        vcdp->declBit(c+1577,"TX code_block_segment streamMux_3_io_inputs_2_ready", false,-1);
        vcdp->declBit(c+1393,"TX code_block_segment streamMux_3_io_output_valid", false,-1);
        vcdp->declBit(c+1401,"TX code_block_segment streamMux_3_io_output_payload_last", false,-1);
        vcdp->declBus(c+305,"TX code_block_segment streamMux_3_io_output_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+1585,"TX code_block_segment streamMux_4_io_inputs_0_ready", false,-1);
        vcdp->declBit(c+1593,"TX code_block_segment streamMux_4_io_inputs_1_ready", false,-1);
        vcdp->declBit(c+1601,"TX code_block_segment streamMux_4_io_inputs_2_ready", false,-1);
        vcdp->declBit(c+3625,"TX code_block_segment streamMux_4_io_output_valid", false,-1);
        vcdp->declBus(c+2953,"TX code_block_segment streamMux_4_io_output_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+1113,"TX code_block_segment streamMux_4_io_output_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBus(c+3689,"TX code_block_segment sel_cha", false,-1, 1,0);
        vcdp->declBus(c+1129,"TX code_block_segment finish_indicator", false,-1, 3,0);
        vcdp->declBus(c+4313,"TX code_block_segment state", false,-1, 0,0);
        vcdp->declBit(c+961,"TX code_block_segment result_data_fire", false,-1);
        vcdp->declBit(c+841,"TX code_block_segment when_PhyTX_l576", false,-1);
        vcdp->declBus(c+2177,"TX code_block_segment block_msg_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declArray(c+1137,"TX code_block_segment segment_msg_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declQuad(c+4321,"TX code_block_segment state_string", false,-1, 47,0);
        vcdp->declBit(c+1249,"TX code_block_segment data_fifo io_push_valid", false,-1);
        vcdp->declBit(c+345,"TX code_block_segment data_fifo io_push_ready", false,-1);
        vcdp->declBit(c+329,"TX code_block_segment data_fifo io_push_payload_last", false,-1);
        vcdp->declBus(c+4481,"TX code_block_segment data_fifo io_push_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+449,"TX code_block_segment data_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+1425,"TX code_block_segment data_fifo io_pop_ready", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment data_fifo io_pop_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment data_fifo io_pop_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4617,"TX code_block_segment data_fifo io_flush", false,-1);
        vcdp->declBus(c+457,"TX code_block_segment data_fifo io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+465,"TX code_block_segment data_fifo io_availability", false,-1, 4,0);
        vcdp->declBit(c+4465,"TX code_block_segment data_fifo clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment data_fifo reset", false,-1);
        vcdp->declBit(c+1305,"TX code_block_segment data_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX code_block_segment data_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+1313,"TX code_block_segment data_fifo logic_pushPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+3121,"TX code_block_segment data_fifo logic_pushPtr_value", false,-1, 3,0);
        vcdp->declBit(c+3129,"TX code_block_segment data_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+929,"TX code_block_segment data_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1609,"TX code_block_segment data_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX code_block_segment data_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1617,"TX code_block_segment data_fifo logic_popPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+3137,"TX code_block_segment data_fifo logic_popPtr_value", false,-1, 3,0);
        vcdp->declBit(c+3145,"TX code_block_segment data_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+969,"TX code_block_segment data_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+505,"TX code_block_segment data_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+3153,"TX code_block_segment data_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+1321,"TX code_block_segment data_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1625,"TX code_block_segment data_fifo logic_popping", false,-1);
        vcdp->declBit(c+513,"TX code_block_segment data_fifo logic_empty", false,-1);
        vcdp->declBit(c+521,"TX code_block_segment data_fifo logic_full", false,-1);
        vcdp->declBit(c+1385,"TX code_block_segment data_fifo when_Stream_l1101", false,-1);
        vcdp->declBus(c+3161,"TX code_block_segment data_fifo logic_ptrDif", false,-1, 3,0);
        {int i; for (i=0; i<16; i++) {
                vcdp->declBus(c+2249+i*1,"TX code_block_segment data_fifo logic_ram", true,(i+0), 1,0);}}
        vcdp->declBit(c+2969,"TX code_block_segment msg_fifo io_push_valid", false,-1);
        vcdp->declBit(c+353,"TX code_block_segment msg_fifo io_push_ready", false,-1);
        vcdp->declBus(c+2137,"TX code_block_segment msg_fifo io_push_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+2145,"TX code_block_segment msg_fifo io_push_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+2153,"TX code_block_segment msg_fifo io_push_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1457,"TX code_block_segment msg_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+1433,"TX code_block_segment msg_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment msg_fifo io_pop_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment msg_fifo io_pop_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment msg_fifo io_pop_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+4617,"TX code_block_segment msg_fifo io_flush", false,-1);
        vcdp->declBus(c+473,"TX code_block_segment msg_fifo io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+481,"TX code_block_segment msg_fifo io_availability", false,-1, 2,0);
        vcdp->declBit(c+4465,"TX code_block_segment msg_fifo clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment msg_fifo reset", false,-1);
        vcdp->declBus(c+4569,"TX code_block_segment msg_fifo PhysicalChannel_PBCH", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX code_block_segment msg_fifo PhysicalChannel_PCCH", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX code_block_segment msg_fifo PhysicalChannel_PTCH", false,-1, 1,0);
        vcdp->declBit(c+529,"TX code_block_segment msg_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX code_block_segment msg_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+537,"TX code_block_segment msg_fifo logic_pushPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+3169,"TX code_block_segment msg_fifo logic_pushPtr_value", false,-1, 1,0);
        vcdp->declBit(c+3177,"TX code_block_segment msg_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+545,"TX code_block_segment msg_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1633,"TX code_block_segment msg_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX code_block_segment msg_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1641,"TX code_block_segment msg_fifo logic_popPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+3185,"TX code_block_segment msg_fifo logic_popPtr_value", false,-1, 1,0);
        vcdp->declBit(c+3193,"TX code_block_segment msg_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+977,"TX code_block_segment msg_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+553,"TX code_block_segment msg_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+3201,"TX code_block_segment msg_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+561,"TX code_block_segment msg_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1649,"TX code_block_segment msg_fifo logic_popping", false,-1);
        vcdp->declBit(c+569,"TX code_block_segment msg_fifo logic_empty", false,-1);
        vcdp->declBit(c+577,"TX code_block_segment msg_fifo logic_full", false,-1);
        vcdp->declBit(c+985,"TX code_block_segment msg_fifo when_Stream_l1101", false,-1);
        vcdp->declBus(c+3209,"TX code_block_segment msg_fifo logic_ptrDif", false,-1, 1,0);
        vcdp->declBus(c+2177,"TX code_block_segment msg_fifo io_push_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declBus(c+3697,"TX code_block_segment msg_fifo io_pop_payload_pkg_type_string", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declQuad(c+3705+i*2,"TX code_block_segment msg_fifo logic_ram", true,(i+0), 37,0);}}
        vcdp->declBit(c+1185,"TX code_block_segment broadcast_channel_segment raw_data_valid", false,-1);
        vcdp->declBit(c+3089,"TX code_block_segment broadcast_channel_segment raw_data_ready", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment broadcast_channel_segment raw_data_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment broadcast_channel_segment raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1201,"TX code_block_segment broadcast_channel_segment block_msg_valid", false,-1);
        vcdp->declBit(c+1465,"TX code_block_segment broadcast_channel_segment block_msg_ready", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment broadcast_channel_segment block_msg_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment broadcast_channel_segment block_msg_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment broadcast_channel_segment block_msg_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1473,"TX code_block_segment broadcast_channel_segment result_data_valid", false,-1);
        vcdp->declBit(c+1561,"TX code_block_segment broadcast_channel_segment result_data_ready", false,-1);
        vcdp->declBit(c+489,"TX code_block_segment broadcast_channel_segment result_data_payload_last", false,-1);
        vcdp->declBus(c+2937,"TX code_block_segment broadcast_channel_segment result_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+3097,"TX code_block_segment broadcast_channel_segment segment_msg_valid", false,-1);
        vcdp->declBit(c+1585,"TX code_block_segment broadcast_channel_segment segment_msg_ready", false,-1);
        vcdp->declBus(c+2209,"TX code_block_segment broadcast_channel_segment segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2217,"TX code_block_segment broadcast_channel_segment segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+4609,"TX code_block_segment broadcast_channel_segment is_last_block", false,-1);
        vcdp->declBit(c+4465,"TX code_block_segment broadcast_channel_segment clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment broadcast_channel_segment reset", false,-1);
        vcdp->declBus(c+4569,"TX code_block_segment broadcast_channel_segment PhysicalChannel_PBCH", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX code_block_segment broadcast_channel_segment PhysicalChannel_PCCH", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX code_block_segment broadcast_channel_segment PhysicalChannel_PTCH", false,-1, 1,0);
        vcdp->declBus(c+4593,"TX code_block_segment broadcast_channel_segment ChannelCodingMethod_Turbo", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX code_block_segment broadcast_channel_segment ChannelCodingMethod_TailedConvolutional", false,-1, 0,0);
        vcdp->declBus(c+4569,"TX code_block_segment broadcast_channel_segment PBCHCrcAttachmentStatus_IDLE", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX code_block_segment broadcast_channel_segment PBCHCrcAttachmentStatus_CTRL_EMIT", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX code_block_segment broadcast_channel_segment PBCHCrcAttachmentStatus_ZERO_PADDING", false,-1, 1,0);
        vcdp->declBus(c+4625,"TX code_block_segment broadcast_channel_segment PBCHCrcAttachmentStatus_BYPASS", false,-1, 1,0);
        vcdp->declBus(c+3217,"TX code_block_segment broadcast_channel_segment state", false,-1, 1,0);
        vcdp->declBus(c+2209,"TX code_block_segment broadcast_channel_segment segment_message_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2217,"TX code_block_segment broadcast_channel_segment segment_message_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+3225,"TX code_block_segment broadcast_channel_segment block_msg_enable", false,-1);
        vcdp->declBus(c+3233,"TX code_block_segment broadcast_channel_segment zero_padding_cnt", false,-1, 12,0);
        vcdp->declBit(c+1657,"TX code_block_segment broadcast_channel_segment block_msg_fire", false,-1);
        vcdp->declBit(c+3769,"TX code_block_segment broadcast_channel_segment when_PhyTX_l159", false,-1);
        vcdp->declBit(c+993,"TX code_block_segment broadcast_channel_segment segment_msg_fire", false,-1);
        vcdp->declBit(c+1665,"TX code_block_segment broadcast_channel_segment result_data_fire", false,-1);
        vcdp->declBit(c+3241,"TX code_block_segment broadcast_channel_segment when_PhyTX_l188", false,-1);
        vcdp->declBit(c+1665,"TX code_block_segment broadcast_channel_segment result_data_fire_1", false,-1);
        vcdp->declBit(c+1001,"TX code_block_segment broadcast_channel_segment when_PhyTX_l197", false,-1);
        vcdp->declBus(c+3697,"TX code_block_segment broadcast_channel_segment block_msg_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declArray(c+2377,"TX code_block_segment broadcast_channel_segment segment_msg_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+585,"TX code_block_segment broadcast_channel_segment state_string", false,-1, 95,0);
        vcdp->declArray(c+2417,"TX code_block_segment broadcast_channel_segment segment_message_segment_code_type_string", false,-1, 151,0);
        vcdp->declBit(c+1545,"TX code_block_segment control_channel_segment raw_data_valid", false,-1);
        vcdp->declBit(c+3105,"TX code_block_segment control_channel_segment raw_data_ready", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment control_channel_segment raw_data_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment control_channel_segment raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1209,"TX code_block_segment control_channel_segment block_msg_valid", false,-1);
        vcdp->declBit(c+1481,"TX code_block_segment control_channel_segment block_msg_ready", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment control_channel_segment block_msg_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment control_channel_segment block_msg_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment control_channel_segment block_msg_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1489,"TX code_block_segment control_channel_segment result_data_valid", false,-1);
        vcdp->declBit(c+1569,"TX code_block_segment control_channel_segment result_data_ready", false,-1);
        vcdp->declBit(c+497,"TX code_block_segment control_channel_segment result_data_payload_last", false,-1);
        vcdp->declBus(c+1497,"TX code_block_segment control_channel_segment result_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+3113,"TX code_block_segment control_channel_segment segment_msg_valid", false,-1);
        vcdp->declBit(c+1593,"TX code_block_segment control_channel_segment segment_msg_ready", false,-1);
        vcdp->declBus(c+3681,"TX code_block_segment control_channel_segment segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2225,"TX code_block_segment control_channel_segment segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+4609,"TX code_block_segment control_channel_segment is_last_block", false,-1);
        vcdp->declBit(c+4465,"TX code_block_segment control_channel_segment clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment control_channel_segment reset", false,-1);
        vcdp->declBus(c+4569,"TX code_block_segment control_channel_segment PhysicalChannel_PBCH", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX code_block_segment control_channel_segment PhysicalChannel_PCCH", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX code_block_segment control_channel_segment PhysicalChannel_PTCH", false,-1, 1,0);
        vcdp->declBus(c+4593,"TX code_block_segment control_channel_segment ChannelCodingMethod_Turbo", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX code_block_segment control_channel_segment ChannelCodingMethod_TailedConvolutional", false,-1, 0,0);
        vcdp->declBus(c+4633,"TX code_block_segment control_channel_segment PCCHCrcAttachmentStatus_IDLE", false,-1, 2,0);
        vcdp->declBus(c+4641,"TX code_block_segment control_channel_segment PCCHCrcAttachmentStatus_CTRL_EMIT", false,-1, 2,0);
        vcdp->declBus(c+4649,"TX code_block_segment control_channel_segment PCCHCrcAttachmentStatus_ZERO_PADDING", false,-1, 2,0);
        vcdp->declBus(c+4657,"TX code_block_segment control_channel_segment PCCHCrcAttachmentStatus_BYPASS", false,-1, 2,0);
        vcdp->declBus(c+4665,"TX code_block_segment control_channel_segment PCCHCrcAttachmentStatus_SCRAMBLE", false,-1, 2,0);
        vcdp->declBus(c+3249,"TX code_block_segment control_channel_segment state", false,-1, 2,0);
        vcdp->declBus(c+3681,"TX code_block_segment control_channel_segment segment_message_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2225,"TX code_block_segment control_channel_segment segment_message_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+3257,"TX code_block_segment control_channel_segment block_msg_enable", false,-1);
        vcdp->declBus(c+3265,"TX code_block_segment control_channel_segment zero_padding_cnt", false,-1, 12,0);
        vcdp->declBus(c+3273,"TX code_block_segment control_channel_segment rnti", false,-1, 15,0);
        vcdp->declBus(c+3601,"TX code_block_segment control_channel_segment xor_bit", false,-1, 0,0);
        vcdp->declBit(c+1673,"TX code_block_segment control_channel_segment block_msg_fire", false,-1);
        vcdp->declBit(c+3769,"TX code_block_segment control_channel_segment when_PhyTX_l236", false,-1);
        vcdp->declBit(c+1009,"TX code_block_segment control_channel_segment segment_msg_fire", false,-1);
        vcdp->declBit(c+1681,"TX code_block_segment control_channel_segment result_data_fire", false,-1);
        vcdp->declBit(c+3281,"TX code_block_segment control_channel_segment when_PhyTX_l266", false,-1);
        vcdp->declBit(c+1681,"TX code_block_segment control_channel_segment result_data_fire_1", false,-1);
    }
}

void VTX::traceInitThis__2(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+3777,"TX code_block_segment control_channel_segment when_PhyTX_l276", false,-1);
        vcdp->declBit(c+1689,"TX code_block_segment control_channel_segment result_data_fire_2", false,-1);
        vcdp->declBit(c+1017,"TX code_block_segment control_channel_segment when_PhyTX_l286", false,-1);
        vcdp->declBit(c+1689,"TX code_block_segment control_channel_segment result_data_fire_3", false,-1);
        vcdp->declBus(c+3697,"TX code_block_segment control_channel_segment block_msg_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declArray(c+2457,"TX code_block_segment control_channel_segment segment_msg_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+609,"TX code_block_segment control_channel_segment state_string", false,-1, 95,0);
        vcdp->declArray(c+2497,"TX code_block_segment control_channel_segment segment_message_segment_code_type_string", false,-1, 151,0);
        vcdp->declBit(c+1193,"TX code_block_segment shared_channel_segment raw_data_valid", false,-1);
        vcdp->declBit(c+1177,"TX code_block_segment shared_channel_segment raw_data_ready", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment shared_channel_segment raw_data_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment shared_channel_segment raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1217,"TX code_block_segment shared_channel_segment block_msg_valid", false,-1);
        vcdp->declBit(c+1505,"TX code_block_segment shared_channel_segment block_msg_ready", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment shared_channel_segment block_msg_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment shared_channel_segment block_msg_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment shared_channel_segment block_msg_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1513,"TX code_block_segment shared_channel_segment result_data_valid", false,-1);
        vcdp->declBit(c+1577,"TX code_block_segment shared_channel_segment result_data_ready", false,-1);
        vcdp->declBit(c+1521,"TX code_block_segment shared_channel_segment result_data_payload_last", false,-1);
        vcdp->declBus(c+1529,"TX code_block_segment shared_channel_segment result_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+4305,"TX code_block_segment shared_channel_segment segment_msg_valid", false,-1);
        vcdp->declBit(c+1601,"TX code_block_segment shared_channel_segment segment_msg_ready", false,-1);
        vcdp->declBus(c+2233,"TX code_block_segment shared_channel_segment segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2241,"TX code_block_segment shared_channel_segment segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+1121,"TX code_block_segment shared_channel_segment is_last_block", false,-1);
        vcdp->declBit(c+4465,"TX code_block_segment shared_channel_segment clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment shared_channel_segment reset", false,-1);
        vcdp->declBus(c+4569,"TX code_block_segment shared_channel_segment PhysicalChannel_PBCH", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX code_block_segment shared_channel_segment PhysicalChannel_PCCH", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX code_block_segment shared_channel_segment PhysicalChannel_PTCH", false,-1, 1,0);
        vcdp->declBus(c+4593,"TX code_block_segment shared_channel_segment ChannelCodingMethod_Turbo", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX code_block_segment shared_channel_segment ChannelCodingMethod_TailedConvolutional", false,-1, 0,0);
        vcdp->declBus(c+4633,"TX code_block_segment shared_channel_segment PSCHCrcAttachmentStatus_IDLE", false,-1, 2,0);
        vcdp->declBus(c+4641,"TX code_block_segment shared_channel_segment PSCHCrcAttachmentStatus_CALC_NUM", false,-1, 2,0);
        vcdp->declBus(c+4649,"TX code_block_segment shared_channel_segment PSCHCrcAttachmentStatus_CALC_K", false,-1, 2,0);
        vcdp->declBus(c+4657,"TX code_block_segment shared_channel_segment PSCHCrcAttachmentStatus_CALC_C_F", false,-1, 2,0);
        vcdp->declBus(c+4665,"TX code_block_segment shared_channel_segment PSCHCrcAttachmentStatus_MATCH_SIZE", false,-1, 2,0);
        vcdp->declBus(c+4673,"TX code_block_segment shared_channel_segment PSCHCrcAttachmentStatus_CTRL_EMIT", false,-1, 2,0);
        vcdp->declBus(c+4681,"TX code_block_segment shared_channel_segment PSCHCrcAttachmentStatus_ZERO_PADDING", false,-1, 2,0);
        vcdp->declBus(c+4689,"TX code_block_segment shared_channel_segment PSCHCrcAttachmentStatus_BYPASS", false,-1, 2,0);
        vcdp->declBit(c+1697,"TX code_block_segment shared_channel_segment crc24b_core_raw_data_valid", false,-1);
        vcdp->declBit(c+3785,"TX code_block_segment shared_channel_segment crc24b_core_raw_data_payload_last", false,-1);
        vcdp->declBit(c+1705,"TX code_block_segment shared_channel_segment crc24b_core_result_data_ready", false,-1);
        vcdp->declBit(c+1713,"TX code_block_segment shared_channel_segment crc24b_core_raw_data_ready", false,-1);
        vcdp->declBit(c+1721,"TX code_block_segment shared_channel_segment crc24b_core_result_data_valid", false,-1);
        vcdp->declBit(c+633,"TX code_block_segment shared_channel_segment crc24b_core_result_data_payload_last", false,-1);
        vcdp->declBus(c+297,"TX code_block_segment shared_channel_segment crc24b_core_result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3289,"TX code_block_segment shared_channel_segment unsigned_divider_cmd_ready", false,-1);
        vcdp->declBit(c+3297,"TX code_block_segment shared_channel_segment unsigned_divider_rsp_valid", false,-1);
        vcdp->declBus(c+2537,"TX code_block_segment shared_channel_segment unsigned_divider_rsp_payload_quotient", false,-1, 19,0);
        vcdp->declBus(c+2545,"TX code_block_segment shared_channel_segment unsigned_divider_rsp_payload_remainder", false,-1, 12,0);
        vcdp->declBit(c+2553,"TX code_block_segment shared_channel_segment unsigned_divider_rsp_payload_error", false,-1);
        vcdp->declBus(c+4337,"TX code_block_segment shared_channel_segment state", false,-1, 2,0);
        vcdp->declBus(c+2233,"TX code_block_segment shared_channel_segment segment_message_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2241,"TX code_block_segment shared_channel_segment segment_message_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+3305,"TX code_block_segment shared_channel_segment block_msg_enable", false,-1);
        vcdp->declBus(c+3793,"TX code_block_segment shared_channel_segment zero_padding_cnt", false,-1, 12,0);
        vcdp->declBus(c+3801,"TX code_block_segment shared_channel_segment payload_cnt", false,-1, 12,0);
        vcdp->declBit(c+3809,"TX code_block_segment shared_channel_segment emit_step", false,-1);
        vcdp->declBit(c+3817,"TX code_block_segment shared_channel_segment crc_mode", false,-1);
        vcdp->declBus(c+2561,"TX code_block_segment shared_channel_segment C", false,-1, 7,0);
        vcdp->declBus(c+2569,"TX code_block_segment shared_channel_segment Cp", false,-1, 7,0);
        vcdp->declBus(c+2577,"TX code_block_segment shared_channel_segment Cn", false,-1, 7,0);
        vcdp->declBus(c+2585,"TX code_block_segment shared_channel_segment Kp", false,-1, 12,0);
        vcdp->declBus(c+2593,"TX code_block_segment shared_channel_segment Kn", false,-1, 12,0);
        vcdp->declBus(c+2601,"TX code_block_segment shared_channel_segment F", false,-1, 19,0);
        vcdp->declBus(c+2609,"TX code_block_segment shared_channel_segment shift_step", false,-1, 2,0);
        vcdp->declBus(c+2617,"TX code_block_segment shared_channel_segment numerator", false,-1, 19,0);
        vcdp->declBus(c+2625,"TX code_block_segment shared_channel_segment denominator", false,-1, 12,0);
        vcdp->declBit(c+3313,"TX code_block_segment shared_channel_segment divide_enable", false,-1);
        vcdp->declBus(c+257,"TX code_block_segment shared_channel_segment code_block_resized", false,-1, 12,0);
        vcdp->declBus(c+2633,"TX code_block_segment shared_channel_segment switch_PhyTX_l347", false,-1, 3,0);
        vcdp->declBus(c+265,"TX code_block_segment shared_channel_segment Kp_temp", false,-1, 12,0);
        vcdp->declBus(c+273,"TX code_block_segment shared_channel_segment Kn_temp", false,-1, 12,0);
        vcdp->declBus(c+2641,"TX code_block_segment shared_channel_segment shift_step_temp", false,-1, 2,0);
        vcdp->declBus(c+2649,"TX code_block_segment shared_channel_segment switch_PhyTX_l364", false,-1, 3,0);
        vcdp->declBus(c+281,"TX code_block_segment shared_channel_segment segment_num", false,-1, 7,0);
        vcdp->declBit(c+1729,"TX code_block_segment shared_channel_segment block_msg_fire", false,-1);
        vcdp->declBit(c+3769,"TX code_block_segment shared_channel_segment when_PhyTX_l391", false,-1);
        vcdp->declBit(c+3825,"TX code_block_segment shared_channel_segment when_PhyTX_l396", false,-1);
        vcdp->declBit(c+3321,"TX code_block_segment shared_channel_segment shared_channel_segment_unsigned_divider_cmd_fire", false,-1);
        vcdp->declBit(c+3297,"TX code_block_segment shared_channel_segment shared_channel_segment_unsigned_divider_rsp_fire", false,-1);
        vcdp->declBit(c+3321,"TX code_block_segment shared_channel_segment shared_channel_segment_unsigned_divider_cmd_fire_1", false,-1);
        vcdp->declBit(c+3297,"TX code_block_segment shared_channel_segment shared_channel_segment_unsigned_divider_rsp_fire_1", false,-1);
        vcdp->declBit(c+2657,"TX code_block_segment shared_channel_segment when_PhyTX_l449", false,-1);
        vcdp->declBit(c+1737,"TX code_block_segment shared_channel_segment segment_msg_fire", false,-1);
        vcdp->declBit(c+2657,"TX code_block_segment shared_channel_segment when_PhyTX_l478", false,-1);
        vcdp->declBit(c+2665,"TX code_block_segment shared_channel_segment when_PhyTX_l487", false,-1);
        vcdp->declBit(c+1745,"TX code_block_segment shared_channel_segment result_data_fire", false,-1);
        vcdp->declBit(c+3833,"TX code_block_segment shared_channel_segment when_PhyTX_l503", false,-1);
        vcdp->declBit(c+1745,"TX code_block_segment shared_channel_segment result_data_fire_1", false,-1);
        vcdp->declBit(c+3841,"TX code_block_segment shared_channel_segment when_PhyTX_l515", false,-1);
        vcdp->declBit(c+1753,"TX code_block_segment shared_channel_segment result_data_fire_2", false,-1);
        vcdp->declBit(c+1761,"TX code_block_segment shared_channel_segment when_PhyTX_l523", false,-1);
        vcdp->declBus(c+3697,"TX code_block_segment shared_channel_segment block_msg_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declArray(c+2673,"TX code_block_segment shared_channel_segment segment_msg_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+1769,"TX code_block_segment shared_channel_segment state_string", false,-1, 95,0);
        vcdp->declArray(c+2713,"TX code_block_segment shared_channel_segment segment_message_segment_code_type_string", false,-1, 151,0);
        vcdp->declBit(c+1697,"TX code_block_segment shared_channel_segment crc24b_core raw_data_valid", false,-1);
        vcdp->declBit(c+1713,"TX code_block_segment shared_channel_segment crc24b_core raw_data_ready", false,-1);
        vcdp->declBit(c+3785,"TX code_block_segment shared_channel_segment crc24b_core raw_data_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment shared_channel_segment crc24b_core raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1721,"TX code_block_segment shared_channel_segment crc24b_core result_data_valid", false,-1);
        vcdp->declBit(c+1705,"TX code_block_segment shared_channel_segment crc24b_core result_data_ready", false,-1);
        vcdp->declBit(c+633,"TX code_block_segment shared_channel_segment crc24b_core result_data_payload_last", false,-1);
        vcdp->declBus(c+297,"TX code_block_segment shared_channel_segment crc24b_core result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4465,"TX code_block_segment shared_channel_segment crc24b_core clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment shared_channel_segment crc24b_core reset", false,-1);
        vcdp->declBit(c+1025,"TX code_block_segment shared_channel_segment crc24b_core crc_core_flush", false,-1);
        vcdp->declBus(c+3329,"TX code_block_segment shared_channel_segment crc24b_core crc_core_result", false,-1, 23,0);
        vcdp->declBus(c+2945,"TX code_block_segment shared_channel_segment crc24b_core crc_core_resultNext", false,-1, 23,0);
        vcdp->declBit(c+3337,"TX code_block_segment shared_channel_segment crc24b_core emitCrc", false,-1);
        vcdp->declBit(c+1793,"TX code_block_segment shared_channel_segment crc24b_core raw_data_fire", false,-1);
        vcdp->declBit(c+1225,"TX code_block_segment shared_channel_segment crc24b_core when_PhyTX_l47", false,-1);
        vcdp->declBit(c+1801,"TX code_block_segment shared_channel_segment crc24b_core result_data_fire", false,-1);
        vcdp->declBit(c+1025,"TX code_block_segment shared_channel_segment crc24b_core when_PhyTX_l47_1", false,-1);
        vcdp->declBus(c+3345,"TX code_block_segment shared_channel_segment crc24b_core counter", false,-1, 4,0);
        vcdp->declBit(c+1793,"TX code_block_segment shared_channel_segment crc24b_core raw_data_fire_1", false,-1);
        vcdp->declBit(c+1801,"TX code_block_segment shared_channel_segment crc24b_core result_data_fire_1", false,-1);
        vcdp->declBit(c+3353,"TX code_block_segment shared_channel_segment crc24b_core when_PhyTX_l57", false,-1);
        vcdp->declBit(c+3361,"TX code_block_segment shared_channel_segment crc24b_core when_PhyTX_l69", false,-1);
        vcdp->declBit(c+1025,"TX code_block_segment shared_channel_segment crc24b_core crc_core flush", false,-1);
        vcdp->declBit(c+1793,"TX code_block_segment shared_channel_segment crc24b_core crc_core input_valid", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment shared_channel_segment crc24b_core crc_core input_payload", false,-1, 0,0);
        vcdp->declBus(c+3329,"TX code_block_segment shared_channel_segment crc24b_core crc_core result", false,-1, 23,0);
        vcdp->declBus(c+2945,"TX code_block_segment shared_channel_segment crc24b_core crc_core resultNext", false,-1, 23,0);
        vcdp->declBit(c+4465,"TX code_block_segment shared_channel_segment crc24b_core crc_core clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment shared_channel_segment crc24b_core crc_core reset", false,-1);
        vcdp->declBus(c+2945,"TX code_block_segment shared_channel_segment crc24b_core crc_core state_1", false,-1, 23,0);
        vcdp->declBus(c+3329,"TX code_block_segment shared_channel_segment crc24b_core crc_core state", false,-1, 23,0);
        vcdp->declBus(c+3329,"TX code_block_segment shared_channel_segment crc24b_core crc_core stateXor", false,-1, 23,0);
        vcdp->declBus(c+2945,"TX code_block_segment shared_channel_segment crc24b_core crc_core accXor", false,-1, 23,0);
        vcdp->declBit(c+4617,"TX code_block_segment shared_channel_segment unsigned_divider flush", false,-1);
        vcdp->declBit(c+3313,"TX code_block_segment shared_channel_segment unsigned_divider cmd_valid", false,-1);
        vcdp->declBit(c+3289,"TX code_block_segment shared_channel_segment unsigned_divider cmd_ready", false,-1);
        vcdp->declBus(c+2617,"TX code_block_segment shared_channel_segment unsigned_divider cmd_payload_numerator", false,-1, 19,0);
        vcdp->declBus(c+2625,"TX code_block_segment shared_channel_segment unsigned_divider cmd_payload_denominator", false,-1, 12,0);
        vcdp->declBit(c+3297,"TX code_block_segment shared_channel_segment unsigned_divider rsp_valid", false,-1);
        vcdp->declBit(c+4609,"TX code_block_segment shared_channel_segment unsigned_divider rsp_ready", false,-1);
        vcdp->declBus(c+2537,"TX code_block_segment shared_channel_segment unsigned_divider rsp_payload_quotient", false,-1, 19,0);
        vcdp->declBus(c+2545,"TX code_block_segment shared_channel_segment unsigned_divider rsp_payload_remainder", false,-1, 12,0);
        vcdp->declBit(c+2553,"TX code_block_segment shared_channel_segment unsigned_divider rsp_payload_error", false,-1);
        vcdp->declBit(c+4465,"TX code_block_segment shared_channel_segment unsigned_divider clk", false,-1);
        vcdp->declBit(c+4473,"TX code_block_segment shared_channel_segment unsigned_divider reset", false,-1);
        vcdp->declBus(c+3369,"TX code_block_segment shared_channel_segment unsigned_divider switch_UnsignedDivider_l92", false,-1, 1,0);
        vcdp->declBit(c+641,"TX code_block_segment shared_channel_segment unsigned_divider cmd_fire", false,-1);
        vcdp->declBit(c+289,"TX code_block_segment shared_channel_segment unsigned_divider when_UnsignedDivider_l112", false,-1);
        vcdp->declBit(c+3297,"TX code_block_segment shared_channel_segment unsigned_divider rsp_fire", false,-1);
        vcdp->declBus(c+3689,"TX code_block_segment streamDemux_4 io_select", false,-1, 1,0);
        vcdp->declBit(c+1441,"TX code_block_segment streamDemux_4 io_input_valid", false,-1);
        vcdp->declBit(c+1537,"TX code_block_segment streamDemux_4 io_input_ready", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment streamDemux_4 io_input_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment streamDemux_4 io_input_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1185,"TX code_block_segment streamDemux_4 io_outputs_0_valid", false,-1);
        vcdp->declBit(c+3089,"TX code_block_segment streamDemux_4 io_outputs_0_ready", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment streamDemux_4 io_outputs_0_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment streamDemux_4 io_outputs_0_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1545,"TX code_block_segment streamDemux_4 io_outputs_1_valid", false,-1);
        vcdp->declBit(c+3105,"TX code_block_segment streamDemux_4 io_outputs_1_ready", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment streamDemux_4 io_outputs_1_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment streamDemux_4 io_outputs_1_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1193,"TX code_block_segment streamDemux_4 io_outputs_2_valid", false,-1);
        vcdp->declBit(c+1177,"TX code_block_segment streamDemux_4 io_outputs_2_ready", false,-1);
        vcdp->declBit(c+2193,"TX code_block_segment streamDemux_4 io_outputs_2_payload_last", false,-1);
        vcdp->declBus(c+2201,"TX code_block_segment streamDemux_4 io_outputs_2_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3849,"TX code_block_segment streamDemux_4 when_Stream_l908", false,-1);
        vcdp->declBit(c+3857,"TX code_block_segment streamDemux_4 when_Stream_l908_1", false,-1);
        vcdp->declBit(c+3865,"TX code_block_segment streamDemux_4 when_Stream_l908_2", false,-1);
        vcdp->declBus(c+3689,"TX code_block_segment streamDemux_5 io_select", false,-1, 1,0);
        vcdp->declBit(c+1449,"TX code_block_segment streamDemux_5 io_input_valid", false,-1);
        vcdp->declBit(c+1553,"TX code_block_segment streamDemux_5 io_input_ready", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment streamDemux_5 io_input_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment streamDemux_5 io_input_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment streamDemux_5 io_input_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1201,"TX code_block_segment streamDemux_5 io_outputs_0_valid", false,-1);
        vcdp->declBit(c+1465,"TX code_block_segment streamDemux_5 io_outputs_0_ready", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment streamDemux_5 io_outputs_0_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment streamDemux_5 io_outputs_0_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment streamDemux_5 io_outputs_0_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1209,"TX code_block_segment streamDemux_5 io_outputs_1_valid", false,-1);
        vcdp->declBit(c+1481,"TX code_block_segment streamDemux_5 io_outputs_1_ready", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment streamDemux_5 io_outputs_1_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment streamDemux_5 io_outputs_1_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment streamDemux_5 io_outputs_1_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBit(c+1217,"TX code_block_segment streamDemux_5 io_outputs_2_valid", false,-1);
        vcdp->declBit(c+1505,"TX code_block_segment streamDemux_5 io_outputs_2_ready", false,-1);
        vcdp->declBus(c+3657,"TX code_block_segment streamDemux_5 io_outputs_2_payload_pkg_type", false,-1, 1,0);
        vcdp->declBus(c+3665,"TX code_block_segment streamDemux_5 io_outputs_2_payload_pkg_length", false,-1, 19,0);
        vcdp->declBus(c+3673,"TX code_block_segment streamDemux_5 io_outputs_2_payload_rnti_scramble", false,-1, 15,0);
        vcdp->declBus(c+4569,"TX code_block_segment streamDemux_5 PhysicalChannel_PBCH", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX code_block_segment streamDemux_5 PhysicalChannel_PCCH", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX code_block_segment streamDemux_5 PhysicalChannel_PTCH", false,-1, 1,0);
        vcdp->declBit(c+3849,"TX code_block_segment streamDemux_5 when_Stream_l908", false,-1);
        vcdp->declBit(c+3857,"TX code_block_segment streamDemux_5 when_Stream_l908_1", false,-1);
        vcdp->declBit(c+3865,"TX code_block_segment streamDemux_5 when_Stream_l908_2", false,-1);
        vcdp->declBus(c+3697,"TX code_block_segment streamDemux_5 io_input_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declBus(c+3697,"TX code_block_segment streamDemux_5 io_outputs_0_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declBus(c+3697,"TX code_block_segment streamDemux_5 io_outputs_1_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declBus(c+3697,"TX code_block_segment streamDemux_5 io_outputs_2_payload_pkg_type_string", false,-1, 31,0);
        vcdp->declBus(c+3689,"TX code_block_segment streamMux_3 io_select", false,-1, 1,0);
        vcdp->declBit(c+1473,"TX code_block_segment streamMux_3 io_inputs_0_valid", false,-1);
        vcdp->declBit(c+1561,"TX code_block_segment streamMux_3 io_inputs_0_ready", false,-1);
        vcdp->declBit(c+489,"TX code_block_segment streamMux_3 io_inputs_0_payload_last", false,-1);
        vcdp->declBus(c+2937,"TX code_block_segment streamMux_3 io_inputs_0_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+1489,"TX code_block_segment streamMux_3 io_inputs_1_valid", false,-1);
        vcdp->declBit(c+1569,"TX code_block_segment streamMux_3 io_inputs_1_ready", false,-1);
        vcdp->declBit(c+497,"TX code_block_segment streamMux_3 io_inputs_1_payload_last", false,-1);
        vcdp->declBus(c+1497,"TX code_block_segment streamMux_3 io_inputs_1_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+1513,"TX code_block_segment streamMux_3 io_inputs_2_valid", false,-1);
        vcdp->declBit(c+1577,"TX code_block_segment streamMux_3 io_inputs_2_ready", false,-1);
        vcdp->declBit(c+1521,"TX code_block_segment streamMux_3 io_inputs_2_payload_last", false,-1);
        vcdp->declBus(c+1529,"TX code_block_segment streamMux_3 io_inputs_2_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+1393,"TX code_block_segment streamMux_3 io_output_valid", false,-1);
        vcdp->declBit(c+361,"TX code_block_segment streamMux_3 io_output_ready", false,-1);
        vcdp->declBit(c+1401,"TX code_block_segment streamMux_3 io_output_payload_last", false,-1);
        vcdp->declBus(c+305,"TX code_block_segment streamMux_3 io_output_payload_fragment", false,-1, 1,0);
        vcdp->declBus(c+3689,"TX code_block_segment streamMux_4 io_select", false,-1, 1,0);
        vcdp->declBit(c+3097,"TX code_block_segment streamMux_4 io_inputs_0_valid", false,-1);
        vcdp->declBit(c+1585,"TX code_block_segment streamMux_4 io_inputs_0_ready", false,-1);
        vcdp->declBus(c+2209,"TX code_block_segment streamMux_4 io_inputs_0_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2217,"TX code_block_segment streamMux_4 io_inputs_0_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+3113,"TX code_block_segment streamMux_4 io_inputs_1_valid", false,-1);
        vcdp->declBit(c+1593,"TX code_block_segment streamMux_4 io_inputs_1_ready", false,-1);
        vcdp->declBus(c+3681,"TX code_block_segment streamMux_4 io_inputs_1_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2225,"TX code_block_segment streamMux_4 io_inputs_1_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+4305,"TX code_block_segment streamMux_4 io_inputs_2_valid", false,-1);
        vcdp->declBit(c+1601,"TX code_block_segment streamMux_4 io_inputs_2_ready", false,-1);
        vcdp->declBus(c+2233,"TX code_block_segment streamMux_4 io_inputs_2_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2241,"TX code_block_segment streamMux_4 io_inputs_2_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+3625,"TX code_block_segment streamMux_4 io_output_valid", false,-1);
        vcdp->declBit(c+369,"TX code_block_segment streamMux_4 io_output_ready", false,-1);
        vcdp->declBus(c+2953,"TX code_block_segment streamMux_4 io_output_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+1113,"TX code_block_segment streamMux_4 io_output_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBus(c+4593,"TX code_block_segment streamMux_4 ChannelCodingMethod_Turbo", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX code_block_segment streamMux_4 ChannelCodingMethod_TailedConvolutional", false,-1, 0,0);
        vcdp->declArray(c+2377,"TX code_block_segment streamMux_4 io_inputs_0_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+2457,"TX code_block_segment streamMux_4 io_inputs_1_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+2673,"TX code_block_segment streamMux_4 io_inputs_2_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+1137,"TX code_block_segment streamMux_4 io_output_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declBit(c+1393,"TX channel_code raw_data_valid", false,-1);
        vcdp->declBit(c+361,"TX channel_code raw_data_ready", false,-1);
        vcdp->declBit(c+1401,"TX channel_code raw_data_payload_last", false,-1);
        vcdp->declBus(c+305,"TX channel_code raw_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+3625,"TX channel_code segment_msg_valid", false,-1);
        vcdp->declBit(c+369,"TX channel_code segment_msg_ready", false,-1);
        vcdp->declBus(c+2953,"TX channel_code segment_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+1113,"TX channel_code segment_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+1409,"TX channel_code result_data_valid", false,-1);
        vcdp->declBit(c+2977,"TX channel_code result_data_ready", false,-1);
        vcdp->declBit(c+1417,"TX channel_code result_data_payload_last", false,-1);
        vcdp->declBus(c+2961,"TX channel_code result_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+4297,"TX channel_code coded_msg_valid", false,-1);
        vcdp->declBit(c+2985,"TX channel_code coded_msg_ready", false,-1);
        vcdp->declBus(c+3641,"TX channel_code coded_msg_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2161,"TX channel_code coded_msg_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+4465,"TX channel_code clk", false,-1);
        vcdp->declBit(c+4473,"TX channel_code reset", false,-1);
        vcdp->declBus(c+4593,"TX channel_code ChannelCodingMethod_Turbo", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX channel_code ChannelCodingMethod_TailedConvolutional", false,-1, 0,0);
        vcdp->declBus(c+4569,"TX channel_code ChannelCodingStatus_IDLE", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX channel_code ChannelCodingStatus_CTRL_EMIT", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX channel_code ChannelCodingStatus_BYPASS", false,-1, 1,0);
        vcdp->declBus(c+4625,"TX channel_code ChannelCodingStatus_PENDING", false,-1, 1,0);
        vcdp->declBit(c+1809,"TX channel_code data_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+4345,"TX channel_code msg_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+1817,"TX channel_code streamDemux_4_io_input_valid", false,-1);
        vcdp->declBit(c+361,"TX channel_code data_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+649,"TX channel_code data_fifo_io_pop_valid", false,-1);
        vcdp->declBit(c+3873,"TX channel_code data_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code data_fifo_io_pop_payload_fragment", false,-1, 1,0);
        vcdp->declBus(c+657,"TX channel_code data_fifo_io_occupancy", false,-1, 5,0);
        vcdp->declBus(c+665,"TX channel_code data_fifo_io_availability", false,-1, 5,0);
        vcdp->declBit(c+369,"TX channel_code msg_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+673,"TX channel_code msg_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+3889,"TX channel_code msg_fifo_io_pop_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+3897,"TX channel_code msg_fifo_io_pop_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBus(c+681,"TX channel_code msg_fifo_io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+689,"TX channel_code msg_fifo_io_availability", false,-1, 2,0);
        vcdp->declBit(c+4609,"TX channel_code turbo_encoder_raw_data_ready", false,-1);
        vcdp->declBit(c+313,"TX channel_code turbo_encoder_result_data_valid", false,-1);
        vcdp->declBit(c+3873,"TX channel_code turbo_encoder_result_data_payload_last", false,-1);
        vcdp->declBus(c+3905,"TX channel_code turbo_encoder_result_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+1825,"TX channel_code tailed_conv_encoder_raw_data_ready", false,-1);
        vcdp->declBit(c+3377,"TX channel_code tailed_conv_encoder_result_data_valid", false,-1);
        vcdp->declBit(c+3385,"TX channel_code tailed_conv_encoder_result_data_payload_last", false,-1);
        vcdp->declBus(c+2753,"TX channel_code tailed_conv_encoder_result_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+1833,"TX channel_code streamDemux_4_io_input_ready", false,-1);
        vcdp->declBit(c+313,"TX channel_code streamDemux_4_io_outputs_0_valid", false,-1);
        vcdp->declBit(c+3873,"TX channel_code streamDemux_4_io_outputs_0_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code streamDemux_4_io_outputs_0_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+1841,"TX channel_code streamDemux_4_io_outputs_1_valid", false,-1);
        vcdp->declBit(c+3873,"TX channel_code streamDemux_4_io_outputs_1_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code streamDemux_4_io_outputs_1_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+1409,"TX channel_code flowMux_1_output_valid", false,-1);
        vcdp->declBit(c+1417,"TX channel_code flowMux_1_output_payload_last", false,-1);
        vcdp->declBus(c+2961,"TX channel_code flowMux_1_output_payload_fragment", false,-1, 3,0);
        vcdp->declBus(c+2761,"TX channel_code sel_cha", false,-1, 0,0);
        vcdp->declBus(c+4353,"TX channel_code state", false,-1, 1,0);
        vcdp->declBus(c+3641,"TX channel_code message_segment_length", false,-1, 12,0);
        vcdp->declBus(c+2161,"TX channel_code message_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+1849,"TX channel_code channel_code_msg_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+3633,"TX channel_code coded_msg_fire", false,-1);
        vcdp->declBit(c+1033,"TX channel_code channel_code_data_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+849,"TX channel_code when_PhyTX_l710", false,-1);
        vcdp->declBit(c+1041,"TX channel_code result_data_fire", false,-1);
        vcdp->declArray(c+1137,"TX channel_code segment_msg_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+2769,"TX channel_code coded_msg_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+1857,"TX channel_code state_string", false,-1, 71,0);
        vcdp->declArray(c+2809,"TX channel_code message_segment_code_type_string", false,-1, 151,0);
        vcdp->declBit(c+1393,"TX channel_code data_fifo io_push_valid", false,-1);
        vcdp->declBit(c+361,"TX channel_code data_fifo io_push_ready", false,-1);
        vcdp->declBit(c+1401,"TX channel_code data_fifo io_push_payload_last", false,-1);
        vcdp->declBus(c+305,"TX channel_code data_fifo io_push_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+649,"TX channel_code data_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+1809,"TX channel_code data_fifo io_pop_ready", false,-1);
        vcdp->declBit(c+3873,"TX channel_code data_fifo io_pop_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code data_fifo io_pop_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+4617,"TX channel_code data_fifo io_flush", false,-1);
        vcdp->declBus(c+657,"TX channel_code data_fifo io_occupancy", false,-1, 5,0);
        vcdp->declBus(c+665,"TX channel_code data_fifo io_availability", false,-1, 5,0);
        vcdp->declBit(c+4465,"TX channel_code data_fifo clk", false,-1);
        vcdp->declBit(c+4473,"TX channel_code data_fifo reset", false,-1);
        vcdp->declBit(c+1881,"TX channel_code data_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX channel_code data_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+1889,"TX channel_code data_fifo logic_pushPtr_valueNext", false,-1, 4,0);
        vcdp->declBus(c+3393,"TX channel_code data_fifo logic_pushPtr_value", false,-1, 4,0);
        vcdp->declBit(c+3401,"TX channel_code data_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+1049,"TX channel_code data_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1897,"TX channel_code data_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX channel_code data_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1905,"TX channel_code data_fifo logic_popPtr_valueNext", false,-1, 4,0);
        vcdp->declBus(c+3409,"TX channel_code data_fifo logic_popPtr_value", false,-1, 4,0);
        vcdp->declBit(c+3417,"TX channel_code data_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+1057,"TX channel_code data_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+697,"TX channel_code data_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+3425,"TX channel_code data_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+1913,"TX channel_code data_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1921,"TX channel_code data_fifo logic_popping", false,-1);
        vcdp->declBit(c+705,"TX channel_code data_fifo logic_empty", false,-1);
        vcdp->declBit(c+713,"TX channel_code data_fifo logic_full", false,-1);
        vcdp->declBit(c+1929,"TX channel_code data_fifo when_Stream_l1101", false,-1);
        vcdp->declBus(c+3433,"TX channel_code data_fifo logic_ptrDif", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+3913+i*1,"TX channel_code data_fifo logic_ram", true,(i+0), 2,0);}}
        vcdp->declBit(c+3625,"TX channel_code msg_fifo io_push_valid", false,-1);
        vcdp->declBit(c+369,"TX channel_code msg_fifo io_push_ready", false,-1);
        vcdp->declBus(c+2953,"TX channel_code msg_fifo io_push_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+1113,"TX channel_code msg_fifo io_push_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+673,"TX channel_code msg_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+4345,"TX channel_code msg_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+3889,"TX channel_code msg_fifo io_pop_payload_segment_length", false,-1, 12,0);
        vcdp->declBus(c+3897,"TX channel_code msg_fifo io_pop_payload_segment_code_type", false,-1, 0,0);
        vcdp->declBit(c+4617,"TX channel_code msg_fifo io_flush", false,-1);
        vcdp->declBus(c+681,"TX channel_code msg_fifo io_occupancy", false,-1, 2,0);
        vcdp->declBus(c+689,"TX channel_code msg_fifo io_availability", false,-1, 2,0);
        vcdp->declBit(c+4465,"TX channel_code msg_fifo clk", false,-1);
        vcdp->declBit(c+4473,"TX channel_code msg_fifo reset", false,-1);
        vcdp->declBus(c+4593,"TX channel_code msg_fifo ChannelCodingMethod_Turbo", false,-1, 0,0);
        vcdp->declBus(c+4601,"TX channel_code msg_fifo ChannelCodingMethod_TailedConvolutional", false,-1, 0,0);
        vcdp->declBit(c+1937,"TX channel_code msg_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX channel_code msg_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+1945,"TX channel_code msg_fifo logic_pushPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+3441,"TX channel_code msg_fifo logic_pushPtr_value", false,-1, 1,0);
        vcdp->declBit(c+3449,"TX channel_code msg_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+1065,"TX channel_code msg_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1953,"TX channel_code msg_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX channel_code msg_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1961,"TX channel_code msg_fifo logic_popPtr_valueNext", false,-1, 1,0);
        vcdp->declBus(c+3457,"TX channel_code msg_fifo logic_popPtr_value", false,-1, 1,0);
        vcdp->declBit(c+3465,"TX channel_code msg_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+1073,"TX channel_code msg_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+721,"TX channel_code msg_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+3473,"TX channel_code msg_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+1969,"TX channel_code msg_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1849,"TX channel_code msg_fifo logic_popping", false,-1);
        vcdp->declBit(c+729,"TX channel_code msg_fifo logic_empty", false,-1);
        vcdp->declBit(c+737,"TX channel_code msg_fifo logic_full", false,-1);
        vcdp->declBit(c+1977,"TX channel_code msg_fifo when_Stream_l1101", false,-1);
        vcdp->declBus(c+3481,"TX channel_code msg_fifo logic_ptrDif", false,-1, 1,0);
        vcdp->declArray(c+1137,"TX channel_code msg_fifo io_push_payload_segment_code_type_string", false,-1, 151,0);
        vcdp->declArray(c+4169,"TX channel_code msg_fifo io_pop_payload_segment_code_type_string", false,-1, 151,0);
        {int i; for (i=0; i<4; i++) {
                vcdp->declBus(c+4209+i*1,"TX channel_code msg_fifo logic_ram", true,(i+0), 13,0);}}
        vcdp->declBit(c+313,"TX channel_code turbo_encoder raw_data_valid", false,-1);
        vcdp->declBit(c+4609,"TX channel_code turbo_encoder raw_data_ready", false,-1);
        vcdp->declBit(c+3873,"TX channel_code turbo_encoder raw_data_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code turbo_encoder raw_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+313,"TX channel_code turbo_encoder result_data_valid", false,-1);
        vcdp->declBit(c+3873,"TX channel_code turbo_encoder result_data_payload_last", false,-1);
        vcdp->declBus(c+3905,"TX channel_code turbo_encoder result_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+1841,"TX channel_code tailed_conv_encoder raw_data_valid", false,-1);
        vcdp->declBit(c+1825,"TX channel_code tailed_conv_encoder raw_data_ready", false,-1);
        vcdp->declBit(c+3873,"TX channel_code tailed_conv_encoder raw_data_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code tailed_conv_encoder raw_data_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+3377,"TX channel_code tailed_conv_encoder result_data_valid", false,-1);
        vcdp->declBit(c+3385,"TX channel_code tailed_conv_encoder result_data_payload_last", false,-1);
        vcdp->declBus(c+2753,"TX channel_code tailed_conv_encoder result_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+4465,"TX channel_code tailed_conv_encoder clk", false,-1);
        vcdp->declBit(c+4473,"TX channel_code tailed_conv_encoder reset", false,-1);
        vcdp->declBit(c+1985,"TX channel_code tailed_conv_encoder tailed_conv_encoder_tail_bits_valid", false,-1);
        vcdp->declBus(c+1233,"TX channel_code tailed_conv_encoder tailed_conv_encoder_tail_bits_payload", false,-1, 6,0);
        vcdp->declBit(c+745,"TX channel_code tailed_conv_encoder tailed_conv_encoder_raw_data_valid", false,-1);
        vcdp->declBit(c+3609,"TX channel_code tailed_conv_encoder tailed_conv_encoder_raw_data_payload_last", false,-1);
        vcdp->declBus(c+3617,"TX channel_code tailed_conv_encoder tailed_conv_encoder_raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1081,"TX channel_code tailed_conv_encoder data_fifo_io_push_valid", false,-1);
        vcdp->declBus(c+4241,"TX channel_code tailed_conv_encoder data_fifo_io_push_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+1993,"TX channel_code tailed_conv_encoder data_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+2001,"TX channel_code tailed_conv_encoder tailed_conv_encoder_raw_data_ready", false,-1);
        vcdp->declBit(c+3377,"TX channel_code tailed_conv_encoder tailed_conv_encoder_coded_data_valid", false,-1);
        vcdp->declBit(c+3385,"TX channel_code tailed_conv_encoder tailed_conv_encoder_coded_data_payload_last", false,-1);
        vcdp->declBus(c+2849,"TX channel_code tailed_conv_encoder tailed_conv_encoder_coded_data_payload_fragment", false,-1, 2,0);
        vcdp->declBit(c+753,"TX channel_code tailed_conv_encoder data_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+761,"TX channel_code tailed_conv_encoder data_fifo_io_pop_valid", false,-1);
        vcdp->declBit(c+4249,"TX channel_code tailed_conv_encoder data_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+4257,"TX channel_code tailed_conv_encoder data_fifo_io_pop_payload_fragment", false,-1, 0,0);
        vcdp->declBus(c+769,"TX channel_code tailed_conv_encoder data_fifo_io_occupancy", false,-1, 12,0);
        vcdp->declBus(c+777,"TX channel_code tailed_conv_encoder data_fifo_io_availability", false,-1, 12,0);
        vcdp->declBit(c+3489,"TX channel_code tailed_conv_encoder isEncoding", false,-1);
        vcdp->declBit(c+3497,"TX channel_code tailed_conv_encoder loaded_tail_bits", false,-1);
        vcdp->declBus(c+4265,"TX channel_code tailed_conv_encoder tail_bits", false,-1, 6,0);
        vcdp->declBit(c+2009,"TX channel_code tailed_conv_encoder raw_data_fire", false,-1);
        vcdp->declBit(c+1241,"TX channel_code tailed_conv_encoder when_PhyTX_l623", false,-1);
        vcdp->declBit(c+1089,"TX channel_code tailed_conv_encoder tailed_conv_encoder_data_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+857,"TX channel_code tailed_conv_encoder when_PhyTX_l630", false,-1);
        vcdp->declBit(c+2009,"TX channel_code tailed_conv_encoder raw_data_fire_1", false,-1);
        vcdp->declBit(c+2009,"TX channel_code tailed_conv_encoder raw_data_fire_2", false,-1);
        vcdp->declBit(c+2017,"TX channel_code tailed_conv_encoder when_PhyTX_l648", false,-1);
        vcdp->declBit(c+1985,"TX channel_code tailed_conv_encoder tailed_conv_encoder tail_bits_valid", false,-1);
        vcdp->declBus(c+1233,"TX channel_code tailed_conv_encoder tailed_conv_encoder tail_bits_payload", false,-1, 6,0);
        vcdp->declBit(c+745,"TX channel_code tailed_conv_encoder tailed_conv_encoder raw_data_valid", false,-1);
        vcdp->declBit(c+2001,"TX channel_code tailed_conv_encoder tailed_conv_encoder raw_data_ready", false,-1);
        vcdp->declBit(c+3609,"TX channel_code tailed_conv_encoder tailed_conv_encoder raw_data_payload_last", false,-1);
        vcdp->declBus(c+3617,"TX channel_code tailed_conv_encoder tailed_conv_encoder raw_data_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+3377,"TX channel_code tailed_conv_encoder tailed_conv_encoder coded_data_valid", false,-1);
        vcdp->declBit(c+3385,"TX channel_code tailed_conv_encoder tailed_conv_encoder coded_data_payload_last", false,-1);
        vcdp->declBus(c+2849,"TX channel_code tailed_conv_encoder tailed_conv_encoder coded_data_payload_fragment", false,-1, 2,0);
        vcdp->declBit(c+4465,"TX channel_code tailed_conv_encoder tailed_conv_encoder clk", false,-1);
        vcdp->declBit(c+4473,"TX channel_code tailed_conv_encoder tailed_conv_encoder reset", false,-1);
        vcdp->declBus(c+2849,"TX channel_code tailed_conv_encoder tailed_conv_encoder coded_data", false,-1, 2,0);
        vcdp->declBit(c+3377,"TX channel_code tailed_conv_encoder tailed_conv_encoder coded_data_valid_1", false,-1);
        vcdp->declBus(c+3505,"TX channel_code tailed_conv_encoder tailed_conv_encoder r_enc_buf", false,-1, 6,0);
        vcdp->declBus(c+2025,"TX channel_code tailed_conv_encoder tailed_conv_encoder r_enc_0", false,-1, 6,0);
        vcdp->declBus(c+2033,"TX channel_code tailed_conv_encoder tailed_conv_encoder code_vec_0", false,-1, 0,0);
        vcdp->declBus(c+2041,"TX channel_code tailed_conv_encoder tailed_conv_encoder code_vec_1", false,-1, 0,0);
        vcdp->declBus(c+2049,"TX channel_code tailed_conv_encoder tailed_conv_encoder code_vec_2", false,-1, 0,0);
        vcdp->declBit(c+2057,"TX channel_code tailed_conv_encoder tailed_conv_encoder raw_data_fire", false,-1);
        vcdp->declBit(c+3385,"TX channel_code tailed_conv_encoder tailed_conv_encoder raw_data_payload_last_regNext", false,-1);
        vcdp->declBit(c+1081,"TX channel_code tailed_conv_encoder data_fifo io_push_valid", false,-1);
        vcdp->declBit(c+753,"TX channel_code tailed_conv_encoder data_fifo io_push_ready", false,-1);
        vcdp->declBit(c+3873,"TX channel_code tailed_conv_encoder data_fifo io_push_payload_last", false,-1);
        vcdp->declBus(c+4241,"TX channel_code tailed_conv_encoder data_fifo io_push_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+761,"TX channel_code tailed_conv_encoder data_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+1993,"TX channel_code tailed_conv_encoder data_fifo io_pop_ready", false,-1);
        vcdp->declBit(c+4249,"TX channel_code tailed_conv_encoder data_fifo io_pop_payload_last", false,-1);
        vcdp->declBus(c+4257,"TX channel_code tailed_conv_encoder data_fifo io_pop_payload_fragment", false,-1, 0,0);
        vcdp->declBit(c+4617,"TX channel_code tailed_conv_encoder data_fifo io_flush", false,-1);
        vcdp->declBus(c+769,"TX channel_code tailed_conv_encoder data_fifo io_occupancy", false,-1, 12,0);
        vcdp->declBus(c+777,"TX channel_code tailed_conv_encoder data_fifo io_availability", false,-1, 12,0);
        vcdp->declBit(c+4465,"TX channel_code tailed_conv_encoder data_fifo clk", false,-1);
        vcdp->declBit(c+4473,"TX channel_code tailed_conv_encoder data_fifo reset", false,-1);
        vcdp->declBit(c+2065,"TX channel_code tailed_conv_encoder data_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX channel_code tailed_conv_encoder data_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+2073,"TX channel_code tailed_conv_encoder data_fifo logic_pushPtr_valueNext", false,-1, 12,0);
        vcdp->declBus(c+3513,"TX channel_code tailed_conv_encoder data_fifo logic_pushPtr_value", false,-1, 12,0);
        vcdp->declBit(c+3521,"TX channel_code tailed_conv_encoder data_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+1097,"TX channel_code tailed_conv_encoder data_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+2081,"TX channel_code tailed_conv_encoder data_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX channel_code tailed_conv_encoder data_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+2089,"TX channel_code tailed_conv_encoder data_fifo logic_popPtr_valueNext", false,-1, 12,0);
        vcdp->declBus(c+3529,"TX channel_code tailed_conv_encoder data_fifo logic_popPtr_value", false,-1, 12,0);
        vcdp->declBit(c+3537,"TX channel_code tailed_conv_encoder data_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+1105,"TX channel_code tailed_conv_encoder data_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+785,"TX channel_code tailed_conv_encoder data_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+3545,"TX channel_code tailed_conv_encoder data_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+2097,"TX channel_code tailed_conv_encoder data_fifo logic_pushing", false,-1);
        vcdp->declBit(c+2105,"TX channel_code tailed_conv_encoder data_fifo logic_popping", false,-1);
        vcdp->declBit(c+793,"TX channel_code tailed_conv_encoder data_fifo logic_empty", false,-1);
        vcdp->declBit(c+801,"TX channel_code tailed_conv_encoder data_fifo logic_full", false,-1);
        vcdp->declBit(c+2113,"TX channel_code tailed_conv_encoder data_fifo when_Stream_l1101", false,-1);
        vcdp->declBus(c+3553,"TX channel_code tailed_conv_encoder data_fifo logic_ptrDif", false,-1, 12,0);
        vcdp->declBus(c+2761,"TX channel_code streamDemux_4 io_select", false,-1, 0,0);
        vcdp->declBit(c+1817,"TX channel_code streamDemux_4 io_input_valid", false,-1);
        vcdp->declBit(c+1833,"TX channel_code streamDemux_4 io_input_ready", false,-1);
        vcdp->declBit(c+3873,"TX channel_code streamDemux_4 io_input_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code streamDemux_4 io_input_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+313,"TX channel_code streamDemux_4 io_outputs_0_valid", false,-1);
        vcdp->declBit(c+4609,"TX channel_code streamDemux_4 io_outputs_0_ready", false,-1);
        vcdp->declBit(c+3873,"TX channel_code streamDemux_4 io_outputs_0_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code streamDemux_4 io_outputs_0_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+1841,"TX channel_code streamDemux_4 io_outputs_1_valid", false,-1);
        vcdp->declBit(c+1825,"TX channel_code streamDemux_4 io_outputs_1_ready", false,-1);
        vcdp->declBit(c+3873,"TX channel_code streamDemux_4 io_outputs_1_payload_last", false,-1);
        vcdp->declBus(c+3881,"TX channel_code streamDemux_4 io_outputs_1_payload_fragment", false,-1, 1,0);
        vcdp->declBit(c+2857,"TX channel_code streamDemux_4 when_Stream_l908", false,-1);
        vcdp->declBit(c+2865,"TX channel_code streamDemux_4 when_Stream_l908_1", false,-1);
        vcdp->declBit(c+313,"TX channel_code flowMux_1 inputs_0_valid", false,-1);
        vcdp->declBit(c+3873,"TX channel_code flowMux_1 inputs_0_payload_last", false,-1);
        vcdp->declBus(c+3905,"TX channel_code flowMux_1 inputs_0_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+3377,"TX channel_code flowMux_1 inputs_1_valid", false,-1);
        vcdp->declBit(c+3385,"TX channel_code flowMux_1 inputs_1_payload_last", false,-1);
        vcdp->declBus(c+2753,"TX channel_code flowMux_1 inputs_1_payload_fragment", false,-1, 3,0);
        vcdp->declBus(c+2761,"TX channel_code flowMux_1 select_1", false,-1, 0,0);
    }
}

void VTX::traceInitThis__3(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1409,"TX channel_code flowMux_1 output_valid", false,-1);
        vcdp->declBit(c+1417,"TX channel_code flowMux_1 output_payload_last", false,-1);
        vcdp->declBus(c+2961,"TX channel_code flowMux_1 output_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+1409,"TX rate_match raw_data_valid", false,-1);
        vcdp->declBit(c+2977,"TX rate_match raw_data_ready", false,-1);
        vcdp->declBit(c+1417,"TX rate_match raw_data_payload_last", false,-1);
        vcdp->declBus(c+2961,"TX rate_match raw_data_payload_fragment", false,-1, 3,0);
        vcdp->declBit(c+4297,"TX rate_match segment_length_valid", false,-1);
        vcdp->declBit(c+2985,"TX rate_match segment_length_ready", false,-1);
        vcdp->declBus(c+3641,"TX rate_match segment_length_payload", false,-1, 12,0);
        vcdp->declBit(c+377,"TX rate_match result_data_valid", false,-1);
        vcdp->declBit(c+4401,"TX rate_match result_data_ready", false,-1);
        vcdp->declBit(c+3649,"TX rate_match result_data_payload_last", false,-1);
        vcdp->declBus(c+2929,"TX rate_match result_data_payload_fragment", false,-1, 0,0);
        vcdp->declBus(c+4697,"TX rate_match vector_length", false,-1, 31,0);
        vcdp->declBit(c+4465,"TX rate_match clk", false,-1);
        vcdp->declBit(c+4473,"TX rate_match reset", false,-1);
        vcdp->declBus(c+4569,"TX rate_match ConvolutionalRateMatchUnitStatus_IDLE", false,-1, 1,0);
        vcdp->declBus(c+4577,"TX rate_match ConvolutionalRateMatchUnitStatus_PADDING_ZERO", false,-1, 1,0);
        vcdp->declBus(c+4585,"TX rate_match ConvolutionalRateMatchUnitStatus_WRITE_RAM", false,-1, 1,0);
        vcdp->declBus(c+4625,"TX rate_match ConvolutionalRateMatchUnitStatus_READ_RAM", false,-1, 1,0);
        vcdp->declBus(c+3561,"TX rate_match state", false,-1, 1,0);
        vcdp->declBus(c+4273,"TX rate_match zero_padding_cnt", false,-1, 4,0);
        vcdp->declBus(c+2873,"TX rate_match rows", false,-1, 7,0);
        vcdp->declBus(c+2881,"TX rate_match write_addr", false,-1, 12,0);
        vcdp->declBus(c+2889,"TX rate_match read_addr", false,-1, 12,0);
        vcdp->declBus(c+2897,"TX rate_match read_row_cnt", false,-1, 7,0);
        vcdp->declBit(c+1329,"TX rate_match pattern_cursor_willIncrement", false,-1);
        vcdp->declBit(c+809,"TX rate_match pattern_cursor_willClear", false,-1);
        vcdp->declBus(c+1337,"TX rate_match pattern_cursor_valueNext", false,-1, 4,0);
        vcdp->declBus(c+3569,"TX rate_match pattern_cursor_value", false,-1, 4,0);
        vcdp->declBit(c+3577,"TX rate_match pattern_cursor_willOverflowIfInc", false,-1);
        vcdp->declBit(c+937,"TX rate_match pattern_cursor_willOverflow", false,-1);
        vcdp->declBus(c+4281,"TX rate_match vector_length_cnt", false,-1, 31,0);
        vcdp->declBit(c+1345,"TX rate_match bits_sel_willIncrement", false,-1);
        vcdp->declBit(c+4617,"TX rate_match bits_sel_willClear", false,-1);
        vcdp->declBus(c+945,"TX rate_match bits_sel_valueNext", false,-1, 1,0);
        vcdp->declBus(c+3585,"TX rate_match bits_sel_value", false,-1, 1,0);
        vcdp->declBit(c+3593,"TX rate_match bits_sel_willOverflowIfInc", false,-1);
        vcdp->declBit(c+953,"TX rate_match bits_sel_willOverflow", false,-1);
        vcdp->declBit(c+1353,"TX rate_match willIncrement", false,-1);
        vcdp->declBus(c+1361,"TX rate_match read_addr_next", false,-1, 12,0);
        vcdp->declBus(c+2905,"TX rate_match pattern", false,-1, 4,0);
        vcdp->declBit(c+2913,"TX rate_match when_PhyTX_l766", false,-1);
        vcdp->declBus(c+2921,"TX rate_match rate_matched_output", false,-1, 3,0);
        vcdp->declBit(c+2121,"TX rate_match segment_length_fire", false,-1);
        vcdp->declBit(c+4289,"TX rate_match when_PhyTX_l789", false,-1);
        vcdp->declBit(c+2129,"TX rate_match raw_data_fire", false,-1);
        vcdp->declBit(c+1369,"TX rate_match result_data_fire", false,-1);
        vcdp->declBit(c+4561,"TX rate_match result_data_fire_1", false,-1);
        vcdp->declBit(c+1377,"TX rate_match when_PhyTX_l816", false,-1);
        vcdp->declBit(c+2913,"TX rate_match when_PhyTX_l817", false,-1);
        vcdp->declArray(c+817,"TX rate_match state_string", false,-1, 95,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1+i*1,"TX rate_match conv_perm_pattern", true,(i+0), 4,0);}}
    }
}

void VTX::traceFullThis__1(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[0]),5);
        vcdp->fullBus(c+2,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[1]),5);
        vcdp->fullBus(c+3,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[2]),5);
        vcdp->fullBus(c+4,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[3]),5);
        vcdp->fullBus(c+5,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[4]),5);
        vcdp->fullBus(c+6,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[5]),5);
        vcdp->fullBus(c+7,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[6]),5);
        vcdp->fullBus(c+8,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[7]),5);
        vcdp->fullBus(c+9,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[8]),5);
        vcdp->fullBus(c+10,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[9]),5);
        vcdp->fullBus(c+11,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[10]),5);
        vcdp->fullBus(c+12,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[11]),5);
        vcdp->fullBus(c+13,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[12]),5);
        vcdp->fullBus(c+14,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[13]),5);
        vcdp->fullBus(c+15,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[14]),5);
        vcdp->fullBus(c+16,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[15]),5);
        vcdp->fullBus(c+17,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[16]),5);
        vcdp->fullBus(c+18,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[17]),5);
        vcdp->fullBus(c+19,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[18]),5);
        vcdp->fullBus(c+20,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[19]),5);
        vcdp->fullBus(c+21,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[20]),5);
        vcdp->fullBus(c+22,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[21]),5);
        vcdp->fullBus(c+23,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[22]),5);
        vcdp->fullBus(c+24,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[23]),5);
        vcdp->fullBus(c+25,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[24]),5);
        vcdp->fullBus(c+26,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[25]),5);
        vcdp->fullBus(c+27,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[26]),5);
        vcdp->fullBus(c+28,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[27]),5);
        vcdp->fullBus(c+29,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[28]),5);
        vcdp->fullBus(c+30,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[29]),5);
        vcdp->fullBus(c+31,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[30]),5);
        vcdp->fullBus(c+32,(vlTOPp->TX__DOT__rate_match__DOT__conv_perm_pattern[31]),5);
        vcdp->fullBus(c+257,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__code_block_resized),13);
        vcdp->fullBus(c+265,((0x1fffU & ((0U == (0xfU 
                                                 & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                    >> 9U)))
                                          ? ((IData)(8U) 
                                             + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                          : ((1U == 
                                              (0xfU 
                                               & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                  >> 9U)))
                                              ? ((IData)(0x10U) 
                                                 + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                              : ((2U 
                                                  == 
                                                  (0xfU 
                                                   & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                      >> 9U)))
                                                  ? 
                                                 ((IData)(0x20U) 
                                                  + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))
                                                  : 
                                                 ((IData)(0x40U) 
                                                  + (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp))))))),13);
        vcdp->fullBus(c+273,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn_temp),13);
        vcdp->fullBus(c+281,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_num),8);
        vcdp->fullBit(c+289,((1U & (~ ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_when_UnsignedDivider_l112) 
                                       >> 0xdU)))));
        vcdp->fullBit(c+297,((1U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc)
                                     ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT___zz_result_data_payload_fragment)
                                     : ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                        >> 1U)))));
        vcdp->fullBus(c+305,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                               ? ((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                   ? 0U : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                            ? 0U : 
                                           ((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                             ? 0U : 
                                            (2U | (1U 
                                                   & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                      >> 1U))))))
                               : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                   ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment)
                                   : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment)))),2);
        vcdp->fullBit(c+313,(((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid))));
        vcdp->fullBit(c+321,(vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready));
        vcdp->fullBit(c+329,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last));
        vcdp->fullBit(c+337,(vlTOPp->TX__DOT__tx_crc_extender_block_msg_ctrl_in_ready));
        vcdp->fullBit(c+345,((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+353,((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+361,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+369,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+377,(vlTOPp->TX__DOT__rate_match_result_data_valid));
        vcdp->fullBit(c+385,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready));
        vcdp->fullBit(c+393,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last));
        vcdp->fullBit(c+401,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready));
        vcdp->fullBit(c+409,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last));
        vcdp->fullBit(c+417,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_ready));
        vcdp->fullBit(c+425,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready));
        vcdp->fullBit(c+433,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready));
        vcdp->fullBit(c+441,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_out_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+449,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo_io_pop_valid));
        vcdp->fullBus(c+457,(((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value))))),5);
        vcdp->fullBus(c+465,(((((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value))))),5);
        vcdp->fullBus(c+473,(((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch)) 
                               << 2U) | (3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->fullBus(c+481,(((((~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch)) 
                               << 2U) | (3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->fullBit(c+489,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last));
        vcdp->fullBit(c+497,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last));
        vcdp->fullBit(c+505,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+513,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+521,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full));
        vcdp->fullBit(c+529,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+537,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->fullBit(c+545,(((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+553,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+561,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+569,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+577,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_full));
        vcdp->fullArray(c+585,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state_string),96);
        vcdp->fullArray(c+609,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state_string),96);
        vcdp->fullBit(c+633,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last));
        vcdp->fullBit(c+641,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__cmd_fire));
        vcdp->fullBit(c+649,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid));
        vcdp->fullBus(c+657,(((((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch)) 
                               << 5U) | (0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                                  - (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value))))),6);
        vcdp->fullBus(c+665,(((((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch)) 
                               << 5U) | (0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value))))),6);
        vcdp->fullBit(c+673,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo_io_pop_valid));
        vcdp->fullBus(c+681,(((((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch)) 
                               << 2U) | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value))))),3);
        vcdp->fullBus(c+689,(((((~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch)) 
                               << 2U) | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value))))),3);
        vcdp->fullBit(c+697,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+705,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+713,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full));
        vcdp->fullBit(c+721,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+729,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+737,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_full));
        vcdp->fullBit(c+745,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid))));
        vcdp->fullBit(c+753,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+761,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid));
        vcdp->fullBus(c+769,((0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch)
                                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy)
                                              ? 0x1801U
                                              : 0U)
                                          : (((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                                              < (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value))
                                              ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value))
                                              : ((IData)(0x1801U) 
                                                 + 
                                                 ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                                  - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value))))))),13);
        vcdp->fullBus(c+777,((0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch)
                                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy)
                                              ? 0U : 0x1801U)
                                          : (((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                                              < (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value))
                                              ? ((IData)(0x1801U) 
                                                 + 
                                                 ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)))
                                              : ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)))))),13);
        vcdp->fullBit(c+785,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+793,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+801,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_full));
        vcdp->fullBit(c+809,(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willClear));
        vcdp->fullArray(c+817,(vlTOPp->TX__DOT__rate_match__DOT__state_string),96);
        vcdp->fullBit(c+841,(((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid) 
                                & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full))) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last)) 
                              & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator) 
                                 >> (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)))));
        vcdp->fullBit(c+849,((((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBit(c+857,((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready)) 
                              & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBit(c+865,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+873,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid) 
                               & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_full))) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_payload_last))));
        vcdp->fullBit(c+881,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready)) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_payload_last))));
        vcdp->fullBit(c+889,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready))));
        vcdp->fullBit(c+897,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_0_ready))));
        vcdp->fullBit(c+905,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready)) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_payload_last))));
        vcdp->fullBit(c+913,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready))));
        vcdp->fullBit(c+921,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid) 
                              & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3_io_inputs_1_ready))));
        vcdp->fullBit(c+929,(((0xfU == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+937,(((0x1fU == (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value)) 
                              & (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willIncrement))));
        vcdp->fullBus(c+945,((((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)) 
                               & (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement))
                               ? 0U : (3U & ((IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value) 
                                             + (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement))))),2);
        vcdp->fullBit(c+953,(((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)) 
                              & (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement))));
        vcdp->fullBit(c+961,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid) 
                              & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+969,(((0xfU == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+977,(((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+985,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+993,(((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state)) 
                              & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready))));
        vcdp->fullBit(c+1001,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_payload_last))));
        vcdp->fullBit(c+1009,(((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready))));
        vcdp->fullBit(c+1017,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_last))));
        vcdp->fullBit(c+1025,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_payload_last))));
        vcdp->fullBit(c+1033,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready))));
        vcdp->fullBit(c+1041,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid) 
                               & (2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)))));
        vcdp->fullBit(c+1049,(((0x1fU == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+1057,(((0x1fU == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+1065,(((3U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement))));
    }
}

void VTX::traceFullThis__11(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp17[5];
    WData/*159:0*/ __Vtemp22[5];
    WData/*159:0*/ __Vtemp27[5];
    WData/*159:0*/ __Vtemp32[5];
    // Body
    {
        vcdp->fullBit(c+1073,(((3U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+1081,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
                               & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding)))));
        vcdp->fullBit(c+1089,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready))));
        vcdp->fullBit(c+1097,(((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+1105,(((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+1113,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type));
        vcdp->fullBit(c+1121,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_is_last_block));
        vcdp->fullBus(c+1129,(vlTOPp->TX__DOT__code_block_segment__DOT__finish_indicator),4);
        __Vtemp17[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp17[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp17[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp17[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp17[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4__DOT___zz___05Fzz_io_output_payload_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->fullArray(c+1137,(__Vtemp17),152);
        vcdp->fullBit(c+1177,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)
                                ? ((7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)) 
                                   & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready))
                                : (7U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state)))));
        vcdp->fullBit(c+1185,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid))));
        vcdp->fullBit(c+1193,(((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid))));
        vcdp->fullBit(c+1201,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid))));
        vcdp->fullBit(c+1209,(((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid))));
        vcdp->fullBit(c+1217,(((2U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid))));
        vcdp->fullBit(c+1225,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready)) 
                               & ((0x19U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt)) 
                                  & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode)))));
        vcdp->fullBus(c+1233,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)
                                ? ((0x40U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                             << 5U)) 
                                   | (0x3fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits) 
                                               >> 1U)))
                                : 0U)),7);
        vcdp->fullBit(c+1241,((((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
                                & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready)) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBit(c+1249,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamMux_3__DOT___zz_io_output_valid));
        vcdp->fullBit(c+1257,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_input_valid));
        vcdp->fullBit(c+1265,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_result_data_valid));
        vcdp->fullBit(c+1273,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_result_data_valid));
        vcdp->fullBit(c+1281,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid));
        vcdp->fullBit(c+1289,(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid));
        vcdp->fullBit(c+1297,(vlTOPp->TX__DOT__tx_crc_extender__DOT__block_msg_ctrl_in_fire));
        vcdp->fullBit(c+1305,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+1313,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->fullBit(c+1321,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+1329,(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_willIncrement));
        vcdp->fullBus(c+1337,(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_valueNext),5);
        vcdp->fullBit(c+1345,(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_willIncrement));
        vcdp->fullBit(c+1353,(vlTOPp->TX__DOT__rate_match__DOT__willIncrement));
        vcdp->fullBus(c+1361,(vlTOPp->TX__DOT__rate_match__DOT__read_addr_next),13);
        vcdp->fullBit(c+1369,(vlTOPp->TX__DOT__rate_match__DOT__result_data_fire));
        vcdp->fullBit(c+1377,(vlTOPp->TX__DOT__rate_match__DOT__when_PhyTX_l816));
        vcdp->fullBit(c+1385,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushing) 
                               != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+1393,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_valid));
        vcdp->fullBit(c+1401,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3__DOT___zz_io_output_payload_last));
        vcdp->fullBit(c+1409,(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_valid));
        vcdp->fullBit(c+1417,(vlTOPp->TX__DOT__channel_code__DOT__flowMux_1__DOT___zz_output_payload_last));
        vcdp->fullBit(c+1425,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state))));
        vcdp->fullBit(c+1433,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state))));
        vcdp->fullBit(c+1441,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_valid));
        vcdp->fullBit(c+1449,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_valid));
        vcdp->fullBit(c+1457,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo_io_pop_valid));
        vcdp->fullBit(c+1465,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_block_msg_ready));
        vcdp->fullBit(c+1473,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid));
        vcdp->fullBit(c+1481,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_block_msg_ready));
        vcdp->fullBit(c+1489,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid));
        vcdp->fullBus(c+1497,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_payload_fragment),2);
        vcdp->fullBit(c+1505,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_block_msg_ready));
        vcdp->fullBit(c+1513,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid));
        vcdp->fullBit(c+1521,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last));
        vcdp->fullBus(c+1529,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_fragment),2);
        vcdp->fullBit(c+1537,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_input_ready));
        vcdp->fullBit(c+1545,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_4_io_outputs_1_valid));
        vcdp->fullBit(c+1553,(vlTOPp->TX__DOT__code_block_segment__DOT__streamDemux_5_io_input_ready));
        vcdp->fullBit(c+1561,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready));
        vcdp->fullBit(c+1569,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready));
        vcdp->fullBit(c+1577,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready));
        vcdp->fullBit(c+1585,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_0_ready));
        vcdp->fullBit(c+1593,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_1_ready));
        vcdp->fullBit(c+1601,(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_4_io_inputs_2_ready));
        vcdp->fullBit(c+1609,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1617,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->fullBit(c+1625,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1633,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1641,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->fullBit(c+1649,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1657,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_fire));
        vcdp->fullBit(c+1665,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_0_ready))));
        vcdp->fullBit(c+1673,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_fire));
        vcdp->fullBit(c+1681,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__result_data_fire_1));
        vcdp->fullBit(c+1689,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_1_ready))));
        vcdp->fullBit(c+1697,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid));
        vcdp->fullBit(c+1705,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready));
        vcdp->fullBit(c+1713,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready));
        vcdp->fullBit(c+1721,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid));
        vcdp->fullBit(c+1729,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_fire));
        vcdp->fullBit(c+1737,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_msg_fire));
        vcdp->fullBit(c+1745,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__result_data_fire));
        vcdp->fullBit(c+1753,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready))));
        vcdp->fullBit(c+1761,((((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_valid) 
                                & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__streamMux_3_io_inputs_2_ready)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment_result_data_payload_last))));
        vcdp->fullArray(c+1769,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state_string),96);
        vcdp->fullBit(c+1793,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_raw_data_ready))));
        vcdp->fullBit(c+1801,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core_result_data_ready))));
        vcdp->fullBit(c+1809,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo_io_pop_ready));
        vcdp->fullBit(c+1817,(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_valid));
        vcdp->fullBit(c+1825,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready));
        vcdp->fullBit(c+1833,(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_input_ready));
        vcdp->fullBit(c+1841,(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid));
        vcdp->fullBit(c+1849,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping));
        vcdp->fullArray(c+1857,(vlTOPp->TX__DOT__channel_code__DOT__state_string),72);
        vcdp->fullBit(c+1881,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+1889,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->fullBit(c+1897,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1905,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->fullBit(c+1913,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+1921,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1929,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushing) 
                               != (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+1937,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+1945,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_valueNext),2);
        vcdp->fullBit(c+1953,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1961,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_valueNext),2);
        vcdp->fullBit(c+1969,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+1977,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushing) 
                               != (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+1985,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648));
        vcdp->fullBit(c+1993,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo_io_pop_ready));
        vcdp->fullBit(c+2001,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648)))));
        vcdp->fullBit(c+2009,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__streamDemux_4_io_outputs_1_valid) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder_raw_data_ready))));
        vcdp->fullBit(c+2017,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__when_PhyTX_l648));
        vcdp->fullBus(c+2025,((0x7fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                        >> 1U))),7);
        vcdp->fullBit(c+2033,((1U & ((((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                         >> 1U) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                   >> 2U)) 
                                       ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                          >> 4U)) ^ 
                                      ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                       >> 5U)) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                  >> 7U)))));
        vcdp->fullBit(c+2041,((1U & ((((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                         >> 1U) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                   >> 4U)) 
                                       ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                          >> 5U)) ^ 
                                      ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                       >> 6U)) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                  >> 7U)))));
        vcdp->fullBit(c+2049,((1U & ((((((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                         >> 1U) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                   >> 3U)) 
                                       ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                          >> 5U)) ^ 
                                      ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                       >> 6U)) ^ ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT___zz_r_enc_0) 
                                                  >> 7U)))));
        vcdp->fullBit(c+2057,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_fire));
        vcdp->fullBit(c+2065,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+2073,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_valueNext),13);
        vcdp->fullBit(c+2081,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+2089,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_valueNext),13);
        vcdp->fullBit(c+2097,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+2105,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping));
        vcdp->fullBit(c+2113,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushing) 
                               != (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+2121,(vlTOPp->TX__DOT__channel_code__DOT__coded_msg_fire));
        vcdp->fullBit(c+2129,(vlTOPp->TX__DOT__rate_match__DOT__raw_data_fire));
        vcdp->fullBus(c+2137,(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type),2);
        vcdp->fullBus(c+2145,(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_length),20);
        vcdp->fullBus(c+2153,(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_rnti_scramble),16);
        vcdp->fullBit(c+2161,(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type));
        vcdp->fullBit(c+2169,((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))));
        vcdp->fullBus(c+2177,(((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                                ? 0x50424348U : ((1U 
                                                  == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                                                  ? 0x50434348U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                                                   ? 0x50544348U
                                                   : 0x3f3f3f3fU)))),32);
        vcdp->fullBit(c+2185,((1U != (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))));
        vcdp->fullBit(c+2193,((1U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBit(c+2201,((1U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))));
        vcdp->fullBus(c+2209,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_length),13);
        vcdp->fullBit(c+2217,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type));
        vcdp->fullBit(c+2225,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type));
        vcdp->fullBus(c+2233,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length),13);
        vcdp->fullBit(c+2241,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type));
        vcdp->fullBus(c+2249,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[0]),2);
        vcdp->fullBus(c+2250,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[1]),2);
        vcdp->fullBus(c+2251,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[2]),2);
        vcdp->fullBus(c+2252,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[3]),2);
        vcdp->fullBus(c+2253,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[4]),2);
        vcdp->fullBus(c+2254,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[5]),2);
        vcdp->fullBus(c+2255,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[6]),2);
        vcdp->fullBus(c+2256,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[7]),2);
        vcdp->fullBus(c+2257,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[8]),2);
        vcdp->fullBus(c+2258,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[9]),2);
        vcdp->fullBus(c+2259,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[10]),2);
        vcdp->fullBus(c+2260,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[11]),2);
        vcdp->fullBus(c+2261,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[12]),2);
        vcdp->fullBus(c+2262,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[13]),2);
        vcdp->fullBus(c+2263,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[14]),2);
        vcdp->fullBus(c+2264,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_ram[15]),2);
        __Vtemp22[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp22[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp22[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp22[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp22[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->fullArray(c+2377,(__Vtemp22),152);
        __Vtemp27[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp27[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp27[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp27[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp27[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->fullArray(c+2417,(__Vtemp27),152);
        __Vtemp32[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp32[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp32[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp32[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp32[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->fullArray(c+2457,(__Vtemp32),152);
    }
}

void VTX::traceFullThis__18(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp82[5];
    WData/*159:0*/ __Vtemp87[5];
    WData/*159:0*/ __Vtemp92[5];
    WData/*159:0*/ __Vtemp97[5];
    WData/*159:0*/ __Vtemp102[5];
    // Body
    {
        __Vtemp82[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp82[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp82[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp82[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp82[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->fullArray(c+2497,(__Vtemp82),152);
        vcdp->fullBus(c+2537,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient),20);
        vcdp->fullBus(c+2545,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_remainder),13);
        vcdp->fullBit(c+2553,((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_error))));
        vcdp->fullBus(c+2561,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__C),8);
        vcdp->fullBus(c+2569,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp),8);
        vcdp->fullBus(c+2577,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn),8);
        vcdp->fullBus(c+2585,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kp),13);
        vcdp->fullBus(c+2593,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Kn),13);
        vcdp->fullBus(c+2601,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__F),20);
        vcdp->fullBus(c+2609,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__shift_step),3);
        vcdp->fullBus(c+2617,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__numerator),20);
        vcdp->fullBus(c+2625,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__denominator),13);
        vcdp->fullBus(c+2633,((0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length) 
                                       >> 9U))),4);
        vcdp->fullBus(c+2641,(((0U == (0xfU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                               >> 9U)))
                                ? 3U : ((1U == (0xfU 
                                                & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                   >> 9U)))
                                         ? 4U : ((2U 
                                                  == 
                                                  (0xfU 
                                                   & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                                      >> 9U)))
                                                  ? 5U
                                                  : 6U)))),3);
        vcdp->fullBus(c+2649,((0xfU & (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_payload_quotient 
                                       >> 9U))),4);
        vcdp->fullBit(c+2657,((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn))));
        vcdp->fullBit(c+2665,(((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cp)) 
                               & (0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__Cn)))));
        __Vtemp87[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp87[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp87[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp87[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp87[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->fullArray(c+2673,(__Vtemp87),152);
        __Vtemp92[0U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp92[1U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp92[2U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp92[3U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp92[4U] = ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->fullArray(c+2713,(__Vtemp92),152);
        vcdp->fullBus(c+2753,((8U | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data))),4);
        vcdp->fullBit(c+2761,(vlTOPp->TX__DOT__channel_code__DOT__sel_cha));
        __Vtemp97[0U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6f6e616cU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp97[1U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6c757469U : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp97[2U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6f6e766fU : 0x3f3f3f3fU)
                          : 0x20202020U);
        __Vtemp97[3U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x6c656443U : 0x3f3f3f3fU)
                          : 0x626f2020U);
        __Vtemp97[4U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                          ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                              ? 0x546169U : 0x3f3f3fU)
                          : 0x547572U);
        vcdp->fullArray(c+2769,(__Vtemp97),152);
        __Vtemp102[0U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                           ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                               ? 0x6f6e616cU : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp102[1U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                           ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                               ? 0x6c757469U : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp102[2U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                           ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                               ? 0x6f6e766fU : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp102[3U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                           ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                               ? 0x6c656443U : 0x3f3f3f3fU)
                           : 0x626f2020U);
        __Vtemp102[4U] = ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                           ? ((IData)(vlTOPp->TX__DOT__channel_code__DOT__message_segment_code_type)
                               ? 0x546169U : 0x3f3f3fU)
                           : 0x547572U);
        vcdp->fullArray(c+2809,(__Vtemp102),152);
        vcdp->fullBus(c+2849,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data),3);
        vcdp->fullBit(c+2857,(vlTOPp->TX__DOT__channel_code__DOT__sel_cha));
        vcdp->fullBit(c+2865,((1U & (~ (IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)))));
        vcdp->fullBus(c+2873,(vlTOPp->TX__DOT__rate_match__DOT__rows),8);
        vcdp->fullBus(c+2881,(vlTOPp->TX__DOT__rate_match__DOT__write_addr),13);
        vcdp->fullBus(c+2889,(vlTOPp->TX__DOT__rate_match__DOT__read_addr),13);
        vcdp->fullBus(c+2897,(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt),8);
        vcdp->fullBus(c+2905,(vlTOPp->TX__DOT__rate_match__DOT___zz_conv_perm_pattern_port0),5);
        vcdp->fullBit(c+2913,((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__read_row_cnt))));
        vcdp->fullBus(c+2921,(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0),4);
        vcdp->fullBit(c+2929,((1U & ((IData)(vlTOPp->TX__DOT__rate_match__DOT___zz_interleaving_ram_port0) 
                                     >> (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value)))));
        vcdp->fullBus(c+2937,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                ? 0U : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                         ? 0U : ((2U 
                                                  == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                                  ? 0U
                                                  : 
                                                 (2U 
                                                  | (1U 
                                                     & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                        >> 1U))))))),2);
        vcdp->fullBus(c+2945,((0xffffffU & ((vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                             << 1U) 
                                            ^ ((1U 
                                                & (((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U) 
                                                   ^ 
                                                   (vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state 
                                                    >> 0x17U)))
                                                ? 0x800063U
                                                : 0U)))),24);
        vcdp->fullBus(c+2953,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__segment_message_segment_length)
                                : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                    ? (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length)
                                    : (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__segment_message_segment_length)))),13);
        vcdp->fullBus(c+2961,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__sel_cha)
                                ? (8U | (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data))
                                : (4U | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 1U))))),4);
        vcdp->fullBit(c+2969,(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_out_valid));
        vcdp->fullBit(c+2977,((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))));
        vcdp->fullBit(c+2985,((0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state))));
        vcdp->fullBit(c+2993,(vlTOPp->TX__DOT__tx_crc_extender__DOT__ctrl_in_enable));
        vcdp->fullBit(c+3001,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc_raw_halt));
        vcdp->fullBus(c+3009,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state),24);
        vcdp->fullBit(c+3017,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc));
        vcdp->fullBus(c+3025,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter),5);
        vcdp->fullBit(c+3033,((1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)))));
        vcdp->fullBit(c+3041,((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__counter))));
        vcdp->fullBus(c+3049,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state),16);
        vcdp->fullBit(c+3057,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc));
        vcdp->fullBus(c+3065,(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter),4);
        vcdp->fullBit(c+3073,((1U & (~ (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)))));
        vcdp->fullBit(c+3081,((0U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__counter))));
        vcdp->fullBit(c+3089,((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))));
        vcdp->fullBit(c+3097,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))));
        vcdp->fullBit(c+3105,(((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)) 
                               | (4U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state)))));
        vcdp->fullBit(c+3113,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))));
        vcdp->fullBus(c+3121,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value),4);
        vcdp->fullBit(c+3129,((0xfU == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+3137,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value),4);
        vcdp->fullBit(c+3145,((0xfU == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+3153,(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+3161,((0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__data_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->fullBus(c+3169,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value),2);
        vcdp->fullBit(c+3177,((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+3185,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value),2);
        vcdp->fullBit(c+3193,((3U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+3201,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+3209,((3U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->fullBus(c+3217,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state),2);
        vcdp->fullBit(c+3225,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__block_msg_enable));
        vcdp->fullBus(c+3233,(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt),13);
        vcdp->fullBit(c+3241,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__zero_padding_cnt))));
        vcdp->fullBus(c+3249,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state),3);
        vcdp->fullBit(c+3257,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__block_msg_enable));
        vcdp->fullBus(c+3265,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt),13);
        vcdp->fullBus(c+3273,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti),16);
        vcdp->fullBit(c+3281,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__zero_padding_cnt))));
        vcdp->fullBit(c+3289,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready));
        vcdp->fullBit(c+3297,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_rsp_valid));
        vcdp->fullBit(c+3305,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__block_msg_enable));
        vcdp->fullBit(c+3313,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable));
        vcdp->fullBit(c+3321,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__divide_enable) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT___zz_cmd_ready))));
        vcdp->fullBus(c+3329,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__crc_core__DOT__state),24);
        vcdp->fullBit(c+3337,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc));
        vcdp->fullBus(c+3345,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter),5);
        vcdp->fullBit(c+3353,((1U & (~ (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__emitCrc)))));
        vcdp->fullBit(c+3361,((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc24b_core__DOT__counter))));
        vcdp->fullBus(c+3369,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__unsigned_divider__DOT__switch_UnsignedDivider_l92),2);
        vcdp->fullBit(c+3377,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__coded_data_valid_1));
        vcdp->fullBit(c+3385,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__raw_data_payload_last_regNext));
        vcdp->fullBus(c+3393,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value),5);
        vcdp->fullBit(c+3401,((0x1fU == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+3409,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value),5);
        vcdp->fullBit(c+3417,((0x1fU == (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+3425,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+3433,((0x1fU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_popPtr_value)))),5);
        vcdp->fullBus(c+3441,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value),2);
        vcdp->fullBit(c+3449,((3U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+3457,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value),2);
        vcdp->fullBit(c+3465,((3U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+3473,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+3481,((3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_popPtr_value)))),2);
        vcdp->fullBit(c+3489,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding));
        vcdp->fullBit(c+3497,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__loaded_tail_bits));
        vcdp->fullBus(c+3505,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tailed_conv_encoder__DOT__r_enc_buf),7);
        vcdp->fullBus(c+3513,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value),13);
        vcdp->fullBit(c+3521,((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+3529,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value),13);
        vcdp->fullBit(c+3537,((0x1800U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+3545,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+3553,((0x1fffU & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_pushPtr_value) 
                                          - (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT__logic_popPtr_value)))),13);
        vcdp->fullBus(c+3561,(vlTOPp->TX__DOT__rate_match__DOT__state),2);
        vcdp->fullBus(c+3569,(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value),5);
        vcdp->fullBit(c+3577,((0x1fU == (IData)(vlTOPp->TX__DOT__rate_match__DOT__pattern_cursor_value))));
        vcdp->fullBus(c+3585,(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value),2);
        vcdp->fullBit(c+3593,((2U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__bits_sel_value))));
        vcdp->fullBit(c+3601,((1U & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__rnti) 
                                     >> (0xfU & ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length) 
                                                 - (IData)(1U)))))));
        vcdp->fullBit(c+3609,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                               & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBit(c+3617,(((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__isEncoding) 
                               & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                  >> 1U))));
        vcdp->fullBit(c+3625,(((0U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                ? (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__broadcast_channel_segment__DOT__state))
                                : ((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))
                                    ? (1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__state))
                                    : (5U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))))));
        vcdp->fullBit(c+3633,(((1U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state)) 
                               & (0U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__state)))));
        vcdp->fullBus(c+3641,(vlTOPp->TX__DOT__channel_code__DOT__message_segment_length),13);
        vcdp->fullBit(c+3649,((1U == vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt)));
        vcdp->fullBus(c+3657,((3U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0))),2);
        vcdp->fullBus(c+3665,((0xfffffU & (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                   >> 2U)))),20);
        vcdp->fullBus(c+3673,((0xffffU & (IData)((vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                  >> 0x16U)))),16);
    }
}

void VTX::traceFullThis__26(VTX__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTX* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*159:0*/ __Vtemp116[5];
    // Body
    {
        vcdp->fullBus(c+3681,(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length),13);
        vcdp->fullBus(c+3689,(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha),2);
        vcdp->fullBus(c+3697,(((0U == (3U & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0)))
                                ? 0x50424348U : ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0)))
                                                  ? 0x50434348U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0)))
                                                   ? 0x50544348U
                                                   : 0x3f3f3f3fU)))),32);
        vcdp->fullQuad(c+3705,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[0]),38);
        vcdp->fullQuad(c+3707,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[1]),38);
        vcdp->fullQuad(c+3709,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[2]),38);
        vcdp->fullQuad(c+3711,(vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT__logic_ram[3]),38);
        vcdp->fullBit(c+3769,((0x28U > (0xfffffU & (IData)(
                                                           (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                            >> 2U))))));
        vcdp->fullBit(c+3777,((0x10U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__control_channel_segment__DOT__segment_message_segment_length))));
        vcdp->fullBit(c+3785,(((0x19U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt)) 
                               & (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode))));
        vcdp->fullBus(c+3793,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt),13);
        vcdp->fullBus(c+3801,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt),13);
        vcdp->fullBit(c+3809,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__emit_step));
        vcdp->fullBit(c+3817,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__crc_mode));
        vcdp->fullBit(c+3825,((0x1800U >= (0xfffffU 
                                           & (IData)(
                                                     (vlTOPp->TX__DOT__code_block_segment__DOT__msg_fifo__DOT___zz_logic_ram_port0 
                                                      >> 2U))))));
        vcdp->fullBit(c+3833,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__zero_padding_cnt))));
        vcdp->fullBit(c+3841,((1U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__payload_cnt))));
        vcdp->fullBit(c+3849,((0U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))));
        vcdp->fullBit(c+3857,((1U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))));
        vcdp->fullBit(c+3865,((2U != (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__sel_cha))));
        vcdp->fullBit(c+3873,((1U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBus(c+3881,((3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->fullBus(c+3889,((0x1fffU & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))),13);
        vcdp->fullBit(c+3897,((1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0) 
                                     >> 0xdU))));
        vcdp->fullBus(c+3905,((4U | (3U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),4);
        vcdp->fullBus(c+3913,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[0]),3);
        vcdp->fullBus(c+3914,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[1]),3);
        vcdp->fullBus(c+3915,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[2]),3);
        vcdp->fullBus(c+3916,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[3]),3);
        vcdp->fullBus(c+3917,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[4]),3);
        vcdp->fullBus(c+3918,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[5]),3);
        vcdp->fullBus(c+3919,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[6]),3);
        vcdp->fullBus(c+3920,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[7]),3);
        vcdp->fullBus(c+3921,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[8]),3);
        vcdp->fullBus(c+3922,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[9]),3);
        vcdp->fullBus(c+3923,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[10]),3);
        vcdp->fullBus(c+3924,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[11]),3);
        vcdp->fullBus(c+3925,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[12]),3);
        vcdp->fullBus(c+3926,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[13]),3);
        vcdp->fullBus(c+3927,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[14]),3);
        vcdp->fullBus(c+3928,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[15]),3);
        vcdp->fullBus(c+3929,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[16]),3);
        vcdp->fullBus(c+3930,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[17]),3);
        vcdp->fullBus(c+3931,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[18]),3);
        vcdp->fullBus(c+3932,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[19]),3);
        vcdp->fullBus(c+3933,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[20]),3);
        vcdp->fullBus(c+3934,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[21]),3);
        vcdp->fullBus(c+3935,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[22]),3);
        vcdp->fullBus(c+3936,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[23]),3);
        vcdp->fullBus(c+3937,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[24]),3);
        vcdp->fullBus(c+3938,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[25]),3);
        vcdp->fullBus(c+3939,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[26]),3);
        vcdp->fullBus(c+3940,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[27]),3);
        vcdp->fullBus(c+3941,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[28]),3);
        vcdp->fullBus(c+3942,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[29]),3);
        vcdp->fullBus(c+3943,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[30]),3);
        vcdp->fullBus(c+3944,(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT__logic_ram[31]),3);
        __Vtemp116[0U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x6f6e616cU : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp116[1U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x6c757469U : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp116[2U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x6f6e766fU : 0x3f3f3f3fU)
                           : 0x20202020U);
        __Vtemp116[3U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x6c656443U : 0x3f3f3f3fU)
                           : 0x626f2020U);
        __Vtemp116[4U] = ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                           ? ((0x2000U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT___zz_logic_ram_port0))
                               ? 0x546169U : 0x3f3f3fU)
                           : 0x547572U);
        vcdp->fullArray(c+4169,(__Vtemp116),152);
        vcdp->fullBus(c+4209,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[0]),14);
        vcdp->fullBus(c+4210,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[1]),14);
        vcdp->fullBus(c+4211,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[2]),14);
        vcdp->fullBus(c+4212,(vlTOPp->TX__DOT__channel_code__DOT__msg_fifo__DOT__logic_ram[3]),14);
        vcdp->fullBit(c+4241,((1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))));
        vcdp->fullBit(c+4249,((1U & (IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBit(c+4257,((1U & ((IData)(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))));
        vcdp->fullBus(c+4265,(vlTOPp->TX__DOT__channel_code__DOT__tailed_conv_encoder__DOT__tail_bits),7);
        vcdp->fullBus(c+4273,(vlTOPp->TX__DOT__rate_match__DOT__zero_padding_cnt),5);
        vcdp->fullBus(c+4281,(vlTOPp->TX__DOT__rate_match__DOT__vector_length_cnt),32);
        vcdp->fullBit(c+4289,((1U == (IData)(vlTOPp->TX__DOT__rate_match__DOT__zero_padding_cnt))));
        vcdp->fullBit(c+4297,((1U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state))));
        vcdp->fullBit(c+4305,((5U == (IData)(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state))));
        vcdp->fullBit(c+4313,(vlTOPp->TX__DOT__code_block_segment__DOT__state));
        vcdp->fullQuad(c+4321,(((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state)
                                 ? ((IData)(vlTOPp->TX__DOT__code_block_segment__DOT__state)
                                     ? VL_ULL(0x425950415353)
                                     : VL_ULL(0x3f3f3f3f3f3f))
                                 : VL_ULL(0x49444c452020))),48);
        vcdp->fullBus(c+4337,(vlTOPp->TX__DOT__code_block_segment__DOT__shared_channel_segment__DOT__state),3);
        vcdp->fullBit(c+4345,((0U == (IData)(vlTOPp->TX__DOT__channel_code__DOT__state))));
        vcdp->fullBus(c+4353,(vlTOPp->TX__DOT__channel_code__DOT__state),2);
        vcdp->fullBit(c+4361,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+4369,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+4377,(vlTOPp->raw_data_payload_last));
        vcdp->fullBit(c+4385,(vlTOPp->raw_data_payload_fragment));
        vcdp->fullBit(c+4393,(vlTOPp->result_data_valid));
        vcdp->fullBit(c+4401,(vlTOPp->result_data_ready));
        vcdp->fullBit(c+4409,(vlTOPp->result_data_payload_last));
        vcdp->fullBit(c+4417,(vlTOPp->result_data_payload_fragment));
        vcdp->fullBit(c+4425,(vlTOPp->block_msg_ctrl_valid));
        vcdp->fullBit(c+4433,(vlTOPp->block_msg_ctrl_ready));
        vcdp->fullBus(c+4441,(vlTOPp->block_msg_ctrl_payload_pkg_type),2);
        vcdp->fullBus(c+4449,(vlTOPp->block_msg_ctrl_payload_pkg_length),20);
        vcdp->fullBus(c+4457,(vlTOPp->block_msg_ctrl_payload_rnti_scramble),16);
        vcdp->fullBit(c+4465,(vlTOPp->clk));
        vcdp->fullBit(c+4473,(vlTOPp->reset));
        vcdp->fullBit(c+4481,(((1U == (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__message_pkg_type))
                                ? ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)
                                    ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT___zz_result_data_payload_fragment)
                                    : (IData)(vlTOPp->raw_data_payload_fragment))
                                : ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)
                                    ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT___zz_result_data_payload_fragment)
                                    : (IData)(vlTOPp->raw_data_payload_fragment)))));
        vcdp->fullBus(c+4489,(((0U == (IData)(vlTOPp->block_msg_ctrl_payload_pkg_type))
                                ? 0x50424348U : ((1U 
                                                  == (IData)(vlTOPp->block_msg_ctrl_payload_pkg_type))
                                                  ? 0x50434348U
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlTOPp->block_msg_ctrl_payload_pkg_type))
                                                   ? 0x50544348U
                                                   : 0x3f3f3f3fU)))),32);
        vcdp->fullBit(c+4497,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__emitCrc)
                                ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT___zz_result_data_payload_fragment)
                                : (IData)(vlTOPp->raw_data_payload_fragment))));
        vcdp->fullBit(c+4505,(((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__emitCrc)
                                ? (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT___zz_result_data_payload_fragment)
                                : (IData)(vlTOPp->raw_data_payload_fragment))));
        vcdp->fullBit(c+4513,(((IData)(vlTOPp->raw_data_valid) 
                               & (IData)(vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready))));
        vcdp->fullBit(c+4521,((((IData)(vlTOPp->raw_data_valid) 
                                & (IData)(vlTOPp->TX__DOT__tx_crc_extender_raw_data_ready)) 
                               & (IData)(vlTOPp->raw_data_payload_last))));
        vcdp->fullBus(c+4529,((0xffffffU & ((vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                             << 1U) 
                                            ^ ((1U 
                                                & ((IData)(vlTOPp->raw_data_payload_fragment) 
                                                   ^ 
                                                   (vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core__DOT__crc_core__DOT__state 
                                                    >> 0x17U)))
                                                ? 0x864cfbU
                                                : 0U)))),24);
        vcdp->fullBit(c+4537,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_0_valid) 
                                & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc24a_core_raw_data_ready)) 
                               & (IData)(vlTOPp->raw_data_payload_last))));
        vcdp->fullBus(c+4545,((0xffffU & (((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                           << 1U) ^ 
                                          ((1U & ((IData)(vlTOPp->raw_data_payload_fragment) 
                                                  ^ 
                                                  ((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core__DOT__crc_core__DOT__state) 
                                                   >> 0xfU)))
                                            ? 0x1021U
                                            : 0U)))),16);
        vcdp->fullBit(c+4553,((((IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__streamDemux_4_io_outputs_1_valid) 
                                & (IData)(vlTOPp->TX__DOT__tx_crc_extender__DOT__crc16_core_raw_data_ready)) 
                               & (IData)(vlTOPp->raw_data_payload_last))));
        vcdp->fullBit(c+4561,(((IData)(vlTOPp->TX__DOT__rate_match_result_data_valid) 
                               & (IData)(vlTOPp->result_data_ready))));
        vcdp->fullBus(c+4569,(0U),2);
        vcdp->fullBus(c+4577,(1U),2);
        vcdp->fullBus(c+4585,(2U),2);
        vcdp->fullBit(c+4593,(0U));
        vcdp->fullBit(c+4601,(1U));
        vcdp->fullBit(c+4609,(1U));
        vcdp->fullBit(c+4617,(0U));
        vcdp->fullBus(c+4625,(3U),2);
        vcdp->fullBus(c+4633,(0U),3);
        vcdp->fullBus(c+4641,(1U),3);
        vcdp->fullBus(c+4649,(2U),3);
        vcdp->fullBus(c+4657,(3U),3);
        vcdp->fullBus(c+4665,(4U),3);
        vcdp->fullBus(c+4673,(5U),3);
        vcdp->fullBus(c+4681,(6U),3);
        vcdp->fullBus(c+4689,(7U),3);
        vcdp->fullBus(c+4697,(0xc8U),32);
    }
}
