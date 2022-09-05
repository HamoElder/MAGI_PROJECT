// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCFOCorrector__Syms.h"


void VCFOCorrector::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
        vlTOPp->traceChgSub1(userp, tracep);
    }
}

void VCFOCorrector::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_x_11),24);
            tracep->chgIData(oldp+1,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_y),24);
            tracep->chgIData(oldp+2,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11),25);
            tracep->chgIData(oldp+3,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y),25);
            tracep->chgIData(oldp+4,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z),25);
            tracep->chgBit(oldp+5,((1U & (((IData)(0x3fff000U) 
                                           + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                          >> 0x19U))));
            tracep->chgBit(oldp+6,((0U != (0x1fffU 
                                           & ((IData)(0x1000U) 
                                              + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_2)))));
            tracep->chgSData(oldp+7,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw),12);
            tracep->chgBit(oldp+8,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                          >> 0xcU))));
            tracep->chgBit(oldp+9,((1U & (~ (IData)(
                                                    (3U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                                         >> 0xbU))))))));
            tracep->chgBit(oldp+10,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_x_raw) 
                                           >> 0xbU))));
            tracep->chgBit(oldp+11,((1U & (((IData)(0x3fff000U) 
                                            + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                           >> 0x19U))));
            tracep->chgBit(oldp+12,((0U != (0x1fffU 
                                            & ((IData)(0x1000U) 
                                               + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz___05Fzz_when_SInt_l337_5)))));
            tracep->chgSData(oldp+13,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw),12);
            tracep->chgBit(oldp+14,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                           >> 0xcU))));
            tracep->chgBit(oldp+15,((1U & (~ (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                                          >> 0xbU))))))));
            tracep->chgBit(oldp+16,((1U & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_rotated_y_raw) 
                                           >> 0xbU))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+17,((0xffffffU & 
                                       (- vlTOPp->CFOCorrector__DOT__delta_phi_mean))),24);
            tracep->chgBit(oldp+18,(vlTOPp->CFOCorrector__DOT__cfo_estimator_delta_phi_valid));
            tracep->chgBit(oldp+19,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11));
            tracep->chgCData(oldp+20,(vlTOPp->CFOCorrector__DOT__mean_cnt),2);
            tracep->chgIData(oldp+21,(vlTOPp->CFOCorrector__DOT__delta_phi_mean),24);
            tracep->chgBit(oldp+22,(vlTOPp->CFOCorrector__DOT__delta_phi_valid));
            tracep->chgBit(oldp+23,(vlTOPp->CFOCorrector__DOT__delta_phi_valid_regNext));
            tracep->chgBit(oldp+24,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_valid_11));
            tracep->chgCData(oldp+25,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__impulse_cnt),5);
            tracep->chgIData(oldp+26,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15),24);
            tracep->chgIData(oldp+27,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15),24);
            tracep->chgIData(oldp+28,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0),24);
            tracep->chgIData(oldp+29,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1),24);
            tracep->chgIData(oldp+30,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2),24);
            tracep->chgIData(oldp+31,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3),24);
            tracep->chgIData(oldp+32,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4),24);
            tracep->chgIData(oldp+33,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5),24);
            tracep->chgIData(oldp+34,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6),24);
            tracep->chgIData(oldp+35,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7),24);
            tracep->chgIData(oldp+36,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8),24);
            tracep->chgIData(oldp+37,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9),24);
            tracep->chgIData(oldp+38,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10),24);
            tracep->chgIData(oldp+39,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11),24);
            tracep->chgIData(oldp+40,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12),24);
            tracep->chgIData(oldp+41,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13),24);
            tracep->chgIData(oldp+42,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14),24);
            tracep->chgIData(oldp+43,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0),24);
            tracep->chgIData(oldp+44,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1),24);
            tracep->chgIData(oldp+45,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2),24);
            tracep->chgIData(oldp+46,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3),24);
            tracep->chgIData(oldp+47,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4),24);
            tracep->chgIData(oldp+48,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5),24);
            tracep->chgIData(oldp+49,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6),24);
            tracep->chgIData(oldp+50,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7),24);
            tracep->chgIData(oldp+51,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8),24);
            tracep->chgIData(oldp+52,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9),24);
            tracep->chgIData(oldp+53,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10),24);
            tracep->chgIData(oldp+54,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11),24);
            tracep->chgIData(oldp+55,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12),24);
            tracep->chgIData(oldp+56,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13),24);
            tracep->chgIData(oldp+57,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14),24);
            tracep->chgIData(oldp+58,(((0x1000000U 
                                        & (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                           << 1U)) 
                                       | vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi)),25);
            tracep->chgBit(oldp+59,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11));
            tracep->chgBit(oldp+60,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__xy_symbol));
            tracep->chgIData(oldp+61,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi),24);
            tracep->chgIData(oldp+62,((0xffffffU & 
                                       (VL_LTES_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                                         ? ((vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                             - (IData)(0x3243U)) 
                                            + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect)
                                         : (VL_GTES_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)
                                             ? ((IData)(0x3243U) 
                                                + (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                                   + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))
                                             : (vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phi 
                                                + vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect))))),24);
            tracep->chgIData(oldp+63,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__phiCorrect),24);
            tracep->chgBit(oldp+64,(VL_LTES_III(1,24,24, 0x1921U, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)));
            tracep->chgBit(oldp+65,(VL_GTES_III(1,24,24, 0xffe6dfU, vlTOPp->CFOCorrector__DOT__phase_rotator__DOT___zz_when_PhaseRotator_l50)));
            tracep->chgBit(oldp+66,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_0));
            tracep->chgBit(oldp+67,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_1));
            tracep->chgBit(oldp+68,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_2));
            tracep->chgBit(oldp+69,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_3));
            tracep->chgBit(oldp+70,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_4));
            tracep->chgBit(oldp+71,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_5));
            tracep->chgBit(oldp+72,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_6));
            tracep->chgBit(oldp+73,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_7));
            tracep->chgBit(oldp+74,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_8));
            tracep->chgBit(oldp+75,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_9));
            tracep->chgBit(oldp+76,(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_10));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+77,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid));
            tracep->chgIData(oldp+78,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i),28);
            tracep->chgIData(oldp+79,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q),28);
            tracep->chgBit(oldp+80,((1U & (((IData)(0x1ffffff8U) 
                                            + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+81,((0U != (0xfU & 
                                            ((IData)(8U) 
                                             + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_2)))));
            tracep->chgBit(oldp+82,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                           >> 0x18U))));
            tracep->chgBit(oldp+83,((1U & (~ (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                                          >> 0x17U))))))));
            tracep->chgBit(oldp+84,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                           >> 0x17U))));
            tracep->chgBit(oldp+85,((1U & (((IData)(0x1ffffff8U) 
                                            + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                           >> 0x1cU))));
            tracep->chgBit(oldp+86,((0U != (0xfU & 
                                            ((IData)(8U) 
                                             + vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz___05Fzz_when_SInt_l337_5)))));
            tracep->chgBit(oldp+87,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                           >> 0x18U))));
            tracep->chgBit(oldp+88,((1U & (~ (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                                          >> 0x17U))))))));
            tracep->chgBit(oldp+89,((1U & (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                           >> 0x17U))));
            tracep->chgBit(oldp+90,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_valid));
            tracep->chgSData(oldp+91,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_i),12);
            tracep->chgSData(oldp+92,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_15_payload_cha_q),12);
            tracep->chgBit(oldp+93,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid));
            tracep->chgSData(oldp+94,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i),12);
            tracep->chgSData(oldp+95,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q),12);
            tracep->chgBit(oldp+96,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid));
            tracep->chgSData(oldp+97,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i),12);
            tracep->chgSData(oldp+98,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q),12);
            tracep->chgBit(oldp+99,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid));
            tracep->chgSData(oldp+100,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i),12);
            tracep->chgSData(oldp+101,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q),12);
            tracep->chgBit(oldp+102,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid));
            tracep->chgSData(oldp+103,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i),12);
            tracep->chgSData(oldp+104,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q),12);
            tracep->chgBit(oldp+105,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid));
            tracep->chgSData(oldp+106,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i),12);
            tracep->chgSData(oldp+107,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q),12);
            tracep->chgBit(oldp+108,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid));
            tracep->chgSData(oldp+109,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i),12);
            tracep->chgSData(oldp+110,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q),12);
            tracep->chgBit(oldp+111,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid));
            tracep->chgSData(oldp+112,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i),12);
            tracep->chgSData(oldp+113,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q),12);
            tracep->chgBit(oldp+114,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid));
            tracep->chgSData(oldp+115,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i),12);
            tracep->chgSData(oldp+116,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q),12);
            tracep->chgBit(oldp+117,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid));
            tracep->chgSData(oldp+118,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i),12);
            tracep->chgSData(oldp+119,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q),12);
            tracep->chgBit(oldp+120,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_valid));
            tracep->chgSData(oldp+121,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_i),12);
            tracep->chgSData(oldp+122,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_9_payload_cha_q),12);
            tracep->chgBit(oldp+123,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_valid));
            tracep->chgSData(oldp+124,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_i),12);
            tracep->chgSData(oldp+125,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_10_payload_cha_q),12);
            tracep->chgBit(oldp+126,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_valid));
            tracep->chgSData(oldp+127,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_i),12);
            tracep->chgSData(oldp+128,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_11_payload_cha_q),12);
            tracep->chgBit(oldp+129,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_valid));
            tracep->chgSData(oldp+130,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_i),12);
            tracep->chgSData(oldp+131,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_12_payload_cha_q),12);
            tracep->chgBit(oldp+132,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_valid));
            tracep->chgSData(oldp+133,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_i),12);
            tracep->chgSData(oldp+134,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_13_payload_cha_q),12);
            tracep->chgBit(oldp+135,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_valid));
            tracep->chgSData(oldp+136,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_i),12);
            tracep->chgSData(oldp+137,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_14_payload_cha_q),12);
            tracep->chgBit(oldp+138,((1U & (~ (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable)))));
            tracep->chgIData(oldp+139,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i),24);
            tracep->chgBit(oldp+140,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable));
            tracep->chgIData(oldp+141,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q),24);
            tracep->chgIData(oldp+142,((0xffffffU & 
                                        ((0x1000000U 
                                          & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130)
                                          ? ((3U == 
                                              (3U & 
                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130 
                                                >> 0x17U)))
                                              ? vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130
                                              : 0x800000U)
                                          : ((0x800000U 
                                              & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130)
                                              ? 0x7fffffU
                                              : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130)))),24);
            tracep->chgIData(oldp+143,((0xffffffU & 
                                        ((0x1000000U 
                                          & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)
                                          ? ((3U == 
                                              (3U & 
                                               (vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4 
                                                >> 0x17U)))
                                              ? vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4
                                              : 0x800000U)
                                          : ((0x800000U 
                                              & vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)
                                              ? 0x7fffffU
                                              : vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT___zz_when_SInt_l130_4)))),24);
        }
        tracep->chgBit(oldp+144,(vlTOPp->raw_data_valid));
        tracep->chgSData(oldp+145,(vlTOPp->raw_data_payload_cha_i),12);
        tracep->chgSData(oldp+146,(vlTOPp->raw_data_payload_cha_q),12);
        tracep->chgBit(oldp+147,(vlTOPp->rotated_data_valid));
        tracep->chgSData(oldp+148,(vlTOPp->rotated_data_payload_cha_i),12);
        tracep->chgSData(oldp+149,(vlTOPp->rotated_data_payload_cha_q),12);
        tracep->chgBit(oldp+150,(vlTOPp->enable));
        tracep->chgBit(oldp+151,(vlTOPp->phi_correct_valid));
        tracep->chgBit(oldp+152,(vlTOPp->clk));
        tracep->chgBit(oldp+153,(vlTOPp->reset));
        tracep->chgIData(oldp+154,((0xffffffU & VL_SHIFTRS_III(24,24,32, vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z, 4U))),24);
        tracep->chgSData(oldp+155,((0xfffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11)
                                               ? (- (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw))
                                               : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw)))),12);
    }
}

void VCFOCorrector::traceChgSub1(void* userp, VerilatedVcd* tracep) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 157);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgSData(oldp+0,((0xfffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11)
                                             ? (- (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw))
                                             : (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw)))),12);
        tracep->chgBit(oldp+1,(vlTOPp->CFOCorrector__DOT__when_CFOCorrector_l45));
        tracep->chgIData(oldp+2,(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__cordic_core__DOT___zz_result_payload_z),24);
        tracep->chgBit(oldp+3,((1U & (~ (IData)(vlTOPp->raw_data_valid)))));
        tracep->chgIData(oldp+4,(((0x1000000U & ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                                 << 0xdU)) 
                                  | ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                     << 0xcU))),25);
        tracep->chgIData(oldp+5,(((0x1000000U & ((IData)(vlTOPp->raw_data_payload_cha_q) 
                                                 << 0xdU)) 
                                  | ((IData)(vlTOPp->raw_data_payload_cha_q) 
                                     << 0xcU))),25);
    }
}

void VCFOCorrector::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VCFOCorrector__Syms* __restrict vlSymsp = static_cast<VCFOCorrector__Syms*>(userp);
    VCFOCorrector* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}
