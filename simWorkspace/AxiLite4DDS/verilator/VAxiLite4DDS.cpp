// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4DDS.h for the primary calling header

#include "VAxiLite4DDS.h"
#include "VAxiLite4DDS__Syms.h"

//==========

void VAxiLite4DDS::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4DDS::eval\n"); );
    VAxiLite4DDS__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4DDS.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4DDS::_eval_initial_loop(VAxiLite4DDS__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AxiLite4DDS.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4DDS::_sequent__TOP__2(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_sequent__TOP__2\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bresp;
}

VL_INLINE_OPT void VAxiLite4DDS::_sequent__TOP__4(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_sequent__TOP__4\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0;
    SData/*9:0*/ __Vdlyvdim0__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0;
    SData/*9:0*/ __Vdlyvdim0__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0;
    IData/*23:0*/ __Vdlyvval__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0;
    IData/*23:0*/ __Vdlyvval__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0;
    // Body
    __Vdlyvset__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0 = 0U;
    __Vdlyvset__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0 = 0U;
    vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__module_en));
    vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf 
        = ((IData)(vlTOPp->rf_resetn) & (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__module_en));
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_mem_port1 
        = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__mem
        [vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor];
    vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_mem_port1 
        = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__mem
        [vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor];
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__module_en) {
            vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_payload 
                = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor;
        }
    } else {
        vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_payload = 0U;
    }
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__module_en) {
            vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_payload 
                = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor;
        }
    } else {
        vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_payload = 0U;
    }
    if (vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf1) {
        __Vdlyvval__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0 
            = vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf1;
        __Vdlyvset__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0 = 1U;
        __Vdlyvdim0__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0 
            = vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf1;
    }
    if (vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf1) {
        __Vdlyvval__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0 
            = vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf1;
        __Vdlyvset__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0 = 1U;
        __Vdlyvdim0__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0 
            = vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf1;
    }
    if (__Vdlyvset__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0) {
        vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__mem[__Vdlyvdim0__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0] 
            = __Vdlyvval__AxiLite4DDS__DOT__dDS_3__DOT__mem__v0;
    }
    if (__Vdlyvset__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0) {
        vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__mem[__Vdlyvdim0__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0] 
            = __Vdlyvval__AxiLite4DDS__DOT__dDS_2__DOT__mem__v0;
    }
    vlTOPp->data_1_valid = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf;
    vlTOPp->phase_1_valid = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__valid_o_buf;
    vlTOPp->data_0_valid = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf;
    vlTOPp->phase_0_valid = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__valid_o_buf;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkI_reg;
    vlTOPp->data_1_payload = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_mem_port1;
    vlTOPp->data_0_payload = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_mem_port1;
    vlTOPp->phase_1_payload = vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_payload;
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__module_en) {
            vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor 
                = ((IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__when_DDS_l53)
                    ? 0U : (0x3ffU & ((IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_cursor) 
                                      + (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf1))));
        }
    } else {
        vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor = 0U;
    }
    vlTOPp->phase_0_payload = vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_payload;
    if (vlTOPp->rf_resetn) {
        if (vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__module_en) {
            vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor 
                = ((IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__when_DDS_l53)
                    ? 0U : (0x3ffU & ((IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_cursor) 
                                      + (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf1))));
        }
    } else {
        vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor = 0U;
    }
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__module_en 
        = ((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1) 
           & (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__module_en 
        = ((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkO_buf1) 
           & (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkO_buf1));
    vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT___zz_phase_cursor 
        = (0x3ffU & ((IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor) 
                     + (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__when_DDS_l53 
        = ((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkO_buf1) 
           <= (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_3__DOT__phase_cursor));
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT___zz_phase_cursor 
        = (0x3ffU & ((IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor) 
                     + (IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkO_buf1)));
    vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__when_DDS_l53 
        = ((IData)(vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkO_buf1) 
           <= (IData)(vlTOPp->AxiLite4DDS__DOT__dDS_2__DOT__phase_cursor));
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf1 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf0;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkI_reg;
}

VL_INLINE_OPT void VAxiLite4DDS::_sequent__TOP__5(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_sequent__TOP__5\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkI_reg;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkO_buf0 
        = vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkI_reg;
}

VL_INLINE_OPT void VAxiLite4DDS::_sequent__TOP__7(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_sequent__TOP__7\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_valid;
        }
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2;
}

VL_INLINE_OPT void VAxiLite4DDS::_sequent__TOP__9(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_sequent__TOP__9\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_29__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_5;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_28__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_4;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_27__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_7;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_22__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_1;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_21__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_20__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_3;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_15__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT__global_en_driver;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_23__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_dataIn_3;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_25__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_dataIn_5;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_24__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_dataIn_4;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_16__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_dataIn;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_18__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_dataIn_2;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_17__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_dataIn_1;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_26__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_6;
    vlTOPp->AxiLite4DDS__DOT__clkCrossing_19__DOT__area_clkI_reg 
        = vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_2;
}

VL_INLINE_OPT void VAxiLite4DDS::_combo__TOP__10(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_combo__TOP__10\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4DDS__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
}

VL_INLINE_OPT void VAxiLite4DDS::_sequent__TOP__11(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_sequent__TOP__11\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_5 = 0x3ffU;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_5 
                                                = (0x3ffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_4 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_4 
                                                = (1U 
                                                   & (vlTOPp->axil4Ctrl_wdata 
                                                      >> 1U));
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_7 = 1U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_7 
                                                = (0x3ffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_1 = 0x3ffU;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_1 
                                                = (0x3ffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data 
                                                = (1U 
                                                   & (vlTOPp->axil4Ctrl_wdata 
                                                      >> 1U));
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_3 = 1U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_3 
                                                = (0x3ffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT__global_en_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT__global_en_driver 
                                                = (1U 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_dataIn_3 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_dataIn_3 
                                                = (1U 
                                                   & (vlTOPp->axil4Ctrl_wdata 
                                                      >> 2U));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4DDS::_sequent__TOP__12(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_sequent__TOP__12\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4DDS__DOT___zz_dataIn_5 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_dataIn_5 
                                                = (0xffffffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_dataIn_4 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_dataIn_4 
                                                = (0x3ffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_dataIn = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_dataIn 
                                                = (1U 
                                                   & (vlTOPp->axil4Ctrl_wdata 
                                                      >> 2U));
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_dataIn_2 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_dataIn_2 
                                                = (0xffffffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_dataIn_1 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_dataIn_1 
                                                = (0x3ffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_6 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_6 
                                                = (0x3ffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
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
        vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_2 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire) {
                                            vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_2 
                                                = (0x3ffU 
                                                   & vlTOPp->axil4Ctrl_wdata);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->AxiLite4DDS__DOT__readRsp_data = 0U;
    if (((((((((0U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr)) 
               | (0xcU == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
              | (0x10U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
             | (0x14U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
            | (0x20U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
           | (0x2cU == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
          | (0x30U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) 
         | (0x34U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr)))) {
        if ((0U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4DDS__DOT__readRsp_data 
                = ((0xfffffffeU & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4DDS__DOT__global_en_driver));
            vlTOPp->AxiLite4DDS__DOT__readRsp_data 
                = ((0xfffffffdU & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                   | ((IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data) 
                      << 1U));
        } else {
            vlTOPp->AxiLite4DDS__DOT__readRsp_data 
                = ((0xcU == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                    ? ((0xfffffc00U & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                       | (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_1))
                    : ((0x10U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                        ? ((0xfffffc00U & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                           | (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_2))
                        : ((0x14U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                            ? ((0xfffffc00U & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                               | (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_3))
                            : ((0x20U == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                                ? ((0xfffffffdU & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                                   | ((IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_4) 
                                      << 1U)) : ((0xfffffc00U 
                                                  & vlTOPp->AxiLite4DDS__DOT__readRsp_data) 
                                                 | ((0x2cU 
                                                     == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                                                     ? (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_5)
                                                     : 
                                                    ((0x30U 
                                                      == (IData)(vlTOPp->AxiLite4DDS__DOT__axil4Ctrl_ar_rData_addr))
                                                      ? (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_6)
                                                      : (IData)(vlTOPp->AxiLite4DDS__DOT___zz_readRsp_data_7))))))));
        }
    }
}

VL_INLINE_OPT void VAxiLite4DDS::_sequent__TOP__13(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_sequent__TOP__13\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4DDS__DOT__readRsp_data;
}

VL_INLINE_OPT void VAxiLite4DDS::_combo__TOP__14(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_combo__TOP__14\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire = 
        ((IData)(vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_valid) 
         & (IData)(vlTOPp->AxiLite4DDS__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4DDS__DOT__writeJoinEvent_fire;
}

void VAxiLite4DDS::_eval(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_eval\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x40U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
    }
    vlTOPp->_combo__TOP__14(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rf_clk = vlTOPp->rf_clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4DDS::_change_request(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_change_request\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4DDS::_change_request_1(VAxiLite4DDS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_change_request_1\n"); );
    VAxiLite4DDS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4DDS::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4DDS::_eval_debug_assertions\n"); );
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
