// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOFDMEqualizer__Syms.h"


//======================

void VOFDMEqualizer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VOFDMEqualizer::traceInit, &VOFDMEqualizer::traceFull, &VOFDMEqualizer::traceChg, this);
}
void VOFDMEqualizer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VOFDMEqualizer* t = (VOFDMEqualizer*)userthis;
    VOFDMEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VOFDMEqualizer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOFDMEqualizer* t = (VOFDMEqualizer*)userthis;
    VOFDMEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VOFDMEqualizer::traceInitThis(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VOFDMEqualizer::traceFullThis(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOFDMEqualizer::traceInitThis__1(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+2569,"raw_data_valid", false,-1);
        vcdp->declBit(c+2577,"raw_data_ready", false,-1);
        vcdp->declBit(c+2585,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+2593,"raw_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2601,"raw_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2609,"equalized_data_valid", false,-1);
        vcdp->declBit(c+2617,"equalized_data_payload_last", false,-1);
        vcdp->declBus(c+2625,"equalized_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2633,"equalized_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2641,"clk", false,-1);
        vcdp->declBit(c+2649,"reset", false,-1);
        vcdp->declBit(c+2569,"OFDMEqualizer raw_data_valid", false,-1);
        vcdp->declBit(c+2577,"OFDMEqualizer raw_data_ready", false,-1);
        vcdp->declBit(c+2585,"OFDMEqualizer raw_data_payload_last", false,-1);
        vcdp->declBus(c+2593,"OFDMEqualizer raw_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2601,"OFDMEqualizer raw_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2609,"OFDMEqualizer equalized_data_valid", false,-1);
        vcdp->declBit(c+2617,"OFDMEqualizer equalized_data_payload_last", false,-1);
        vcdp->declBus(c+2625,"OFDMEqualizer equalized_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+2633,"OFDMEqualizer equalized_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+2641,"OFDMEqualizer clk", false,-1);
        vcdp->declBit(c+2649,"OFDMEqualizer reset", false,-1);
        vcdp->declBus(c+17,"OFDMEqualizer i_zf_eq_scale", false,-1, 15,0);
        vcdp->declBus(c+25,"OFDMEqualizer i_zf_eq_ref_data", false,-1, 15,0);
        vcdp->declBus(c+33,"OFDMEqualizer q_zf_eq_scale", false,-1, 15,0);
        vcdp->declBus(c+41,"OFDMEqualizer q_zf_eq_ref_data", false,-1, 15,0);
        vcdp->declBit(c+2697,"OFDMEqualizer i_zf_eq_raw_data_ready", false,-1);
        vcdp->declBit(c+2489,"OFDMEqualizer i_zf_eq_result_data_valid", false,-1);
        vcdp->declBus(c+1,"OFDMEqualizer i_zf_eq_result_data_payload", false,-1, 15,0);
        vcdp->declBit(c+2697,"OFDMEqualizer q_zf_eq_raw_data_ready", false,-1);
        vcdp->declBit(c+2497,"OFDMEqualizer q_zf_eq_result_data_valid", false,-1);
        vcdp->declBus(c+9,"OFDMEqualizer q_zf_eq_result_data_payload", false,-1, 15,0);
        vcdp->declBus(c+89,"OFDMEqualizer cha_i_ref_0", false,-1, 15,0);
        vcdp->declBus(c+97,"OFDMEqualizer cha_i_ref_1", false,-1, 15,0);
        vcdp->declBus(c+105,"OFDMEqualizer cha_i_ref_2", false,-1, 15,0);
        vcdp->declBus(c+113,"OFDMEqualizer cha_i_ref_3", false,-1, 15,0);
        vcdp->declBus(c+121,"OFDMEqualizer cha_i_ref_4", false,-1, 15,0);
        vcdp->declBus(c+129,"OFDMEqualizer cha_i_ref_5", false,-1, 15,0);
        vcdp->declBus(c+137,"OFDMEqualizer cha_i_ref_6", false,-1, 15,0);
        vcdp->declBus(c+145,"OFDMEqualizer cha_i_ref_7", false,-1, 15,0);
        vcdp->declBus(c+153,"OFDMEqualizer cha_i_ref_8", false,-1, 15,0);
        vcdp->declBus(c+161,"OFDMEqualizer cha_i_ref_9", false,-1, 15,0);
        vcdp->declBus(c+169,"OFDMEqualizer cha_i_ref_10", false,-1, 15,0);
        vcdp->declBus(c+177,"OFDMEqualizer cha_i_ref_11", false,-1, 15,0);
        vcdp->declBus(c+185,"OFDMEqualizer cha_i_ref_12", false,-1, 15,0);
        vcdp->declBus(c+193,"OFDMEqualizer cha_i_ref_13", false,-1, 15,0);
        vcdp->declBus(c+201,"OFDMEqualizer cha_i_ref_14", false,-1, 15,0);
        vcdp->declBus(c+209,"OFDMEqualizer cha_i_ref_15", false,-1, 15,0);
        vcdp->declBus(c+217,"OFDMEqualizer cha_i_ref_16", false,-1, 15,0);
        vcdp->declBus(c+225,"OFDMEqualizer cha_i_ref_17", false,-1, 15,0);
        vcdp->declBus(c+233,"OFDMEqualizer cha_i_ref_18", false,-1, 15,0);
        vcdp->declBus(c+241,"OFDMEqualizer cha_i_ref_19", false,-1, 15,0);
        vcdp->declBus(c+249,"OFDMEqualizer cha_i_ref_20", false,-1, 15,0);
        vcdp->declBus(c+257,"OFDMEqualizer cha_i_ref_21", false,-1, 15,0);
        vcdp->declBus(c+265,"OFDMEqualizer cha_i_ref_22", false,-1, 15,0);
        vcdp->declBus(c+273,"OFDMEqualizer cha_i_ref_23", false,-1, 15,0);
        vcdp->declBus(c+281,"OFDMEqualizer cha_i_ref_24", false,-1, 15,0);
        vcdp->declBus(c+289,"OFDMEqualizer cha_i_ref_25", false,-1, 15,0);
        vcdp->declBus(c+297,"OFDMEqualizer cha_i_ref_26", false,-1, 15,0);
        vcdp->declBus(c+305,"OFDMEqualizer cha_i_ref_27", false,-1, 15,0);
        vcdp->declBus(c+313,"OFDMEqualizer cha_i_ref_28", false,-1, 15,0);
        vcdp->declBus(c+321,"OFDMEqualizer cha_i_ref_29", false,-1, 15,0);
        vcdp->declBus(c+329,"OFDMEqualizer cha_i_ref_30", false,-1, 15,0);
        vcdp->declBus(c+337,"OFDMEqualizer cha_i_ref_31", false,-1, 15,0);
        vcdp->declBus(c+345,"OFDMEqualizer cha_i_ref_32", false,-1, 15,0);
        vcdp->declBus(c+353,"OFDMEqualizer cha_i_ref_33", false,-1, 15,0);
        vcdp->declBus(c+361,"OFDMEqualizer cha_i_ref_34", false,-1, 15,0);
        vcdp->declBus(c+369,"OFDMEqualizer cha_i_ref_35", false,-1, 15,0);
        vcdp->declBus(c+377,"OFDMEqualizer cha_i_ref_36", false,-1, 15,0);
        vcdp->declBus(c+385,"OFDMEqualizer cha_i_ref_37", false,-1, 15,0);
        vcdp->declBus(c+393,"OFDMEqualizer cha_i_ref_38", false,-1, 15,0);
        vcdp->declBus(c+401,"OFDMEqualizer cha_i_ref_39", false,-1, 15,0);
        vcdp->declBus(c+409,"OFDMEqualizer cha_i_ref_40", false,-1, 15,0);
        vcdp->declBus(c+417,"OFDMEqualizer cha_i_ref_41", false,-1, 15,0);
        vcdp->declBus(c+425,"OFDMEqualizer cha_i_ref_42", false,-1, 15,0);
        vcdp->declBus(c+433,"OFDMEqualizer cha_i_ref_43", false,-1, 15,0);
        vcdp->declBus(c+441,"OFDMEqualizer cha_i_ref_44", false,-1, 15,0);
        vcdp->declBus(c+449,"OFDMEqualizer cha_i_ref_45", false,-1, 15,0);
        vcdp->declBus(c+457,"OFDMEqualizer cha_i_ref_46", false,-1, 15,0);
        vcdp->declBus(c+465,"OFDMEqualizer cha_i_ref_47", false,-1, 15,0);
        vcdp->declBus(c+473,"OFDMEqualizer cha_i_ref_48", false,-1, 15,0);
        vcdp->declBus(c+481,"OFDMEqualizer cha_i_ref_49", false,-1, 15,0);
        vcdp->declBus(c+489,"OFDMEqualizer cha_i_ref_50", false,-1, 15,0);
        vcdp->declBus(c+497,"OFDMEqualizer cha_i_ref_51", false,-1, 15,0);
        vcdp->declBus(c+505,"OFDMEqualizer cha_i_ref_52", false,-1, 15,0);
        vcdp->declBus(c+513,"OFDMEqualizer cha_i_ref_53", false,-1, 15,0);
        vcdp->declBus(c+521,"OFDMEqualizer cha_i_ref_54", false,-1, 15,0);
        vcdp->declBus(c+529,"OFDMEqualizer cha_i_ref_55", false,-1, 15,0);
        vcdp->declBus(c+537,"OFDMEqualizer cha_i_ref_56", false,-1, 15,0);
        vcdp->declBus(c+545,"OFDMEqualizer cha_i_ref_57", false,-1, 15,0);
        vcdp->declBus(c+553,"OFDMEqualizer cha_i_ref_58", false,-1, 15,0);
        vcdp->declBus(c+561,"OFDMEqualizer cha_i_ref_59", false,-1, 15,0);
        vcdp->declBus(c+569,"OFDMEqualizer cha_i_ref_60", false,-1, 15,0);
        vcdp->declBus(c+577,"OFDMEqualizer cha_i_ref_61", false,-1, 15,0);
        vcdp->declBus(c+585,"OFDMEqualizer cha_i_ref_62", false,-1, 15,0);
        vcdp->declBus(c+593,"OFDMEqualizer cha_i_ref_63", false,-1, 15,0);
        vcdp->declBus(c+601,"OFDMEqualizer cha_q_ref_0", false,-1, 15,0);
        vcdp->declBus(c+609,"OFDMEqualizer cha_q_ref_1", false,-1, 15,0);
        vcdp->declBus(c+617,"OFDMEqualizer cha_q_ref_2", false,-1, 15,0);
        vcdp->declBus(c+625,"OFDMEqualizer cha_q_ref_3", false,-1, 15,0);
        vcdp->declBus(c+633,"OFDMEqualizer cha_q_ref_4", false,-1, 15,0);
        vcdp->declBus(c+641,"OFDMEqualizer cha_q_ref_5", false,-1, 15,0);
        vcdp->declBus(c+649,"OFDMEqualizer cha_q_ref_6", false,-1, 15,0);
        vcdp->declBus(c+657,"OFDMEqualizer cha_q_ref_7", false,-1, 15,0);
        vcdp->declBus(c+665,"OFDMEqualizer cha_q_ref_8", false,-1, 15,0);
        vcdp->declBus(c+673,"OFDMEqualizer cha_q_ref_9", false,-1, 15,0);
        vcdp->declBus(c+681,"OFDMEqualizer cha_q_ref_10", false,-1, 15,0);
        vcdp->declBus(c+689,"OFDMEqualizer cha_q_ref_11", false,-1, 15,0);
        vcdp->declBus(c+697,"OFDMEqualizer cha_q_ref_12", false,-1, 15,0);
        vcdp->declBus(c+705,"OFDMEqualizer cha_q_ref_13", false,-1, 15,0);
        vcdp->declBus(c+713,"OFDMEqualizer cha_q_ref_14", false,-1, 15,0);
        vcdp->declBus(c+721,"OFDMEqualizer cha_q_ref_15", false,-1, 15,0);
        vcdp->declBus(c+729,"OFDMEqualizer cha_q_ref_16", false,-1, 15,0);
        vcdp->declBus(c+737,"OFDMEqualizer cha_q_ref_17", false,-1, 15,0);
        vcdp->declBus(c+745,"OFDMEqualizer cha_q_ref_18", false,-1, 15,0);
        vcdp->declBus(c+753,"OFDMEqualizer cha_q_ref_19", false,-1, 15,0);
        vcdp->declBus(c+761,"OFDMEqualizer cha_q_ref_20", false,-1, 15,0);
        vcdp->declBus(c+769,"OFDMEqualizer cha_q_ref_21", false,-1, 15,0);
        vcdp->declBus(c+777,"OFDMEqualizer cha_q_ref_22", false,-1, 15,0);
        vcdp->declBus(c+785,"OFDMEqualizer cha_q_ref_23", false,-1, 15,0);
        vcdp->declBus(c+793,"OFDMEqualizer cha_q_ref_24", false,-1, 15,0);
        vcdp->declBus(c+801,"OFDMEqualizer cha_q_ref_25", false,-1, 15,0);
        vcdp->declBus(c+809,"OFDMEqualizer cha_q_ref_26", false,-1, 15,0);
        vcdp->declBus(c+817,"OFDMEqualizer cha_q_ref_27", false,-1, 15,0);
        vcdp->declBus(c+825,"OFDMEqualizer cha_q_ref_28", false,-1, 15,0);
        vcdp->declBus(c+833,"OFDMEqualizer cha_q_ref_29", false,-1, 15,0);
        vcdp->declBus(c+841,"OFDMEqualizer cha_q_ref_30", false,-1, 15,0);
        vcdp->declBus(c+849,"OFDMEqualizer cha_q_ref_31", false,-1, 15,0);
        vcdp->declBus(c+857,"OFDMEqualizer cha_q_ref_32", false,-1, 15,0);
        vcdp->declBus(c+865,"OFDMEqualizer cha_q_ref_33", false,-1, 15,0);
        vcdp->declBus(c+873,"OFDMEqualizer cha_q_ref_34", false,-1, 15,0);
        vcdp->declBus(c+881,"OFDMEqualizer cha_q_ref_35", false,-1, 15,0);
        vcdp->declBus(c+889,"OFDMEqualizer cha_q_ref_36", false,-1, 15,0);
        vcdp->declBus(c+897,"OFDMEqualizer cha_q_ref_37", false,-1, 15,0);
        vcdp->declBus(c+905,"OFDMEqualizer cha_q_ref_38", false,-1, 15,0);
        vcdp->declBus(c+913,"OFDMEqualizer cha_q_ref_39", false,-1, 15,0);
        vcdp->declBus(c+921,"OFDMEqualizer cha_q_ref_40", false,-1, 15,0);
        vcdp->declBus(c+929,"OFDMEqualizer cha_q_ref_41", false,-1, 15,0);
        vcdp->declBus(c+937,"OFDMEqualizer cha_q_ref_42", false,-1, 15,0);
        vcdp->declBus(c+945,"OFDMEqualizer cha_q_ref_43", false,-1, 15,0);
        vcdp->declBus(c+953,"OFDMEqualizer cha_q_ref_44", false,-1, 15,0);
        vcdp->declBus(c+961,"OFDMEqualizer cha_q_ref_45", false,-1, 15,0);
        vcdp->declBus(c+969,"OFDMEqualizer cha_q_ref_46", false,-1, 15,0);
        vcdp->declBus(c+977,"OFDMEqualizer cha_q_ref_47", false,-1, 15,0);
        vcdp->declBus(c+985,"OFDMEqualizer cha_q_ref_48", false,-1, 15,0);
        vcdp->declBus(c+993,"OFDMEqualizer cha_q_ref_49", false,-1, 15,0);
        vcdp->declBus(c+1001,"OFDMEqualizer cha_q_ref_50", false,-1, 15,0);
        vcdp->declBus(c+1009,"OFDMEqualizer cha_q_ref_51", false,-1, 15,0);
        vcdp->declBus(c+1017,"OFDMEqualizer cha_q_ref_52", false,-1, 15,0);
        vcdp->declBus(c+1025,"OFDMEqualizer cha_q_ref_53", false,-1, 15,0);
        vcdp->declBus(c+1033,"OFDMEqualizer cha_q_ref_54", false,-1, 15,0);
        vcdp->declBus(c+1041,"OFDMEqualizer cha_q_ref_55", false,-1, 15,0);
        vcdp->declBus(c+1049,"OFDMEqualizer cha_q_ref_56", false,-1, 15,0);
        vcdp->declBus(c+1057,"OFDMEqualizer cha_q_ref_57", false,-1, 15,0);
        vcdp->declBus(c+1065,"OFDMEqualizer cha_q_ref_58", false,-1, 15,0);
        vcdp->declBus(c+1073,"OFDMEqualizer cha_q_ref_59", false,-1, 15,0);
        vcdp->declBus(c+1081,"OFDMEqualizer cha_q_ref_60", false,-1, 15,0);
        vcdp->declBus(c+1089,"OFDMEqualizer cha_q_ref_61", false,-1, 15,0);
        vcdp->declBus(c+1097,"OFDMEqualizer cha_q_ref_62", false,-1, 15,0);
        vcdp->declBus(c+1105,"OFDMEqualizer cha_q_ref_63", false,-1, 15,0);
        vcdp->declBus(c+1113,"OFDMEqualizer cha_i_scale_0", false,-1, 15,0);
        vcdp->declBus(c+1121,"OFDMEqualizer cha_i_scale_1", false,-1, 15,0);
        vcdp->declBus(c+1129,"OFDMEqualizer cha_i_scale_2", false,-1, 15,0);
        vcdp->declBus(c+1137,"OFDMEqualizer cha_i_scale_3", false,-1, 15,0);
        vcdp->declBus(c+1145,"OFDMEqualizer cha_i_scale_4", false,-1, 15,0);
        vcdp->declBus(c+1153,"OFDMEqualizer cha_i_scale_5", false,-1, 15,0);
        vcdp->declBus(c+1161,"OFDMEqualizer cha_i_scale_6", false,-1, 15,0);
        vcdp->declBus(c+1169,"OFDMEqualizer cha_i_scale_7", false,-1, 15,0);
        vcdp->declBus(c+1177,"OFDMEqualizer cha_i_scale_8", false,-1, 15,0);
        vcdp->declBus(c+1185,"OFDMEqualizer cha_i_scale_9", false,-1, 15,0);
        vcdp->declBus(c+1193,"OFDMEqualizer cha_i_scale_10", false,-1, 15,0);
        vcdp->declBus(c+1201,"OFDMEqualizer cha_i_scale_11", false,-1, 15,0);
        vcdp->declBus(c+1209,"OFDMEqualizer cha_i_scale_12", false,-1, 15,0);
        vcdp->declBus(c+1217,"OFDMEqualizer cha_i_scale_13", false,-1, 15,0);
        vcdp->declBus(c+1225,"OFDMEqualizer cha_i_scale_14", false,-1, 15,0);
        vcdp->declBus(c+1233,"OFDMEqualizer cha_i_scale_15", false,-1, 15,0);
        vcdp->declBus(c+1241,"OFDMEqualizer cha_i_scale_16", false,-1, 15,0);
        vcdp->declBus(c+1249,"OFDMEqualizer cha_i_scale_17", false,-1, 15,0);
        vcdp->declBus(c+1257,"OFDMEqualizer cha_i_scale_18", false,-1, 15,0);
        vcdp->declBus(c+1265,"OFDMEqualizer cha_i_scale_19", false,-1, 15,0);
        vcdp->declBus(c+1273,"OFDMEqualizer cha_i_scale_20", false,-1, 15,0);
        vcdp->declBus(c+1281,"OFDMEqualizer cha_i_scale_21", false,-1, 15,0);
        vcdp->declBus(c+1289,"OFDMEqualizer cha_i_scale_22", false,-1, 15,0);
        vcdp->declBus(c+1297,"OFDMEqualizer cha_i_scale_23", false,-1, 15,0);
        vcdp->declBus(c+1305,"OFDMEqualizer cha_i_scale_24", false,-1, 15,0);
        vcdp->declBus(c+1313,"OFDMEqualizer cha_i_scale_25", false,-1, 15,0);
        vcdp->declBus(c+1321,"OFDMEqualizer cha_i_scale_26", false,-1, 15,0);
        vcdp->declBus(c+1329,"OFDMEqualizer cha_i_scale_27", false,-1, 15,0);
        vcdp->declBus(c+1337,"OFDMEqualizer cha_i_scale_28", false,-1, 15,0);
        vcdp->declBus(c+1345,"OFDMEqualizer cha_i_scale_29", false,-1, 15,0);
        vcdp->declBus(c+1353,"OFDMEqualizer cha_i_scale_30", false,-1, 15,0);
        vcdp->declBus(c+1361,"OFDMEqualizer cha_i_scale_31", false,-1, 15,0);
        vcdp->declBus(c+1369,"OFDMEqualizer cha_i_scale_32", false,-1, 15,0);
        vcdp->declBus(c+1377,"OFDMEqualizer cha_i_scale_33", false,-1, 15,0);
        vcdp->declBus(c+1385,"OFDMEqualizer cha_i_scale_34", false,-1, 15,0);
        vcdp->declBus(c+1393,"OFDMEqualizer cha_i_scale_35", false,-1, 15,0);
        vcdp->declBus(c+1401,"OFDMEqualizer cha_i_scale_36", false,-1, 15,0);
        vcdp->declBus(c+1409,"OFDMEqualizer cha_i_scale_37", false,-1, 15,0);
        vcdp->declBus(c+1417,"OFDMEqualizer cha_i_scale_38", false,-1, 15,0);
        vcdp->declBus(c+1425,"OFDMEqualizer cha_i_scale_39", false,-1, 15,0);
        vcdp->declBus(c+1433,"OFDMEqualizer cha_i_scale_40", false,-1, 15,0);
        vcdp->declBus(c+1441,"OFDMEqualizer cha_i_scale_41", false,-1, 15,0);
        vcdp->declBus(c+1449,"OFDMEqualizer cha_i_scale_42", false,-1, 15,0);
        vcdp->declBus(c+1457,"OFDMEqualizer cha_i_scale_43", false,-1, 15,0);
        vcdp->declBus(c+1465,"OFDMEqualizer cha_i_scale_44", false,-1, 15,0);
        vcdp->declBus(c+1473,"OFDMEqualizer cha_i_scale_45", false,-1, 15,0);
        vcdp->declBus(c+1481,"OFDMEqualizer cha_i_scale_46", false,-1, 15,0);
        vcdp->declBus(c+1489,"OFDMEqualizer cha_i_scale_47", false,-1, 15,0);
        vcdp->declBus(c+1497,"OFDMEqualizer cha_i_scale_48", false,-1, 15,0);
        vcdp->declBus(c+1505,"OFDMEqualizer cha_i_scale_49", false,-1, 15,0);
        vcdp->declBus(c+1513,"OFDMEqualizer cha_i_scale_50", false,-1, 15,0);
        vcdp->declBus(c+1521,"OFDMEqualizer cha_i_scale_51", false,-1, 15,0);
        vcdp->declBus(c+1529,"OFDMEqualizer cha_i_scale_52", false,-1, 15,0);
        vcdp->declBus(c+1537,"OFDMEqualizer cha_i_scale_53", false,-1, 15,0);
        vcdp->declBus(c+1545,"OFDMEqualizer cha_i_scale_54", false,-1, 15,0);
        vcdp->declBus(c+1553,"OFDMEqualizer cha_i_scale_55", false,-1, 15,0);
        vcdp->declBus(c+1561,"OFDMEqualizer cha_i_scale_56", false,-1, 15,0);
        vcdp->declBus(c+1569,"OFDMEqualizer cha_i_scale_57", false,-1, 15,0);
        vcdp->declBus(c+1577,"OFDMEqualizer cha_i_scale_58", false,-1, 15,0);
        vcdp->declBus(c+1585,"OFDMEqualizer cha_i_scale_59", false,-1, 15,0);
        vcdp->declBus(c+1593,"OFDMEqualizer cha_i_scale_60", false,-1, 15,0);
        vcdp->declBus(c+1601,"OFDMEqualizer cha_i_scale_61", false,-1, 15,0);
        vcdp->declBus(c+1609,"OFDMEqualizer cha_i_scale_62", false,-1, 15,0);
        vcdp->declBus(c+1617,"OFDMEqualizer cha_i_scale_63", false,-1, 15,0);
        vcdp->declBus(c+1625,"OFDMEqualizer cha_q_scale_0", false,-1, 15,0);
        vcdp->declBus(c+1633,"OFDMEqualizer cha_q_scale_1", false,-1, 15,0);
        vcdp->declBus(c+1641,"OFDMEqualizer cha_q_scale_2", false,-1, 15,0);
        vcdp->declBus(c+1649,"OFDMEqualizer cha_q_scale_3", false,-1, 15,0);
        vcdp->declBus(c+1657,"OFDMEqualizer cha_q_scale_4", false,-1, 15,0);
        vcdp->declBus(c+1665,"OFDMEqualizer cha_q_scale_5", false,-1, 15,0);
        vcdp->declBus(c+1673,"OFDMEqualizer cha_q_scale_6", false,-1, 15,0);
        vcdp->declBus(c+1681,"OFDMEqualizer cha_q_scale_7", false,-1, 15,0);
        vcdp->declBus(c+1689,"OFDMEqualizer cha_q_scale_8", false,-1, 15,0);
        vcdp->declBus(c+1697,"OFDMEqualizer cha_q_scale_9", false,-1, 15,0);
        vcdp->declBus(c+1705,"OFDMEqualizer cha_q_scale_10", false,-1, 15,0);
        vcdp->declBus(c+1713,"OFDMEqualizer cha_q_scale_11", false,-1, 15,0);
        vcdp->declBus(c+1721,"OFDMEqualizer cha_q_scale_12", false,-1, 15,0);
        vcdp->declBus(c+1729,"OFDMEqualizer cha_q_scale_13", false,-1, 15,0);
        vcdp->declBus(c+1737,"OFDMEqualizer cha_q_scale_14", false,-1, 15,0);
        vcdp->declBus(c+1745,"OFDMEqualizer cha_q_scale_15", false,-1, 15,0);
        vcdp->declBus(c+1753,"OFDMEqualizer cha_q_scale_16", false,-1, 15,0);
        vcdp->declBus(c+1761,"OFDMEqualizer cha_q_scale_17", false,-1, 15,0);
        vcdp->declBus(c+1769,"OFDMEqualizer cha_q_scale_18", false,-1, 15,0);
        vcdp->declBus(c+1777,"OFDMEqualizer cha_q_scale_19", false,-1, 15,0);
        vcdp->declBus(c+1785,"OFDMEqualizer cha_q_scale_20", false,-1, 15,0);
        vcdp->declBus(c+1793,"OFDMEqualizer cha_q_scale_21", false,-1, 15,0);
        vcdp->declBus(c+1801,"OFDMEqualizer cha_q_scale_22", false,-1, 15,0);
        vcdp->declBus(c+1809,"OFDMEqualizer cha_q_scale_23", false,-1, 15,0);
        vcdp->declBus(c+1817,"OFDMEqualizer cha_q_scale_24", false,-1, 15,0);
        vcdp->declBus(c+1825,"OFDMEqualizer cha_q_scale_25", false,-1, 15,0);
        vcdp->declBus(c+1833,"OFDMEqualizer cha_q_scale_26", false,-1, 15,0);
        vcdp->declBus(c+1841,"OFDMEqualizer cha_q_scale_27", false,-1, 15,0);
        vcdp->declBus(c+1849,"OFDMEqualizer cha_q_scale_28", false,-1, 15,0);
        vcdp->declBus(c+1857,"OFDMEqualizer cha_q_scale_29", false,-1, 15,0);
        vcdp->declBus(c+1865,"OFDMEqualizer cha_q_scale_30", false,-1, 15,0);
        vcdp->declBus(c+1873,"OFDMEqualizer cha_q_scale_31", false,-1, 15,0);
        vcdp->declBus(c+1881,"OFDMEqualizer cha_q_scale_32", false,-1, 15,0);
        vcdp->declBus(c+1889,"OFDMEqualizer cha_q_scale_33", false,-1, 15,0);
        vcdp->declBus(c+1897,"OFDMEqualizer cha_q_scale_34", false,-1, 15,0);
        vcdp->declBus(c+1905,"OFDMEqualizer cha_q_scale_35", false,-1, 15,0);
        vcdp->declBus(c+1913,"OFDMEqualizer cha_q_scale_36", false,-1, 15,0);
        vcdp->declBus(c+1921,"OFDMEqualizer cha_q_scale_37", false,-1, 15,0);
        vcdp->declBus(c+1929,"OFDMEqualizer cha_q_scale_38", false,-1, 15,0);
        vcdp->declBus(c+1937,"OFDMEqualizer cha_q_scale_39", false,-1, 15,0);
        vcdp->declBus(c+1945,"OFDMEqualizer cha_q_scale_40", false,-1, 15,0);
        vcdp->declBus(c+1953,"OFDMEqualizer cha_q_scale_41", false,-1, 15,0);
        vcdp->declBus(c+1961,"OFDMEqualizer cha_q_scale_42", false,-1, 15,0);
        vcdp->declBus(c+1969,"OFDMEqualizer cha_q_scale_43", false,-1, 15,0);
        vcdp->declBus(c+1977,"OFDMEqualizer cha_q_scale_44", false,-1, 15,0);
        vcdp->declBus(c+1985,"OFDMEqualizer cha_q_scale_45", false,-1, 15,0);
        vcdp->declBus(c+1993,"OFDMEqualizer cha_q_scale_46", false,-1, 15,0);
        vcdp->declBus(c+2001,"OFDMEqualizer cha_q_scale_47", false,-1, 15,0);
        vcdp->declBus(c+2009,"OFDMEqualizer cha_q_scale_48", false,-1, 15,0);
        vcdp->declBus(c+2017,"OFDMEqualizer cha_q_scale_49", false,-1, 15,0);
        vcdp->declBus(c+2025,"OFDMEqualizer cha_q_scale_50", false,-1, 15,0);
        vcdp->declBus(c+2033,"OFDMEqualizer cha_q_scale_51", false,-1, 15,0);
        vcdp->declBus(c+2041,"OFDMEqualizer cha_q_scale_52", false,-1, 15,0);
        vcdp->declBus(c+2049,"OFDMEqualizer cha_q_scale_53", false,-1, 15,0);
        vcdp->declBus(c+2057,"OFDMEqualizer cha_q_scale_54", false,-1, 15,0);
        vcdp->declBus(c+2065,"OFDMEqualizer cha_q_scale_55", false,-1, 15,0);
        vcdp->declBus(c+2073,"OFDMEqualizer cha_q_scale_56", false,-1, 15,0);
        vcdp->declBus(c+2081,"OFDMEqualizer cha_q_scale_57", false,-1, 15,0);
        vcdp->declBus(c+2089,"OFDMEqualizer cha_q_scale_58", false,-1, 15,0);
        vcdp->declBus(c+2097,"OFDMEqualizer cha_q_scale_59", false,-1, 15,0);
        vcdp->declBus(c+2105,"OFDMEqualizer cha_q_scale_60", false,-1, 15,0);
        vcdp->declBus(c+2113,"OFDMEqualizer cha_q_scale_61", false,-1, 15,0);
        vcdp->declBus(c+2121,"OFDMEqualizer cha_q_scale_62", false,-1, 15,0);
        vcdp->declBus(c+2129,"OFDMEqualizer cha_q_scale_63", false,-1, 15,0);
        vcdp->declBus(c+2505,"OFDMEqualizer cnt", false,-1, 5,0);
        vcdp->declBit(c+2513,"OFDMEqualizer train_en", false,-1);
        vcdp->declBit(c+2657,"OFDMEqualizer raw_data_fire", false,-1);
        vcdp->declBit(c+2521,"OFDMEqualizer when_OFDMEqualizer_l47", false,-1);
        vcdp->declBus(c+2529,"OFDMEqualizer train_cnt", false,-1, 5,0);
        vcdp->declBit(c+2537,"OFDMEqualizer train_finished", false,-1);
        vcdp->declBit(c+2545,"OFDMEqualizer when_OFDMEqualizer_l71", false,-1);
        vcdp->declBit(c+49,"OFDMEqualizer when_OFDMEqualizer_l69", false,-1);
        vcdp->declBit(c+2553,"OFDMEqualizer raw_data_ready_1", false,-1);
        vcdp->declBit(c+2657,"OFDMEqualizer raw_data_fire_1", false,-1);
        vcdp->declBit(c+2665,"OFDMEqualizer when_OFDMEqualizer_l78", false,-1);
        vcdp->declBit(c+2673,"OFDMEqualizer when_OFDMEqualizer_l80", false,-1);
        vcdp->declBit(c+2137,"OFDMEqualizer raw_data_payload_last_delay_1", false,-1);
        vcdp->declBit(c+2145,"OFDMEqualizer raw_data_payload_last_delay_2", false,-1);
        vcdp->declBit(c+2153,"OFDMEqualizer raw_data_payload_last_delay_3", false,-1);
        vcdp->declBit(c+2161,"OFDMEqualizer raw_data_payload_last_delay_4", false,-1);
        vcdp->declBit(c+2169,"OFDMEqualizer raw_data_payload_last_delay_5", false,-1);
        vcdp->declBit(c+2177,"OFDMEqualizer raw_data_payload_last_delay_6", false,-1);
        vcdp->declBit(c+2185,"OFDMEqualizer raw_data_payload_last_delay_7", false,-1);
        vcdp->declBit(c+2193,"OFDMEqualizer raw_data_payload_last_delay_8", false,-1);
        vcdp->declBit(c+2201,"OFDMEqualizer raw_data_payload_last_delay_9", false,-1);
        vcdp->declBit(c+2209,"OFDMEqualizer raw_data_payload_last_delay_10", false,-1);
        vcdp->declBit(c+2217,"OFDMEqualizer raw_data_payload_last_delay_11", false,-1);
        vcdp->declBit(c+2225,"OFDMEqualizer raw_data_payload_last_delay_12", false,-1);
        vcdp->declBit(c+2233,"OFDMEqualizer raw_data_payload_last_delay_13", false,-1);
        vcdp->declBit(c+2241,"OFDMEqualizer raw_data_payload_last_delay_14", false,-1);
        vcdp->declBit(c+2249,"OFDMEqualizer raw_data_payload_last_delay_15", false,-1);
        vcdp->declBit(c+2257,"OFDMEqualizer raw_data_payload_last_delay_16", false,-1);
        vcdp->declBit(c+2569,"OFDMEqualizer i_zf_eq raw_data_valid", false,-1);
        vcdp->declBit(c+2697,"OFDMEqualizer i_zf_eq raw_data_ready", false,-1);
        vcdp->declBus(c+2593,"OFDMEqualizer i_zf_eq raw_data_payload", false,-1, 15,0);
        vcdp->declBus(c+17,"OFDMEqualizer i_zf_eq scale", false,-1, 15,0);
        vcdp->declBus(c+25,"OFDMEqualizer i_zf_eq ref_data", false,-1, 15,0);
        vcdp->declBit(c+2513,"OFDMEqualizer i_zf_eq train_en", false,-1);
        vcdp->declBit(c+2489,"OFDMEqualizer i_zf_eq result_data_valid", false,-1);
        vcdp->declBus(c+1,"OFDMEqualizer i_zf_eq result_data_payload", false,-1, 15,0);
        vcdp->declBit(c+2641,"OFDMEqualizer i_zf_eq clk", false,-1);
        vcdp->declBit(c+2649,"OFDMEqualizer i_zf_eq reset", false,-1);
        vcdp->declBit(c+2561,"OFDMEqualizer i_zf_eq cal_core_rotate_mode", false,-1);
        vcdp->declBus(c+2681,"OFDMEqualizer i_zf_eq cal_core_raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+57,"OFDMEqualizer i_zf_eq cal_core_raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+65,"OFDMEqualizer i_zf_eq cal_core_raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2697,"OFDMEqualizer i_zf_eq cal_core_raw_data_ready", false,-1);
        vcdp->declBit(c+2489,"OFDMEqualizer i_zf_eq cal_core_result_valid", false,-1);
        vcdp->declBus(c+2265,"OFDMEqualizer i_zf_eq cal_core_result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+2273,"OFDMEqualizer i_zf_eq cal_core_result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+2281,"OFDMEqualizer i_zf_eq cal_core_result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2289,"OFDMEqualizer i_zf_eq x_sign", false,-1);
        vcdp->declBus(c+2297,"OFDMEqualizer i_zf_eq mul_result", false,-1, 15,0);
        vcdp->declBus(c+2305,"OFDMEqualizer i_zf_eq div_result", false,-1, 15,0);
        vcdp->declBit(c+2313,"OFDMEqualizer i_zf_eq train_en_delay_1", false,-1);
        vcdp->declBit(c+2321,"OFDMEqualizer i_zf_eq train_en_delay_2", false,-1);
        vcdp->declBit(c+2329,"OFDMEqualizer i_zf_eq train_en_delay_3", false,-1);
        vcdp->declBit(c+2337,"OFDMEqualizer i_zf_eq train_en_delay_4", false,-1);
        vcdp->declBit(c+2345,"OFDMEqualizer i_zf_eq train_en_delay_5", false,-1);
        vcdp->declBit(c+2353,"OFDMEqualizer i_zf_eq train_en_delay_6", false,-1);
        vcdp->declBit(c+2361,"OFDMEqualizer i_zf_eq train_en_delay_7", false,-1);
        vcdp->declBit(c+2369,"OFDMEqualizer i_zf_eq train_en_delay_8", false,-1);
        vcdp->declBit(c+2377,"OFDMEqualizer i_zf_eq train_en_delay_9", false,-1);
        vcdp->declBit(c+2385,"OFDMEqualizer i_zf_eq train_en_delay_10", false,-1);
        vcdp->declBit(c+2393,"OFDMEqualizer i_zf_eq train_en_delay_11", false,-1);
        vcdp->declBit(c+2401,"OFDMEqualizer i_zf_eq train_en_delay_12", false,-1);
        vcdp->declBit(c+2409,"OFDMEqualizer i_zf_eq train_en_delay_13", false,-1);
        vcdp->declBit(c+2417,"OFDMEqualizer i_zf_eq train_en_delay_14", false,-1);
        vcdp->declBit(c+2425,"OFDMEqualizer i_zf_eq train_en_delay_15", false,-1);
        vcdp->declBit(c+2433,"OFDMEqualizer i_zf_eq train_en_delay_16", false,-1);
        vcdp->declBit(c+2561,"OFDMEqualizer i_zf_eq cal_core rotate_mode", false,-1);
        vcdp->declBus(c+2705,"OFDMEqualizer i_zf_eq cal_core x_u", false,-1, 1,0);
        vcdp->declBit(c+2569,"OFDMEqualizer i_zf_eq cal_core raw_data_valid", false,-1);
        vcdp->declBit(c+2697,"OFDMEqualizer i_zf_eq cal_core raw_data_ready", false,-1);
        vcdp->declBus(c+2681,"OFDMEqualizer i_zf_eq cal_core raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+57,"OFDMEqualizer i_zf_eq cal_core raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+65,"OFDMEqualizer i_zf_eq cal_core raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2489,"OFDMEqualizer i_zf_eq cal_core result_valid", false,-1);
        vcdp->declBus(c+2265,"OFDMEqualizer i_zf_eq cal_core result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+2273,"OFDMEqualizer i_zf_eq cal_core result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+2281,"OFDMEqualizer i_zf_eq cal_core result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2641,"OFDMEqualizer i_zf_eq cal_core clk", false,-1);
        vcdp->declBit(c+2649,"OFDMEqualizer i_zf_eq cal_core reset", false,-1);
        vcdp->declBit(c+2569,"OFDMEqualizer i_zf_eq cal_core raw_data_fire", false,-1);
        vcdp->declBit(c+2569,"OFDMEqualizer q_zf_eq raw_data_valid", false,-1);
        vcdp->declBit(c+2697,"OFDMEqualizer q_zf_eq raw_data_ready", false,-1);
        vcdp->declBus(c+2601,"OFDMEqualizer q_zf_eq raw_data_payload", false,-1, 15,0);
        vcdp->declBus(c+33,"OFDMEqualizer q_zf_eq scale", false,-1, 15,0);
        vcdp->declBus(c+41,"OFDMEqualizer q_zf_eq ref_data", false,-1, 15,0);
        vcdp->declBit(c+2513,"OFDMEqualizer q_zf_eq train_en", false,-1);
        vcdp->declBit(c+2497,"OFDMEqualizer q_zf_eq result_data_valid", false,-1);
        vcdp->declBus(c+9,"OFDMEqualizer q_zf_eq result_data_payload", false,-1, 15,0);
        vcdp->declBit(c+2641,"OFDMEqualizer q_zf_eq clk", false,-1);
        vcdp->declBit(c+2649,"OFDMEqualizer q_zf_eq reset", false,-1);
        vcdp->declBit(c+2561,"OFDMEqualizer q_zf_eq cal_core_rotate_mode", false,-1);
        vcdp->declBus(c+2689,"OFDMEqualizer q_zf_eq cal_core_raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+73,"OFDMEqualizer q_zf_eq cal_core_raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+81,"OFDMEqualizer q_zf_eq cal_core_raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2697,"OFDMEqualizer q_zf_eq cal_core_raw_data_ready", false,-1);
        vcdp->declBit(c+2497,"OFDMEqualizer q_zf_eq cal_core_result_valid", false,-1);
        vcdp->declBus(c+2441,"OFDMEqualizer q_zf_eq cal_core_result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+2449,"OFDMEqualizer q_zf_eq cal_core_result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+2457,"OFDMEqualizer q_zf_eq cal_core_result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2465,"OFDMEqualizer q_zf_eq x_sign", false,-1);
        vcdp->declBus(c+2473,"OFDMEqualizer q_zf_eq mul_result", false,-1, 15,0);
        vcdp->declBus(c+2481,"OFDMEqualizer q_zf_eq div_result", false,-1, 15,0);
        vcdp->declBit(c+2313,"OFDMEqualizer q_zf_eq train_en_delay_1", false,-1);
        vcdp->declBit(c+2321,"OFDMEqualizer q_zf_eq train_en_delay_2", false,-1);
        vcdp->declBit(c+2329,"OFDMEqualizer q_zf_eq train_en_delay_3", false,-1);
        vcdp->declBit(c+2337,"OFDMEqualizer q_zf_eq train_en_delay_4", false,-1);
        vcdp->declBit(c+2345,"OFDMEqualizer q_zf_eq train_en_delay_5", false,-1);
        vcdp->declBit(c+2353,"OFDMEqualizer q_zf_eq train_en_delay_6", false,-1);
        vcdp->declBit(c+2361,"OFDMEqualizer q_zf_eq train_en_delay_7", false,-1);
        vcdp->declBit(c+2369,"OFDMEqualizer q_zf_eq train_en_delay_8", false,-1);
        vcdp->declBit(c+2377,"OFDMEqualizer q_zf_eq train_en_delay_9", false,-1);
        vcdp->declBit(c+2385,"OFDMEqualizer q_zf_eq train_en_delay_10", false,-1);
        vcdp->declBit(c+2393,"OFDMEqualizer q_zf_eq train_en_delay_11", false,-1);
        vcdp->declBit(c+2401,"OFDMEqualizer q_zf_eq train_en_delay_12", false,-1);
        vcdp->declBit(c+2409,"OFDMEqualizer q_zf_eq train_en_delay_13", false,-1);
        vcdp->declBit(c+2417,"OFDMEqualizer q_zf_eq train_en_delay_14", false,-1);
        vcdp->declBit(c+2425,"OFDMEqualizer q_zf_eq train_en_delay_15", false,-1);
        vcdp->declBit(c+2433,"OFDMEqualizer q_zf_eq train_en_delay_16", false,-1);
        vcdp->declBit(c+2561,"OFDMEqualizer q_zf_eq cal_core rotate_mode", false,-1);
        vcdp->declBus(c+2705,"OFDMEqualizer q_zf_eq cal_core x_u", false,-1, 1,0);
        vcdp->declBit(c+2569,"OFDMEqualizer q_zf_eq cal_core raw_data_valid", false,-1);
        vcdp->declBit(c+2697,"OFDMEqualizer q_zf_eq cal_core raw_data_ready", false,-1);
        vcdp->declBus(c+2689,"OFDMEqualizer q_zf_eq cal_core raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+73,"OFDMEqualizer q_zf_eq cal_core raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+81,"OFDMEqualizer q_zf_eq cal_core raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2497,"OFDMEqualizer q_zf_eq cal_core result_valid", false,-1);
        vcdp->declBus(c+2441,"OFDMEqualizer q_zf_eq cal_core result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+2449,"OFDMEqualizer q_zf_eq cal_core result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+2457,"OFDMEqualizer q_zf_eq cal_core result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+2641,"OFDMEqualizer q_zf_eq cal_core clk", false,-1);
        vcdp->declBit(c+2649,"OFDMEqualizer q_zf_eq cal_core reset", false,-1);
        vcdp->declBit(c+2569,"OFDMEqualizer q_zf_eq cal_core raw_data_fire", false,-1);
    }
}

void VOFDMEqualizer::traceFullThis__1(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload),16);
        vcdp->fullBus(c+9,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload),16);
        vcdp->fullBus(c+17,(vlTOPp->OFDMEqualizer__DOT___zz_scale),16);
        vcdp->fullBus(c+25,(vlTOPp->OFDMEqualizer__DOT___zz_ref_data),16);
        vcdp->fullBus(c+33,(vlTOPp->OFDMEqualizer__DOT___zz_scale_1),16);
        vcdp->fullBus(c+41,(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1),16);
        vcdp->fullBit(c+49,(vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69));
        vcdp->fullBus(c+57,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                              ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data)
                              : 0U)),16);
        vcdp->fullBus(c+65,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                              ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale))),16);
        vcdp->fullBus(c+73,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                              ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1)
                              : 0U)),16);
        vcdp->fullBus(c+81,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                              ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale_1))),16);
        vcdp->fullBus(c+89,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_0),16);
        vcdp->fullBus(c+97,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_1),16);
        vcdp->fullBus(c+105,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_2),16);
        vcdp->fullBus(c+113,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_3),16);
        vcdp->fullBus(c+121,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_4),16);
        vcdp->fullBus(c+129,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_5),16);
        vcdp->fullBus(c+137,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_6),16);
        vcdp->fullBus(c+145,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_7),16);
        vcdp->fullBus(c+153,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_8),16);
        vcdp->fullBus(c+161,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_9),16);
        vcdp->fullBus(c+169,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_10),16);
        vcdp->fullBus(c+177,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_11),16);
        vcdp->fullBus(c+185,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_12),16);
        vcdp->fullBus(c+193,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_13),16);
        vcdp->fullBus(c+201,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_14),16);
        vcdp->fullBus(c+209,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_15),16);
        vcdp->fullBus(c+217,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_16),16);
        vcdp->fullBus(c+225,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_17),16);
        vcdp->fullBus(c+233,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_18),16);
        vcdp->fullBus(c+241,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_19),16);
        vcdp->fullBus(c+249,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_20),16);
        vcdp->fullBus(c+257,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_21),16);
        vcdp->fullBus(c+265,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_22),16);
        vcdp->fullBus(c+273,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_23),16);
        vcdp->fullBus(c+281,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_24),16);
        vcdp->fullBus(c+289,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_25),16);
        vcdp->fullBus(c+297,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_26),16);
        vcdp->fullBus(c+305,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_27),16);
        vcdp->fullBus(c+313,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_28),16);
        vcdp->fullBus(c+321,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_29),16);
        vcdp->fullBus(c+329,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_30),16);
        vcdp->fullBus(c+337,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_31),16);
        vcdp->fullBus(c+345,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_32),16);
        vcdp->fullBus(c+353,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_33),16);
        vcdp->fullBus(c+361,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_34),16);
        vcdp->fullBus(c+369,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_35),16);
        vcdp->fullBus(c+377,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_36),16);
        vcdp->fullBus(c+385,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_37),16);
        vcdp->fullBus(c+393,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_38),16);
        vcdp->fullBus(c+401,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_39),16);
        vcdp->fullBus(c+409,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_40),16);
        vcdp->fullBus(c+417,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_41),16);
        vcdp->fullBus(c+425,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_42),16);
        vcdp->fullBus(c+433,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_43),16);
        vcdp->fullBus(c+441,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_44),16);
        vcdp->fullBus(c+449,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_45),16);
        vcdp->fullBus(c+457,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_46),16);
        vcdp->fullBus(c+465,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_47),16);
        vcdp->fullBus(c+473,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_48),16);
        vcdp->fullBus(c+481,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_49),16);
        vcdp->fullBus(c+489,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_50),16);
        vcdp->fullBus(c+497,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_51),16);
        vcdp->fullBus(c+505,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_52),16);
        vcdp->fullBus(c+513,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_53),16);
        vcdp->fullBus(c+521,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_54),16);
        vcdp->fullBus(c+529,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_55),16);
        vcdp->fullBus(c+537,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_56),16);
        vcdp->fullBus(c+545,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_57),16);
        vcdp->fullBus(c+553,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_58),16);
        vcdp->fullBus(c+561,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_59),16);
        vcdp->fullBus(c+569,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_60),16);
        vcdp->fullBus(c+577,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_61),16);
        vcdp->fullBus(c+585,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_62),16);
        vcdp->fullBus(c+593,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_63),16);
        vcdp->fullBus(c+601,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_0),16);
        vcdp->fullBus(c+609,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_1),16);
        vcdp->fullBus(c+617,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_2),16);
        vcdp->fullBus(c+625,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_3),16);
        vcdp->fullBus(c+633,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_4),16);
        vcdp->fullBus(c+641,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_5),16);
        vcdp->fullBus(c+649,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_6),16);
        vcdp->fullBus(c+657,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_7),16);
        vcdp->fullBus(c+665,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_8),16);
        vcdp->fullBus(c+673,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_9),16);
        vcdp->fullBus(c+681,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_10),16);
        vcdp->fullBus(c+689,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_11),16);
        vcdp->fullBus(c+697,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_12),16);
        vcdp->fullBus(c+705,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_13),16);
        vcdp->fullBus(c+713,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_14),16);
        vcdp->fullBus(c+721,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_15),16);
        vcdp->fullBus(c+729,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_16),16);
        vcdp->fullBus(c+737,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_17),16);
        vcdp->fullBus(c+745,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_18),16);
        vcdp->fullBus(c+753,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_19),16);
        vcdp->fullBus(c+761,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_20),16);
        vcdp->fullBus(c+769,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_21),16);
        vcdp->fullBus(c+777,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_22),16);
        vcdp->fullBus(c+785,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_23),16);
        vcdp->fullBus(c+793,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_24),16);
        vcdp->fullBus(c+801,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_25),16);
        vcdp->fullBus(c+809,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_26),16);
        vcdp->fullBus(c+817,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_27),16);
        vcdp->fullBus(c+825,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_28),16);
        vcdp->fullBus(c+833,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_29),16);
        vcdp->fullBus(c+841,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_30),16);
        vcdp->fullBus(c+849,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_31),16);
        vcdp->fullBus(c+857,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_32),16);
        vcdp->fullBus(c+865,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_33),16);
        vcdp->fullBus(c+873,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_34),16);
        vcdp->fullBus(c+881,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_35),16);
        vcdp->fullBus(c+889,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_36),16);
        vcdp->fullBus(c+897,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_37),16);
        vcdp->fullBus(c+905,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_38),16);
        vcdp->fullBus(c+913,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_39),16);
        vcdp->fullBus(c+921,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_40),16);
        vcdp->fullBus(c+929,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_41),16);
        vcdp->fullBus(c+937,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_42),16);
        vcdp->fullBus(c+945,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_43),16);
        vcdp->fullBus(c+953,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_44),16);
        vcdp->fullBus(c+961,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_45),16);
        vcdp->fullBus(c+969,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_46),16);
        vcdp->fullBus(c+977,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_47),16);
        vcdp->fullBus(c+985,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_48),16);
        vcdp->fullBus(c+993,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_49),16);
        vcdp->fullBus(c+1001,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_50),16);
        vcdp->fullBus(c+1009,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_51),16);
        vcdp->fullBus(c+1017,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_52),16);
        vcdp->fullBus(c+1025,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_53),16);
        vcdp->fullBus(c+1033,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_54),16);
        vcdp->fullBus(c+1041,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_55),16);
        vcdp->fullBus(c+1049,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_56),16);
        vcdp->fullBus(c+1057,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_57),16);
        vcdp->fullBus(c+1065,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_58),16);
        vcdp->fullBus(c+1073,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_59),16);
        vcdp->fullBus(c+1081,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_60),16);
        vcdp->fullBus(c+1089,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_61),16);
        vcdp->fullBus(c+1097,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_62),16);
        vcdp->fullBus(c+1105,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_63),16);
        vcdp->fullBus(c+1113,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_0),16);
        vcdp->fullBus(c+1121,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_1),16);
        vcdp->fullBus(c+1129,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_2),16);
        vcdp->fullBus(c+1137,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_3),16);
        vcdp->fullBus(c+1145,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_4),16);
        vcdp->fullBus(c+1153,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_5),16);
        vcdp->fullBus(c+1161,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_6),16);
        vcdp->fullBus(c+1169,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_7),16);
        vcdp->fullBus(c+1177,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_8),16);
        vcdp->fullBus(c+1185,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_9),16);
        vcdp->fullBus(c+1193,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_10),16);
        vcdp->fullBus(c+1201,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_11),16);
        vcdp->fullBus(c+1209,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_12),16);
        vcdp->fullBus(c+1217,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_13),16);
        vcdp->fullBus(c+1225,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_14),16);
        vcdp->fullBus(c+1233,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_15),16);
        vcdp->fullBus(c+1241,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_16),16);
        vcdp->fullBus(c+1249,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_17),16);
        vcdp->fullBus(c+1257,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_18),16);
        vcdp->fullBus(c+1265,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_19),16);
        vcdp->fullBus(c+1273,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_20),16);
        vcdp->fullBus(c+1281,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_21),16);
        vcdp->fullBus(c+1289,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_22),16);
        vcdp->fullBus(c+1297,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_23),16);
        vcdp->fullBus(c+1305,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_24),16);
        vcdp->fullBus(c+1313,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_25),16);
        vcdp->fullBus(c+1321,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_26),16);
        vcdp->fullBus(c+1329,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_27),16);
        vcdp->fullBus(c+1337,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_28),16);
        vcdp->fullBus(c+1345,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_29),16);
        vcdp->fullBus(c+1353,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_30),16);
        vcdp->fullBus(c+1361,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_31),16);
        vcdp->fullBus(c+1369,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_32),16);
        vcdp->fullBus(c+1377,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_33),16);
        vcdp->fullBus(c+1385,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_34),16);
        vcdp->fullBus(c+1393,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_35),16);
        vcdp->fullBus(c+1401,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_36),16);
        vcdp->fullBus(c+1409,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_37),16);
        vcdp->fullBus(c+1417,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_38),16);
        vcdp->fullBus(c+1425,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_39),16);
        vcdp->fullBus(c+1433,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_40),16);
        vcdp->fullBus(c+1441,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_41),16);
        vcdp->fullBus(c+1449,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_42),16);
        vcdp->fullBus(c+1457,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_43),16);
        vcdp->fullBus(c+1465,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_44),16);
        vcdp->fullBus(c+1473,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_45),16);
        vcdp->fullBus(c+1481,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_46),16);
        vcdp->fullBus(c+1489,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_47),16);
        vcdp->fullBus(c+1497,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_48),16);
        vcdp->fullBus(c+1505,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_49),16);
        vcdp->fullBus(c+1513,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_50),16);
        vcdp->fullBus(c+1521,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_51),16);
        vcdp->fullBus(c+1529,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_52),16);
        vcdp->fullBus(c+1537,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_53),16);
        vcdp->fullBus(c+1545,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_54),16);
        vcdp->fullBus(c+1553,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_55),16);
        vcdp->fullBus(c+1561,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_56),16);
        vcdp->fullBus(c+1569,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_57),16);
        vcdp->fullBus(c+1577,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_58),16);
        vcdp->fullBus(c+1585,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_59),16);
        vcdp->fullBus(c+1593,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_60),16);
        vcdp->fullBus(c+1601,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_61),16);
        vcdp->fullBus(c+1609,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_62),16);
        vcdp->fullBus(c+1617,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_63),16);
        vcdp->fullBus(c+1625,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_0),16);
        vcdp->fullBus(c+1633,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_1),16);
        vcdp->fullBus(c+1641,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_2),16);
        vcdp->fullBus(c+1649,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_3),16);
        vcdp->fullBus(c+1657,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_4),16);
        vcdp->fullBus(c+1665,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_5),16);
        vcdp->fullBus(c+1673,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_6),16);
        vcdp->fullBus(c+1681,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_7),16);
        vcdp->fullBus(c+1689,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_8),16);
        vcdp->fullBus(c+1697,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_9),16);
        vcdp->fullBus(c+1705,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_10),16);
        vcdp->fullBus(c+1713,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_11),16);
        vcdp->fullBus(c+1721,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_12),16);
        vcdp->fullBus(c+1729,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_13),16);
        vcdp->fullBus(c+1737,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_14),16);
        vcdp->fullBus(c+1745,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_15),16);
        vcdp->fullBus(c+1753,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_16),16);
        vcdp->fullBus(c+1761,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_17),16);
        vcdp->fullBus(c+1769,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_18),16);
        vcdp->fullBus(c+1777,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_19),16);
        vcdp->fullBus(c+1785,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_20),16);
        vcdp->fullBus(c+1793,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_21),16);
        vcdp->fullBus(c+1801,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_22),16);
        vcdp->fullBus(c+1809,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_23),16);
        vcdp->fullBus(c+1817,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_24),16);
        vcdp->fullBus(c+1825,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_25),16);
        vcdp->fullBus(c+1833,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_26),16);
        vcdp->fullBus(c+1841,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_27),16);
        vcdp->fullBus(c+1849,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_28),16);
        vcdp->fullBus(c+1857,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_29),16);
        vcdp->fullBus(c+1865,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_30),16);
        vcdp->fullBus(c+1873,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_31),16);
        vcdp->fullBus(c+1881,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_32),16);
        vcdp->fullBus(c+1889,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_33),16);
        vcdp->fullBus(c+1897,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_34),16);
        vcdp->fullBus(c+1905,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_35),16);
        vcdp->fullBus(c+1913,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_36),16);
        vcdp->fullBus(c+1921,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_37),16);
        vcdp->fullBus(c+1929,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_38),16);
        vcdp->fullBus(c+1937,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_39),16);
        vcdp->fullBus(c+1945,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_40),16);
        vcdp->fullBus(c+1953,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_41),16);
    }
}

