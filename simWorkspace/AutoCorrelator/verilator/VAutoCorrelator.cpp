// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAutoCorrelator.h for the primary calling header

#include "VAutoCorrelator.h"
#include "VAutoCorrelator__Syms.h"

//==========

void VAutoCorrelator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAutoCorrelator::eval\n"); );
    VAutoCorrelator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AutoCorrelator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAutoCorrelator::_eval_initial_loop(VAutoCorrelator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/AutoCorrelator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAutoCorrelator::_sequent__TOP__3(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_sequent__TOP__3\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_i = 0U;
        vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_q = 0U;
        vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
    } else {
        if (vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1 = 1U;
            vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_i 
                = (vlTOPp->AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_i 
                   + vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_i);
            vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_q 
                = (vlTOPp->AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_q 
                   + vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_q);
        } else {
            vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
        }
    }
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30
                                           : 0U));
    vlTOPp->corr_result_valid = vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_result_valid_1;
    vlTOPp->corr_result_payload_cha_i = vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_i;
    vlTOPp->corr_result_payload_cha_q = vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_q;
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_q 
        = (vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_q 
           - vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_31);
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_30 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT___zz_corr_val_i 
        = (vlTOPp->AutoCorrelator__DOT__corr_core__DOT__corr_val_i 
           - vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31);
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_29 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_28 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_27 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_26 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_25 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_24 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_23 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_22 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_21 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_20 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_19 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_18 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17
                                           : 0U));
}

VL_INLINE_OPT void VAutoCorrelator::_sequent__TOP__4(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_sequent__TOP__4\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_17 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_16 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1
                                           : 0U));
}

VL_INLINE_OPT void VAutoCorrelator::_sequent__TOP__5(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_sequent__TOP__5\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_q
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_i
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_q 
        = ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->AutoCorrelator__DOT__corr_core__DOT__k1 
                                          - VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & ((IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q) 
                                                                          + (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)))))));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_data_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid)));
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__mul_i 
        = ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->AutoCorrelator__DOT__corr_core__DOT__k1 
                                          - VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & ((IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i) 
                                                                          - (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q)))))));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i)
                                           : 0U));
}

VL_INLINE_OPT void VAutoCorrelator::_sequent__TOP__6(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_sequent__TOP__6\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->raw_data_valid) 
                                         & (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid)));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->raw_data_payload_cha_q)
                                           : 0U));
    vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->raw_data_valid)
                                           ? (IData)(vlTOPp->raw_data_payload_cha_i)
                                           : 0U));
}

VL_INLINE_OPT void VAutoCorrelator::_combo__TOP__8(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_combo__TOP__8\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AutoCorrelator__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->AutoCorrelator__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                               + (IData)(vlTOPp->raw_data_payload_cha_q)))));
}

void VAutoCorrelator::_eval(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_eval\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAutoCorrelator::_change_request(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_change_request\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAutoCorrelator::_change_request_1(VAutoCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_change_request_1\n"); );
    VAutoCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAutoCorrelator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAutoCorrelator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
