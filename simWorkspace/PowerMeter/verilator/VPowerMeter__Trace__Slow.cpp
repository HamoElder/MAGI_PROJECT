// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPowerMeter__Syms.h"


//======================

void VPowerMeter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VPowerMeter::traceInit, &VPowerMeter::traceFull, &VPowerMeter::traceChg, this);
}
void VPowerMeter::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VPowerMeter* t = (VPowerMeter*)userthis;
    VPowerMeter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VPowerMeter::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPowerMeter* t = (VPowerMeter*)userthis;
    VPowerMeter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VPowerMeter::traceInitThis(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VPowerMeter::traceFullThis(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPowerMeter::traceInitThis__1(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+673,"raw_data_valid", false,-1);
        vcdp->declBus(c+681,"raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+689,"raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+697,"power_result_valid", false,-1);
        vcdp->declBus(c+705,"power_result_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+713,"power_result_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+721,"clk", false,-1);
        vcdp->declBit(c+729,"reset", false,-1);
        vcdp->declBit(c+673,"PowerMeter raw_data_valid", false,-1);
        vcdp->declBus(c+681,"PowerMeter raw_data_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+689,"PowerMeter raw_data_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+697,"PowerMeter power_result_valid", false,-1);
        vcdp->declBus(c+705,"PowerMeter power_result_payload_cha_i", false,-1, 15,0);
        vcdp->declBus(c+713,"PowerMeter power_result_payload_cha_q", false,-1, 15,0);
        vcdp->declBit(c+721,"PowerMeter clk", false,-1);
        vcdp->declBit(c+729,"PowerMeter reset", false,-1);
        vcdp->declBus(c+97,"PowerMeter shiftRegisterE_2_output_1", false,-1, 10,0);
        vcdp->declBus(c+105,"PowerMeter shiftRegisterE_3_output_1", false,-1, 10,0);
        vcdp->declBus(c+609,"PowerMeter power_val_cha_i", false,-1, 15,0);
        vcdp->declBus(c+617,"PowerMeter power_val_cha_q", false,-1, 15,0);
        vcdp->declBus(c+641,"PowerMeter power_val_i", false,-1, 15,0);
        vcdp->declBus(c+649,"PowerMeter power_val_q", false,-1, 15,0);
        vcdp->declBus(c+737,"PowerMeter sq_i", false,-1, 31,0);
        vcdp->declBus(c+745,"PowerMeter sq_q", false,-1, 31,0);
        vcdp->declBus(c+625,"PowerMeter sq_i_regNext", false,-1, 31,0);
        vcdp->declBit(c+1,"PowerMeter when_SInt_l332", false,-1);
        vcdp->declBit(c+9,"PowerMeter when_SInt_l186", false,-1);
        vcdp->declBus(c+81,"PowerMeter power_cal_i", false,-1, 10,0);
        vcdp->declBit(c+17,"PowerMeter when_SInt_l125", false,-1);
        vcdp->declBit(c+25,"PowerMeter when_SInt_l126", false,-1);
        vcdp->declBit(c+33,"PowerMeter when_SInt_l132", false,-1);
        vcdp->declBus(c+633,"PowerMeter sq_q_regNext", false,-1, 31,0);
        vcdp->declBit(c+41,"PowerMeter when_SInt_l332_1", false,-1);
        vcdp->declBit(c+49,"PowerMeter when_SInt_l186_1", false,-1);
        vcdp->declBus(c+89,"PowerMeter power_cal_q", false,-1, 10,0);
        vcdp->declBit(c+57,"PowerMeter when_SInt_l125_1", false,-1);
        vcdp->declBit(c+65,"PowerMeter when_SInt_l126_1", false,-1);
        vcdp->declBit(c+73,"PowerMeter when_SInt_l132_1", false,-1);
        vcdp->declBit(c+657,"PowerMeter power_cal_valid", false,-1);
        vcdp->declBit(c+665,"PowerMeter power_result_valid_1", false,-1);
        vcdp->declBus(c+81,"PowerMeter shiftRegisterE_2 input_1", false,-1, 10,0);
        vcdp->declBus(c+97,"PowerMeter shiftRegisterE_2 output_1", false,-1, 10,0);
        vcdp->declBit(c+657,"PowerMeter shiftRegisterE_2 enable", false,-1);
        vcdp->declBit(c+721,"PowerMeter shiftRegisterE_2 clk", false,-1);
        vcdp->declBit(c+729,"PowerMeter shiftRegisterE_2 reset", false,-1);
        vcdp->declBus(c+113,"PowerMeter shiftRegisterE_2 shift_reg_0", false,-1, 10,0);
        vcdp->declBus(c+121,"PowerMeter shiftRegisterE_2 shift_reg_1", false,-1, 10,0);
        vcdp->declBus(c+129,"PowerMeter shiftRegisterE_2 shift_reg_2", false,-1, 10,0);
        vcdp->declBus(c+137,"PowerMeter shiftRegisterE_2 shift_reg_3", false,-1, 10,0);
        vcdp->declBus(c+145,"PowerMeter shiftRegisterE_2 shift_reg_4", false,-1, 10,0);
        vcdp->declBus(c+153,"PowerMeter shiftRegisterE_2 shift_reg_5", false,-1, 10,0);
        vcdp->declBus(c+161,"PowerMeter shiftRegisterE_2 shift_reg_6", false,-1, 10,0);
        vcdp->declBus(c+169,"PowerMeter shiftRegisterE_2 shift_reg_7", false,-1, 10,0);
        vcdp->declBus(c+177,"PowerMeter shiftRegisterE_2 shift_reg_8", false,-1, 10,0);
        vcdp->declBus(c+185,"PowerMeter shiftRegisterE_2 shift_reg_9", false,-1, 10,0);
        vcdp->declBus(c+193,"PowerMeter shiftRegisterE_2 shift_reg_10", false,-1, 10,0);
        vcdp->declBus(c+201,"PowerMeter shiftRegisterE_2 shift_reg_11", false,-1, 10,0);
        vcdp->declBus(c+209,"PowerMeter shiftRegisterE_2 shift_reg_12", false,-1, 10,0);
        vcdp->declBus(c+217,"PowerMeter shiftRegisterE_2 shift_reg_13", false,-1, 10,0);
        vcdp->declBus(c+225,"PowerMeter shiftRegisterE_2 shift_reg_14", false,-1, 10,0);
        vcdp->declBus(c+233,"PowerMeter shiftRegisterE_2 shift_reg_15", false,-1, 10,0);
        vcdp->declBus(c+241,"PowerMeter shiftRegisterE_2 shift_reg_16", false,-1, 10,0);
        vcdp->declBus(c+249,"PowerMeter shiftRegisterE_2 shift_reg_17", false,-1, 10,0);
        vcdp->declBus(c+257,"PowerMeter shiftRegisterE_2 shift_reg_18", false,-1, 10,0);
        vcdp->declBus(c+265,"PowerMeter shiftRegisterE_2 shift_reg_19", false,-1, 10,0);
        vcdp->declBus(c+273,"PowerMeter shiftRegisterE_2 shift_reg_20", false,-1, 10,0);
        vcdp->declBus(c+281,"PowerMeter shiftRegisterE_2 shift_reg_21", false,-1, 10,0);
        vcdp->declBus(c+289,"PowerMeter shiftRegisterE_2 shift_reg_22", false,-1, 10,0);
        vcdp->declBus(c+297,"PowerMeter shiftRegisterE_2 shift_reg_23", false,-1, 10,0);
        vcdp->declBus(c+305,"PowerMeter shiftRegisterE_2 shift_reg_24", false,-1, 10,0);
        vcdp->declBus(c+313,"PowerMeter shiftRegisterE_2 shift_reg_25", false,-1, 10,0);
        vcdp->declBus(c+321,"PowerMeter shiftRegisterE_2 shift_reg_26", false,-1, 10,0);
        vcdp->declBus(c+329,"PowerMeter shiftRegisterE_2 shift_reg_27", false,-1, 10,0);
        vcdp->declBus(c+337,"PowerMeter shiftRegisterE_2 shift_reg_28", false,-1, 10,0);
        vcdp->declBus(c+345,"PowerMeter shiftRegisterE_2 shift_reg_29", false,-1, 10,0);
        vcdp->declBus(c+353,"PowerMeter shiftRegisterE_2 shift_reg_30", false,-1, 10,0);
        vcdp->declBus(c+97,"PowerMeter shiftRegisterE_2 shift_reg_31", false,-1, 10,0);
        vcdp->declBus(c+89,"PowerMeter shiftRegisterE_3 input_1", false,-1, 10,0);
        vcdp->declBus(c+105,"PowerMeter shiftRegisterE_3 output_1", false,-1, 10,0);
        vcdp->declBit(c+657,"PowerMeter shiftRegisterE_3 enable", false,-1);
        vcdp->declBit(c+721,"PowerMeter shiftRegisterE_3 clk", false,-1);
        vcdp->declBit(c+729,"PowerMeter shiftRegisterE_3 reset", false,-1);
        vcdp->declBus(c+361,"PowerMeter shiftRegisterE_3 shift_reg_0", false,-1, 10,0);
        vcdp->declBus(c+369,"PowerMeter shiftRegisterE_3 shift_reg_1", false,-1, 10,0);
        vcdp->declBus(c+377,"PowerMeter shiftRegisterE_3 shift_reg_2", false,-1, 10,0);
        vcdp->declBus(c+385,"PowerMeter shiftRegisterE_3 shift_reg_3", false,-1, 10,0);
        vcdp->declBus(c+393,"PowerMeter shiftRegisterE_3 shift_reg_4", false,-1, 10,0);
        vcdp->declBus(c+401,"PowerMeter shiftRegisterE_3 shift_reg_5", false,-1, 10,0);
        vcdp->declBus(c+409,"PowerMeter shiftRegisterE_3 shift_reg_6", false,-1, 10,0);
        vcdp->declBus(c+417,"PowerMeter shiftRegisterE_3 shift_reg_7", false,-1, 10,0);
        vcdp->declBus(c+425,"PowerMeter shiftRegisterE_3 shift_reg_8", false,-1, 10,0);
        vcdp->declBus(c+433,"PowerMeter shiftRegisterE_3 shift_reg_9", false,-1, 10,0);
        vcdp->declBus(c+441,"PowerMeter shiftRegisterE_3 shift_reg_10", false,-1, 10,0);
        vcdp->declBus(c+449,"PowerMeter shiftRegisterE_3 shift_reg_11", false,-1, 10,0);
        vcdp->declBus(c+457,"PowerMeter shiftRegisterE_3 shift_reg_12", false,-1, 10,0);
        vcdp->declBus(c+465,"PowerMeter shiftRegisterE_3 shift_reg_13", false,-1, 10,0);
        vcdp->declBus(c+473,"PowerMeter shiftRegisterE_3 shift_reg_14", false,-1, 10,0);
        vcdp->declBus(c+481,"PowerMeter shiftRegisterE_3 shift_reg_15", false,-1, 10,0);
        vcdp->declBus(c+489,"PowerMeter shiftRegisterE_3 shift_reg_16", false,-1, 10,0);
        vcdp->declBus(c+497,"PowerMeter shiftRegisterE_3 shift_reg_17", false,-1, 10,0);
        vcdp->declBus(c+505,"PowerMeter shiftRegisterE_3 shift_reg_18", false,-1, 10,0);
        vcdp->declBus(c+513,"PowerMeter shiftRegisterE_3 shift_reg_19", false,-1, 10,0);
        vcdp->declBus(c+521,"PowerMeter shiftRegisterE_3 shift_reg_20", false,-1, 10,0);
        vcdp->declBus(c+529,"PowerMeter shiftRegisterE_3 shift_reg_21", false,-1, 10,0);
        vcdp->declBus(c+537,"PowerMeter shiftRegisterE_3 shift_reg_22", false,-1, 10,0);
        vcdp->declBus(c+545,"PowerMeter shiftRegisterE_3 shift_reg_23", false,-1, 10,0);
        vcdp->declBus(c+553,"PowerMeter shiftRegisterE_3 shift_reg_24", false,-1, 10,0);
        vcdp->declBus(c+561,"PowerMeter shiftRegisterE_3 shift_reg_25", false,-1, 10,0);
        vcdp->declBus(c+569,"PowerMeter shiftRegisterE_3 shift_reg_26", false,-1, 10,0);
        vcdp->declBus(c+577,"PowerMeter shiftRegisterE_3 shift_reg_27", false,-1, 10,0);
        vcdp->declBus(c+585,"PowerMeter shiftRegisterE_3 shift_reg_28", false,-1, 10,0);
        vcdp->declBus(c+593,"PowerMeter shiftRegisterE_3 shift_reg_29", false,-1, 10,0);
        vcdp->declBus(c+601,"PowerMeter shiftRegisterE_3 shift_reg_30", false,-1, 10,0);
        vcdp->declBus(c+105,"PowerMeter shiftRegisterE_3 shift_reg_31", false,-1, 10,0);
    }
}

