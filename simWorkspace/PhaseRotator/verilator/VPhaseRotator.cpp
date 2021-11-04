// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPhaseRotator.h for the primary calling header

#include "VPhaseRotator.h"
#include "VPhaseRotator__Syms.h"

//==========

void VPhaseRotator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPhaseRotator::eval\n"); );
    VPhaseRotator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/PhaseRotator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPhaseRotator::_eval_initial_loop(VPhaseRotator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/PhaseRotator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__2(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__2\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14), 0xeU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14), 0xeU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30), 0xeU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30), 0xeU))));
    }
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_z_1 = 0U;
    vlTOPp->rotated_data_payload_cha_q = vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_y;
    vlTOPp->rotated_data_payload_cha_i = vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_15;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_45 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_14 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29), 0xdU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29), 0xdU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_30 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13), 0xdU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13), 0xdU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_44 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_29 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12), 0xcU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12), 0xcU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_13 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28), 0xcU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28), 0xcU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_43 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_12 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27), 0xbU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27), 0xbU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_28 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11), 0xbU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11), 0xbU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_42 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_27 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10), 0xaU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10), 0xaU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_11 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26), 0xaU))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26), 0xaU))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_41 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_10 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25), 9U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25), 9U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_26 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9), 9U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9), 9U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_40 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_25 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8), 8U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8), 8U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_9 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24), 8U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24), 8U))));
    }
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__3(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__3\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_39 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_8 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23), 7U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23), 7U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_24 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7), 7U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7), 7U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_38 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_23 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6), 6U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6), 6U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_7 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22), 6U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22), 6U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_37 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_6 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21), 5U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21), 5U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_22 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5), 5U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5), 5U))));
    }
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_51 = 0U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_36 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_21 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4), 4U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4), 4U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_5 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20), 4U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20), 4U))));
    }
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_50 = 1U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_35 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_4 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19), 3U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19), 3U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_20 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3), 3U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3), 3U))));
    }
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_49 = 3U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_34 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_19 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2), 2U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2), 2U))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_3 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18), 2U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18), 2U))));
    }
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_48 = 7U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_33 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_2 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17), 1U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17), 1U))));
    }
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__4(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__4\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_18 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17) 
                              + VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1), 1U))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17) 
                              - VL_SHIFTRS_III(16,16,32, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1), 1U))));
    }
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_47 = 0xeU;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_32 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_17 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x))));
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_1 
            = (0xffffU & (VL_LTES_III(1,16,16, 0U, (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31))
                           ? ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x) 
                              - (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16))
                           : ((IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x) 
                              + (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16))));
    }
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_46 = 0x19U;
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x 
            = vlTOPp->raw_data_payload_cha_i;
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_16 
            = vlTOPp->raw_data_payload_cha_q;
    }
    if (vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire) {
        vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_payload_x_31 
            = vlTOPp->PhaseRotator__DOT__phi;
    }
    vlTOPp->PhaseRotator__DOT__phi = ((IData)(vlTOPp->raw_data_valid)
                                       ? (IData)(vlTOPp->PhaseRotator__DOT__phiNext)
                                       : 0U);
}

VL_INLINE_OPT void VPhaseRotator::_sequent__TOP__5(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_sequent__TOP__5\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14));
    vlTOPp->rotated_data_valid = vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_15;
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_14 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_13 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_12 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire));
}

VL_INLINE_OPT void VPhaseRotator::_combo__TOP__7(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_combo__TOP__7\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PhaseRotator__DOT__phiNext = (0xffffU & 
                                          (VL_LTS_III(1,16,16, 0x64U, 
                                                      (0xffffU 
                                                       & ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                          + (IData)(vlTOPp->phiCorrect))))
                                            ? (((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                - (IData)(0xc9U)) 
                                               + (IData)(vlTOPp->phiCorrect))
                                            : (VL_GTS_III(1,16,16, 0xff9cU, 
                                                          (0xffffU 
                                                           & ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                              + (IData)(vlTOPp->phiCorrect))))
                                                ? ((IData)(0xc9U) 
                                                   + 
                                                   ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                    + (IData)(vlTOPp->phiCorrect)))
                                                : ((IData)(vlTOPp->PhaseRotator__DOT__phi) 
                                                   + (IData)(vlTOPp->phiCorrect)))));
    vlTOPp->PhaseRotator__DOT__cordic_pipeline_core__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->rotated_data_ready));
}

void VPhaseRotator::_eval(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_eval\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VPhaseRotator::_change_request(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_change_request\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPhaseRotator::_change_request_1(VPhaseRotator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_change_request_1\n"); );
    VPhaseRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPhaseRotator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPhaseRotator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((rotated_data_ready & 0xfeU))) {
        Verilated::overWidthError("rotated_data_ready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
