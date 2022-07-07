// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSCEqualizer__Syms.h"


//======================

void VSCEqualizer::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VSCEqualizer::traceInit, &VSCEqualizer::traceFull, &VSCEqualizer::traceChg, this);
}
void VSCEqualizer::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VSCEqualizer* t = (VSCEqualizer*)userthis;
    VSCEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VSCEqualizer::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSCEqualizer* t = (VSCEqualizer*)userthis;
    VSCEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VSCEqualizer::traceInitThis(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VSCEqualizer::traceFullThis(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSCEqualizer::traceInitThis__1(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1545,"raw_data_valid", false,-1);
        vcdp->declBit(c+1553,"raw_data_ready", false,-1);
        vcdp->declBit(c+1561,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+1569,"raw_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1577,"raw_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1585,"equalized_data_valid", false,-1);
        vcdp->declBit(c+1593,"equalized_data_payload_last", false,-1);
        vcdp->declBus(c+1601,"equalized_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1609,"equalized_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1617,"clk", false,-1);
        vcdp->declBit(c+1625,"reset", false,-1);
        vcdp->declBit(c+1545,"SCEqualizer raw_data_valid", false,-1);
        vcdp->declBit(c+1553,"SCEqualizer raw_data_ready", false,-1);
        vcdp->declBit(c+1561,"SCEqualizer raw_data_payload_last", false,-1);
        vcdp->declBus(c+1569,"SCEqualizer raw_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1577,"SCEqualizer raw_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1585,"SCEqualizer equalized_data_valid", false,-1);
        vcdp->declBit(c+1593,"SCEqualizer equalized_data_payload_last", false,-1);
        vcdp->declBus(c+1601,"SCEqualizer equalized_data_payload_fragment_cha_i", false,-1, 15,0);
        vcdp->declBus(c+1609,"SCEqualizer equalized_data_payload_fragment_cha_q", false,-1, 15,0);
        vcdp->declBit(c+1617,"SCEqualizer clk", false,-1);
        vcdp->declBit(c+1625,"SCEqualizer reset", false,-1);
        vcdp->declBus(c+17,"SCEqualizer i_zf_eq_ref_data", false,-1, 15,0);
        vcdp->declBus(c+25,"SCEqualizer q_zf_eq_ref_data", false,-1, 15,0);
        vcdp->declBit(c+1681,"SCEqualizer i_zf_eq_raw_data_ready", false,-1);
        vcdp->declBit(c+1465,"SCEqualizer i_zf_eq_result_data_valid", false,-1);
        vcdp->declBus(c+1,"SCEqualizer i_zf_eq_result_data_payload", false,-1, 15,0);
        vcdp->declBit(c+1681,"SCEqualizer q_zf_eq_raw_data_ready", false,-1);
        vcdp->declBit(c+1473,"SCEqualizer q_zf_eq_result_data_valid", false,-1);
        vcdp->declBus(c+9,"SCEqualizer q_zf_eq_result_data_payload", false,-1, 15,0);
        vcdp->declBus(c+57,"SCEqualizer cha_i_scale", false,-1, 15,0);
        vcdp->declBus(c+65,"SCEqualizer cha_q_scale", false,-1, 15,0);
        vcdp->declBus(c+73,"SCEqualizer cha_i_ref_0", false,-1, 15,0);
        vcdp->declBus(c+81,"SCEqualizer cha_i_ref_1", false,-1, 15,0);
        vcdp->declBus(c+89,"SCEqualizer cha_i_ref_2", false,-1, 15,0);
        vcdp->declBus(c+97,"SCEqualizer cha_i_ref_3", false,-1, 15,0);
        vcdp->declBus(c+105,"SCEqualizer cha_i_ref_4", false,-1, 15,0);
        vcdp->declBus(c+113,"SCEqualizer cha_i_ref_5", false,-1, 15,0);
        vcdp->declBus(c+121,"SCEqualizer cha_i_ref_6", false,-1, 15,0);
        vcdp->declBus(c+129,"SCEqualizer cha_i_ref_7", false,-1, 15,0);
        vcdp->declBus(c+137,"SCEqualizer cha_i_ref_8", false,-1, 15,0);
        vcdp->declBus(c+145,"SCEqualizer cha_i_ref_9", false,-1, 15,0);
        vcdp->declBus(c+153,"SCEqualizer cha_i_ref_10", false,-1, 15,0);
        vcdp->declBus(c+161,"SCEqualizer cha_i_ref_11", false,-1, 15,0);
        vcdp->declBus(c+169,"SCEqualizer cha_i_ref_12", false,-1, 15,0);
        vcdp->declBus(c+177,"SCEqualizer cha_i_ref_13", false,-1, 15,0);
        vcdp->declBus(c+185,"SCEqualizer cha_i_ref_14", false,-1, 15,0);
        vcdp->declBus(c+193,"SCEqualizer cha_i_ref_15", false,-1, 15,0);
        vcdp->declBus(c+201,"SCEqualizer cha_i_ref_16", false,-1, 15,0);
        vcdp->declBus(c+209,"SCEqualizer cha_i_ref_17", false,-1, 15,0);
        vcdp->declBus(c+217,"SCEqualizer cha_i_ref_18", false,-1, 15,0);
        vcdp->declBus(c+225,"SCEqualizer cha_i_ref_19", false,-1, 15,0);
        vcdp->declBus(c+233,"SCEqualizer cha_i_ref_20", false,-1, 15,0);
        vcdp->declBus(c+241,"SCEqualizer cha_i_ref_21", false,-1, 15,0);
        vcdp->declBus(c+249,"SCEqualizer cha_i_ref_22", false,-1, 15,0);
        vcdp->declBus(c+257,"SCEqualizer cha_i_ref_23", false,-1, 15,0);
        vcdp->declBus(c+265,"SCEqualizer cha_i_ref_24", false,-1, 15,0);
        vcdp->declBus(c+273,"SCEqualizer cha_i_ref_25", false,-1, 15,0);
        vcdp->declBus(c+281,"SCEqualizer cha_i_ref_26", false,-1, 15,0);
        vcdp->declBus(c+289,"SCEqualizer cha_i_ref_27", false,-1, 15,0);
        vcdp->declBus(c+297,"SCEqualizer cha_i_ref_28", false,-1, 15,0);
        vcdp->declBus(c+305,"SCEqualizer cha_i_ref_29", false,-1, 15,0);
        vcdp->declBus(c+313,"SCEqualizer cha_i_ref_30", false,-1, 15,0);
        vcdp->declBus(c+321,"SCEqualizer cha_i_ref_31", false,-1, 15,0);
        vcdp->declBus(c+329,"SCEqualizer cha_i_ref_32", false,-1, 15,0);
        vcdp->declBus(c+337,"SCEqualizer cha_i_ref_33", false,-1, 15,0);
        vcdp->declBus(c+345,"SCEqualizer cha_i_ref_34", false,-1, 15,0);
        vcdp->declBus(c+353,"SCEqualizer cha_i_ref_35", false,-1, 15,0);
        vcdp->declBus(c+361,"SCEqualizer cha_i_ref_36", false,-1, 15,0);
        vcdp->declBus(c+369,"SCEqualizer cha_i_ref_37", false,-1, 15,0);
        vcdp->declBus(c+377,"SCEqualizer cha_i_ref_38", false,-1, 15,0);
        vcdp->declBus(c+385,"SCEqualizer cha_i_ref_39", false,-1, 15,0);
        vcdp->declBus(c+393,"SCEqualizer cha_i_ref_40", false,-1, 15,0);
        vcdp->declBus(c+401,"SCEqualizer cha_i_ref_41", false,-1, 15,0);
        vcdp->declBus(c+409,"SCEqualizer cha_i_ref_42", false,-1, 15,0);
        vcdp->declBus(c+417,"SCEqualizer cha_i_ref_43", false,-1, 15,0);
        vcdp->declBus(c+425,"SCEqualizer cha_i_ref_44", false,-1, 15,0);
        vcdp->declBus(c+433,"SCEqualizer cha_i_ref_45", false,-1, 15,0);
        vcdp->declBus(c+441,"SCEqualizer cha_i_ref_46", false,-1, 15,0);
        vcdp->declBus(c+449,"SCEqualizer cha_i_ref_47", false,-1, 15,0);
        vcdp->declBus(c+457,"SCEqualizer cha_i_ref_48", false,-1, 15,0);
        vcdp->declBus(c+465,"SCEqualizer cha_i_ref_49", false,-1, 15,0);
        vcdp->declBus(c+473,"SCEqualizer cha_i_ref_50", false,-1, 15,0);
        vcdp->declBus(c+481,"SCEqualizer cha_i_ref_51", false,-1, 15,0);
        vcdp->declBus(c+489,"SCEqualizer cha_i_ref_52", false,-1, 15,0);
        vcdp->declBus(c+497,"SCEqualizer cha_i_ref_53", false,-1, 15,0);
        vcdp->declBus(c+505,"SCEqualizer cha_i_ref_54", false,-1, 15,0);
        vcdp->declBus(c+513,"SCEqualizer cha_i_ref_55", false,-1, 15,0);
        vcdp->declBus(c+521,"SCEqualizer cha_i_ref_56", false,-1, 15,0);
        vcdp->declBus(c+529,"SCEqualizer cha_i_ref_57", false,-1, 15,0);
        vcdp->declBus(c+537,"SCEqualizer cha_i_ref_58", false,-1, 15,0);
        vcdp->declBus(c+545,"SCEqualizer cha_i_ref_59", false,-1, 15,0);
        vcdp->declBus(c+553,"SCEqualizer cha_i_ref_60", false,-1, 15,0);
        vcdp->declBus(c+561,"SCEqualizer cha_i_ref_61", false,-1, 15,0);
        vcdp->declBus(c+569,"SCEqualizer cha_i_ref_62", false,-1, 15,0);
        vcdp->declBus(c+577,"SCEqualizer cha_i_ref_63", false,-1, 15,0);
        vcdp->declBus(c+585,"SCEqualizer cha_q_ref_0", false,-1, 15,0);
        vcdp->declBus(c+593,"SCEqualizer cha_q_ref_1", false,-1, 15,0);
        vcdp->declBus(c+601,"SCEqualizer cha_q_ref_2", false,-1, 15,0);
        vcdp->declBus(c+609,"SCEqualizer cha_q_ref_3", false,-1, 15,0);
        vcdp->declBus(c+617,"SCEqualizer cha_q_ref_4", false,-1, 15,0);
        vcdp->declBus(c+625,"SCEqualizer cha_q_ref_5", false,-1, 15,0);
        vcdp->declBus(c+633,"SCEqualizer cha_q_ref_6", false,-1, 15,0);
        vcdp->declBus(c+641,"SCEqualizer cha_q_ref_7", false,-1, 15,0);
        vcdp->declBus(c+649,"SCEqualizer cha_q_ref_8", false,-1, 15,0);
        vcdp->declBus(c+657,"SCEqualizer cha_q_ref_9", false,-1, 15,0);
        vcdp->declBus(c+665,"SCEqualizer cha_q_ref_10", false,-1, 15,0);
        vcdp->declBus(c+673,"SCEqualizer cha_q_ref_11", false,-1, 15,0);
        vcdp->declBus(c+681,"SCEqualizer cha_q_ref_12", false,-1, 15,0);
        vcdp->declBus(c+689,"SCEqualizer cha_q_ref_13", false,-1, 15,0);
        vcdp->declBus(c+697,"SCEqualizer cha_q_ref_14", false,-1, 15,0);
        vcdp->declBus(c+705,"SCEqualizer cha_q_ref_15", false,-1, 15,0);
        vcdp->declBus(c+713,"SCEqualizer cha_q_ref_16", false,-1, 15,0);
        vcdp->declBus(c+721,"SCEqualizer cha_q_ref_17", false,-1, 15,0);
        vcdp->declBus(c+729,"SCEqualizer cha_q_ref_18", false,-1, 15,0);
        vcdp->declBus(c+737,"SCEqualizer cha_q_ref_19", false,-1, 15,0);
        vcdp->declBus(c+745,"SCEqualizer cha_q_ref_20", false,-1, 15,0);
        vcdp->declBus(c+753,"SCEqualizer cha_q_ref_21", false,-1, 15,0);
        vcdp->declBus(c+761,"SCEqualizer cha_q_ref_22", false,-1, 15,0);
        vcdp->declBus(c+769,"SCEqualizer cha_q_ref_23", false,-1, 15,0);
        vcdp->declBus(c+777,"SCEqualizer cha_q_ref_24", false,-1, 15,0);
        vcdp->declBus(c+785,"SCEqualizer cha_q_ref_25", false,-1, 15,0);
        vcdp->declBus(c+793,"SCEqualizer cha_q_ref_26", false,-1, 15,0);
        vcdp->declBus(c+801,"SCEqualizer cha_q_ref_27", false,-1, 15,0);
        vcdp->declBus(c+809,"SCEqualizer cha_q_ref_28", false,-1, 15,0);
        vcdp->declBus(c+817,"SCEqualizer cha_q_ref_29", false,-1, 15,0);
        vcdp->declBus(c+825,"SCEqualizer cha_q_ref_30", false,-1, 15,0);
        vcdp->declBus(c+833,"SCEqualizer cha_q_ref_31", false,-1, 15,0);
        vcdp->declBus(c+841,"SCEqualizer cha_q_ref_32", false,-1, 15,0);
        vcdp->declBus(c+849,"SCEqualizer cha_q_ref_33", false,-1, 15,0);
        vcdp->declBus(c+857,"SCEqualizer cha_q_ref_34", false,-1, 15,0);
        vcdp->declBus(c+865,"SCEqualizer cha_q_ref_35", false,-1, 15,0);
        vcdp->declBus(c+873,"SCEqualizer cha_q_ref_36", false,-1, 15,0);
        vcdp->declBus(c+881,"SCEqualizer cha_q_ref_37", false,-1, 15,0);
        vcdp->declBus(c+889,"SCEqualizer cha_q_ref_38", false,-1, 15,0);
        vcdp->declBus(c+897,"SCEqualizer cha_q_ref_39", false,-1, 15,0);
        vcdp->declBus(c+905,"SCEqualizer cha_q_ref_40", false,-1, 15,0);
        vcdp->declBus(c+913,"SCEqualizer cha_q_ref_41", false,-1, 15,0);
        vcdp->declBus(c+921,"SCEqualizer cha_q_ref_42", false,-1, 15,0);
        vcdp->declBus(c+929,"SCEqualizer cha_q_ref_43", false,-1, 15,0);
        vcdp->declBus(c+937,"SCEqualizer cha_q_ref_44", false,-1, 15,0);
        vcdp->declBus(c+945,"SCEqualizer cha_q_ref_45", false,-1, 15,0);
        vcdp->declBus(c+953,"SCEqualizer cha_q_ref_46", false,-1, 15,0);
        vcdp->declBus(c+961,"SCEqualizer cha_q_ref_47", false,-1, 15,0);
        vcdp->declBus(c+969,"SCEqualizer cha_q_ref_48", false,-1, 15,0);
        vcdp->declBus(c+977,"SCEqualizer cha_q_ref_49", false,-1, 15,0);
        vcdp->declBus(c+985,"SCEqualizer cha_q_ref_50", false,-1, 15,0);
        vcdp->declBus(c+993,"SCEqualizer cha_q_ref_51", false,-1, 15,0);
        vcdp->declBus(c+1001,"SCEqualizer cha_q_ref_52", false,-1, 15,0);
        vcdp->declBus(c+1009,"SCEqualizer cha_q_ref_53", false,-1, 15,0);
        vcdp->declBus(c+1017,"SCEqualizer cha_q_ref_54", false,-1, 15,0);
        vcdp->declBus(c+1025,"SCEqualizer cha_q_ref_55", false,-1, 15,0);
        vcdp->declBus(c+1033,"SCEqualizer cha_q_ref_56", false,-1, 15,0);
        vcdp->declBus(c+1041,"SCEqualizer cha_q_ref_57", false,-1, 15,0);
        vcdp->declBus(c+1049,"SCEqualizer cha_q_ref_58", false,-1, 15,0);
        vcdp->declBus(c+1057,"SCEqualizer cha_q_ref_59", false,-1, 15,0);
        vcdp->declBus(c+1065,"SCEqualizer cha_q_ref_60", false,-1, 15,0);
        vcdp->declBus(c+1073,"SCEqualizer cha_q_ref_61", false,-1, 15,0);
        vcdp->declBus(c+1081,"SCEqualizer cha_q_ref_62", false,-1, 15,0);
        vcdp->declBus(c+1089,"SCEqualizer cha_q_ref_63", false,-1, 15,0);
        vcdp->declBus(c+1481,"SCEqualizer cnt", false,-1, 5,0);
        vcdp->declBit(c+1489,"SCEqualizer train_en", false,-1);
        vcdp->declBit(c+1633,"SCEqualizer raw_data_fire", false,-1);
        vcdp->declBit(c+1633,"SCEqualizer raw_data_fire_1", false,-1);
        vcdp->declBit(c+1641,"SCEqualizer when_SCEqualizer_l50", false,-1);
        vcdp->declBus(c+1497,"SCEqualizer train_cnt", false,-1, 5,0);
        vcdp->declBit(c+1505,"SCEqualizer train_finished", false,-1);
        vcdp->declBit(c+1513,"SCEqualizer when_SCEqualizer_l76", false,-1);
        vcdp->declBit(c+1521,"SCEqualizer when_SCEqualizer_l79", false,-1);
        vcdp->declBit(c+33,"SCEqualizer when_SCEqualizer_l74", false,-1);
        vcdp->declBit(c+1529,"SCEqualizer raw_data_ready_1", false,-1);
        vcdp->declBit(c+1633,"SCEqualizer raw_data_fire_2", false,-1);
        vcdp->declBit(c+1649,"SCEqualizer when_SCEqualizer_l89", false,-1);
        vcdp->declBit(c+1657,"SCEqualizer when_SCEqualizer_l91", false,-1);
        vcdp->declBit(c+1097,"SCEqualizer raw_data_payload_last_delay_1", false,-1);
        vcdp->declBit(c+1105,"SCEqualizer raw_data_payload_last_delay_2", false,-1);
        vcdp->declBit(c+1113,"SCEqualizer raw_data_payload_last_delay_3", false,-1);
        vcdp->declBit(c+1121,"SCEqualizer raw_data_payload_last_delay_4", false,-1);
        vcdp->declBit(c+1129,"SCEqualizer raw_data_payload_last_delay_5", false,-1);
        vcdp->declBit(c+1137,"SCEqualizer raw_data_payload_last_delay_6", false,-1);
        vcdp->declBit(c+1145,"SCEqualizer raw_data_payload_last_delay_7", false,-1);
        vcdp->declBit(c+1153,"SCEqualizer raw_data_payload_last_delay_8", false,-1);
        vcdp->declBit(c+1161,"SCEqualizer raw_data_payload_last_delay_9", false,-1);
        vcdp->declBit(c+1169,"SCEqualizer raw_data_payload_last_delay_10", false,-1);
        vcdp->declBit(c+1177,"SCEqualizer raw_data_payload_last_delay_11", false,-1);
        vcdp->declBit(c+1185,"SCEqualizer raw_data_payload_last_delay_12", false,-1);
        vcdp->declBit(c+1193,"SCEqualizer raw_data_payload_last_delay_13", false,-1);
        vcdp->declBit(c+1201,"SCEqualizer raw_data_payload_last_delay_14", false,-1);
        vcdp->declBit(c+1209,"SCEqualizer raw_data_payload_last_delay_15", false,-1);
        vcdp->declBit(c+1217,"SCEqualizer raw_data_payload_last_delay_16", false,-1);
        vcdp->declBit(c+1545,"SCEqualizer i_zf_eq raw_data_valid", false,-1);
        vcdp->declBit(c+1681,"SCEqualizer i_zf_eq raw_data_ready", false,-1);
        vcdp->declBus(c+1569,"SCEqualizer i_zf_eq raw_data_payload", false,-1, 15,0);
        vcdp->declBus(c+57,"SCEqualizer i_zf_eq scale", false,-1, 15,0);
        vcdp->declBus(c+17,"SCEqualizer i_zf_eq ref_data", false,-1, 15,0);
        vcdp->declBit(c+1489,"SCEqualizer i_zf_eq train_en", false,-1);
        vcdp->declBit(c+1465,"SCEqualizer i_zf_eq result_data_valid", false,-1);
        vcdp->declBus(c+1,"SCEqualizer i_zf_eq result_data_payload", false,-1, 15,0);
        vcdp->declBit(c+1617,"SCEqualizer i_zf_eq clk", false,-1);
        vcdp->declBit(c+1625,"SCEqualizer i_zf_eq reset", false,-1);
        vcdp->declBit(c+1537,"SCEqualizer i_zf_eq cal_core_rotate_mode", false,-1);
        vcdp->declBus(c+1665,"SCEqualizer i_zf_eq cal_core_raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+41,"SCEqualizer i_zf_eq cal_core_raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+1449,"SCEqualizer i_zf_eq cal_core_raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+1681,"SCEqualizer i_zf_eq cal_core_raw_data_ready", false,-1);
        vcdp->declBit(c+1465,"SCEqualizer i_zf_eq cal_core_result_valid", false,-1);
        vcdp->declBus(c+1225,"SCEqualizer i_zf_eq cal_core_result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+1233,"SCEqualizer i_zf_eq cal_core_result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+1241,"SCEqualizer i_zf_eq cal_core_result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+1249,"SCEqualizer i_zf_eq x_sign", false,-1);
        vcdp->declBus(c+1257,"SCEqualizer i_zf_eq mul_result", false,-1, 15,0);
        vcdp->declBus(c+1265,"SCEqualizer i_zf_eq div_result", false,-1, 15,0);
        vcdp->declBit(c+1273,"SCEqualizer i_zf_eq train_en_delay_1", false,-1);
        vcdp->declBit(c+1281,"SCEqualizer i_zf_eq train_en_delay_2", false,-1);
        vcdp->declBit(c+1289,"SCEqualizer i_zf_eq train_en_delay_3", false,-1);
        vcdp->declBit(c+1297,"SCEqualizer i_zf_eq train_en_delay_4", false,-1);
        vcdp->declBit(c+1305,"SCEqualizer i_zf_eq train_en_delay_5", false,-1);
        vcdp->declBit(c+1313,"SCEqualizer i_zf_eq train_en_delay_6", false,-1);
        vcdp->declBit(c+1321,"SCEqualizer i_zf_eq train_en_delay_7", false,-1);
        vcdp->declBit(c+1329,"SCEqualizer i_zf_eq train_en_delay_8", false,-1);
        vcdp->declBit(c+1337,"SCEqualizer i_zf_eq train_en_delay_9", false,-1);
        vcdp->declBit(c+1345,"SCEqualizer i_zf_eq train_en_delay_10", false,-1);
        vcdp->declBit(c+1353,"SCEqualizer i_zf_eq train_en_delay_11", false,-1);
        vcdp->declBit(c+1361,"SCEqualizer i_zf_eq train_en_delay_12", false,-1);
        vcdp->declBit(c+1369,"SCEqualizer i_zf_eq train_en_delay_13", false,-1);
        vcdp->declBit(c+1377,"SCEqualizer i_zf_eq train_en_delay_14", false,-1);
        vcdp->declBit(c+1385,"SCEqualizer i_zf_eq train_en_delay_15", false,-1);
        vcdp->declBit(c+1393,"SCEqualizer i_zf_eq train_en_delay_16", false,-1);
        vcdp->declBit(c+1537,"SCEqualizer i_zf_eq cal_core rotate_mode", false,-1);
        vcdp->declBus(c+1689,"SCEqualizer i_zf_eq cal_core x_u", false,-1, 1,0);
        vcdp->declBit(c+1545,"SCEqualizer i_zf_eq cal_core raw_data_valid", false,-1);
        vcdp->declBit(c+1681,"SCEqualizer i_zf_eq cal_core raw_data_ready", false,-1);
        vcdp->declBus(c+1665,"SCEqualizer i_zf_eq cal_core raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+41,"SCEqualizer i_zf_eq cal_core raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+1449,"SCEqualizer i_zf_eq cal_core raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+1465,"SCEqualizer i_zf_eq cal_core result_valid", false,-1);
        vcdp->declBus(c+1225,"SCEqualizer i_zf_eq cal_core result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+1233,"SCEqualizer i_zf_eq cal_core result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+1241,"SCEqualizer i_zf_eq cal_core result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+1617,"SCEqualizer i_zf_eq cal_core clk", false,-1);
        vcdp->declBit(c+1625,"SCEqualizer i_zf_eq cal_core reset", false,-1);
        vcdp->declBit(c+1545,"SCEqualizer i_zf_eq cal_core raw_data_fire", false,-1);
        vcdp->declBit(c+1545,"SCEqualizer q_zf_eq raw_data_valid", false,-1);
        vcdp->declBit(c+1681,"SCEqualizer q_zf_eq raw_data_ready", false,-1);
        vcdp->declBus(c+1577,"SCEqualizer q_zf_eq raw_data_payload", false,-1, 15,0);
        vcdp->declBus(c+65,"SCEqualizer q_zf_eq scale", false,-1, 15,0);
        vcdp->declBus(c+25,"SCEqualizer q_zf_eq ref_data", false,-1, 15,0);
        vcdp->declBit(c+1489,"SCEqualizer q_zf_eq train_en", false,-1);
        vcdp->declBit(c+1473,"SCEqualizer q_zf_eq result_data_valid", false,-1);
        vcdp->declBus(c+9,"SCEqualizer q_zf_eq result_data_payload", false,-1, 15,0);
        vcdp->declBit(c+1617,"SCEqualizer q_zf_eq clk", false,-1);
        vcdp->declBit(c+1625,"SCEqualizer q_zf_eq reset", false,-1);
        vcdp->declBit(c+1537,"SCEqualizer q_zf_eq cal_core_rotate_mode", false,-1);
        vcdp->declBus(c+1673,"SCEqualizer q_zf_eq cal_core_raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+49,"SCEqualizer q_zf_eq cal_core_raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+1457,"SCEqualizer q_zf_eq cal_core_raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+1681,"SCEqualizer q_zf_eq cal_core_raw_data_ready", false,-1);
        vcdp->declBit(c+1473,"SCEqualizer q_zf_eq cal_core_result_valid", false,-1);
        vcdp->declBus(c+1401,"SCEqualizer q_zf_eq cal_core_result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+1409,"SCEqualizer q_zf_eq cal_core_result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+1417,"SCEqualizer q_zf_eq cal_core_result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+1425,"SCEqualizer q_zf_eq x_sign", false,-1);
        vcdp->declBus(c+1433,"SCEqualizer q_zf_eq mul_result", false,-1, 15,0);
        vcdp->declBus(c+1441,"SCEqualizer q_zf_eq div_result", false,-1, 15,0);
        vcdp->declBit(c+1273,"SCEqualizer q_zf_eq train_en_delay_1", false,-1);
        vcdp->declBit(c+1281,"SCEqualizer q_zf_eq train_en_delay_2", false,-1);
        vcdp->declBit(c+1289,"SCEqualizer q_zf_eq train_en_delay_3", false,-1);
        vcdp->declBit(c+1297,"SCEqualizer q_zf_eq train_en_delay_4", false,-1);
        vcdp->declBit(c+1305,"SCEqualizer q_zf_eq train_en_delay_5", false,-1);
        vcdp->declBit(c+1313,"SCEqualizer q_zf_eq train_en_delay_6", false,-1);
        vcdp->declBit(c+1321,"SCEqualizer q_zf_eq train_en_delay_7", false,-1);
        vcdp->declBit(c+1329,"SCEqualizer q_zf_eq train_en_delay_8", false,-1);
        vcdp->declBit(c+1337,"SCEqualizer q_zf_eq train_en_delay_9", false,-1);
        vcdp->declBit(c+1345,"SCEqualizer q_zf_eq train_en_delay_10", false,-1);
        vcdp->declBit(c+1353,"SCEqualizer q_zf_eq train_en_delay_11", false,-1);
        vcdp->declBit(c+1361,"SCEqualizer q_zf_eq train_en_delay_12", false,-1);
        vcdp->declBit(c+1369,"SCEqualizer q_zf_eq train_en_delay_13", false,-1);
        vcdp->declBit(c+1377,"SCEqualizer q_zf_eq train_en_delay_14", false,-1);
        vcdp->declBit(c+1385,"SCEqualizer q_zf_eq train_en_delay_15", false,-1);
        vcdp->declBit(c+1393,"SCEqualizer q_zf_eq train_en_delay_16", false,-1);
        vcdp->declBit(c+1537,"SCEqualizer q_zf_eq cal_core rotate_mode", false,-1);
        vcdp->declBus(c+1689,"SCEqualizer q_zf_eq cal_core x_u", false,-1, 1,0);
        vcdp->declBit(c+1545,"SCEqualizer q_zf_eq cal_core raw_data_valid", false,-1);
        vcdp->declBit(c+1681,"SCEqualizer q_zf_eq cal_core raw_data_ready", false,-1);
        vcdp->declBus(c+1673,"SCEqualizer q_zf_eq cal_core raw_data_payload_x", false,-1, 15,0);
        vcdp->declBus(c+49,"SCEqualizer q_zf_eq cal_core raw_data_payload_y", false,-1, 15,0);
        vcdp->declBus(c+1457,"SCEqualizer q_zf_eq cal_core raw_data_payload_z", false,-1, 15,0);
        vcdp->declBit(c+1473,"SCEqualizer q_zf_eq cal_core result_valid", false,-1);
        vcdp->declBus(c+1401,"SCEqualizer q_zf_eq cal_core result_payload_x", false,-1, 15,0);
        vcdp->declBus(c+1409,"SCEqualizer q_zf_eq cal_core result_payload_y", false,-1, 15,0);
        vcdp->declBus(c+1417,"SCEqualizer q_zf_eq cal_core result_payload_z", false,-1, 15,0);
        vcdp->declBit(c+1617,"SCEqualizer q_zf_eq cal_core clk", false,-1);
        vcdp->declBit(c+1625,"SCEqualizer q_zf_eq cal_core reset", false,-1);
        vcdp->declBit(c+1545,"SCEqualizer q_zf_eq cal_core raw_data_fire", false,-1);
    }
}

void VSCEqualizer::traceFullThis__1(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->SCEqualizer__DOT__i_zf_eq_result_data_payload),16);
        vcdp->fullBus(c+9,(vlTOPp->SCEqualizer__DOT__q_zf_eq_result_data_payload),16);
        vcdp->fullBus(c+17,(vlTOPp->SCEqualizer__DOT___zz_ref_data),16);
        vcdp->fullBus(c+25,(vlTOPp->SCEqualizer__DOT___zz_ref_data_1),16);
        vcdp->fullBit(c+33,(vlTOPp->SCEqualizer__DOT__when_SCEqualizer_l74));
        vcdp->fullBus(c+41,(((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                              ? (IData)(vlTOPp->SCEqualizer__DOT___zz_ref_data)
                              : 0U)),16);
        vcdp->fullBus(c+49,(((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                              ? (IData)(vlTOPp->SCEqualizer__DOT___zz_ref_data_1)
                              : 0U)),16);
        vcdp->fullBus(c+57,(vlTOPp->SCEqualizer__DOT__cha_i_scale),16);
        vcdp->fullBus(c+65,(vlTOPp->SCEqualizer__DOT__cha_q_scale),16);
        vcdp->fullBus(c+73,(vlTOPp->SCEqualizer__DOT__cha_i_ref_0),16);
        vcdp->fullBus(c+81,(vlTOPp->SCEqualizer__DOT__cha_i_ref_1),16);
        vcdp->fullBus(c+89,(vlTOPp->SCEqualizer__DOT__cha_i_ref_2),16);
        vcdp->fullBus(c+97,(vlTOPp->SCEqualizer__DOT__cha_i_ref_3),16);
        vcdp->fullBus(c+105,(vlTOPp->SCEqualizer__DOT__cha_i_ref_4),16);
        vcdp->fullBus(c+113,(vlTOPp->SCEqualizer__DOT__cha_i_ref_5),16);
        vcdp->fullBus(c+121,(vlTOPp->SCEqualizer__DOT__cha_i_ref_6),16);
        vcdp->fullBus(c+129,(vlTOPp->SCEqualizer__DOT__cha_i_ref_7),16);
        vcdp->fullBus(c+137,(vlTOPp->SCEqualizer__DOT__cha_i_ref_8),16);
        vcdp->fullBus(c+145,(vlTOPp->SCEqualizer__DOT__cha_i_ref_9),16);
        vcdp->fullBus(c+153,(vlTOPp->SCEqualizer__DOT__cha_i_ref_10),16);
        vcdp->fullBus(c+161,(vlTOPp->SCEqualizer__DOT__cha_i_ref_11),16);
        vcdp->fullBus(c+169,(vlTOPp->SCEqualizer__DOT__cha_i_ref_12),16);
        vcdp->fullBus(c+177,(vlTOPp->SCEqualizer__DOT__cha_i_ref_13),16);
        vcdp->fullBus(c+185,(vlTOPp->SCEqualizer__DOT__cha_i_ref_14),16);
        vcdp->fullBus(c+193,(vlTOPp->SCEqualizer__DOT__cha_i_ref_15),16);
        vcdp->fullBus(c+201,(vlTOPp->SCEqualizer__DOT__cha_i_ref_16),16);
        vcdp->fullBus(c+209,(vlTOPp->SCEqualizer__DOT__cha_i_ref_17),16);
        vcdp->fullBus(c+217,(vlTOPp->SCEqualizer__DOT__cha_i_ref_18),16);
        vcdp->fullBus(c+225,(vlTOPp->SCEqualizer__DOT__cha_i_ref_19),16);
        vcdp->fullBus(c+233,(vlTOPp->SCEqualizer__DOT__cha_i_ref_20),16);
        vcdp->fullBus(c+241,(vlTOPp->SCEqualizer__DOT__cha_i_ref_21),16);
        vcdp->fullBus(c+249,(vlTOPp->SCEqualizer__DOT__cha_i_ref_22),16);
        vcdp->fullBus(c+257,(vlTOPp->SCEqualizer__DOT__cha_i_ref_23),16);
        vcdp->fullBus(c+265,(vlTOPp->SCEqualizer__DOT__cha_i_ref_24),16);
        vcdp->fullBus(c+273,(vlTOPp->SCEqualizer__DOT__cha_i_ref_25),16);
        vcdp->fullBus(c+281,(vlTOPp->SCEqualizer__DOT__cha_i_ref_26),16);
        vcdp->fullBus(c+289,(vlTOPp->SCEqualizer__DOT__cha_i_ref_27),16);
        vcdp->fullBus(c+297,(vlTOPp->SCEqualizer__DOT__cha_i_ref_28),16);
        vcdp->fullBus(c+305,(vlTOPp->SCEqualizer__DOT__cha_i_ref_29),16);
        vcdp->fullBus(c+313,(vlTOPp->SCEqualizer__DOT__cha_i_ref_30),16);
        vcdp->fullBus(c+321,(vlTOPp->SCEqualizer__DOT__cha_i_ref_31),16);
        vcdp->fullBus(c+329,(vlTOPp->SCEqualizer__DOT__cha_i_ref_32),16);
        vcdp->fullBus(c+337,(vlTOPp->SCEqualizer__DOT__cha_i_ref_33),16);
        vcdp->fullBus(c+345,(vlTOPp->SCEqualizer__DOT__cha_i_ref_34),16);
        vcdp->fullBus(c+353,(vlTOPp->SCEqualizer__DOT__cha_i_ref_35),16);
        vcdp->fullBus(c+361,(vlTOPp->SCEqualizer__DOT__cha_i_ref_36),16);
        vcdp->fullBus(c+369,(vlTOPp->SCEqualizer__DOT__cha_i_ref_37),16);
        vcdp->fullBus(c+377,(vlTOPp->SCEqualizer__DOT__cha_i_ref_38),16);
        vcdp->fullBus(c+385,(vlTOPp->SCEqualizer__DOT__cha_i_ref_39),16);
        vcdp->fullBus(c+393,(vlTOPp->SCEqualizer__DOT__cha_i_ref_40),16);
        vcdp->fullBus(c+401,(vlTOPp->SCEqualizer__DOT__cha_i_ref_41),16);
        vcdp->fullBus(c+409,(vlTOPp->SCEqualizer__DOT__cha_i_ref_42),16);
        vcdp->fullBus(c+417,(vlTOPp->SCEqualizer__DOT__cha_i_ref_43),16);
        vcdp->fullBus(c+425,(vlTOPp->SCEqualizer__DOT__cha_i_ref_44),16);
        vcdp->fullBus(c+433,(vlTOPp->SCEqualizer__DOT__cha_i_ref_45),16);
        vcdp->fullBus(c+441,(vlTOPp->SCEqualizer__DOT__cha_i_ref_46),16);
        vcdp->fullBus(c+449,(vlTOPp->SCEqualizer__DOT__cha_i_ref_47),16);
        vcdp->fullBus(c+457,(vlTOPp->SCEqualizer__DOT__cha_i_ref_48),16);
        vcdp->fullBus(c+465,(vlTOPp->SCEqualizer__DOT__cha_i_ref_49),16);
        vcdp->fullBus(c+473,(vlTOPp->SCEqualizer__DOT__cha_i_ref_50),16);
        vcdp->fullBus(c+481,(vlTOPp->SCEqualizer__DOT__cha_i_ref_51),16);
        vcdp->fullBus(c+489,(vlTOPp->SCEqualizer__DOT__cha_i_ref_52),16);
        vcdp->fullBus(c+497,(vlTOPp->SCEqualizer__DOT__cha_i_ref_53),16);
        vcdp->fullBus(c+505,(vlTOPp->SCEqualizer__DOT__cha_i_ref_54),16);
        vcdp->fullBus(c+513,(vlTOPp->SCEqualizer__DOT__cha_i_ref_55),16);
        vcdp->fullBus(c+521,(vlTOPp->SCEqualizer__DOT__cha_i_ref_56),16);
        vcdp->fullBus(c+529,(vlTOPp->SCEqualizer__DOT__cha_i_ref_57),16);
        vcdp->fullBus(c+537,(vlTOPp->SCEqualizer__DOT__cha_i_ref_58),16);
        vcdp->fullBus(c+545,(vlTOPp->SCEqualizer__DOT__cha_i_ref_59),16);
        vcdp->fullBus(c+553,(vlTOPp->SCEqualizer__DOT__cha_i_ref_60),16);
        vcdp->fullBus(c+561,(vlTOPp->SCEqualizer__DOT__cha_i_ref_61),16);
        vcdp->fullBus(c+569,(vlTOPp->SCEqualizer__DOT__cha_i_ref_62),16);
        vcdp->fullBus(c+577,(vlTOPp->SCEqualizer__DOT__cha_i_ref_63),16);
        vcdp->fullBus(c+585,(vlTOPp->SCEqualizer__DOT__cha_q_ref_0),16);
        vcdp->fullBus(c+593,(vlTOPp->SCEqualizer__DOT__cha_q_ref_1),16);
        vcdp->fullBus(c+601,(vlTOPp->SCEqualizer__DOT__cha_q_ref_2),16);
        vcdp->fullBus(c+609,(vlTOPp->SCEqualizer__DOT__cha_q_ref_3),16);
        vcdp->fullBus(c+617,(vlTOPp->SCEqualizer__DOT__cha_q_ref_4),16);
        vcdp->fullBus(c+625,(vlTOPp->SCEqualizer__DOT__cha_q_ref_5),16);
        vcdp->fullBus(c+633,(vlTOPp->SCEqualizer__DOT__cha_q_ref_6),16);
        vcdp->fullBus(c+641,(vlTOPp->SCEqualizer__DOT__cha_q_ref_7),16);
        vcdp->fullBus(c+649,(vlTOPp->SCEqualizer__DOT__cha_q_ref_8),16);
        vcdp->fullBus(c+657,(vlTOPp->SCEqualizer__DOT__cha_q_ref_9),16);
        vcdp->fullBus(c+665,(vlTOPp->SCEqualizer__DOT__cha_q_ref_10),16);
        vcdp->fullBus(c+673,(vlTOPp->SCEqualizer__DOT__cha_q_ref_11),16);
        vcdp->fullBus(c+681,(vlTOPp->SCEqualizer__DOT__cha_q_ref_12),16);
        vcdp->fullBus(c+689,(vlTOPp->SCEqualizer__DOT__cha_q_ref_13),16);
        vcdp->fullBus(c+697,(vlTOPp->SCEqualizer__DOT__cha_q_ref_14),16);
        vcdp->fullBus(c+705,(vlTOPp->SCEqualizer__DOT__cha_q_ref_15),16);
        vcdp->fullBus(c+713,(vlTOPp->SCEqualizer__DOT__cha_q_ref_16),16);
        vcdp->fullBus(c+721,(vlTOPp->SCEqualizer__DOT__cha_q_ref_17),16);
        vcdp->fullBus(c+729,(vlTOPp->SCEqualizer__DOT__cha_q_ref_18),16);
        vcdp->fullBus(c+737,(vlTOPp->SCEqualizer__DOT__cha_q_ref_19),16);
        vcdp->fullBus(c+745,(vlTOPp->SCEqualizer__DOT__cha_q_ref_20),16);
        vcdp->fullBus(c+753,(vlTOPp->SCEqualizer__DOT__cha_q_ref_21),16);
        vcdp->fullBus(c+761,(vlTOPp->SCEqualizer__DOT__cha_q_ref_22),16);
        vcdp->fullBus(c+769,(vlTOPp->SCEqualizer__DOT__cha_q_ref_23),16);
        vcdp->fullBus(c+777,(vlTOPp->SCEqualizer__DOT__cha_q_ref_24),16);
        vcdp->fullBus(c+785,(vlTOPp->SCEqualizer__DOT__cha_q_ref_25),16);
        vcdp->fullBus(c+793,(vlTOPp->SCEqualizer__DOT__cha_q_ref_26),16);
        vcdp->fullBus(c+801,(vlTOPp->SCEqualizer__DOT__cha_q_ref_27),16);
        vcdp->fullBus(c+809,(vlTOPp->SCEqualizer__DOT__cha_q_ref_28),16);
        vcdp->fullBus(c+817,(vlTOPp->SCEqualizer__DOT__cha_q_ref_29),16);
        vcdp->fullBus(c+825,(vlTOPp->SCEqualizer__DOT__cha_q_ref_30),16);
        vcdp->fullBus(c+833,(vlTOPp->SCEqualizer__DOT__cha_q_ref_31),16);
        vcdp->fullBus(c+841,(vlTOPp->SCEqualizer__DOT__cha_q_ref_32),16);
        vcdp->fullBus(c+849,(vlTOPp->SCEqualizer__DOT__cha_q_ref_33),16);
        vcdp->fullBus(c+857,(vlTOPp->SCEqualizer__DOT__cha_q_ref_34),16);
        vcdp->fullBus(c+865,(vlTOPp->SCEqualizer__DOT__cha_q_ref_35),16);
        vcdp->fullBus(c+873,(vlTOPp->SCEqualizer__DOT__cha_q_ref_36),16);
        vcdp->fullBus(c+881,(vlTOPp->SCEqualizer__DOT__cha_q_ref_37),16);
        vcdp->fullBus(c+889,(vlTOPp->SCEqualizer__DOT__cha_q_ref_38),16);
        vcdp->fullBus(c+897,(vlTOPp->SCEqualizer__DOT__cha_q_ref_39),16);
        vcdp->fullBus(c+905,(vlTOPp->SCEqualizer__DOT__cha_q_ref_40),16);
        vcdp->fullBus(c+913,(vlTOPp->SCEqualizer__DOT__cha_q_ref_41),16);
        vcdp->fullBus(c+921,(vlTOPp->SCEqualizer__DOT__cha_q_ref_42),16);
        vcdp->fullBus(c+929,(vlTOPp->SCEqualizer__DOT__cha_q_ref_43),16);
        vcdp->fullBus(c+937,(vlTOPp->SCEqualizer__DOT__cha_q_ref_44),16);
        vcdp->fullBus(c+945,(vlTOPp->SCEqualizer__DOT__cha_q_ref_45),16);
        vcdp->fullBus(c+953,(vlTOPp->SCEqualizer__DOT__cha_q_ref_46),16);
        vcdp->fullBus(c+961,(vlTOPp->SCEqualizer__DOT__cha_q_ref_47),16);
        vcdp->fullBus(c+969,(vlTOPp->SCEqualizer__DOT__cha_q_ref_48),16);
        vcdp->fullBus(c+977,(vlTOPp->SCEqualizer__DOT__cha_q_ref_49),16);
        vcdp->fullBus(c+985,(vlTOPp->SCEqualizer__DOT__cha_q_ref_50),16);
        vcdp->fullBus(c+993,(vlTOPp->SCEqualizer__DOT__cha_q_ref_51),16);
        vcdp->fullBus(c+1001,(vlTOPp->SCEqualizer__DOT__cha_q_ref_52),16);
        vcdp->fullBus(c+1009,(vlTOPp->SCEqualizer__DOT__cha_q_ref_53),16);
        vcdp->fullBus(c+1017,(vlTOPp->SCEqualizer__DOT__cha_q_ref_54),16);
        vcdp->fullBus(c+1025,(vlTOPp->SCEqualizer__DOT__cha_q_ref_55),16);
        vcdp->fullBus(c+1033,(vlTOPp->SCEqualizer__DOT__cha_q_ref_56),16);
        vcdp->fullBus(c+1041,(vlTOPp->SCEqualizer__DOT__cha_q_ref_57),16);
        vcdp->fullBus(c+1049,(vlTOPp->SCEqualizer__DOT__cha_q_ref_58),16);
        vcdp->fullBus(c+1057,(vlTOPp->SCEqualizer__DOT__cha_q_ref_59),16);
        vcdp->fullBus(c+1065,(vlTOPp->SCEqualizer__DOT__cha_q_ref_60),16);
        vcdp->fullBus(c+1073,(vlTOPp->SCEqualizer__DOT__cha_q_ref_61),16);
        vcdp->fullBus(c+1081,(vlTOPp->SCEqualizer__DOT__cha_q_ref_62),16);
        vcdp->fullBus(c+1089,(vlTOPp->SCEqualizer__DOT__cha_q_ref_63),16);
        vcdp->fullBit(c+1097,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_1));
        vcdp->fullBit(c+1105,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_2));
        vcdp->fullBit(c+1113,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_3));
        vcdp->fullBit(c+1121,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_4));
        vcdp->fullBit(c+1129,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_5));
        vcdp->fullBit(c+1137,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_6));
        vcdp->fullBit(c+1145,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_7));
        vcdp->fullBit(c+1153,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_8));
        vcdp->fullBit(c+1161,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_9));
        vcdp->fullBit(c+1169,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_10));
        vcdp->fullBit(c+1177,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_11));
        vcdp->fullBit(c+1185,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_12));
        vcdp->fullBit(c+1193,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_13));
        vcdp->fullBit(c+1201,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_14));
        vcdp->fullBit(c+1209,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_15));
        vcdp->fullBit(c+1217,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_16));
        vcdp->fullBus(c+1225,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->fullBus(c+1233,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->fullBus(c+1241,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->fullBit(c+1249,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign));
        vcdp->fullBus(c+1257,((0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign)
                                           ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                                           : (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->fullBus(c+1265,((0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign)
                                           ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                                           : (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
        vcdp->fullBit(c+1273,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1));
        vcdp->fullBit(c+1281,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2));
        vcdp->fullBit(c+1289,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3));
        vcdp->fullBit(c+1297,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4));
        vcdp->fullBit(c+1305,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5));
        vcdp->fullBit(c+1313,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6));
        vcdp->fullBit(c+1321,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7));
        vcdp->fullBit(c+1329,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8));
        vcdp->fullBit(c+1337,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9));
        vcdp->fullBit(c+1345,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10));
        vcdp->fullBit(c+1353,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11));
        vcdp->fullBit(c+1361,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12));
        vcdp->fullBit(c+1369,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13));
        vcdp->fullBit(c+1377,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14));
        vcdp->fullBit(c+1385,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15));
        vcdp->fullBit(c+1393,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16));
        vcdp->fullBus(c+1401,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->fullBus(c+1409,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->fullBus(c+1417,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->fullBit(c+1425,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign));
        vcdp->fullBus(c+1433,((0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign)
                                           ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                                           : (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->fullBus(c+1441,((0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign)
                                           ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                                           : (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
        vcdp->fullBus(c+1449,(((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                                ? 0U : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_scale))),16);
        vcdp->fullBus(c+1457,(((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                                ? 0U : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_scale))),16);
        vcdp->fullBit(c+1465,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->fullBit(c+1473,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->fullBus(c+1481,(vlTOPp->SCEqualizer__DOT__cnt),6);
        vcdp->fullBit(c+1489,(vlTOPp->SCEqualizer__DOT__train_en));
        vcdp->fullBus(c+1497,(vlTOPp->SCEqualizer__DOT__train_cnt),6);
        vcdp->fullBit(c+1505,(vlTOPp->SCEqualizer__DOT__train_finished));
        vcdp->fullBit(c+1513,((0x3fU == (IData)(vlTOPp->SCEqualizer__DOT__train_cnt))));
        vcdp->fullBit(c+1521,((0U == (IData)(vlTOPp->SCEqualizer__DOT__train_cnt))));
        vcdp->fullBit(c+1529,(vlTOPp->SCEqualizer__DOT__raw_data_ready_1));
        vcdp->fullBit(c+1537,((1U & (~ (IData)(vlTOPp->SCEqualizer__DOT__train_en)))));
        vcdp->fullBit(c+1545,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+1553,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+1561,(vlTOPp->raw_data_payload_last));
        vcdp->fullBus(c+1569,(vlTOPp->raw_data_payload_fragment_cha_i),16);
        vcdp->fullBus(c+1577,(vlTOPp->raw_data_payload_fragment_cha_q),16);
        vcdp->fullBit(c+1585,(vlTOPp->equalized_data_valid));
        vcdp->fullBit(c+1593,(vlTOPp->equalized_data_payload_last));
        vcdp->fullBus(c+1601,(vlTOPp->equalized_data_payload_fragment_cha_i),16);
        vcdp->fullBus(c+1609,(vlTOPp->equalized_data_payload_fragment_cha_q),16);
        vcdp->fullBit(c+1617,(vlTOPp->clk));
        vcdp->fullBit(c+1625,(vlTOPp->reset));
        vcdp->fullBit(c+1633,(((IData)(vlTOPp->raw_data_valid) 
                               & (IData)(vlTOPp->raw_data_ready))));
        vcdp->fullBit(c+1641,(((0x3fU == (IData)(vlTOPp->SCEqualizer__DOT__cnt)) 
                               & ((IData)(vlTOPp->raw_data_valid) 
                                  & (IData)(vlTOPp->raw_data_ready)))));
        vcdp->fullBit(c+1649,(((IData)(vlTOPp->raw_data_payload_last) 
                               & ((IData)(vlTOPp->raw_data_valid) 
                                  & (IData)(vlTOPp->raw_data_ready)))));
        vcdp->fullBit(c+1657,(((IData)(vlTOPp->equalized_data_payload_last) 
                               & (IData)(vlTOPp->equalized_data_valid))));
        vcdp->fullBus(c+1665,((0xffffU & (((0x8000U 
                                            & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                                            ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                                            : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
                                          + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
                                                   >> 0xfU))))),16);
        vcdp->fullBus(c+1673,((0xffffU & (((0x8000U 
                                            & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                                            ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                                            : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                                          + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                                                   >> 0xfU))))),16);
        vcdp->fullBit(c+1681,(1U));
        vcdp->fullBus(c+1689,(1U),2);
    }
}
