// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPreambleDetector__Syms.h"


//======================

void VPreambleDetector::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VPreambleDetector* t = (VPreambleDetector*)userthis;
    VPreambleDetector__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VPreambleDetector::traceChgThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
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
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VPreambleDetector::traceChgThis__2(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[0]),12);
        vcdp->chgBus(c+2,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[1]),12);
        vcdp->chgBus(c+3,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[2]),12);
        vcdp->chgBus(c+4,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[3]),12);
        vcdp->chgBus(c+5,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[4]),12);
        vcdp->chgBus(c+6,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[5]),12);
        vcdp->chgBus(c+7,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[6]),12);
        vcdp->chgBus(c+8,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[7]),12);
        vcdp->chgBus(c+9,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[8]),12);
        vcdp->chgBus(c+10,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[9]),12);
        vcdp->chgBus(c+11,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[10]),12);
        vcdp->chgBus(c+12,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[11]),12);
        vcdp->chgBus(c+13,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[12]),12);
        vcdp->chgBus(c+14,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[13]),12);
        vcdp->chgBus(c+15,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[14]),12);
        vcdp->chgBus(c+16,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[15]),12);
        vcdp->chgBus(c+129,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[0]),12);
        vcdp->chgBus(c+130,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[1]),12);
        vcdp->chgBus(c+131,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[2]),12);
        vcdp->chgBus(c+132,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[3]),12);
        vcdp->chgBus(c+133,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[4]),12);
        vcdp->chgBus(c+134,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[5]),12);
        vcdp->chgBus(c+135,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[6]),12);
        vcdp->chgBus(c+136,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[7]),12);
        vcdp->chgBus(c+137,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[8]),12);
        vcdp->chgBus(c+138,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[9]),12);
        vcdp->chgBus(c+139,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[10]),12);
        vcdp->chgBus(c+140,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[11]),12);
        vcdp->chgBus(c+141,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[12]),12);
        vcdp->chgBus(c+142,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[13]),12);
        vcdp->chgBus(c+143,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[14]),12);
        vcdp->chgBus(c+144,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[15]),12);
    }
}

void VPreambleDetector::traceChgThis__3(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i),24);
        vcdp->chgBus(c+265,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q),24);
        vcdp->chgBus(c+273,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15),20);
        vcdp->chgBus(c+281,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15),20);
        vcdp->chgBus(c+289,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_0),20);
        vcdp->chgBus(c+297,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_1),20);
        vcdp->chgBus(c+305,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_2),20);
        vcdp->chgBus(c+313,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_3),20);
        vcdp->chgBus(c+321,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_4),20);
        vcdp->chgBus(c+329,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_5),20);
        vcdp->chgBus(c+337,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_6),20);
        vcdp->chgBus(c+345,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_7),20);
        vcdp->chgBus(c+353,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_8),20);
        vcdp->chgBus(c+361,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_9),20);
        vcdp->chgBus(c+369,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_10),20);
        vcdp->chgBus(c+377,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_11),20);
        vcdp->chgBus(c+385,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_12),20);
        vcdp->chgBus(c+393,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_13),20);
        vcdp->chgBus(c+401,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_14),20);
        vcdp->chgBus(c+409,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_0),20);
        vcdp->chgBus(c+417,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_1),20);
        vcdp->chgBus(c+425,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_2),20);
        vcdp->chgBus(c+433,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_3),20);
        vcdp->chgBus(c+441,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_4),20);
        vcdp->chgBus(c+449,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_5),20);
        vcdp->chgBus(c+457,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_6),20);
        vcdp->chgBus(c+465,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_7),20);
        vcdp->chgBus(c+473,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_8),20);
        vcdp->chgBus(c+481,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_9),20);
        vcdp->chgBus(c+489,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_10),20);
        vcdp->chgBus(c+497,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_11),20);
        vcdp->chgBus(c+505,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_12),20);
        vcdp->chgBus(c+513,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_13),20);
        vcdp->chgBus(c+521,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_14),20);
    }
}

