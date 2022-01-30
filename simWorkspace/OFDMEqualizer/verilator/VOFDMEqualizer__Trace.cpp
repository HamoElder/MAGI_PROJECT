// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VOFDMEqualizer__Syms.h"


//======================

void VOFDMEqualizer::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VOFDMEqualizer* t=(VOFDMEqualizer*)userthis;
    VOFDMEqualizer__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VOFDMEqualizer::traceChgThis(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
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
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq_result_data_payload),16);
	vcdp->chgBus  (c+2,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq_result_data_payload),16);
    }
}

void VOFDMEqualizer::traceChgThis__3(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+3,(vlTOPp->OFDMEqualizer__DOT___zz_scale),16);
	vcdp->chgBus  (c+4,(vlTOPp->OFDMEqualizer__DOT___zz_ref_data),16);
	vcdp->chgBus  (c+5,(vlTOPp->OFDMEqualizer__DOT___zz_scale_1),16);
	vcdp->chgBus  (c+6,(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1),16);
	vcdp->chgBit  (c+7,(vlTOPp->OFDMEqualizer__DOT__when_OFDMEqualizer_l69));
	vcdp->chgBus  (c+8,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
			      ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data)
			      : 0U)),16);
	vcdp->chgBus  (c+9,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
			      ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale))),16);
	vcdp->chgBus  (c+10,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
			       ? (IData)(vlTOPp->OFDMEqualizer__DOT___zz_ref_data_1)
			       : 0U)),16);
	vcdp->chgBus  (c+11,(((IData)(vlTOPp->OFDMEqualizer__DOT__train_en)
			       ? 0U : (IData)(vlTOPp->OFDMEqualizer__DOT___zz_scale_1))),16);
    }
}

