// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOFDMEqualizer__Syms.h"


//======================

void VOFDMEqualizer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOFDMEqualizer* t = (VOFDMEqualizer*)userthis;
    VOFDMEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VOFDMEqualizer::traceChgThis(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VOFDMEqualizer::traceChgThis__2(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload),16);
        vcdp->chgBus(c+9,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload),16);
    }
}

void VOFDMEqualizer::traceChgThis__3(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->OFDMEqualizer__DOT___zz_scale),16);
        vcdp->chgBus(c+25,(vlTOPp->OFDMEqualizer__DOT___zz_ref_data),16);
        vcdp->chgBus(c+33,(vlTOPp->OFDMEqualizer__DOT___zz_scale_1),16);
        vcdp->chgBus(c+41,(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1),16);
        vcdp->chgBit(c+49,(vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69));
        vcdp->chgBus(c+57,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                             ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data)
                             : 0U)),16);
        vcdp->chgBus(c+65,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                             ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale))),16);
        vcdp->chgBus(c+73,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                             ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1)
                             : 0U)),16);
        vcdp->chgBus(c+81,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
                             ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale_1))),16);
    }
}

void VOFDMEqualizer::traceChgThis__4(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+89,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_0),16);
        vcdp->chgBus(c+97,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_1),16);
        vcdp->chgBus(c+105,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_2),16);
        vcdp->chgBus(c+113,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_3),16);
        vcdp->chgBus(c+121,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_4),16);
        vcdp->chgBus(c+129,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_5),16);
        vcdp->chgBus(c+137,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_6),16);
        vcdp->chgBus(c+145,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_7),16);
        vcdp->chgBus(c+153,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_8),16);
        vcdp->chgBus(c+161,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_9),16);
        vcdp->chgBus(c+169,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_10),16);
        vcdp->chgBus(c+177,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_11),16);
        vcdp->chgBus(c+185,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_12),16);
        vcdp->chgBus(c+193,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_13),16);
        vcdp->chgBus(c+201,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_14),16);
        vcdp->chgBus(c+209,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_15),16);
        vcdp->chgBus(c+217,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_16),16);
        vcdp->chgBus(c+225,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_17),16);
        vcdp->chgBus(c+233,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_18),16);
        vcdp->chgBus(c+241,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_19),16);
        vcdp->chgBus(c+249,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_20),16);
        vcdp->chgBus(c+257,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_21),16);
        vcdp->chgBus(c+265,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_22),16);
        vcdp->chgBus(c+273,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_23),16);
        vcdp->chgBus(c+281,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_24),16);
        vcdp->chgBus(c+289,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_25),16);
        vcdp->chgBus(c+297,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_26),16);
        vcdp->chgBus(c+305,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_27),16);
        vcdp->chgBus(c+313,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_28),16);
        vcdp->chgBus(c+321,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_29),16);
        vcdp->chgBus(c+329,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_30),16);
        vcdp->chgBus(c+337,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_31),16);
        vcdp->chgBus(c+345,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_32),16);
        vcdp->chgBus(c+353,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_33),16);
        vcdp->chgBus(c+361,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_34),16);
        vcdp->chgBus(c+369,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_35),16);
        vcdp->chgBus(c+377,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_36),16);
        vcdp->chgBus(c+385,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_37),16);
        vcdp->chgBus(c+393,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_38),16);
        vcdp->chgBus(c+401,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_39),16);
        vcdp->chgBus(c+409,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_40),16);
        vcdp->chgBus(c+417,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_41),16);
        vcdp->chgBus(c+425,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_42),16);
        vcdp->chgBus(c+433,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_43),16);
        vcdp->chgBus(c+441,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_44),16);
        vcdp->chgBus(c+449,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_45),16);
        vcdp->chgBus(c+457,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_46),16);
        vcdp->chgBus(c+465,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_47),16);
        vcdp->chgBus(c+473,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_48),16);
        vcdp->chgBus(c+481,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_49),16);
        vcdp->chgBus(c+489,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_50),16);
        vcdp->chgBus(c+497,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_51),16);
        vcdp->chgBus(c+505,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_52),16);
        vcdp->chgBus(c+513,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_53),16);
        vcdp->chgBus(c+521,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_54),16);
        vcdp->chgBus(c+529,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_55),16);
        vcdp->chgBus(c+537,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_56),16);
        vcdp->chgBus(c+545,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_57),16);
        vcdp->chgBus(c+553,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_58),16);
        vcdp->chgBus(c+561,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_59),16);
        vcdp->chgBus(c+569,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_60),16);
        vcdp->chgBus(c+577,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_61),16);
        vcdp->chgBus(c+585,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_62),16);
        vcdp->chgBus(c+593,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_63),16);
        vcdp->chgBus(c+601,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_0),16);
        vcdp->chgBus(c+609,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_1),16);
        vcdp->chgBus(c+617,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_2),16);
        vcdp->chgBus(c+625,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_3),16);
        vcdp->chgBus(c+633,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_4),16);
        vcdp->chgBus(c+641,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_5),16);
        vcdp->chgBus(c+649,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_6),16);
        vcdp->chgBus(c+657,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_7),16);
        vcdp->chgBus(c+665,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_8),16);
        vcdp->chgBus(c+673,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_9),16);
        vcdp->chgBus(c+681,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_10),16);
        vcdp->chgBus(c+689,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_11),16);
        vcdp->chgBus(c+697,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_12),16);
        vcdp->chgBus(c+705,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_13),16);
        vcdp->chgBus(c+713,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_14),16);
        vcdp->chgBus(c+721,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_15),16);
        vcdp->chgBus(c+729,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_16),16);
        vcdp->chgBus(c+737,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_17),16);
        vcdp->chgBus(c+745,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_18),16);
        vcdp->chgBus(c+753,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_19),16);
        vcdp->chgBus(c+761,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_20),16);
        vcdp->chgBus(c+769,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_21),16);
        vcdp->chgBus(c+777,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_22),16);
        vcdp->chgBus(c+785,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_23),16);
        vcdp->chgBus(c+793,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_24),16);
        vcdp->chgBus(c+801,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_25),16);
        vcdp->chgBus(c+809,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_26),16);
        vcdp->chgBus(c+817,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_27),16);
        vcdp->chgBus(c+825,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_28),16);
        vcdp->chgBus(c+833,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_29),16);
        vcdp->chgBus(c+841,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_30),16);
        vcdp->chgBus(c+849,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_31),16);
        vcdp->chgBus(c+857,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_32),16);
        vcdp->chgBus(c+865,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_33),16);
        vcdp->chgBus(c+873,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_34),16);
        vcdp->chgBus(c+881,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_35),16);
        vcdp->chgBus(c+889,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_36),16);
        vcdp->chgBus(c+897,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_37),16);
        vcdp->chgBus(c+905,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_38),16);
        vcdp->chgBus(c+913,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_39),16);
        vcdp->chgBus(c+921,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_40),16);
        vcdp->chgBus(c+929,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_41),16);
        vcdp->chgBus(c+937,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_42),16);
        vcdp->chgBus(c+945,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_43),16);
        vcdp->chgBus(c+953,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_44),16);
        vcdp->chgBus(c+961,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_45),16);
        vcdp->chgBus(c+969,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_46),16);
        vcdp->chgBus(c+977,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_47),16);
        vcdp->chgBus(c+985,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_48),16);
        vcdp->chgBus(c+993,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_49),16);
        vcdp->chgBus(c+1001,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_50),16);
        vcdp->chgBus(c+1009,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_51),16);
        vcdp->chgBus(c+1017,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_52),16);
        vcdp->chgBus(c+1025,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_53),16);
        vcdp->chgBus(c+1033,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_54),16);
        vcdp->chgBus(c+1041,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_55),16);
        vcdp->chgBus(c+1049,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_56),16);
        vcdp->chgBus(c+1057,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_57),16);
        vcdp->chgBus(c+1065,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_58),16);
        vcdp->chgBus(c+1073,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_59),16);
        vcdp->chgBus(c+1081,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_60),16);
        vcdp->chgBus(c+1089,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_61),16);
        vcdp->chgBus(c+1097,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_62),16);
        vcdp->chgBus(c+1105,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_63),16);
        vcdp->chgBus(c+1113,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_0),16);
        vcdp->chgBus(c+1121,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_1),16);
        vcdp->chgBus(c+1129,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_2),16);
        vcdp->chgBus(c+1137,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_3),16);
        vcdp->chgBus(c+1145,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_4),16);
        vcdp->chgBus(c+1153,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_5),16);
        vcdp->chgBus(c+1161,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_6),16);
        vcdp->chgBus(c+1169,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_7),16);
        vcdp->chgBus(c+1177,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_8),16);
        vcdp->chgBus(c+1185,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_9),16);
        vcdp->chgBus(c+1193,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_10),16);
        vcdp->chgBus(c+1201,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_11),16);
        vcdp->chgBus(c+1209,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_12),16);
        vcdp->chgBus(c+1217,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_13),16);
        vcdp->chgBus(c+1225,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_14),16);
        vcdp->chgBus(c+1233,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_15),16);
        vcdp->chgBus(c+1241,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_16),16);
        vcdp->chgBus(c+1249,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_17),16);
        vcdp->chgBus(c+1257,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_18),16);
        vcdp->chgBus(c+1265,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_19),16);
        vcdp->chgBus(c+1273,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_20),16);
        vcdp->chgBus(c+1281,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_21),16);
        vcdp->chgBus(c+1289,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_22),16);
        vcdp->chgBus(c+1297,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_23),16);
        vcdp->chgBus(c+1305,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_24),16);
        vcdp->chgBus(c+1313,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_25),16);
        vcdp->chgBus(c+1321,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_26),16);
        vcdp->chgBus(c+1329,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_27),16);
        vcdp->chgBus(c+1337,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_28),16);
        vcdp->chgBus(c+1345,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_29),16);
        vcdp->chgBus(c+1353,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_30),16);
        vcdp->chgBus(c+1361,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_31),16);
        vcdp->chgBus(c+1369,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_32),16);
        vcdp->chgBus(c+1377,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_33),16);
        vcdp->chgBus(c+1385,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_34),16);
        vcdp->chgBus(c+1393,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_35),16);
        vcdp->chgBus(c+1401,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_36),16);
        vcdp->chgBus(c+1409,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_37),16);
        vcdp->chgBus(c+1417,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_38),16);
        vcdp->chgBus(c+1425,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_39),16);
        vcdp->chgBus(c+1433,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_40),16);
        vcdp->chgBus(c+1441,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_41),16);
        vcdp->chgBus(c+1449,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_42),16);
        vcdp->chgBus(c+1457,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_43),16);
        vcdp->chgBus(c+1465,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_44),16);
        vcdp->chgBus(c+1473,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_45),16);
        vcdp->chgBus(c+1481,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_46),16);
        vcdp->chgBus(c+1489,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_47),16);
        vcdp->chgBus(c+1497,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_48),16);
        vcdp->chgBus(c+1505,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_49),16);
        vcdp->chgBus(c+1513,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_50),16);
        vcdp->chgBus(c+1521,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_51),16);
        vcdp->chgBus(c+1529,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_52),16);
        vcdp->chgBus(c+1537,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_53),16);
        vcdp->chgBus(c+1545,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_54),16);
        vcdp->chgBus(c+1553,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_55),16);
        vcdp->chgBus(c+1561,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_56),16);
        vcdp->chgBus(c+1569,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_57),16);
        vcdp->chgBus(c+1577,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_58),16);
        vcdp->chgBus(c+1585,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_59),16);
        vcdp->chgBus(c+1593,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_60),16);
        vcdp->chgBus(c+1601,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_61),16);
        vcdp->chgBus(c+1609,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_62),16);
        vcdp->chgBus(c+1617,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_63),16);
        vcdp->chgBus(c+1625,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_0),16);
        vcdp->chgBus(c+1633,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_1),16);
        vcdp->chgBus(c+1641,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_2),16);
        vcdp->chgBus(c+1649,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_3),16);
        vcdp->chgBus(c+1657,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_4),16);
        vcdp->chgBus(c+1665,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_5),16);
        vcdp->chgBus(c+1673,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_6),16);
        vcdp->chgBus(c+1681,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_7),16);
        vcdp->chgBus(c+1689,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_8),16);
        vcdp->chgBus(c+1697,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_9),16);
        vcdp->chgBus(c+1705,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_10),16);
        vcdp->chgBus(c+1713,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_11),16);
        vcdp->chgBus(c+1721,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_12),16);
        vcdp->chgBus(c+1729,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_13),16);
        vcdp->chgBus(c+1737,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_14),16);
        vcdp->chgBus(c+1745,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_15),16);
        vcdp->chgBus(c+1753,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_16),16);
        vcdp->chgBus(c+1761,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_17),16);
        vcdp->chgBus(c+1769,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_18),16);
        vcdp->chgBus(c+1777,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_19),16);
        vcdp->chgBus(c+1785,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_20),16);
        vcdp->chgBus(c+1793,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_21),16);
        vcdp->chgBus(c+1801,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_22),16);
        vcdp->chgBus(c+1809,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_23),16);
        vcdp->chgBus(c+1817,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_24),16);
        vcdp->chgBus(c+1825,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_25),16);
        vcdp->chgBus(c+1833,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_26),16);
        vcdp->chgBus(c+1841,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_27),16);
        vcdp->chgBus(c+1849,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_28),16);
        vcdp->chgBus(c+1857,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_29),16);
        vcdp->chgBus(c+1865,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_30),16);
        vcdp->chgBus(c+1873,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_31),16);
        vcdp->chgBus(c+1881,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_32),16);
        vcdp->chgBus(c+1889,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_33),16);
        vcdp->chgBus(c+1897,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_34),16);
        vcdp->chgBus(c+1905,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_35),16);
        vcdp->chgBus(c+1913,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_36),16);
        vcdp->chgBus(c+1921,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_37),16);
        vcdp->chgBus(c+1929,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_38),16);
        vcdp->chgBus(c+1937,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_39),16);
        vcdp->chgBus(c+1945,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_40),16);
        vcdp->chgBus(c+1953,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_41),16);
        vcdp->chgBus(c+1961,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_42),16);
        vcdp->chgBus(c+1969,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_43),16);
        vcdp->chgBus(c+1977,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_44),16);
        vcdp->chgBus(c+1985,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_45),16);
        vcdp->chgBus(c+1993,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_46),16);
        vcdp->chgBus(c+2001,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_47),16);
        vcdp->chgBus(c+2009,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_48),16);
        vcdp->chgBus(c+2017,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_49),16);
        vcdp->chgBus(c+2025,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_50),16);
        vcdp->chgBus(c+2033,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_51),16);
        vcdp->chgBus(c+2041,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_52),16);
        vcdp->chgBus(c+2049,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_53),16);
        vcdp->chgBus(c+2057,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_54),16);
        vcdp->chgBus(c+2065,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_55),16);
        vcdp->chgBus(c+2073,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_56),16);
        vcdp->chgBus(c+2081,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_57),16);
        vcdp->chgBus(c+2089,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_58),16);
    }
}

