// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSCEqualizer__Syms.h"


//======================

void VSCEqualizer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VSCEqualizer* t = (VSCEqualizer*)userthis;
    VSCEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VSCEqualizer::traceChgThis(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 2U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VSCEqualizer::traceChgThis__2(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->SCEqualizer__DOT__i_zf_eq_result_data_payload),16);
        vcdp->chgBus(c+9,(vlTOPp->SCEqualizer__DOT__q_zf_eq_result_data_payload),16);
    }
}

void VSCEqualizer::traceChgThis__3(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->SCEqualizer__DOT___zz_ref_data),16);
        vcdp->chgBus(c+25,(vlTOPp->SCEqualizer__DOT___zz_ref_data_1),16);
        vcdp->chgBit(c+33,(vlTOPp->SCEqualizer__DOT__when_SCEqualizer_l74));
        vcdp->chgBus(c+41,(((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                             ? (IData)(vlTOPp->SCEqualizer__DOT___zz_ref_data)
                             : 0U)),16);
        vcdp->chgBus(c+49,(((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                             ? (IData)(vlTOPp->SCEqualizer__DOT___zz_ref_data_1)
                             : 0U)),16);
    }
}

void VSCEqualizer::traceChgThis__4(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+57,(vlTOPp->SCEqualizer__DOT__cha_i_scale),16);
        vcdp->chgBus(c+65,(vlTOPp->SCEqualizer__DOT__cha_q_scale),16);
        vcdp->chgBus(c+73,(vlTOPp->SCEqualizer__DOT__cha_i_ref_0),16);
        vcdp->chgBus(c+81,(vlTOPp->SCEqualizer__DOT__cha_i_ref_1),16);
        vcdp->chgBus(c+89,(vlTOPp->SCEqualizer__DOT__cha_i_ref_2),16);
        vcdp->chgBus(c+97,(vlTOPp->SCEqualizer__DOT__cha_i_ref_3),16);
        vcdp->chgBus(c+105,(vlTOPp->SCEqualizer__DOT__cha_i_ref_4),16);
        vcdp->chgBus(c+113,(vlTOPp->SCEqualizer__DOT__cha_i_ref_5),16);
        vcdp->chgBus(c+121,(vlTOPp->SCEqualizer__DOT__cha_i_ref_6),16);
        vcdp->chgBus(c+129,(vlTOPp->SCEqualizer__DOT__cha_i_ref_7),16);
        vcdp->chgBus(c+137,(vlTOPp->SCEqualizer__DOT__cha_i_ref_8),16);
        vcdp->chgBus(c+145,(vlTOPp->SCEqualizer__DOT__cha_i_ref_9),16);
        vcdp->chgBus(c+153,(vlTOPp->SCEqualizer__DOT__cha_i_ref_10),16);
        vcdp->chgBus(c+161,(vlTOPp->SCEqualizer__DOT__cha_i_ref_11),16);
        vcdp->chgBus(c+169,(vlTOPp->SCEqualizer__DOT__cha_i_ref_12),16);
        vcdp->chgBus(c+177,(vlTOPp->SCEqualizer__DOT__cha_i_ref_13),16);
        vcdp->chgBus(c+185,(vlTOPp->SCEqualizer__DOT__cha_i_ref_14),16);
        vcdp->chgBus(c+193,(vlTOPp->SCEqualizer__DOT__cha_i_ref_15),16);
        vcdp->chgBus(c+201,(vlTOPp->SCEqualizer__DOT__cha_i_ref_16),16);
        vcdp->chgBus(c+209,(vlTOPp->SCEqualizer__DOT__cha_i_ref_17),16);
        vcdp->chgBus(c+217,(vlTOPp->SCEqualizer__DOT__cha_i_ref_18),16);
        vcdp->chgBus(c+225,(vlTOPp->SCEqualizer__DOT__cha_i_ref_19),16);
        vcdp->chgBus(c+233,(vlTOPp->SCEqualizer__DOT__cha_i_ref_20),16);
        vcdp->chgBus(c+241,(vlTOPp->SCEqualizer__DOT__cha_i_ref_21),16);
        vcdp->chgBus(c+249,(vlTOPp->SCEqualizer__DOT__cha_i_ref_22),16);
        vcdp->chgBus(c+257,(vlTOPp->SCEqualizer__DOT__cha_i_ref_23),16);
        vcdp->chgBus(c+265,(vlTOPp->SCEqualizer__DOT__cha_i_ref_24),16);
        vcdp->chgBus(c+273,(vlTOPp->SCEqualizer__DOT__cha_i_ref_25),16);
        vcdp->chgBus(c+281,(vlTOPp->SCEqualizer__DOT__cha_i_ref_26),16);
        vcdp->chgBus(c+289,(vlTOPp->SCEqualizer__DOT__cha_i_ref_27),16);
        vcdp->chgBus(c+297,(vlTOPp->SCEqualizer__DOT__cha_i_ref_28),16);
        vcdp->chgBus(c+305,(vlTOPp->SCEqualizer__DOT__cha_i_ref_29),16);
        vcdp->chgBus(c+313,(vlTOPp->SCEqualizer__DOT__cha_i_ref_30),16);
        vcdp->chgBus(c+321,(vlTOPp->SCEqualizer__DOT__cha_i_ref_31),16);
        vcdp->chgBus(c+329,(vlTOPp->SCEqualizer__DOT__cha_i_ref_32),16);
        vcdp->chgBus(c+337,(vlTOPp->SCEqualizer__DOT__cha_i_ref_33),16);
        vcdp->chgBus(c+345,(vlTOPp->SCEqualizer__DOT__cha_i_ref_34),16);
        vcdp->chgBus(c+353,(vlTOPp->SCEqualizer__DOT__cha_i_ref_35),16);
        vcdp->chgBus(c+361,(vlTOPp->SCEqualizer__DOT__cha_i_ref_36),16);
        vcdp->chgBus(c+369,(vlTOPp->SCEqualizer__DOT__cha_i_ref_37),16);
        vcdp->chgBus(c+377,(vlTOPp->SCEqualizer__DOT__cha_i_ref_38),16);
        vcdp->chgBus(c+385,(vlTOPp->SCEqualizer__DOT__cha_i_ref_39),16);
        vcdp->chgBus(c+393,(vlTOPp->SCEqualizer__DOT__cha_i_ref_40),16);
        vcdp->chgBus(c+401,(vlTOPp->SCEqualizer__DOT__cha_i_ref_41),16);
        vcdp->chgBus(c+409,(vlTOPp->SCEqualizer__DOT__cha_i_ref_42),16);
        vcdp->chgBus(c+417,(vlTOPp->SCEqualizer__DOT__cha_i_ref_43),16);
        vcdp->chgBus(c+425,(vlTOPp->SCEqualizer__DOT__cha_i_ref_44),16);
        vcdp->chgBus(c+433,(vlTOPp->SCEqualizer__DOT__cha_i_ref_45),16);
        vcdp->chgBus(c+441,(vlTOPp->SCEqualizer__DOT__cha_i_ref_46),16);
        vcdp->chgBus(c+449,(vlTOPp->SCEqualizer__DOT__cha_i_ref_47),16);
        vcdp->chgBus(c+457,(vlTOPp->SCEqualizer__DOT__cha_i_ref_48),16);
        vcdp->chgBus(c+465,(vlTOPp->SCEqualizer__DOT__cha_i_ref_49),16);
        vcdp->chgBus(c+473,(vlTOPp->SCEqualizer__DOT__cha_i_ref_50),16);
        vcdp->chgBus(c+481,(vlTOPp->SCEqualizer__DOT__cha_i_ref_51),16);
        vcdp->chgBus(c+489,(vlTOPp->SCEqualizer__DOT__cha_i_ref_52),16);
        vcdp->chgBus(c+497,(vlTOPp->SCEqualizer__DOT__cha_i_ref_53),16);
        vcdp->chgBus(c+505,(vlTOPp->SCEqualizer__DOT__cha_i_ref_54),16);
        vcdp->chgBus(c+513,(vlTOPp->SCEqualizer__DOT__cha_i_ref_55),16);
        vcdp->chgBus(c+521,(vlTOPp->SCEqualizer__DOT__cha_i_ref_56),16);
        vcdp->chgBus(c+529,(vlTOPp->SCEqualizer__DOT__cha_i_ref_57),16);
        vcdp->chgBus(c+537,(vlTOPp->SCEqualizer__DOT__cha_i_ref_58),16);
        vcdp->chgBus(c+545,(vlTOPp->SCEqualizer__DOT__cha_i_ref_59),16);
        vcdp->chgBus(c+553,(vlTOPp->SCEqualizer__DOT__cha_i_ref_60),16);
        vcdp->chgBus(c+561,(vlTOPp->SCEqualizer__DOT__cha_i_ref_61),16);
        vcdp->chgBus(c+569,(vlTOPp->SCEqualizer__DOT__cha_i_ref_62),16);
        vcdp->chgBus(c+577,(vlTOPp->SCEqualizer__DOT__cha_i_ref_63),16);
        vcdp->chgBus(c+585,(vlTOPp->SCEqualizer__DOT__cha_q_ref_0),16);
        vcdp->chgBus(c+593,(vlTOPp->SCEqualizer__DOT__cha_q_ref_1),16);
        vcdp->chgBus(c+601,(vlTOPp->SCEqualizer__DOT__cha_q_ref_2),16);
        vcdp->chgBus(c+609,(vlTOPp->SCEqualizer__DOT__cha_q_ref_3),16);
        vcdp->chgBus(c+617,(vlTOPp->SCEqualizer__DOT__cha_q_ref_4),16);
        vcdp->chgBus(c+625,(vlTOPp->SCEqualizer__DOT__cha_q_ref_5),16);
        vcdp->chgBus(c+633,(vlTOPp->SCEqualizer__DOT__cha_q_ref_6),16);
        vcdp->chgBus(c+641,(vlTOPp->SCEqualizer__DOT__cha_q_ref_7),16);
        vcdp->chgBus(c+649,(vlTOPp->SCEqualizer__DOT__cha_q_ref_8),16);
        vcdp->chgBus(c+657,(vlTOPp->SCEqualizer__DOT__cha_q_ref_9),16);
        vcdp->chgBus(c+665,(vlTOPp->SCEqualizer__DOT__cha_q_ref_10),16);
        vcdp->chgBus(c+673,(vlTOPp->SCEqualizer__DOT__cha_q_ref_11),16);
        vcdp->chgBus(c+681,(vlTOPp->SCEqualizer__DOT__cha_q_ref_12),16);
        vcdp->chgBus(c+689,(vlTOPp->SCEqualizer__DOT__cha_q_ref_13),16);
        vcdp->chgBus(c+697,(vlTOPp->SCEqualizer__DOT__cha_q_ref_14),16);
        vcdp->chgBus(c+705,(vlTOPp->SCEqualizer__DOT__cha_q_ref_15),16);
        vcdp->chgBus(c+713,(vlTOPp->SCEqualizer__DOT__cha_q_ref_16),16);
        vcdp->chgBus(c+721,(vlTOPp->SCEqualizer__DOT__cha_q_ref_17),16);
        vcdp->chgBus(c+729,(vlTOPp->SCEqualizer__DOT__cha_q_ref_18),16);
        vcdp->chgBus(c+737,(vlTOPp->SCEqualizer__DOT__cha_q_ref_19),16);
        vcdp->chgBus(c+745,(vlTOPp->SCEqualizer__DOT__cha_q_ref_20),16);
        vcdp->chgBus(c+753,(vlTOPp->SCEqualizer__DOT__cha_q_ref_21),16);
        vcdp->chgBus(c+761,(vlTOPp->SCEqualizer__DOT__cha_q_ref_22),16);
        vcdp->chgBus(c+769,(vlTOPp->SCEqualizer__DOT__cha_q_ref_23),16);
        vcdp->chgBus(c+777,(vlTOPp->SCEqualizer__DOT__cha_q_ref_24),16);
        vcdp->chgBus(c+785,(vlTOPp->SCEqualizer__DOT__cha_q_ref_25),16);
        vcdp->chgBus(c+793,(vlTOPp->SCEqualizer__DOT__cha_q_ref_26),16);
        vcdp->chgBus(c+801,(vlTOPp->SCEqualizer__DOT__cha_q_ref_27),16);
        vcdp->chgBus(c+809,(vlTOPp->SCEqualizer__DOT__cha_q_ref_28),16);
        vcdp->chgBus(c+817,(vlTOPp->SCEqualizer__DOT__cha_q_ref_29),16);
        vcdp->chgBus(c+825,(vlTOPp->SCEqualizer__DOT__cha_q_ref_30),16);
        vcdp->chgBus(c+833,(vlTOPp->SCEqualizer__DOT__cha_q_ref_31),16);
        vcdp->chgBus(c+841,(vlTOPp->SCEqualizer__DOT__cha_q_ref_32),16);
        vcdp->chgBus(c+849,(vlTOPp->SCEqualizer__DOT__cha_q_ref_33),16);
        vcdp->chgBus(c+857,(vlTOPp->SCEqualizer__DOT__cha_q_ref_34),16);
        vcdp->chgBus(c+865,(vlTOPp->SCEqualizer__DOT__cha_q_ref_35),16);
        vcdp->chgBus(c+873,(vlTOPp->SCEqualizer__DOT__cha_q_ref_36),16);
        vcdp->chgBus(c+881,(vlTOPp->SCEqualizer__DOT__cha_q_ref_37),16);
        vcdp->chgBus(c+889,(vlTOPp->SCEqualizer__DOT__cha_q_ref_38),16);
        vcdp->chgBus(c+897,(vlTOPp->SCEqualizer__DOT__cha_q_ref_39),16);
        vcdp->chgBus(c+905,(vlTOPp->SCEqualizer__DOT__cha_q_ref_40),16);
        vcdp->chgBus(c+913,(vlTOPp->SCEqualizer__DOT__cha_q_ref_41),16);
        vcdp->chgBus(c+921,(vlTOPp->SCEqualizer__DOT__cha_q_ref_42),16);
        vcdp->chgBus(c+929,(vlTOPp->SCEqualizer__DOT__cha_q_ref_43),16);
        vcdp->chgBus(c+937,(vlTOPp->SCEqualizer__DOT__cha_q_ref_44),16);
        vcdp->chgBus(c+945,(vlTOPp->SCEqualizer__DOT__cha_q_ref_45),16);
        vcdp->chgBus(c+953,(vlTOPp->SCEqualizer__DOT__cha_q_ref_46),16);
        vcdp->chgBus(c+961,(vlTOPp->SCEqualizer__DOT__cha_q_ref_47),16);
        vcdp->chgBus(c+969,(vlTOPp->SCEqualizer__DOT__cha_q_ref_48),16);
        vcdp->chgBus(c+977,(vlTOPp->SCEqualizer__DOT__cha_q_ref_49),16);
        vcdp->chgBus(c+985,(vlTOPp->SCEqualizer__DOT__cha_q_ref_50),16);
        vcdp->chgBus(c+993,(vlTOPp->SCEqualizer__DOT__cha_q_ref_51),16);
        vcdp->chgBus(c+1001,(vlTOPp->SCEqualizer__DOT__cha_q_ref_52),16);
        vcdp->chgBus(c+1009,(vlTOPp->SCEqualizer__DOT__cha_q_ref_53),16);
        vcdp->chgBus(c+1017,(vlTOPp->SCEqualizer__DOT__cha_q_ref_54),16);
        vcdp->chgBus(c+1025,(vlTOPp->SCEqualizer__DOT__cha_q_ref_55),16);
        vcdp->chgBus(c+1033,(vlTOPp->SCEqualizer__DOT__cha_q_ref_56),16);
        vcdp->chgBus(c+1041,(vlTOPp->SCEqualizer__DOT__cha_q_ref_57),16);
        vcdp->chgBus(c+1049,(vlTOPp->SCEqualizer__DOT__cha_q_ref_58),16);
        vcdp->chgBus(c+1057,(vlTOPp->SCEqualizer__DOT__cha_q_ref_59),16);
        vcdp->chgBus(c+1065,(vlTOPp->SCEqualizer__DOT__cha_q_ref_60),16);
        vcdp->chgBus(c+1073,(vlTOPp->SCEqualizer__DOT__cha_q_ref_61),16);
        vcdp->chgBus(c+1081,(vlTOPp->SCEqualizer__DOT__cha_q_ref_62),16);
        vcdp->chgBus(c+1089,(vlTOPp->SCEqualizer__DOT__cha_q_ref_63),16);
        vcdp->chgBit(c+1097,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_1));
        vcdp->chgBit(c+1105,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_2));
        vcdp->chgBit(c+1113,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_3));
        vcdp->chgBit(c+1121,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_4));
        vcdp->chgBit(c+1129,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_5));
        vcdp->chgBit(c+1137,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_6));
        vcdp->chgBit(c+1145,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_7));
        vcdp->chgBit(c+1153,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_8));
        vcdp->chgBit(c+1161,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_9));
        vcdp->chgBit(c+1169,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_10));
        vcdp->chgBit(c+1177,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_11));
        vcdp->chgBit(c+1185,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_12));
        vcdp->chgBit(c+1193,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_13));
        vcdp->chgBit(c+1201,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_14));
        vcdp->chgBit(c+1209,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_15));
        vcdp->chgBit(c+1217,(vlTOPp->SCEqualizer__DOT__raw_data_payload_last_delay_16));
        vcdp->chgBus(c+1225,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->chgBus(c+1233,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->chgBus(c+1241,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->chgBit(c+1249,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign));
        vcdp->chgBus(c+1257,((0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign)
                                          ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                                          : (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->chgBus(c+1265,((0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__x_sign)
                                          ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                                          : (IData)(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
        vcdp->chgBit(c+1273,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1));
        vcdp->chgBit(c+1281,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2));
        vcdp->chgBit(c+1289,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3));
        vcdp->chgBit(c+1297,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4));
        vcdp->chgBit(c+1305,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5));
        vcdp->chgBit(c+1313,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6));
        vcdp->chgBit(c+1321,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7));
        vcdp->chgBit(c+1329,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8));
        vcdp->chgBit(c+1337,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9));
        vcdp->chgBit(c+1345,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10));
        vcdp->chgBit(c+1353,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11));
        vcdp->chgBit(c+1361,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12));
        vcdp->chgBit(c+1369,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13));
        vcdp->chgBit(c+1377,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14));
        vcdp->chgBit(c+1385,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15));
        vcdp->chgBit(c+1393,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16));
        vcdp->chgBus(c+1401,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->chgBus(c+1409,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->chgBus(c+1417,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->chgBit(c+1425,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign));
        vcdp->chgBus(c+1433,((0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign)
                                          ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                                          : (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->chgBus(c+1441,((0xffffU & ((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__x_sign)
                                          ? VL_NEGATE_I((IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                                          : (IData)(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
    }
}

void VSCEqualizer::traceChgThis__5(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1449,(((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                               ? 0U : (IData)(vlTOPp->SCEqualizer__DOT__cha_i_scale))),16);
        vcdp->chgBus(c+1457,(((IData)(vlTOPp->SCEqualizer__DOT__train_en)
                               ? 0U : (IData)(vlTOPp->SCEqualizer__DOT__cha_q_scale))),16);
    }
}

void VSCEqualizer::traceChgThis__6(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1465,(vlTOPp->SCEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->chgBit(c+1473,(vlTOPp->SCEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->chgBus(c+1481,(vlTOPp->SCEqualizer__DOT__cnt),6);
        vcdp->chgBit(c+1489,(vlTOPp->SCEqualizer__DOT__train_en));
        vcdp->chgBus(c+1497,(vlTOPp->SCEqualizer__DOT__train_cnt),6);
        vcdp->chgBit(c+1505,(vlTOPp->SCEqualizer__DOT__train_finished));
        vcdp->chgBit(c+1513,((0x3fU == (IData)(vlTOPp->SCEqualizer__DOT__train_cnt))));
        vcdp->chgBit(c+1521,((0U == (IData)(vlTOPp->SCEqualizer__DOT__train_cnt))));
        vcdp->chgBit(c+1529,(vlTOPp->SCEqualizer__DOT__raw_data_ready_1));
        vcdp->chgBit(c+1537,((1U & (~ (IData)(vlTOPp->SCEqualizer__DOT__train_en)))));
    }
}

void VSCEqualizer::traceChgThis__7(VSCEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VSCEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1545,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+1553,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+1561,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+1569,(vlTOPp->raw_data_payload_fragment_cha_i),16);
        vcdp->chgBus(c+1577,(vlTOPp->raw_data_payload_fragment_cha_q),16);
        vcdp->chgBit(c+1585,(vlTOPp->equalized_data_valid));
        vcdp->chgBit(c+1593,(vlTOPp->equalized_data_payload_last));
        vcdp->chgBus(c+1601,(vlTOPp->equalized_data_payload_fragment_cha_i),16);
        vcdp->chgBus(c+1609,(vlTOPp->equalized_data_payload_fragment_cha_q),16);
        vcdp->chgBit(c+1617,(vlTOPp->clk));
        vcdp->chgBit(c+1625,(vlTOPp->reset));
        vcdp->chgBit(c+1633,(((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready))));
        vcdp->chgBit(c+1641,(((0x3fU == (IData)(vlTOPp->SCEqualizer__DOT__cnt)) 
                              & ((IData)(vlTOPp->raw_data_valid) 
                                 & (IData)(vlTOPp->raw_data_ready)))));
        vcdp->chgBit(c+1649,(((IData)(vlTOPp->raw_data_payload_last) 
                              & ((IData)(vlTOPp->raw_data_valid) 
                                 & (IData)(vlTOPp->raw_data_ready)))));
        vcdp->chgBit(c+1657,(((IData)(vlTOPp->equalized_data_payload_last) 
                              & (IData)(vlTOPp->equalized_data_valid))));
        vcdp->chgBus(c+1665,((0xffffU & (((0x8000U 
                                           & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                                           ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                                           : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
                                         + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
                                                  >> 0xfU))))),16);
        vcdp->chgBus(c+1673,((0xffffU & (((0x8000U 
                                           & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                                           ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                                           : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                                         + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                                                  >> 0xfU))))),16);
    }
}
