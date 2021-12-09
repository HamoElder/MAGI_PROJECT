// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Modulator.h for the primary calling header

#include "VAxiLite4Modulator.h"
#include "VAxiLite4Modulator__Syms.h"

//==========

void VAxiLite4Modulator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4Modulator::eval\n"); );
    VAxiLite4Modulator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4Modulator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4Modulator::_eval_initial_loop(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4Modulator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4Modulator::_sequent__TOP__2(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_sequent__TOP__2\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    if (vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bresp;
}

VL_INLINE_OPT void VAxiLite4Modulator::_sequent__TOP__3(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_sequent__TOP__3\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid;
        }
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2;
}

VL_INLINE_OPT void VAxiLite4Modulator::_sequent__TOP__4(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_sequent__TOP__4\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer 
        = vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer;
    vlTOPp->__Vdlyvset__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0 = 0U;
    vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt 
        = vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data 
        = ((IData)(vlTOPp->rf_resetn) ? ((2U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                          ? 0U : (0xfU 
                                                  & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))
            : 0U);
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data 
        = ((IData)(vlTOPp->rf_resetn) & ((0U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                          ? 0U : (0xfU 
                                                  & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer)));
}

VL_INLINE_OPT void VAxiLite4Modulator::_sequent__TOP__5(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_sequent__TOP__5\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0;
    IData/*23:0*/ __Vdlyvval__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0;
    // Body
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1) {
            vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer 
                = (0xffffffU & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire)
                                 ? vlTOPp->base_data_payload
                                 : ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47)
                                     ? (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer 
                                        >> (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1))
                                     : (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer 
                                        >> (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1)))));
        }
    } else {
        vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer = 0U;
    }
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data 
        = ((IData)(vlTOPp->rf_resetn) ? ((1U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                          ? 0U : (3U 
                                                  & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))
            : 0U);
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1)))) {
        __Vdlyvval__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0 
            = (0xffffffU & vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1);
        vlTOPp->__Vdlyvset__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0 = 1U;
        __Vdlyvdim0__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0 
            = (0xffU & vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1);
    }
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid)));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid)));
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid)));
    if (vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1) {
        vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1 
            = vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map
            [vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_data];
    }
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((3U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid)));
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1) {
            if (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire) {
                vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt 
                    = (0x1fU & ((IData)(8U) + (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT___zz_base_cnt)));
            } else {
                if ((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47)))) {
                    vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt 
                        = (0x1fU & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt) 
                                    + (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1)));
                }
            }
        } else {
            vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt 
                = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1;
        }
    } else {
        vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt = 0U;
    }
    if (vlTOPp->__Vdlyvset__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0) {
        vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map[__Vdlyvdim0__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0] 
            = __Vdlyvval__AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__code_map__v0;
    }
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt 
        = vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data))
            ? 0xa59a59U : ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data))
                            ? 0xa595a7U : ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_data))
                                            ? 0x5a7a59U
                                            : 0x5a75a7U)));
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_data 
        = ((IData)(vlTOPp->rf_resetn) ? ((3U != (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                          ? 0U : (0xfU 
                                                  & vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer))
            : 0U);
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1) 
                                         & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire) 
                                            | (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47)))));
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer 
        = vlTOPp->__Vdly__AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_buffer;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84 
        = ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__unit_valid) 
           & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT___zz_base_cnt 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt) 
                    + (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__when_dataDivDynamic_l47 
        = ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt) 
           == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkI_reg;
    vlTOPp->mod_iq_valid = ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                             ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                             : ((1U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                 ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                 : ((2U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                     ? (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                     : (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84))));
    vlTOPp->mod_iq_payload_cha_i = (0xfffU & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                               ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                   ? 
                                                  (((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                     ? 0x7ff000U
                                                     : 0x801000U) 
                                                   >> 0xcU)
                                                   : 0U)
                                               : ((1U 
                                                   == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                                   ? 
                                                  ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                    ? 
                                                   (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0 
                                                    >> 0xcU)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                                    ? 
                                                   ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                          >> 2U)))
                                                      ? 0xc35U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                           >> 2U)))
                                                       ? 0xebcU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data) 
                                                            >> 2U)))
                                                        ? 0x3caU
                                                        : 0x143U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                                                     ? 
                                                    (vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1 
                                                     >> 0xcU)
                                                     : 0U)))));
    vlTOPp->mod_iq_payload_cha_q = (0xfffU & ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                               ? ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_valid)
                                                   ? 
                                                  ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod__DOT__unit_data)
                                                    ? 0x7ff000U
                                                    : 0x801000U)
                                                   : 0U)
                                               : ((1U 
                                                   == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                                   ? 
                                                  ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT__unit_valid)
                                                    ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mPSK_Modulator_Extension_mod_1__DOT___zz___05Fzz_mod_iq_0
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf1))
                                                    ? 
                                                   ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                      ? 0xc35U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                       ? 0xebcU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mQAM_Modulator_Extension_mod__DOT__unit_data)))
                                                        ? 0x3caU
                                                        : 0x143U)))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT__when_lookUpMod_l84)
                                                     ? vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_rtl__DOT__mod_1__DOT___zz_code_map_port1
                                                     : 0U)))));
}

