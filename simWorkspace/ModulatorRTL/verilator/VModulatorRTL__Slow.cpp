// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModulatorRTL.h for the primary calling header

#include "VModulatorRTL.h"
#include "VModulatorRTL__Syms.h"

//==========

VL_CTOR_IMP(VModulatorRTL) {
    VModulatorRTL__Syms* __restrict vlSymsp = __VlSymsp = new VModulatorRTL__Syms(this, name());
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VModulatorRTL::__Vconfigure(VModulatorRTL__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VModulatorRTL::~VModulatorRTL() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VModulatorRTL::_settle__TOP__4(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_settle__TOP__4\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_0_payload_last 
        = ((0U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_1_payload_last 
        = ((1U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_2_payload_last 
        = ((2U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_3_payload_last 
        = ((3U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_payload_last 
        = ((4U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid 
        = ((4U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_valid));
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz___05Fzz_data_in_ready 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready)));
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l61 
        = (0U != (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready));
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87 
        = ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_valid) 
           & (0U != (IData)(vlTOPp->w_en)));
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70 
        = (((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_valid) 
            | (0U != (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))) 
           & (1U != (IData)(vlTOPp->w_en)));
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l58 
        = ((IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid) 
           & (0U == (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready)));
    vlTOPp->data_flow_mod_iq_valid = ((4U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                                       : ((2U & (IData)(vlTOPp->select_1))
                                           ? ((1U & (IData)(vlTOPp->select_1))
                                               ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                               : (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid))
                                           : ((1U & (IData)(vlTOPp->select_1))
                                               ? (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                               : (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid))));
    vlTOPp->data_flow_mod_iq_payload_last = ((4U & (IData)(vlTOPp->select_1))
                                              ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70) 
                                                 & (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_last))
                                              : ((2U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select_1))
                                                   ? 
                                                  ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87) 
                                                   & (IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_last))
                                                   : 
                                                  ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid) 
                                                   & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlTOPp->select_1))
                                                   ? 
                                                  ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid) 
                                                   & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last))
                                                   : 
                                                  ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid) 
                                                   & (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last)))));
    vlTOPp->data_flow_mod_iq_payload_fragment_cha_i 
        = (0xfffU & ((4U & (IData)(vlTOPp->select_1))
                      ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                          ? (vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
                             >> 0xcU) : 0U) : ((2U 
                                                & (IData)(vlTOPp->select_1))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                                     ? 
                                                    (vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
                                                     >> 0xcU)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                          >> 2U)))
                                                      ? 0xc35U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                           >> 2U)))
                                                       ? 0xebcU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment) 
                                                            >> 2U)))
                                                        ? 0x3caU
                                                        : 0x143U)))
                                                     : 0U))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                     ? 
                                                    (vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                     >> 0xcU)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                     ? 
                                                    (((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                       ? 0x7ff000U
                                                       : 0x801000U) 
                                                     >> 0xcU)
                                                     : 0U)))));
    vlTOPp->data_flow_mod_iq_payload_fragment_cha_q 
        = (0xfffU & ((4U & (IData)(vlTOPp->select_1))
                      ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70)
                          ? vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1
                          : 0U) : ((2U & (IData)(vlTOPp->select_1))
                                    ? ((1U & (IData)(vlTOPp->select_1))
                                        ? ((IData)(vlTOPp->ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87)
                                            ? vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1
                                            : 0U) : 
                                       ((IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                         ? ((0U == 
                                             (3U & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                             ? 0xc35U
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                 ? 0xebcU
                                                 : 
                                                ((2U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)))
                                                  ? 0x3caU
                                                  : 0x143U)))
                                         : 0U)) : (
                                                   (1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                     ? vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                     ? 
                                                    ((IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment)
                                                      ? 0x7ff000U
                                                      : 0x801000U)
                                                     : 0U)))));
}

void VModulatorRTL::_eval_initial(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_eval_initial\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VModulatorRTL::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::final\n"); );
    // Variables
    VModulatorRTL__Syms* __restrict vlSymsp = this->__VlSymsp;
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VModulatorRTL::_eval_settle(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_eval_settle\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VModulatorRTL::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_ctor_var_reset\n"); );
    // Body
    data_flow_unit_data_valid = VL_RAND_RESET_I(1);
    data_flow_unit_data_payload_last = VL_RAND_RESET_I(1);
    data_flow_unit_data_payload_fragment = VL_RAND_RESET_I(8);
    data_flow_mod_iq_valid = VL_RAND_RESET_I(1);
    data_flow_mod_iq_payload_last = VL_RAND_RESET_I(1);
    data_flow_mod_iq_payload_fragment_cha_i = VL_RAND_RESET_I(12);
    data_flow_mod_iq_payload_fragment_cha_q = VL_RAND_RESET_I(12);
    w_en = VL_RAND_RESET_I(2);
    w_addr = VL_RAND_RESET_I(32);
    w_data = VL_RAND_RESET_I(32);
    cnt_limit = VL_RAND_RESET_I(32);
    select_1 = VL_RAND_RESET_I(3);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__flowDeMux_1_outputs_0_payload_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__flowDeMux_1_outputs_1_payload_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__flowDeMux_1_outputs_2_payload_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__flowDeMux_1_outputs_3_payload_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__flowDeMux_1_outputs_4_payload_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 = VL_RAND_RESET_I(24);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(2);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment = VL_RAND_RESET_I(4);
    ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 = VL_RAND_RESET_I(24);
    ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_fragment = VL_RAND_RESET_I(8);
    ModulatorRTL__DOT__mod_1__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_1__DOT__unit_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_1__DOT__when_lookUpMod_l87 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            ModulatorRTL__DOT__mod_1__DOT__code_map[__Vi0] = VL_RAND_RESET_I(24);
    }}
    ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 = VL_RAND_RESET_I(24);
    ModulatorRTL__DOT__mod_2__DOT___zz___05Fzz_data_in_ready = VL_RAND_RESET_I(3);
    ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_fragment = VL_RAND_RESET_I(7);
    ModulatorRTL__DOT__mod_2__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_2__DOT__unit_last = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready = VL_RAND_RESET_I(3);
    ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l58 = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l61 = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l70 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            ModulatorRTL__DOT__mod_2__DOT__code_map[__Vi0] = VL_RAND_RESET_I(24);
    }}
    __Vdly__ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready = VL_RAND_RESET_I(3);
    __Vm_traceActivity = 0;
}
