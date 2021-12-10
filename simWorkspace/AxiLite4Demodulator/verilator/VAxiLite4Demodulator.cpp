// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Demodulator.h for the primary calling header

#include "VAxiLite4Demodulator.h"
#include "VAxiLite4Demodulator__Syms.h"

//==========

void VAxiLite4Demodulator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4Demodulator::eval\n"); );
    VAxiLite4Demodulator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4Demodulator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4Demodulator::_eval_initial_loop(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4Demodulator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__2(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__2\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    if (vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bresp;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__4(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__4\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q 
        = ((IData)(vlTOPp->rf_resetn) ? ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i 
        = ((IData)(vlTOPp->rf_resetn) ? ((2U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))
            : 0U);
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf1) {
            if (vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1) {
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1 
                    = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                       == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf1));
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer 
                    = (0xffffffU & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer));
                vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt 
                    = (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                        == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf1))
                        ? 0U : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt));
            }
        } else {
            vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt = 0U;
            vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1 = 0U;
        }
    } else {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt = 0U;
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer = 0U;
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1 = 0U;
    }
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer 
        = ((IData)(vlTOPp->rf_resetn) ? ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                          ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i)
                                          : ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                              ? (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q))
                                              : (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i) 
                                                  << 2U) 
                                                 | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q))))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkI_reg;
    vlTOPp->base_data_valid = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_valid_1;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_cnt 
        = (0x1fU & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_cnt) 
                    + (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1)));
    vlTOPp->base_data_payload = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_valid_1 
        = ((IData)(vlTOPp->rf_resetn) & ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                          ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_valid)
                                          : ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                              ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_valid)
                                              : (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_valid))));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT___zz_base_data_buffer 
        = (VL_ULL(0x7fffffffffffff) & (((QData)((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__base_data_buffer)) 
                                        << (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkO_buf1)) 
                                       | (QData)((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_data_combination__DOT__unit_data_buffer))));
    __Vtableidx1 = (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__codeTable_q) 
                     << 4U) | (((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__compTable_i) 
                                << 1U) | (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid)));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i 
            = vlTOPp->__Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_i
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q 
            = vlTOPp->__Vtable1_AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_data_q
            [__Vtableidx1];
    }
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_q 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__codeTable_q));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_data_i 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__compTable_i));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_data_i 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__compTable_i));
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkI_reg;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__unit_valid 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__codeTable_q 
        = ((IData)(vlTOPp->rf_resetn) ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q)
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__compTable_i 
        = ((IData)(vlTOPp->rf_resetn) ? (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i)
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__codeTable_q 
        = ((IData)(vlTOPp->rf_resetn) & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__compTable_i 
        = ((IData)(vlTOPp->rf_resetn) & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_i)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__compTable_i 
        = ((IData)(vlTOPp->rf_resetn) & VL_LTS_III(1,12,12, 0U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_data_i)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q 
        = ((6U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q)) 
           | VL_LTS_III(32,12,12, 0xd78U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q 
        = ((5U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,12,12, 0xfffU, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q)) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q 
        = ((3U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_q)) 
           | (VL_LTS_III(1,12,12, 0x286U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_q)) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i 
        = ((6U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i)) 
           | VL_LTS_III(32,12,12, 0xd78U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i 
        = ((5U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,12,12, 0xfffU, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i)) 
              << 1U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i 
        = ((3U & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__comp_cmp_i)) 
           | (VL_LTS_III(1,12,12, 0x286U, (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_data_i)) 
              << 2U));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_i) 
                                         & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid 
        = ((IData)(vlTOPp->rf_resetn) & ((IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_i) 
                                         & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_q)));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid 
        = vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid_i;
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_q 
        = ((IData)(vlTOPp->rf_resetn) ? ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_q))
            : 0U);
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__5(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__5\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_data_i 
        = ((IData)(vlTOPp->rf_resetn) ? ((1U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_data_i 
        = ((IData)(vlTOPp->rf_resetn) ? ((0U != (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1))
                                          ? 0U : (IData)(vlTOPp->mod_iq_payload_cha_i))
            : 0U);
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_i 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_2__DOT__demod_valid_q 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_i 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod_1__DOT__demod_valid_q 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__demod__DOT__demod_valid_i 
        = ((IData)(vlTOPp->rf_resetn) & ((0U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1)) 
                                         & (IData)(vlTOPp->mod_iq_valid)));
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkI_reg;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__6(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__6\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid;
        }
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__8(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__8\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_6__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_5__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_7__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver;
    vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_combo__TOP__9(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_combo__TOP__9\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_1_valid 
        = ((1U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->mod_iq_valid));
    vlTOPp->AxiLite4Demodulator__DOT__rfClockArea_demod_rtl__DOT__flowDeMux_1_outputs_2_valid 
        = ((2U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__clkCrossing_4__DOT__area_clkO_buf1)) 
           & (IData)(vlTOPp->mod_iq_valid));
    vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
}

VL_INLINE_OPT void VAxiLite4Demodulator::_sequent__TOP__10(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_sequent__TOP__10\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x20U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x24U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                        vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver 
                            = (0x1fU & vlTOPp->axil4Ctrl_wdata);
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x20U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                    vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver 
                        = (1U & vlTOPp->axil4Ctrl_wdata);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver = 0U;
    } else {
        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((0x20U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((0x24U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x28U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                            vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver 
                                = (0x1fU & vlTOPp->axil4Ctrl_wdata);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select = 0U;
    } else {
        if ((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire) {
                vlTOPp->AxiLite4Demodulator__DOT___zz_demod_rtl_bridge_select 
                    = (3U & vlTOPp->axil4Ctrl_wdata);
            }
        }
    }
    vlTOPp->AxiLite4Demodulator__DOT__readRsp_data = 0U;
    if ((0x20U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
            = ((0xfffffffeU & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
               | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_enable_driver));
    } else {
        if ((0x24U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
                = ((0xffffffe0U & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_step_driver));
        } else {
            if ((0x28U == (IData)(vlTOPp->AxiLite4Demodulator__DOT__axil4Ctrl_ar_rData_addr))) {
                vlTOPp->AxiLite4Demodulator__DOT__readRsp_data 
                    = ((0xffffffe0U & vlTOPp->AxiLite4Demodulator__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4Demodulator__DOT__data_comb_bridge_cnt_limit_driver));
            }
        }
    }
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Demodulator__DOT__readRsp_data;
}

VL_INLINE_OPT void VAxiLite4Demodulator::_combo__TOP__11(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_combo__TOP__11\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4Demodulator__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Demodulator__DOT__writeJoinEvent_fire;
}

void VAxiLite4Demodulator::_eval(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_eval\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->rf_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__rf_clk)))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__9(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__11(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4Demodulator::_change_request(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_change_request\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4Demodulator::_change_request_1(VAxiLite4Demodulator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_change_request_1\n"); );
    VAxiLite4Demodulator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4Demodulator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Demodulator::_eval_debug_assertions\n"); );
    // Body
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
    if (VL_UNLIKELY((mod_iq_valid & 0xfeU))) {
        Verilated::overWidthError("mod_iq_valid");}
    if (VL_UNLIKELY((mod_iq_payload_cha_i & 0xf000U))) {
        Verilated::overWidthError("mod_iq_payload_cha_i");}
    if (VL_UNLIKELY((mod_iq_payload_cha_q & 0xf000U))) {
        Verilated::overWidthError("mod_iq_payload_cha_q");}
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
