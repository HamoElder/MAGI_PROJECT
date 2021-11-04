// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCrossCorrelator__Syms.h"


//======================

void VCrossCorrelator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCrossCorrelator* t = (VCrossCorrelator*)userthis;
    VCrossCorrelator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VCrossCorrelator::traceChgThis(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCrossCorrelator::traceChgThis__2(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__k1),32);
    }
}

void VCrossCorrelator::traceChgThis__3(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1));
        vcdp->chgBus(c+17,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_i),32);
        vcdp->chgBus(c+25,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_q),32);
        vcdp->chgBus(c+33,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_64),32);
        vcdp->chgBus(c+41,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_64),32);
        vcdp->chgBus(c+49,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_i),32);
        vcdp->chgBus(c+57,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_q),32);
        vcdp->chgBit(c+65,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid));
        vcdp->chgBus(c+73,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_0),32);
        vcdp->chgBus(c+81,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_1),32);
        vcdp->chgBus(c+89,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_2),32);
        vcdp->chgBus(c+97,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_3),32);
        vcdp->chgBus(c+105,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_4),32);
        vcdp->chgBus(c+113,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_5),32);
        vcdp->chgBus(c+121,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_6),32);
        vcdp->chgBus(c+129,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_7),32);
        vcdp->chgBus(c+137,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_8),32);
        vcdp->chgBus(c+145,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_9),32);
        vcdp->chgBus(c+153,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_10),32);
        vcdp->chgBus(c+161,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_11),32);
        vcdp->chgBus(c+169,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_12),32);
        vcdp->chgBus(c+177,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_13),32);
        vcdp->chgBus(c+185,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_14),32);
        vcdp->chgBus(c+193,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_15),32);
        vcdp->chgBus(c+201,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_16),32);
        vcdp->chgBus(c+209,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_17),32);
        vcdp->chgBus(c+217,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_18),32);
        vcdp->chgBus(c+225,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_19),32);
        vcdp->chgBus(c+233,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_20),32);
        vcdp->chgBus(c+241,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_21),32);
        vcdp->chgBus(c+249,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_22),32);
        vcdp->chgBus(c+257,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_23),32);
        vcdp->chgBus(c+265,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_24),32);
        vcdp->chgBus(c+273,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_25),32);
        vcdp->chgBus(c+281,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_26),32);
        vcdp->chgBus(c+289,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_27),32);
        vcdp->chgBus(c+297,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_28),32);
        vcdp->chgBus(c+305,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_29),32);
        vcdp->chgBus(c+313,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_30),32);
        vcdp->chgBus(c+321,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_31),32);
        vcdp->chgBus(c+329,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_32),32);
        vcdp->chgBus(c+337,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_33),32);
        vcdp->chgBus(c+345,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_34),32);
        vcdp->chgBus(c+353,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_35),32);
        vcdp->chgBus(c+361,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_36),32);
        vcdp->chgBus(c+369,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_37),32);
        vcdp->chgBus(c+377,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_38),32);
        vcdp->chgBus(c+385,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_39),32);
        vcdp->chgBus(c+393,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_40),32);
        vcdp->chgBus(c+401,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_41),32);
        vcdp->chgBus(c+409,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_42),32);
        vcdp->chgBus(c+417,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_43),32);
        vcdp->chgBus(c+425,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_44),32);
        vcdp->chgBus(c+433,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_45),32);
        vcdp->chgBus(c+441,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_46),32);
        vcdp->chgBus(c+449,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_47),32);
        vcdp->chgBus(c+457,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_48),32);
        vcdp->chgBus(c+465,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_49),32);
        vcdp->chgBus(c+473,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_50),32);
        vcdp->chgBus(c+481,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_51),32);
        vcdp->chgBus(c+489,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_52),32);
        vcdp->chgBus(c+497,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_53),32);
        vcdp->chgBus(c+505,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_54),32);
        vcdp->chgBus(c+513,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_55),32);
        vcdp->chgBus(c+521,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_56),32);
        vcdp->chgBus(c+529,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_57),32);
        vcdp->chgBus(c+537,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_58),32);
        vcdp->chgBus(c+545,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_59),32);
        vcdp->chgBus(c+553,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_60),32);
        vcdp->chgBus(c+561,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_61),32);
        vcdp->chgBus(c+569,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_62),32);
        vcdp->chgBus(c+577,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_63),32);
        vcdp->chgBus(c+585,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0),32);
        vcdp->chgBus(c+593,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1),32);
        vcdp->chgBus(c+601,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2),32);
        vcdp->chgBus(c+609,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3),32);
        vcdp->chgBus(c+617,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4),32);
        vcdp->chgBus(c+625,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5),32);
        vcdp->chgBus(c+633,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6),32);
        vcdp->chgBus(c+641,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7),32);
        vcdp->chgBus(c+649,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8),32);
        vcdp->chgBus(c+657,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9),32);
        vcdp->chgBus(c+665,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10),32);
        vcdp->chgBus(c+673,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11),32);
        vcdp->chgBus(c+681,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12),32);
        vcdp->chgBus(c+689,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13),32);
        vcdp->chgBus(c+697,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14),32);
        vcdp->chgBus(c+705,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15),32);
        vcdp->chgBus(c+713,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16),32);
        vcdp->chgBus(c+721,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17),32);
        vcdp->chgBus(c+729,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18),32);
        vcdp->chgBus(c+737,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19),32);
        vcdp->chgBus(c+745,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20),32);
        vcdp->chgBus(c+753,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21),32);
        vcdp->chgBus(c+761,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22),32);
        vcdp->chgBus(c+769,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23),32);
        vcdp->chgBus(c+777,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24),32);
        vcdp->chgBus(c+785,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25),32);
        vcdp->chgBus(c+793,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26),32);
        vcdp->chgBus(c+801,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27),32);
        vcdp->chgBus(c+809,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28),32);
        vcdp->chgBus(c+817,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29),32);
        vcdp->chgBus(c+825,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30),32);
        vcdp->chgBus(c+833,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31),32);
        vcdp->chgBus(c+841,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32),32);
        vcdp->chgBus(c+849,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33),32);
        vcdp->chgBus(c+857,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34),32);
        vcdp->chgBus(c+865,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35),32);
        vcdp->chgBus(c+873,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36),32);
        vcdp->chgBus(c+881,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37),32);
        vcdp->chgBus(c+889,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38),32);
        vcdp->chgBus(c+897,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39),32);
        vcdp->chgBus(c+905,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40),32);
        vcdp->chgBus(c+913,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41),32);
        vcdp->chgBus(c+921,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42),32);
        vcdp->chgBus(c+929,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43),32);
        vcdp->chgBus(c+937,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44),32);
        vcdp->chgBus(c+945,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45),32);
        vcdp->chgBus(c+953,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46),32);
        vcdp->chgBus(c+961,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47),32);
        vcdp->chgBus(c+969,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48),32);
        vcdp->chgBus(c+977,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49),32);
        vcdp->chgBus(c+985,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50),32);
        vcdp->chgBus(c+993,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51),32);
        vcdp->chgBus(c+1001,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52),32);
        vcdp->chgBus(c+1009,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53),32);
        vcdp->chgBus(c+1017,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54),32);
        vcdp->chgBus(c+1025,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55),32);
        vcdp->chgBus(c+1033,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56),32);
        vcdp->chgBus(c+1041,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57),32);
        vcdp->chgBus(c+1049,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58),32);
        vcdp->chgBus(c+1057,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59),32);
        vcdp->chgBus(c+1065,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60),32);
        vcdp->chgBus(c+1073,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61),32);
        vcdp->chgBus(c+1081,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62),32);
        vcdp->chgBus(c+1089,(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63),32);
    }
}