void VOFDMEqualizer::traceChgThis__6(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2097,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_59),16);
        vcdp->chgBus(c+2105,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_60),16);
        vcdp->chgBus(c+2113,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_61),16);
        vcdp->chgBus(c+2121,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_62),16);
        vcdp->chgBus(c+2129,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_63),16);
        vcdp->chgBit(c+2137,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_1));
        vcdp->chgBit(c+2145,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_2));
        vcdp->chgBit(c+2153,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_3));
        vcdp->chgBit(c+2161,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_4));
        vcdp->chgBit(c+2169,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_5));
        vcdp->chgBit(c+2177,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_6));
        vcdp->chgBit(c+2185,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_7));
        vcdp->chgBit(c+2193,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_8));
        vcdp->chgBit(c+2201,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_9));
        vcdp->chgBit(c+2209,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_10));
        vcdp->chgBit(c+2217,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_11));
        vcdp->chgBit(c+2225,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_12));
        vcdp->chgBit(c+2233,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_13));
        vcdp->chgBit(c+2241,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_14));
        vcdp->chgBit(c+2249,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_15));
        vcdp->chgBit(c+2257,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16));
        vcdp->chgBus(c+2265,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->chgBus(c+2273,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->chgBus(c+2281,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->chgBit(c+2289,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign));
        vcdp->chgBus(c+2297,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
                                          ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                                          : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->chgBus(c+2305,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
                                          ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                                          : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
        vcdp->chgBit(c+2313,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1));
        vcdp->chgBit(c+2321,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2));
        vcdp->chgBit(c+2329,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3));
        vcdp->chgBit(c+2337,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4));
        vcdp->chgBit(c+2345,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5));
        vcdp->chgBit(c+2353,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6));
        vcdp->chgBit(c+2361,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7));
        vcdp->chgBit(c+2369,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8));
        vcdp->chgBit(c+2377,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9));
        vcdp->chgBit(c+2385,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10));
        vcdp->chgBit(c+2393,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11));
        vcdp->chgBit(c+2401,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12));
        vcdp->chgBit(c+2409,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13));
        vcdp->chgBit(c+2417,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14));
        vcdp->chgBit(c+2425,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15));
        vcdp->chgBit(c+2433,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16));
        vcdp->chgBus(c+2441,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
        vcdp->chgBus(c+2449,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
        vcdp->chgBus(c+2457,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
        vcdp->chgBit(c+2465,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign));
        vcdp->chgBus(c+2473,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
                                          ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
                                          : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
        vcdp->chgBus(c+2481,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
                                          ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
                                          : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
    }
}

void VOFDMEqualizer::traceChgThis__7(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2489,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->chgBit(c+2497,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
        vcdp->chgBus(c+2505,(vlTOPp->OFDMEqualizer__DOT__cnt),6);
        vcdp->chgBit(c+2513,(vlTOPp->OFDMEqualizer__DOT__train_en));
        vcdp->chgBit(c+2521,((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))));
        vcdp->chgBus(c+2529,(vlTOPp->OFDMEqualizer__DOT__train_cnt),6);
        vcdp->chgBit(c+2537,(vlTOPp->OFDMEqualizer__DOT__train_finished));
        vcdp->chgBit(c+2545,((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))));
        vcdp->chgBit(c+2553,(vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1));
        vcdp->chgBit(c+2561,((1U & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_en)))));
    }
}

