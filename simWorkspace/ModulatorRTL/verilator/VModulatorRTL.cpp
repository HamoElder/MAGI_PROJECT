// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModulatorRTL.h for the primary calling header

#include "VModulatorRTL.h"
#include "VModulatorRTL__Syms.h"

//==========

void VModulatorRTL::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VModulatorRTL::eval\n"); );
    VModulatorRTL__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/ModulatorRTL.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VModulatorRTL::_eval_initial_loop(VModulatorRTL__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/ModulatorRTL.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VModulatorRTL::_sequent__TOP__1(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_sequent__TOP__1\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__ModulatorRTL__DOT__mod_1__DOT__code_map__v0;
    CData/*0:0*/ __Vdlyvset__ModulatorRTL__DOT__mod_1__DOT__code_map__v0;
    CData/*6:0*/ __Vdlyvdim0__ModulatorRTL__DOT__mod_2__DOT__code_map__v0;
    CData/*0:0*/ __Vdlyvset__ModulatorRTL__DOT__mod_2__DOT__code_map__v0;
    IData/*23:0*/ __Vdlyvval__ModulatorRTL__DOT__mod_1__DOT__code_map__v0;
    IData/*23:0*/ __Vdlyvval__ModulatorRTL__DOT__mod_2__DOT__code_map__v0;
    // Body
    __Vdlyvset__ModulatorRTL__DOT__mod_2__DOT__code_map__v0 = 0U;
    __Vdlyvset__ModulatorRTL__DOT__mod_1__DOT__code_map__v0 = 0U;
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_last 
        = vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_payload_last;
    vlTOPp->ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_last 
        = vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_3_payload_last;
    vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last 
        = vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_2_payload_last;
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_last 
        = vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_1_payload_last;
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_last 
        = vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_0_payload_last;
    if ((1U == (IData)(vlTOPp->w_en))) {
        __Vdlyvval__ModulatorRTL__DOT__mod_2__DOT__code_map__v0 
            = (0xffffffU & vlTOPp->w_data);
        __Vdlyvset__ModulatorRTL__DOT__mod_2__DOT__code_map__v0 = 1U;
        __Vdlyvdim0__ModulatorRTL__DOT__mod_2__DOT__code_map__v0 
            = (0x7fU & vlTOPp->w_addr);
    }
    if ((0U == (IData)(vlTOPp->w_en))) {
        __Vdlyvval__ModulatorRTL__DOT__mod_1__DOT__code_map__v0 
            = (0xffffffU & vlTOPp->w_data);
        __Vdlyvset__ModulatorRTL__DOT__mod_1__DOT__code_map__v0 = 1U;
        __Vdlyvdim0__ModulatorRTL__DOT__mod_1__DOT__code_map__v0 
            = (0xffU & vlTOPp->w_addr);
    }
    if ((0U != (IData)(vlTOPp->w_en))) {
        vlTOPp->ModulatorRTL__DOT__mod_1__DOT___zz_code_map_port1 
            = vlTOPp->ModulatorRTL__DOT__mod_1__DOT__code_map
            [vlTOPp->ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_fragment];
    }
    if ((1U != (IData)(vlTOPp->w_en))) {
        vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_code_map_port1 
            = vlTOPp->ModulatorRTL__DOT__mod_2__DOT__code_map
            [((0x78U & ((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_fragment) 
                        << 3U)) | (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready))];
    }
    if (__Vdlyvset__ModulatorRTL__DOT__mod_1__DOT__code_map__v0) {
        vlTOPp->ModulatorRTL__DOT__mod_1__DOT__code_map[__Vdlyvdim0__ModulatorRTL__DOT__mod_1__DOT__code_map__v0] 
            = __Vdlyvval__ModulatorRTL__DOT__mod_1__DOT__code_map__v0;
    }
    if (__Vdlyvset__ModulatorRTL__DOT__mod_2__DOT__code_map__v0) {
        vlTOPp->ModulatorRTL__DOT__mod_2__DOT__code_map[__Vdlyvdim0__ModulatorRTL__DOT__mod_2__DOT__code_map__v0] 
            = __Vdlyvval__ModulatorRTL__DOT__mod_2__DOT__code_map__v0;
    }
}

VL_INLINE_OPT void VModulatorRTL::_sequent__TOP__2(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_sequent__TOP__2\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready 
        = vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready;
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT__data_flow_unit_data_payload_regNext_fragment 
        = ((IData)(vlTOPp->reset) ? 0U : ((4U != (IData)(vlTOPp->select_1))
                                           ? 0U : (0x7fU 
                                                   & (IData)(vlTOPp->data_flow_unit_data_payload_fragment))));
    vlTOPp->ModulatorRTL__DOT__mod_1__DOT__data_flow_unit_data_payload_regNext_fragment 
        = ((IData)(vlTOPp->reset) ? 0U : ((3U != (IData)(vlTOPp->select_1))
                                           ? 0U : (IData)(vlTOPp->data_flow_unit_data_payload_fragment)));
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_payload_last));
    vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_3_payload_last));
    vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_2_payload_last));
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_1_payload_last));
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_last 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_0_payload_last));
    vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment 
        = ((IData)(vlTOPp->reset) ? 0U : ((2U != (IData)(vlTOPp->select_1))
                                           ? 0U : (0xfU 
                                                   & (IData)(vlTOPp->data_flow_unit_data_payload_fragment))));
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data_payload_regNext_fragment 
        = (1U & ((~ (IData)(vlTOPp->reset)) & ((0U 
                                                != (IData)(vlTOPp->select_1))
                                                ? 0U
                                                : (IData)(vlTOPp->data_flow_unit_data_payload_fragment))));
    vlTOPp->ModulatorRTL__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((2U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((1U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((0U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment 
        = ((IData)(vlTOPp->reset) ? 0U : ((1U != (IData)(vlTOPp->select_1))
                                           ? 0U : (3U 
                                                   & (IData)(vlTOPp->data_flow_unit_data_payload_fragment))));
    vlTOPp->ModulatorRTL__DOT__mod_1__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((3U == (IData)(vlTOPp->select_1)) 
                                         & (IData)(vlTOPp->data_flow_unit_data_valid)));
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT__unit_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid));
}

VL_INLINE_OPT void VModulatorRTL::_sequent__TOP__3(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_sequent__TOP__3\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready = 0U;
    } else {
        if (vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l58) {
            vlTOPp->__Vdly__ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready 
                = (7U & ((IData)(1U) + (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready)));
        } else {
            if (vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l61) {
                vlTOPp->__Vdly__ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready 
                    = (((IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready) 
                        < (7U & vlTOPp->cnt_limit))
                        ? (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz___05Fzz_data_in_ready)
                        : 0U);
            }
        }
    }
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready 
        = vlTOPp->__Vdly__ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready;
    vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->ModulatorRTL__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data_payload_regNext_fragment))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz___05Fzz_data_in_ready 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready)));
    vlTOPp->ModulatorRTL__DOT__mod_2__DOT__when_lookUpMod_l61 
        = (0U != (IData)(vlTOPp->ModulatorRTL__DOT__mod_2__DOT___zz_data_in_ready));
}

VL_INLINE_OPT void VModulatorRTL::_combo__TOP__5(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_combo__TOP__5\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_payload_last 
        = ((4U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_3_payload_last 
        = ((3U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_2_payload_last 
        = ((2U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_1_payload_last 
        = ((1U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_0_payload_last 
        = ((0U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_payload_last));
    vlTOPp->ModulatorRTL__DOT__flowDeMux_1_outputs_4_valid 
        = ((4U == (IData)(vlTOPp->select_1)) & (IData)(vlTOPp->data_flow_unit_data_valid));
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

void VModulatorRTL::_eval(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_eval\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VModulatorRTL::_change_request(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_change_request\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VModulatorRTL::_change_request_1(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_change_request_1\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VModulatorRTL::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((data_flow_unit_data_valid & 0xfeU))) {
        Verilated::overWidthError("data_flow_unit_data_valid");}
    if (VL_UNLIKELY((data_flow_unit_data_payload_last 
                     & 0xfeU))) {
        Verilated::overWidthError("data_flow_unit_data_payload_last");}
    if (VL_UNLIKELY((w_en & 0xfcU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((select_1 & 0xf8U))) {
        Verilated::overWidthError("select_1");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