void VPowerMeter::traceFullThis__1(VPowerMeter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,((1U & (IData)((VL_ULL(1) 
                                          & ((VL_ULL(0x1fff00000) 
                                              + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2) 
                                             >> 0x20U))))));
        vcdp->fullBit(c+9,((0U != (0x1fffffU & ((IData)(0x100000U) 
                                                + (IData)(vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2))))));
        vcdp->fullBit(c+17,((1U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i) 
                                   >> 0xbU))));
        vcdp->fullBit(c+25,((3U != (3U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i) 
                                          >> 0xaU)))));
        vcdp->fullBit(c+33,((1U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i) 
                                   >> 0xaU))));
        vcdp->fullBit(c+41,((1U & (IData)((VL_ULL(1) 
                                           & ((VL_ULL(0x1fff00000) 
                                               + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5) 
                                              >> 0x20U))))));
        vcdp->fullBit(c+49,((0U != (0x1fffffU & ((IData)(0x100000U) 
                                                 + (IData)(vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5))))));
        vcdp->fullBit(c+57,((1U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q) 
                                   >> 0xbU))));
        vcdp->fullBit(c+65,((3U != (3U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q) 
                                          >> 0xaU)))));
        vcdp->fullBit(c+73,((1U & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q) 
                                   >> 0xaU))));
        vcdp->fullBus(c+81,(vlTOPp->PowerMeter__DOT__power_cal_i),11);
        vcdp->fullBus(c+89,(vlTOPp->PowerMeter__DOT__power_cal_q),11);
        vcdp->fullBus(c+97,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31),11);
        vcdp->fullBus(c+105,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31),11);
        vcdp->fullBus(c+113,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_0),11);
        vcdp->fullBus(c+121,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_1),11);
        vcdp->fullBus(c+129,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_2),11);
        vcdp->fullBus(c+137,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_3),11);
        vcdp->fullBus(c+145,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_4),11);
        vcdp->fullBus(c+153,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_5),11);
        vcdp->fullBus(c+161,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_6),11);
        vcdp->fullBus(c+169,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_7),11);
        vcdp->fullBus(c+177,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_8),11);
        vcdp->fullBus(c+185,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_9),11);
        vcdp->fullBus(c+193,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_10),11);
        vcdp->fullBus(c+201,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_11),11);
        vcdp->fullBus(c+209,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_12),11);
        vcdp->fullBus(c+217,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_13),11);
        vcdp->fullBus(c+225,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_14),11);
        vcdp->fullBus(c+233,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_15),11);
        vcdp->fullBus(c+241,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_16),11);
        vcdp->fullBus(c+249,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_17),11);
        vcdp->fullBus(c+257,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_18),11);
        vcdp->fullBus(c+265,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_19),11);
        vcdp->fullBus(c+273,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_20),11);
        vcdp->fullBus(c+281,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_21),11);
        vcdp->fullBus(c+289,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_22),11);
        vcdp->fullBus(c+297,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_23),11);
        vcdp->fullBus(c+305,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_24),11);
        vcdp->fullBus(c+313,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_25),11);
        vcdp->fullBus(c+321,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_26),11);
        vcdp->fullBus(c+329,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_27),11);
        vcdp->fullBus(c+337,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_28),11);
        vcdp->fullBus(c+345,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_29),11);
        vcdp->fullBus(c+353,(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_30),11);
        vcdp->fullBus(c+361,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_0),11);
        vcdp->fullBus(c+369,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_1),11);
        vcdp->fullBus(c+377,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_2),11);
        vcdp->fullBus(c+385,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_3),11);
        vcdp->fullBus(c+393,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_4),11);
        vcdp->fullBus(c+401,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_5),11);
        vcdp->fullBus(c+409,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_6),11);
        vcdp->fullBus(c+417,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_7),11);
        vcdp->fullBus(c+425,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_8),11);
        vcdp->fullBus(c+433,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_9),11);
        vcdp->fullBus(c+441,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_10),11);
        vcdp->fullBus(c+449,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_11),11);
        vcdp->fullBus(c+457,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_12),11);
        vcdp->fullBus(c+465,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_13),11);
        vcdp->fullBus(c+473,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_14),11);
        vcdp->fullBus(c+481,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_15),11);
        vcdp->fullBus(c+489,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_16),11);
        vcdp->fullBus(c+497,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_17),11);
        vcdp->fullBus(c+505,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_18),11);
        vcdp->fullBus(c+513,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_19),11);
        vcdp->fullBus(c+521,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_20),11);
        vcdp->fullBus(c+529,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_21),11);
        vcdp->fullBus(c+537,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_22),11);
        vcdp->fullBus(c+545,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_23),11);
        vcdp->fullBus(c+553,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_24),11);
        vcdp->fullBus(c+561,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_25),11);
        vcdp->fullBus(c+569,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_26),11);
        vcdp->fullBus(c+577,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_27),11);
        vcdp->fullBus(c+585,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_28),11);
        vcdp->fullBus(c+593,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_29),11);
        vcdp->fullBus(c+601,(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_30),11);
        vcdp->fullBus(c+609,(vlTOPp->PowerMeter__DOT__power_val_cha_i),16);
        vcdp->fullBus(c+617,(vlTOPp->PowerMeter__DOT__power_val_cha_q),16);
        vcdp->fullBus(c+625,(vlTOPp->PowerMeter__DOT__sq_i_regNext),32);
        vcdp->fullBus(c+633,(vlTOPp->PowerMeter__DOT__sq_q_regNext),32);
        vcdp->fullBus(c+641,(vlTOPp->PowerMeter__DOT__power_val_i),16);
        vcdp->fullBus(c+649,(vlTOPp->PowerMeter__DOT__power_val_q),16);
        vcdp->fullBit(c+657,(vlTOPp->PowerMeter__DOT__power_cal_valid));
        vcdp->fullBit(c+665,(vlTOPp->PowerMeter__DOT__power_result_valid_1));
        vcdp->fullBit(c+673,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+681,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->fullBus(c+689,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->fullBit(c+697,(vlTOPp->power_result_valid));
        vcdp->fullBus(c+705,(vlTOPp->power_result_payload_cha_i),16);
        vcdp->fullBus(c+713,(vlTOPp->power_result_payload_cha_q),16);
        vcdp->fullBit(c+721,(vlTOPp->clk));
        vcdp->fullBit(c+729,(vlTOPp->reset));
        vcdp->fullBus(c+737,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)))),32);
        vcdp->fullBus(c+745,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)))),32);
    }
}