void VOFDMEqualizer::traceFullThis__5(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1961,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_42),16);
        vcdp->fullBus(c+1969,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_43),16);
        vcdp->fullBus(c+1977,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_44),16);
        vcdp->fullBus(c+1985,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_45),16);
        vcdp->fullBus(c+1993,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_46),16);
        vcdp->fullBus(c+2001,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_47),16);
        vcdp->fullBus(c+2009,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_48),16);
        vcdp->fullBus(c+2017,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_49),16);
        vcdp->fullBus(c+2025,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_50),16);
        vcdp->fullBus(c+2033,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_51),16);
        vcdp->fullBus(c+2041,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_52),16);
        vcdp->fullBus(c+2049,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_53),16);
        vcdp->fullBus(c+2057,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_54),16);
        vcdp->fullBus(c+2065,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_55),16);
        vcdp->fullBus(c+2073,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_56),16);
        vcdp->fullBus(c+2081,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_57),16);
        vcdp->fullBus(c+2089,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_58),16);
        vcdp->fullBus(c+2097,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_59),16);
        vcdp->fullBus(c+2105,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_60),16);
        vcdp->fullBus(c+2113,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_61),16);
        vcdp->fullBus(c+2121,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_62),16);
        vcdp->fullBus(c+2129,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_63),16);
        vcdp->fullBit(c+2137,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_1));
        vcdp->fullBit(c+2145,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_2));
        vcdp->fullBit(c+2153,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_3));
        vcdp->fullBit(c+2161,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_4));
        vcdp->fullBit(c+2169,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_5));
        vcdp->fullBit(c+2177,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_6));
        vcdp->fullBit(c+2185,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_7));
        vcdp->fullBit(c+2193,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_8));
        vcdp->fullBit(c+2201,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_9));
        vcdp->fullBit(c+2209,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_10));
        vcdp->fullBit(c+2217,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_11));
        vcdp->fullBit(c+2225,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_12));
        vcdp->fullBit(c+2233,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_13));
        vcdp->fullBit(c+2241,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_14));
        vcdp->fullBit(c+2249,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_15));
        vcdp->fullBit(c+2257,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16));
        vcdp->fullBus(c+2265,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->fullBus(c+2273,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->fullBus(c+2281,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->fullBit(c+2289,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign));
        vcdp->fullBus(c+2297,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
                                           ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                                           : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->fullBus(c+2305,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
                                           ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                                           : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
        vcdp->fullBit(c+2313,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1));
        vcdp->fullBit(c+2321,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2));
        vcdp->fullBit(c+2329,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3));
        vcdp->fullBit(c+2337,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4));
        vcdp->fullBit(c+2345,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5));
        vcdp->fullBit(c+2353,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6));
        vcdp->fullBit(c+2361,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7));
        vcdp->fullBit(c+2369,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8));
        vcdp->fullBit(c+2377,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9));
        vcdp->fullBit(c+2385,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10));
        vcdp->fullBit(c+2393,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11));
        vcdp->fullBit(c+2401,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12));
        vcdp->fullBit(c+2409,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13));
        vcdp->fullBit(c+2417,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14));
        vcdp->fullBit(c+2425,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15));
        vcdp->fullBit(c+2433,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16));
        vcdp->fullBus(c+2441,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->fullBus(c+2449,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->fullBus(c+2457,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->fullBit(c+2465,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign));
        vcdp->fullBus(c+2473,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
                                           ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                                           : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->fullBus(c+2481,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
                                           ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                                           : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
        vcdp->fullBit(c+2489,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->fullBit(c+2497,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->fullBus(c+2505,(vlTOPp->OFDMEqualizer__DOT__cnt),6);
        vcdp->fullBit(c+2513,(vlTOPp->OFDMEqualizer__DOT__train_en));
        vcdp->fullBit(c+2521,((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))));
        vcdp->fullBus(c+2529,(vlTOPp->OFDMEqualizer__DOT__train_cnt),6);
        vcdp->fullBit(c+2537,(vlTOPp->OFDMEqualizer__DOT__train_finished));
        vcdp->fullBit(c+2545,((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))));
        vcdp->fullBit(c+2553,(vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1));
        vcdp->fullBit(c+2561,((1U & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_en)))));
        vcdp->fullBit(c+2569,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+2577,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+2585,(vlTOPp->raw_data_payload_last));
        vcdp->fullBus(c+2593,(vlTOPp->raw_data_payload_fragment_cha_i),16);
        vcdp->fullBus(c+2601,(vlTOPp->raw_data_payload_fragment_cha_q),16);
        vcdp->fullBit(c+2609,(vlTOPp->equalized_data_valid));
        vcdp->fullBit(c+2617,(vlTOPp->equalized_data_payload_last));
        vcdp->fullBus(c+2625,(vlTOPp->equalized_data_payload_fragment_cha_i),16);
        vcdp->fullBus(c+2633,(vlTOPp->equalized_data_payload_fragment_cha_q),16);
        vcdp->fullBit(c+2641,(vlTOPp->clk));
        vcdp->fullBit(c+2649,(vlTOPp->reset));
        vcdp->fullBit(c+2657,(((IData)(vlTOPp->raw_data_valid) 
                               & (IData)(vlTOPp->raw_data_ready))));
        vcdp->fullBit(c+2665,(((IData)(vlTOPp->raw_data_payload_last) 
                               & ((IData)(vlTOPp->raw_data_valid) 
                                  & (IData)(vlTOPp->raw_data_ready)))));
        vcdp->fullBit(c+2673,(((IData)(vlTOPp->equalized_data_payload_last) 
                               & (IData)(vlTOPp->equalized_data_valid))));
        vcdp->fullBus(c+2681,((0xffffU & (((0x8000U 
                                            & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                                            ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                                            : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
                                          + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
                                                   >> 0xfU))))),16);
        vcdp->fullBus(c+2689,((0xffffU & (((0x8000U 
                                            & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                                            ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                                            : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                                          + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                                                   >> 0xfU))))),16);
        vcdp->fullBit(c+2697,(1U));
        vcdp->fullBus(c+2705,(1U),2);
    }
}