VL_INLINE_OPT void VAxiLite4Modulator::_sequent__TOP__6(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_sequent__TOP__6\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready 
        = (((IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkO_buf1) 
            == (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_cnt)) 
           & (IData)(vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkI_reg;
    vlTOPp->base_data_ready = vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready;
}

VL_INLINE_OPT void VAxiLite4Modulator::_combo__TOP__8(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_combo__TOP__8\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_data_fire 
        = ((IData)(vlTOPp->base_data_valid) & (IData)(vlTOPp->AxiLite4Modulator__DOT__rfClockArea_mod_data_div__DOT__base_ready));
}

VL_INLINE_OPT void VAxiLite4Modulator::_sequent__TOP__9(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_sequent__TOP__9\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_12__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_2;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_11__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_1;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_10__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Modulator__DOT___zz_dataIn;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_8__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_9__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_13__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver;
    vlTOPp->AxiLite4Modulator__DOT__clkCrossing_7__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_enable_driver;
}

VL_INLINE_OPT void VAxiLite4Modulator::_sequent__TOP__10(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_sequent__TOP__10\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_2 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x18U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((0x1cU == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                    if (vlTOPp->AxiLite4Modulator__DOT__writeOccur) {
                                        vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_2 
                                            = vlTOPp->axil4Ctrl_wdata;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_1 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x14U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x18U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if (vlTOPp->AxiLite4Modulator__DOT__writeOccur) {
                                    vlTOPp->AxiLite4Modulator__DOT___zz_dataIn_1 
                                        = vlTOPp->axil4Ctrl_wdata;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT___zz_dataIn = 1U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x14U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if (vlTOPp->AxiLite4Modulator__DOT__writeOccur) {
                                vlTOPp->AxiLite4Modulator__DOT___zz_dataIn 
                                    = (1U & vlTOPp->axil4Ctrl_wdata);
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->AxiLite4Modulator__DOT__writeOccur) {
                    vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver 
                        = (0x1fU & vlTOPp->axil4Ctrl_wdata);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if (vlTOPp->AxiLite4Modulator__DOT__writeOccur) {
                        vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver 
                            = (0x1fU & vlTOPp->axil4Ctrl_wdata);
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if (vlTOPp->AxiLite4Modulator__DOT__writeOccur) {
                            vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver 
                                = (3U & vlTOPp->axil4Ctrl_wdata);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_enable_driver = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->AxiLite4Modulator__DOT__writeOccur) {
                vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_enable_driver 
                    = (1U & vlTOPp->axil4Ctrl_wdata);
            }
        }
    }
    vlTOPp->AxiLite4Modulator__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4Modulator__DOT__readRsp_data 
            = ((0xfffffffeU & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_enable_driver));
    } else {
        if ((4U == (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4Modulator__DOT__readRsp_data 
                = ((0xffffffe0U & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_step_driver));
        } else {
            if ((8U == (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->AxiLite4Modulator__DOT__readRsp_data 
                    = ((0xffffffe0U & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_data_bridge_cnt_limit_driver));
            } else {
                if ((0x10U == (IData)(vlTOPp->AxiLite4Modulator__DOT__axil4Ctrl_ar_rData_addr))) {
                    vlTOPp->AxiLite4Modulator__DOT__readRsp_data 
                        = ((0xfffffffcU & vlTOPp->AxiLite4Modulator__DOT__readRsp_data) 
                           | (IData)(vlTOPp->AxiLite4Modulator__DOT__mod_rtl_bridge_select_driver));
                }
            }
        }
    }
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Modulator__DOT__readRsp_data;
}

VL_INLINE_OPT void VAxiLite4Modulator::_combo__TOP__11(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_combo__TOP__11\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Modulator__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4Modulator__DOT__writeJoinEvent_valid) 
                                                  & (IData)(vlTOPp->AxiLite4Modulator__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Modulator__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Modulator__DOT__writeOccur;
}

void VAxiLite4Modulator::_eval(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_eval\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->rf_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rf_clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
}

VL_INLINE_OPT QData VAxiLite4Modulator::_change_request(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_change_request\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4Modulator::_change_request_1(VAxiLite4Modulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_change_request_1\n"); );
    VAxiLite4Modulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4Modulator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Modulator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((base_data_valid & 0xfeU))) {
        Verilated::overWidthError("base_data_valid");}
    if (VL_UNLIKELY((base_data_payload & 0xff000000U))) {
        Verilated::overWidthError("base_data_payload");}
    if (VL_UNLIKELY((axil4Ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_awvalid");}
    if (VL_UNLIKELY((axil4Ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_awprot");}
    if (VL_UNLIKELY((axil4Ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_wvalid");}
    if (VL_UNLIKELY((axil4Ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("axil4Ctrl_wstrb");}
    if (VL_UNLIKELY((axil4Ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_bready");}
    if (VL_UNLIKELY((axil4Ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_arvalid");}
    if (VL_UNLIKELY((axil4Ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_arprot");}
    if (VL_UNLIKELY((axil4Ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_rready");}
    if (VL_UNLIKELY((rf_clk & 0xfeU))) {
        Verilated::overWidthError("rf_clk");}
    if (VL_UNLIKELY((rf_resetn & 0xfeU))) {
        Verilated::overWidthError("rf_resetn");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