void VPreambleDetector::traceChgThis__4(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+529,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1));
        vcdp->chgBit(c+537,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid));
        vcdp->chgQuad(c+545,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i),36);
        vcdp->chgQuad(c+561,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q),36);
        vcdp->chgBit(c+577,(vlTOPp->PreambleDetector__DOT__gate_pkg_det));
        vcdp->chgQuad(c+585,(vlTOPp->PreambleDetector__DOT__prod_avg_mag),36);
        vcdp->chgBus(c+601,(vlTOPp->PreambleDetector__DOT__plateau_cnt),8);
        vcdp->chgBit(c+609,((0xffU > (IData)(vlTOPp->PreambleDetector__DOT__plateau_cnt))));
        vcdp->chgBus(c+617,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_i),24);
        vcdp->chgBus(c+625,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_val_q),24);
        vcdp->chgBit(c+633,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid));
        vcdp->chgBus(c+641,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16),24);
        vcdp->chgBus(c+649,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16),24);
        vcdp->chgBus(c+657,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i),24);
        vcdp->chgBit(c+665,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable));
        vcdp->chgBus(c+673,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),24);
        vcdp->chgBus(c+681,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),24);
        vcdp->chgBus(c+689,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),24);
        vcdp->chgBus(c+697,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),24);
        vcdp->chgBus(c+705,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),24);
        vcdp->chgBus(c+713,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),24);
        vcdp->chgBus(c+721,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),24);
        vcdp->chgBus(c+729,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),24);
        vcdp->chgBus(c+737,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),24);
        vcdp->chgBus(c+745,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),24);
        vcdp->chgBus(c+753,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),24);
        vcdp->chgBus(c+761,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),24);
        vcdp->chgBus(c+769,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),24);
        vcdp->chgBus(c+777,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),24);
        vcdp->chgBus(c+785,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),24);
        vcdp->chgBus(c+793,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),24);
        vcdp->chgBus(c+801,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q),24);
        vcdp->chgBus(c+809,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0),24);
        vcdp->chgBus(c+817,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1),24);
        vcdp->chgBus(c+825,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2),24);
        vcdp->chgBus(c+833,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3),24);
        vcdp->chgBus(c+841,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4),24);
        vcdp->chgBus(c+849,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5),24);
        vcdp->chgBus(c+857,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6),24);
        vcdp->chgBus(c+865,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7),24);
        vcdp->chgBus(c+873,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8),24);
        vcdp->chgBus(c+881,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9),24);
        vcdp->chgBus(c+889,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10),24);
        vcdp->chgBus(c+897,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11),24);
        vcdp->chgBus(c+905,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12),24);
        vcdp->chgBus(c+913,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13),24);
        vcdp->chgBus(c+921,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14),24);
        vcdp->chgBus(c+929,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15),24);
    }
}

void VPreambleDetector::traceChgThis__5(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+937,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext),24);
        vcdp->chgBus(c+945,((0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext 
                                         >> 4U))),20);
        vcdp->chgBus(c+953,(vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext),24);
        vcdp->chgBus(c+961,((0xfffffU & (vlTOPp->PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext 
                                         >> 4U))),20);
        vcdp->chgBus(c+969,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_I_mem_port0),12);
        vcdp->chgBus(c+977,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT___zz_Q_mem_port0),12);
    }
}

void VPreambleDetector::traceChgThis__6(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+985,(vlTOPp->PreambleDetector__DOT__crossCorrelator_1__DOT__cnt),5);
    }
}

void VPreambleDetector::traceChgThis__7(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VPreambleDetector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+993,(vlTOPp->min_plateau),8);
        vcdp->chgBit(c+1001,(vlTOPp->pkg_detected));
        vcdp->chgBit(c+1009,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+1017,(vlTOPp->raw_data_payload_cha_i),12);
        vcdp->chgBus(c+1025,(vlTOPp->raw_data_payload_cha_q),12);
        vcdp->chgBit(c+1033,(vlTOPp->raw_data_out_valid));
        vcdp->chgBus(c+1041,(vlTOPp->raw_data_out_payload_cha_i),12);
        vcdp->chgBus(c+1049,(vlTOPp->raw_data_out_payload_cha_q),12);
        vcdp->chgBit(c+1057,(vlTOPp->clk));
        vcdp->chgBit(c+1065,(vlTOPp->reset));
        vcdp->chgBus(c+1073,((0xffffffU & VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_i)))))),24);
        vcdp->chgBus(c+1081,((0xffffffU & VL_MULS_III(24,24,24, 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q))), 
                                                      (0xffffffU 
                                                       & VL_EXTENDS_II(24,12, (IData)(vlTOPp->raw_data_payload_cha_q)))))),24);
    }
}