void VOFDMEqualizer::traceChgThis__4(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+12,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_0),16);
	vcdp->chgBus  (c+13,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_1),16);
	vcdp->chgBus  (c+14,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_2),16);
	vcdp->chgBus  (c+15,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_3),16);
	vcdp->chgBus  (c+16,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_4),16);
	vcdp->chgBus  (c+17,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_5),16);
	vcdp->chgBus  (c+18,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_6),16);
	vcdp->chgBus  (c+19,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_7),16);
	vcdp->chgBus  (c+20,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_8),16);
	vcdp->chgBus  (c+21,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_9),16);
	vcdp->chgBus  (c+22,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_10),16);
	vcdp->chgBus  (c+23,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_11),16);
	vcdp->chgBus  (c+24,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_12),16);
	vcdp->chgBus  (c+25,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_13),16);
	vcdp->chgBus  (c+26,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_14),16);
	vcdp->chgBus  (c+27,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_15),16);
	vcdp->chgBus  (c+28,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_16),16);
	vcdp->chgBus  (c+29,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_17),16);
	vcdp->chgBus  (c+30,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_18),16);
	vcdp->chgBus  (c+31,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_19),16);
	vcdp->chgBus  (c+32,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_20),16);
	vcdp->chgBus  (c+33,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_21),16);
	vcdp->chgBus  (c+34,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_22),16);
	vcdp->chgBus  (c+35,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_23),16);
	vcdp->chgBus  (c+36,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_24),16);
	vcdp->chgBus  (c+37,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_25),16);
	vcdp->chgBus  (c+38,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_26),16);
	vcdp->chgBus  (c+39,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_27),16);
	vcdp->chgBus  (c+40,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_28),16);
	vcdp->chgBus  (c+41,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_29),16);
	vcdp->chgBus  (c+42,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_30),16);
	vcdp->chgBus  (c+43,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_31),16);
	vcdp->chgBus  (c+44,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_32),16);
	vcdp->chgBus  (c+45,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_33),16);
	vcdp->chgBus  (c+46,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_34),16);
	vcdp->chgBus  (c+47,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_35),16);
	vcdp->chgBus  (c+48,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_36),16);
	vcdp->chgBus  (c+49,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_37),16);
	vcdp->chgBus  (c+50,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_38),16);
	vcdp->chgBus  (c+51,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_39),16);
	vcdp->chgBus  (c+52,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_40),16);
	vcdp->chgBus  (c+53,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_41),16);
	vcdp->chgBus  (c+54,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_42),16);
	vcdp->chgBus  (c+55,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_43),16);
	vcdp->chgBus  (c+56,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_44),16);
	vcdp->chgBus  (c+57,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_45),16);
	vcdp->chgBus  (c+58,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_46),16);
	vcdp->chgBus  (c+59,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_47),16);
	vcdp->chgBus  (c+60,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_48),16);
	vcdp->chgBus  (c+61,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_49),16);
	vcdp->chgBus  (c+62,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_50),16);
	vcdp->chgBus  (c+63,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_51),16);
	vcdp->chgBus  (c+64,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_52),16);
	vcdp->chgBus  (c+65,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_53),16);
	vcdp->chgBus  (c+66,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_54),16);
	vcdp->chgBus  (c+67,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_55),16);
	vcdp->chgBus  (c+68,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_56),16);
	vcdp->chgBus  (c+69,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_57),16);
	vcdp->chgBus  (c+70,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_58),16);
	vcdp->chgBus  (c+71,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_59),16);
	vcdp->chgBus  (c+72,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_60),16);
	vcdp->chgBus  (c+73,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_61),16);
	vcdp->chgBus  (c+74,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_62),16);
	vcdp->chgBus  (c+75,(vlTOPp->OFDMEqualizer__DOT__cha_i_ref_63),16);
	vcdp->chgBus  (c+76,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_0),16);
	vcdp->chgBus  (c+77,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_1),16);
	vcdp->chgBus  (c+78,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_2),16);
	vcdp->chgBus  (c+79,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_3),16);
	vcdp->chgBus  (c+80,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_4),16);
	vcdp->chgBus  (c+81,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_5),16);
	vcdp->chgBus  (c+82,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_6),16);
	vcdp->chgBus  (c+83,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_7),16);
	vcdp->chgBus  (c+84,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_8),16);
	vcdp->chgBus  (c+85,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_9),16);
	vcdp->chgBus  (c+86,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_10),16);
	vcdp->chgBus  (c+87,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_11),16);
	vcdp->chgBus  (c+88,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_12),16);
	vcdp->chgBus  (c+89,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_13),16);
	vcdp->chgBus  (c+90,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_14),16);
	vcdp->chgBus  (c+91,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_15),16);
	vcdp->chgBus  (c+92,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_16),16);
	vcdp->chgBus  (c+93,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_17),16);
	vcdp->chgBus  (c+94,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_18),16);
	vcdp->chgBus  (c+95,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_19),16);
	vcdp->chgBus  (c+96,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_20),16);
	vcdp->chgBus  (c+97,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_21),16);
	vcdp->chgBus  (c+98,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_22),16);
	vcdp->chgBus  (c+99,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_23),16);
	vcdp->chgBus  (c+100,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_24),16);
	vcdp->chgBus  (c+101,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_25),16);
	vcdp->chgBus  (c+102,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_26),16);
	vcdp->chgBus  (c+103,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_27),16);
	vcdp->chgBus  (c+104,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_28),16);
	vcdp->chgBus  (c+105,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_29),16);
	vcdp->chgBus  (c+106,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_30),16);
	vcdp->chgBus  (c+107,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_31),16);
	vcdp->chgBus  (c+108,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_32),16);
	vcdp->chgBus  (c+109,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_33),16);
	vcdp->chgBus  (c+110,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_34),16);
	vcdp->chgBus  (c+111,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_35),16);
	vcdp->chgBus  (c+112,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_36),16);
	vcdp->chgBus  (c+113,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_37),16);
	vcdp->chgBus  (c+114,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_38),16);
	vcdp->chgBus  (c+115,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_39),16);
	vcdp->chgBus  (c+116,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_40),16);
	vcdp->chgBus  (c+117,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_41),16);
	vcdp->chgBus  (c+118,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_42),16);
	vcdp->chgBus  (c+119,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_43),16);
	vcdp->chgBus  (c+120,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_44),16);
	vcdp->chgBus  (c+121,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_45),16);
	vcdp->chgBus  (c+122,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_46),16);
	vcdp->chgBus  (c+123,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_47),16);
	vcdp->chgBus  (c+124,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_48),16);
	vcdp->chgBus  (c+125,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_49),16);
	vcdp->chgBus  (c+126,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_50),16);
	vcdp->chgBus  (c+127,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_51),16);
	vcdp->chgBus  (c+128,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_52),16);
	vcdp->chgBus  (c+129,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_53),16);
	vcdp->chgBus  (c+130,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_54),16);
	vcdp->chgBus  (c+131,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_55),16);
	vcdp->chgBus  (c+132,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_56),16);
	vcdp->chgBus  (c+133,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_57),16);
	vcdp->chgBus  (c+134,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_58),16);
	vcdp->chgBus  (c+135,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_59),16);
	vcdp->chgBus  (c+136,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_60),16);
	vcdp->chgBus  (c+137,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_61),16);
	vcdp->chgBus  (c+138,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_62),16);
	vcdp->chgBus  (c+139,(vlTOPp->OFDMEqualizer__DOT__cha_q_ref_63),16);
	vcdp->chgBus  (c+140,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_0),16);
	vcdp->chgBus  (c+141,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_1),16);
	vcdp->chgBus  (c+142,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_2),16);
	vcdp->chgBus  (c+143,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_3),16);
	vcdp->chgBus  (c+144,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_4),16);
	vcdp->chgBus  (c+145,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_5),16);
	vcdp->chgBus  (c+146,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_6),16);
	vcdp->chgBus  (c+147,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_7),16);
	vcdp->chgBus  (c+148,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_8),16);
	vcdp->chgBus  (c+149,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_9),16);
	vcdp->chgBus  (c+150,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_10),16);
	vcdp->chgBus  (c+151,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_11),16);
	vcdp->chgBus  (c+152,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_12),16);
	vcdp->chgBus  (c+153,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_13),16);
	vcdp->chgBus  (c+154,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_14),16);
	vcdp->chgBus  (c+155,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_15),16);
	vcdp->chgBus  (c+156,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_16),16);
	vcdp->chgBus  (c+157,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_17),16);
	vcdp->chgBus  (c+158,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_18),16);
	vcdp->chgBus  (c+159,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_19),16);
	vcdp->chgBus  (c+160,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_20),16);
	vcdp->chgBus  (c+161,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_21),16);
	vcdp->chgBus  (c+162,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_22),16);
	vcdp->chgBus  (c+163,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_23),16);
	vcdp->chgBus  (c+164,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_24),16);
	vcdp->chgBus  (c+165,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_25),16);
	vcdp->chgBus  (c+166,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_26),16);
	vcdp->chgBus  (c+167,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_27),16);
	vcdp->chgBus  (c+168,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_28),16);
	vcdp->chgBus  (c+169,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_29),16);
	vcdp->chgBus  (c+170,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_30),16);
	vcdp->chgBus  (c+171,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_31),16);
	vcdp->chgBus  (c+172,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_32),16);
	vcdp->chgBus  (c+173,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_33),16);
	vcdp->chgBus  (c+174,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_34),16);
	vcdp->chgBus  (c+175,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_35),16);
	vcdp->chgBus  (c+176,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_36),16);
	vcdp->chgBus  (c+177,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_37),16);
	vcdp->chgBus  (c+178,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_38),16);
	vcdp->chgBus  (c+179,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_39),16);
	vcdp->chgBus  (c+180,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_40),16);
	vcdp->chgBus  (c+181,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_41),16);
	vcdp->chgBus  (c+182,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_42),16);
	vcdp->chgBus  (c+183,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_43),16);
	vcdp->chgBus  (c+184,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_44),16);
	vcdp->chgBus  (c+185,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_45),16);
	vcdp->chgBus  (c+186,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_46),16);
	vcdp->chgBus  (c+187,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_47),16);
	vcdp->chgBus  (c+188,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_48),16);
	vcdp->chgBus  (c+189,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_49),16);
	vcdp->chgBus  (c+190,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_50),16);
	vcdp->chgBus  (c+191,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_51),16);
	vcdp->chgBus  (c+192,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_52),16);
	vcdp->chgBus  (c+193,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_53),16);
	vcdp->chgBus  (c+194,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_54),16);
	vcdp->chgBus  (c+195,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_55),16);
	vcdp->chgBus  (c+196,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_56),16);
	vcdp->chgBus  (c+197,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_57),16);
	vcdp->chgBus  (c+198,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_58),16);
	vcdp->chgBus  (c+199,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_59),16);
	vcdp->chgBus  (c+200,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_60),16);
	vcdp->chgBus  (c+201,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_61),16);
	vcdp->chgBus  (c+202,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_62),16);
	vcdp->chgBus  (c+203,(vlTOPp->OFDMEqualizer__DOT__cha_i_scale_63),16);
	vcdp->chgBus  (c+204,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_0),16);
	vcdp->chgBus  (c+205,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_1),16);
	vcdp->chgBus  (c+206,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_2),16);
	vcdp->chgBus  (c+207,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_3),16);
	vcdp->chgBus  (c+208,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_4),16);
	vcdp->chgBus  (c+209,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_5),16);
	vcdp->chgBus  (c+210,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_6),16);
	vcdp->chgBus  (c+211,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_7),16);
	vcdp->chgBus  (c+212,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_8),16);
	vcdp->chgBus  (c+213,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_9),16);
	vcdp->chgBus  (c+214,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_10),16);
	vcdp->chgBus  (c+215,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_11),16);
	vcdp->chgBus  (c+216,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_12),16);
	vcdp->chgBus  (c+217,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_13),16);
	vcdp->chgBus  (c+218,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_14),16);
	vcdp->chgBus  (c+219,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_15),16);
	vcdp->chgBus  (c+220,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_16),16);
	vcdp->chgBus  (c+221,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_17),16);
	vcdp->chgBus  (c+222,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_18),16);
	vcdp->chgBus  (c+223,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_19),16);
	vcdp->chgBus  (c+224,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_20),16);
	vcdp->chgBus  (c+225,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_21),16);
	vcdp->chgBus  (c+226,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_22),16);
	vcdp->chgBus  (c+227,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_23),16);
	vcdp->chgBus  (c+228,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_24),16);
	vcdp->chgBus  (c+229,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_25),16);
	vcdp->chgBus  (c+230,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_26),16);
	vcdp->chgBus  (c+231,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_27),16);
	vcdp->chgBus  (c+232,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_28),16);
	vcdp->chgBus  (c+233,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_29),16);
	vcdp->chgBus  (c+234,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_30),16);
	vcdp->chgBus  (c+235,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_31),16);
	vcdp->chgBus  (c+236,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_32),16);
	vcdp->chgBus  (c+237,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_33),16);
	vcdp->chgBus  (c+238,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_34),16);
	vcdp->chgBus  (c+239,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_35),16);
	vcdp->chgBus  (c+240,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_36),16);
	vcdp->chgBus  (c+241,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_37),16);
	vcdp->chgBus  (c+242,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_38),16);
	vcdp->chgBus  (c+243,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_39),16);
	vcdp->chgBus  (c+244,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_40),16);
	vcdp->chgBus  (c+245,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_41),16);
	vcdp->chgBus  (c+246,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_42),16);
	vcdp->chgBus  (c+247,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_43),16);
	vcdp->chgBus  (c+248,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_44),16);
	vcdp->chgBus  (c+249,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_45),16);
	vcdp->chgBus  (c+250,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_46),16);
	vcdp->chgBus  (c+251,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_47),16);
	vcdp->chgBus  (c+252,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_48),16);
	vcdp->chgBus  (c+253,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_49),16);
	vcdp->chgBus  (c+254,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_50),16);
	vcdp->chgBus  (c+255,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_51),16);
	vcdp->chgBus  (c+256,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_52),16);
	vcdp->chgBus  (c+257,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_53),16);
	vcdp->chgBus  (c+258,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_54),16);
	vcdp->chgBus  (c+259,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_55),16);
	vcdp->chgBus  (c+260,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_56),16);
	vcdp->chgBus  (c+261,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_57),16);
	vcdp->chgBus  (c+262,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_58),16);
    }
}