void VCrossCorrelator::traceChgThis__4(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1097,(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0),16);
        vcdp->chgBus(c+1105,(vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0),16);
    }
}

void VCrossCorrelator::traceChgThis__5(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1113,(vlTOPp->CrossCorrelator__DOT__cnt),7);
    }
}

void VCrossCorrelator::traceChgThis__6(VCrossCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1121,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+1129,(vlTOPp->raw_data_payload_cha_i),16);
        vcdp->chgBus(c+1137,(vlTOPp->raw_data_payload_cha_q),16);
        vcdp->chgBit(c+1145,(vlTOPp->corr_result_valid));
        vcdp->chgBus(c+1153,(vlTOPp->corr_result_payload_cha_i),32);
        vcdp->chgBus(c+1161,(vlTOPp->corr_result_payload_cha_q),32);
        vcdp->chgBit(c+1169,(vlTOPp->clk));
        vcdp->chgBit(c+1177,(vlTOPp->reset));
        vcdp->chgBus(c+1185,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0) 
                                                           + (IData)(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0)))))),32);
        vcdp->chgBus(c+1193,(VL_MULS_III(32,32,32, 
                                         VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                         VL_EXTENDS_II(32,16, 
                                                       (0xffffU 
                                                        & ((IData)(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0) 
                                                           - (IData)(vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0)))))),32);
    }
}