void VOFDMEqualizer::traceChgThis__8(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2569,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+2577,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+2585,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+2593,(vlTOPp->raw_data_payload_fragment_cha_i),16);
        vcdp->chgBus(c+2601,(vlTOPp->raw_data_payload_fragment_cha_q),16);
        vcdp->chgBit(c+2609,(vlTOPp->equalized_data_valid));
        vcdp->chgBit(c+2617,(vlTOPp->equalized_data_payload_last));
        vcdp->chgBus(c+2625,(vlTOPp->equalized_data_payload_fragment_cha_i),16);
        vcdp->chgBus(c+2633,(vlTOPp->equalized_data_payload_fragment_cha_q),16);
        vcdp->chgBit(c+2641,(vlTOPp->clk));
        vcdp->chgBit(c+2649,(vlTOPp->reset));
        vcdp->chgBit(c+2657,(((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready))));
        vcdp->chgBit(c+2665,(((IData)(vlTOPp->raw_data_payload_last) 
                              & ((IData)(vlTOPp->raw_data_valid) 
                                 & (IData)(vlTOPp->raw_data_ready)))));
        vcdp->chgBit(c+2673,(((IData)(vlTOPp->equalized_data_payload_last) 
                              & (IData)(vlTOPp->equalized_data_valid))));
        vcdp->chgBus(c+2681,((0xffffU & (((0x8000U 
                                           & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                                           ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
                                           : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
                                         + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
                                                  >> 0xfU))))),16);
        vcdp->chgBus(c+2689,((0xffffU & (((0x8000U 
                                           & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                                           ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
                                           : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                                         + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
                                                  >> 0xfU))))),16);
    }
}