void VOFDMEqualizer::traceChgThis__6(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+263,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_59),16);
	vcdp->chgBus  (c+264,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_60),16);
	vcdp->chgBus  (c+265,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_61),16);
	vcdp->chgBus  (c+266,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_62),16);
	vcdp->chgBus  (c+267,(vlTOPp->OFDMEqualizer__DOT__cha_q_scale_63),16);
	vcdp->chgBit  (c+268,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_1));
	vcdp->chgBit  (c+269,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_2));
	vcdp->chgBit  (c+270,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_3));
	vcdp->chgBit  (c+271,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_4));
	vcdp->chgBit  (c+272,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_5));
	vcdp->chgBit  (c+273,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_6));
	vcdp->chgBit  (c+274,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_7));
	vcdp->chgBit  (c+275,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_8));
	vcdp->chgBit  (c+276,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_9));
	vcdp->chgBit  (c+277,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_10));
	vcdp->chgBit  (c+278,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_11));
	vcdp->chgBit  (c+279,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_12));
	vcdp->chgBit  (c+280,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_13));
	vcdp->chgBit  (c+281,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_14));
	vcdp->chgBit  (c+282,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_15));
	vcdp->chgBit  (c+283,(vlTOPp->OFDMEqualizer__DOT__raw_data_payload_last_delay_16));
	vcdp->chgBus  (c+284,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
	vcdp->chgBus  (c+285,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
	vcdp->chgBus  (c+286,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
	vcdp->chgBit  (c+287,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign));
	vcdp->chgBus  (c+288,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
					   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
					   : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
	vcdp->chgBus  (c+289,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__x_sign)
					   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
					   : (IData)(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
	vcdp->chgBit  (c+290,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_1));
	vcdp->chgBit  (c+291,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_2));
	vcdp->chgBit  (c+292,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_3));
	vcdp->chgBit  (c+293,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_4));
	vcdp->chgBit  (c+294,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_5));
	vcdp->chgBit  (c+295,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_6));
	vcdp->chgBit  (c+296,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_7));
	vcdp->chgBit  (c+297,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_8));
	vcdp->chgBit  (c+298,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_9));
	vcdp->chgBit  (c+299,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_10));
	vcdp->chgBit  (c+300,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_11));
	vcdp->chgBit  (c+301,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_12));
	vcdp->chgBit  (c+302,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_13));
	vcdp->chgBit  (c+303,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_14));
	vcdp->chgBit  (c+304,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_15));
	vcdp->chgBit  (c+305,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__train_en_delay_16));
	vcdp->chgBus  (c+306,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_x_15),16);
	vcdp->chgBus  (c+307,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y),16);
	vcdp->chgBus  (c+308,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z),16);
	vcdp->chgBit  (c+309,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign));
	vcdp->chgBus  (c+310,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
					   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y))
					   : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_y)))),16);
	vcdp->chgBus  (c+311,((0xffffU & ((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__x_sign)
					   ? VL_NEGATE_I((IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z))
					   : (IData)(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_payload_z)))),16);
	vcdp->chgBit  (c+312,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_1));
	vcdp->chgBit  (c+313,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_2));
	vcdp->chgBit  (c+314,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_3));
	vcdp->chgBit  (c+315,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_4));
	vcdp->chgBit  (c+316,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_5));
	vcdp->chgBit  (c+317,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_6));
	vcdp->chgBit  (c+318,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_7));
	vcdp->chgBit  (c+319,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_8));
	vcdp->chgBit  (c+320,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_9));
	vcdp->chgBit  (c+321,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_10));
	vcdp->chgBit  (c+322,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_11));
	vcdp->chgBit  (c+323,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_12));
	vcdp->chgBit  (c+324,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_13));
	vcdp->chgBit  (c+325,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_14));
	vcdp->chgBit  (c+326,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_15));
	vcdp->chgBit  (c+327,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__train_en_delay_16));
    }
}

