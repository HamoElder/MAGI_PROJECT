// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCFOEstimator.h for the primary calling header

#include "VCFOEstimator.h"
#include "VCFOEstimator__Syms.h"

//==========

void VCFOEstimator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCFOEstimator::eval\n"); );
    VCFOEstimator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/CFOEstimator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCFOEstimator::_eval_initial_loop(VCFOEstimator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/CFOEstimator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__2(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__2\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z_1)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z_1)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10, 0xaU))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_85)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 0xaU))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22, 0xaU))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42;
    vlTOPp->delta_phi_payload = (0xffffffU & VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z, 5U));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z_1 = 3U;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_54)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_54)));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 9U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21, 9U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_82)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9, 9U))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41;
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_54 = 7U;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_53)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_53)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_85 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 8U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20, 8U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_79)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8, 8U))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40;
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_53 = 0xfU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_52)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_52)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_82 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 7U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19, 7U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_76)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7, 7U))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39;
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_52 = 0x1fU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_79 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 6U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18, 6U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_73)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6, 6U))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38;
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51 = 0x3fU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_76 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19 
                                      >> 0x17U)));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__3(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__3\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 5U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17, 5U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_70)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5, 5U))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37;
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50 = 0x7fU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_73 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16, 4U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16, 4U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_67)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4, 4U))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36;
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49 = 0xffU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_70 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15, 3U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15, 3U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_64)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3, 3U))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35;
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48 = 0x1fdU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_67 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 2U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14, 2U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_61)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2, 2U))));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35 
        = vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34;
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47 = 0x3ebU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_64 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 1U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13, 1U))));
    }
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                + VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                - VL_SHIFTRS_III(24,24,32, vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1, 1U))));
    }
    if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34 = 0U;
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46 = 0x76bU;
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_61 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12)));
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__4(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__4\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
            = (0xffffffU & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55)
                             ? (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                + vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x)
                             : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                - vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45 = 0xc90U;
    if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 = 0U;
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_58 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13 
                                      >> 0x17U)));
    if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x 
            = (0xffffffU & ((0x1000000U & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)
                             ? ((3U == (3U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 
                                              >> 0x17U)))
                                 ? vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130
                                 : 0x800000U) : ((0x800000U 
                                                  & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)
                                                  ? 0x7fffffU
                                                  : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130)));
    }
    if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid) {
        vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
            = (0xffffffU & ((0x1000000U & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)
                             ? ((3U == (3U & (vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
                                              >> 0x17U)))
                                 ? vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4
                                 : 0x800000U) : ((0x800000U 
                                                  & vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)
                                                  ? 0x7fffffU
                                                  : vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4)));
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_55 
        = (1U & ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34)
                  ? (~ (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23 
                        >> 0x17U)) : (vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12 
                                      >> 0x17U)));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__8(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__8\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__impulse_cnt = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : ((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid)
                                                   ? 
                                                  ((0x39U 
                                                    <= (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt))
                                                    ? 0U
                                                    : (IData)(vlTOPp->CFOEstimator__DOT___zz_impulse_cnt))
                                                   : 0U));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT___zz_impulse_cnt = (0x3fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt)));
    vlTOPp->delta_phi_valid = ((IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11) 
                               & (0x39U == (IData)(vlTOPp->CFOEstimator__DOT__impulse_cnt)));
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_30 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_30 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_29 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_29 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_28 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_28 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_27 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_27 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_26 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_26 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_25 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_25 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_24 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_24 = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__9(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__9\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_23 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_23 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_22 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_22 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_21 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_21 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__cordic_core__DOT___zz_result_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_20 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_20 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = 1U;
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 
                                            + (((QData)((IData)(
                                                                (0xfffffU 
                                                                 & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
                                                                                >> 0x17U))))))) 
                                                << 0x18U) 
                                               | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i)))));
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 
                                            + (((QData)((IData)(
                                                                (0xfffffU 
                                                                 & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
                                                                                >> 0x17U))))))) 
                                                << 0x18U) 
                                               | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q)))));
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_result_valid = 0U;
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i = VL_ULL(0);
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_19 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_19 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i_1 
        = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                    - (((QData)((IData)(
                                                        (0xfffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31 
                                                                                >> 0x17U))))))) 
                                        << 0x18U) | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_31)))));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                           >> 0x2bU))))) 
            << 0x2cU) | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i);
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q_1 
        = (VL_ULL(0xfffffffffff) & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                    - (((QData)((IData)(
                                                        (0xfffffU 
                                                         & VL_NEGATE_I((IData)(
                                                                               (1U 
                                                                                & (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31 
                                                                                >> 0x17U))))))) 
                                        << 0x18U) | (QData)((IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_31)))));
    vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5 
        = (((QData)((IData)((1U & (IData)((vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                           >> 0x2bU))))) 
            << 0x2cU) | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q);
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_18 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_18 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130 = 
        (0x1ffffffU & ((1U & (IData)((VL_ULL(1) & (
                                                   (VL_ULL(0x1ffffff80000) 
                                                    + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                   >> 0x2cU))))
                        ? ((0U != (0xfffffU & ((IData)(0x80000U) 
                                               + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2))))
                            ? ((IData)(1U) + (IData)(
                                                     (VL_ULL(0x1ffffff) 
                                                      & ((VL_ULL(0x1ffffff80000) 
                                                          + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                                         >> 0x14U))))
                            : (IData)((VL_ULL(0x1ffffff) 
                                       & ((VL_ULL(0x1ffffff80000) 
                                           + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_2) 
                                          >> 0x14U))))
                        : (IData)((VL_ULL(0x1ffffff) 
                                   & ((VL_ULL(0x80000) 
                                       + (((QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i 
                                                                       >> 0x2bU))))) 
                                           << 0x2cU) 
                                          | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i)) 
                                      >> 0x14U)))));
    vlTOPp->CFOEstimator__DOT___zz_when_SInt_l130_4 
        = (0x1ffffffU & ((1U & (IData)((VL_ULL(1) & 
                                        ((VL_ULL(0x1ffffff80000) 
                                          + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                         >> 0x2cU))))
                          ? ((0U != (0xfffffU & ((IData)(0x80000U) 
                                                 + (IData)(vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5))))
                              ? ((IData)(1U) + (IData)(
                                                       (VL_ULL(0x1ffffff) 
                                                        & ((VL_ULL(0x1ffffff80000) 
                                                            + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                                           >> 0x14U))))
                              : (IData)((VL_ULL(0x1ffffff) 
                                         & ((VL_ULL(0x1ffffff80000) 
                                             + vlTOPp->CFOEstimator__DOT___zz___05Fzz_when_SInt_l337_5) 
                                            >> 0x14U))))
                          : (IData)((VL_ULL(0x1ffffff) 
                                     & ((VL_ULL(0x80000) 
                                         + (((QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q 
                                                                         >> 0x2bU))))) 
                                             << 0x2cU) 
                                            | vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q)) 
                                        >> 0x14U)))));
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__10(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__10\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_17 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_17 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_16 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_15 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_14 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_13 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_12 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_11 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_10 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_9 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_8 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_7 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6 = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__11(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__11\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_6 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_5 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_4 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_3 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_2 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_1 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0 = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
            if (vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegister_3__DOT__shift_reg_0 = 0U;
        }
    }
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->rotated_data_payload_cha_q))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i)))) 
                                             - VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->rotated_data_payload_cha_i))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q)))))));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_enable 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->rotated_data_valid) 
                                         & (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_valid)));
    vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i 
        = ((IData)(vlTOPp->reset) ? 0U : (0xffffffU 
                                          & (VL_MULS_III(24,24,24, 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->rotated_data_payload_cha_i))), 
                                                         (0xffffffU 
                                                          & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i)))) 
                                             + VL_MULS_III(24,24,24, 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->rotated_data_payload_cha_q))), 
                                                           (0xffffffU 
                                                            & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q)))))));
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_31_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_30_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_valid = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__12(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__12\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_29_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_28_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_27_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_26_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_25_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_24_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_23_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_22_payload_cha_q = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__13(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__13\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_21_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_20_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_19_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_18_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_17_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_16_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_15_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_i = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__14(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__14\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_14_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_13_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_12_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_11_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_10_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_9_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_8_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_7_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_valid = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOEstimator::_sequent__TOP__15(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_sequent__TOP__15\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_6_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_5_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_4_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_3_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_2_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q 
                    = vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_1_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid 
                    = vlTOPp->rotated_data_valid;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i 
                    = vlTOPp->rotated_data_payload_cha_i;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q = 0U;
    } else {
        if (vlTOPp->rotated_data_valid) {
            if (vlTOPp->rotated_data_valid) {
                vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q 
                    = vlTOPp->rotated_data_payload_cha_q;
            }
        } else {
            vlTOPp->CFOEstimator__DOT__auto_corr_core__DOT__shiftRegister_3__DOT__shift_reg_0_payload_cha_q = 0U;
        }
    }
}

void VCFOEstimator::_eval(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCFOEstimator::_change_request(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_change_request\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCFOEstimator::_change_request_1(VCFOEstimator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_change_request_1\n"); );
    VCFOEstimator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCFOEstimator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOEstimator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((rotated_data_valid & 0xfeU))) {
        Verilated::overWidthError("rotated_data_valid");}
    if (VL_UNLIKELY((rotated_data_payload_cha_i & 0xf000U))) {
        Verilated::overWidthError("rotated_data_payload_cha_i");}
    if (VL_UNLIKELY((rotated_data_payload_cha_q & 0xf000U))) {
        Verilated::overWidthError("rotated_data_payload_cha_q");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
