// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCrossCorrelator.h for the primary calling header

#include "VCrossCorrelator.h"
#include "VCrossCorrelator__Syms.h"

//==========

void VCrossCorrelator::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCrossCorrelator::eval\n"); );
    VCrossCorrelator__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CrossCorrelator.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCrossCorrelator::_eval_initial_loop(VCrossCorrelator__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CrossCorrelator.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCrossCorrelator::_sequent__TOP__4(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_sequent__TOP__4\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__CrossCorrelator__DOT__cnt = vlTOPp->CrossCorrelator__DOT__cnt;
    vlTOPp->__Vdly__CrossCorrelator__DOT__cnt = ((IData)(vlTOPp->reset)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlTOPp->raw_data_valid)
                                                   ? 
                                                  ((0x40U 
                                                    <= (IData)(vlTOPp->CrossCorrelator__DOT__cnt))
                                                    ? 0U
                                                    : (IData)(vlTOPp->CrossCorrelator__DOT___zz_cnt))
                                                   : 0U));
    if (vlTOPp->reset) {
        vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_i = 0U;
        vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_q = 0U;
        vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
    } else {
        if (vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid) {
            vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1 = 1U;
            vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_i 
                = (vlTOPp->CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_i 
                   + vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_i);
            vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_q 
                = (vlTOPp->CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_q 
                   + vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_q);
        } else {
            vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1 = 0U;
        }
    }
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_64 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_64 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_63
                                           : 0U));
    vlTOPp->corr_result_valid = vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_result_valid_1;
    vlTOPp->corr_result_payload_cha_i = vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_i;
    vlTOPp->corr_result_payload_cha_q = vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_q;
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_q 
        = (vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_q 
           - vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_64);
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_63 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT___zz_corr_val_i 
        = (vlTOPp->CrossCorrelator__DOT__corr_core__DOT__corr_val_i 
           - vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_64);
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_63 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_62
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_62 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_62 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_61
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_61 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_61 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_60
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_60 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_60 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_59
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_59 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_59 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_58
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_58 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_58 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_57
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_57 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_57 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_56
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_56 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_56 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_55
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_55 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_55 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_54
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_54 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_54 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_53
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_53 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_53 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_52
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_52 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_52 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_51
                                           : 0U));
}

VL_INLINE_OPT void VCrossCorrelator::_sequent__TOP__5(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_sequent__TOP__5\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_51 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_51 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_50
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_50 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_50 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_49
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_49 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_49 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_48
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_48 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_48 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_47
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_47 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_47 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_46
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_46 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_46 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_45
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_45 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_45 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_44
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_44 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_44 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_43
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_43 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_43 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_42
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_42 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_42 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_41
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_41 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_41 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_40
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_40 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_40 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_39
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_39 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_39 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_38
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_38 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_38 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_37
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_37 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_37 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_36
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_36 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_36 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_35
                                           : 0U));
}

VL_INLINE_OPT void VCrossCorrelator::_sequent__TOP__6(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_sequent__TOP__6\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_35 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_35 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_34
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_34 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_34 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_33
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_33 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_33 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_32
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_32 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_32 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_31
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_31 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_31 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_30
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_30 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_30 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_29
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_29 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_29 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_28
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_28 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_28 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_27
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_27 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_27 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_26
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_26 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_26 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_25
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_25 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_25 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_24
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_24 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_24 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_23
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_23 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_23 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_22
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_22 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_22 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_21
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_21 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_21 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_20
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_20 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19
                                           : 0U));
}

VL_INLINE_OPT void VCrossCorrelator::_sequent__TOP__7(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_sequent__TOP__7\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_20 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_19
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_19 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_19 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_18
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_18 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_18 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_17
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_17 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_17 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_16
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_16 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_16 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_15
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_15 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_14
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_14 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_13
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_13 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_12
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_12 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_11
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_11 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_10
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_10 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_9
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_9 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_8
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_8 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_7
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_6
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_5
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_5 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_4
                                           : 0U));
}

VL_INLINE_OPT void VCrossCorrelator::_sequent__TOP__8(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_sequent__TOP__8\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_3
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_2
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_1
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_0
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_q
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__shiftRegisterE_2__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid)
                                           ? vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_i
                                           : 0U));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_q 
        = ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->CrossCorrelator__DOT__corr_core__DOT__k1 
                                          - VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & ((IData)(vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0) 
                                                                          + (IData)(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0)))))));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_data_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__mul_i 
        = ((IData)(vlTOPp->reset) ? 0U : (vlTOPp->CrossCorrelator__DOT__corr_core__DOT__k1 
                                          - VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                                        VL_EXTENDS_II(32,16, 
                                                                      (0xffffU 
                                                                       & ((IData)(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0) 
                                                                          - (IData)(vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0)))))));
}

VL_INLINE_OPT void VCrossCorrelator::_sequent__TOP__11(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_sequent__TOP__11\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CrossCorrelator__DOT___zz_Q_mem_port0 = 
        vlTOPp->CrossCorrelator__DOT__Q_mem[(0x3fU 
                                             & (IData)(vlTOPp->CrossCorrelator__DOT__cnt))];
    vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0 = 
        vlTOPp->CrossCorrelator__DOT__I_mem[(0x3fU 
                                             & (IData)(vlTOPp->CrossCorrelator__DOT__cnt))];
}

VL_INLINE_OPT void VCrossCorrelator::_sequent__TOP__12(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_sequent__TOP__12\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CrossCorrelator__DOT__cnt = vlTOPp->__Vdly__CrossCorrelator__DOT__cnt;
    vlTOPp->CrossCorrelator__DOT___zz_cnt = (0x7fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlTOPp->CrossCorrelator__DOT__cnt)));
}

VL_INLINE_OPT void VCrossCorrelator::_combo__TOP__13(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_combo__TOP__13\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CrossCorrelator__DOT__corr_core__DOT__k1 
        = VL_MULS_III(32,32,32, VL_EXTENDS_II(32,16, (IData)(vlTOPp->CrossCorrelator__DOT___zz_I_mem_port0)), 
                      VL_EXTENDS_II(32,16, (0xffffU 
                                            & ((IData)(vlTOPp->raw_data_payload_cha_i) 
                                               + (IData)(vlTOPp->raw_data_payload_cha_q)))));
}

void VCrossCorrelator::_eval(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_eval\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__13(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCrossCorrelator::_change_request(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_change_request\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCrossCorrelator::_change_request_1(VCrossCorrelator__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_change_request_1\n"); );
    VCrossCorrelator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCrossCorrelator::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCrossCorrelator::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