void VOFDMEqualizer::traceChgThis__7(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+328,(vlTOPp->OFDMEqualizer__DOT__i_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
	vcdp->chgBit  (c+329,(vlTOPp->OFDMEqualizer__DOT__q_zf_eq__DOT__cal_core__DOT___zz_result_valid_15));
	vcdp->chgBus  (c+330,(vlTOPp->OFDMEqualizer__DOT__cnt),6);
	vcdp->chgBit  (c+331,(vlTOPp->OFDMEqualizer__DOT__train_en));
	vcdp->chgBit  (c+332,((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__cnt))));
	vcdp->chgBus  (c+333,(vlTOPp->OFDMEqualizer__DOT__train_cnt),6);
	vcdp->chgBit  (c+334,(vlTOPp->OFDMEqualizer__DOT__train_finished));
	vcdp->chgBit  (c+335,((0x3fU == (IData)(vlTOPp->OFDMEqualizer__DOT__train_cnt))));
	vcdp->chgBit  (c+336,(vlTOPp->OFDMEqualizer__DOT__raw_data_ready_1));
	vcdp->chgBit  (c+337,((1U & (~ (IData)(vlTOPp->OFDMEqualizer__DOT__train_en)))));
    }
}

void VOFDMEqualizer::traceChgThis__8(VOFDMEqualizer__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VOFDMEqualizer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+338,(vlTOPp->raw_data_valid));
	vcdp->chgBit  (c+339,(vlTOPp->raw_data_ready));
	vcdp->chgBit  (c+340,(vlTOPp->raw_data_payload_last));
	vcdp->chgBus  (c+341,(vlTOPp->raw_data_payload_fragment_cha_i),16);
	vcdp->chgBus  (c+342,(vlTOPp->raw_data_payload_fragment_cha_q),16);
	vcdp->chgBit  (c+343,(vlTOPp->equalized_data_valid));
	vcdp->chgBit  (c+344,(vlTOPp->equalized_data_payload_last));
	vcdp->chgBus  (c+345,(vlTOPp->equalized_data_payload_fragment_cha_i),16);
	vcdp->chgBus  (c+346,(vlTOPp->equalized_data_payload_fragment_cha_q),16);
	vcdp->chgBit  (c+347,(vlTOPp->clk));
	vcdp->chgBit  (c+348,(vlTOPp->reset));
	vcdp->chgBit  (c+349,(((IData)(vlTOPp->raw_data_valid) 
			       & (IData)(vlTOPp->raw_data_ready))));
	vcdp->chgBit  (c+350,(((IData)(vlTOPp->raw_data_payload_last) 
			       & ((IData)(vlTOPp->raw_data_valid) 
				  & (IData)(vlTOPp->raw_data_ready)))));
	vcdp->chgBit  (c+351,(((IData)(vlTOPp->equalized_data_payload_last) 
			       & (IData)(vlTOPp->equalized_data_valid))));
	vcdp->chgBus  (c+352,((0xffffU & (((0x8000U 
					    & (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
					    ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_i))
					    : (IData)(vlTOPp->raw_data_payload_fragment_cha_i)) 
					  + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_i) 
						   >> 0xfU))))),16);
	vcdp->chgBus  (c+353,((0xffffU & (((0x8000U 
					    & (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
					    ? (~ (IData)(vlTOPp->raw_data_payload_fragment_cha_q))
					    : (IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
					  + (1U & ((IData)(vlTOPp->raw_data_payload_fragment_cha_q) 
						   >> 0xfU))))),16);
    }
}
