// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPowerMeter.h for the primary calling header

#include "VPowerMeter.h"
#include "VPowerMeter__Syms.h"

//==========

void VPowerMeter::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPowerMeter::eval\n"); );
    VPowerMeter__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/PowerMeter.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VPowerMeter::_eval_initial_loop(VPowerMeter__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/PowerMeter.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VPowerMeter::_sequent__TOP__2(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_sequent__TOP__2\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_30)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_30)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_30 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_29)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_30 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_29)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_29 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_28)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_29 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_28)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_28 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_27)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_28 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_27)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_27 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_26)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_27 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_26)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_26 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_25)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_26 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_25)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_25 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_24)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_25 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_24)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_24 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_23)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_24 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_23)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_23 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_22)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_23 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_22)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_22 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_21)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_22 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_21)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_21 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_20)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_21 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_20)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_20 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_19)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_20 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_19)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_19 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_18)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_19 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_18)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_18 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_17)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_18 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_17)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_17 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_16)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_17 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_16)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_16 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_15)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_16 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_15)
                                           : 0U));
}

VL_INLINE_OPT void VPowerMeter::_sequent__TOP__3(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_sequent__TOP__3\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_15 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_14)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_15 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_14)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_14 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_13)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_14 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_13)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_13 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_12)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_13 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_12)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_12 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_11)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_12 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_11)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_11 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_10)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_11 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_10)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_10 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_9)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_10 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_9)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_9 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_8)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_9 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_8)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_8 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_7)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_8 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_7)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_6)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_7 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_6)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_5)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_6 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_5)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_5 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_4)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_5 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_4)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_3)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_4 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_3)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_2)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_3 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_2)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_1)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_2 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_1)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_0)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_0)
                                           : 0U));
    vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__power_cal_q)
                                           : 0U));
}

VL_INLINE_OPT void VPowerMeter::_sequent__TOP__4(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_sequent__TOP__4\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_0 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->PowerMeter__DOT__power_cal_valid)
                                           ? (IData)(vlTOPp->PowerMeter__DOT__power_cal_i)
                                           : 0U));
}

VL_INLINE_OPT void VPowerMeter::_sequent__TOP__5(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_sequent__TOP__5\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PowerMeter__DOT__sq_q_regNext = VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)), 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_q)));
    vlTOPp->PowerMeter__DOT__sq_i_regNext = VL_MULS_III(32,32,32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)), 
                                                        VL_EXTENDS_II(32,16, (IData)(vlTOPp->raw_data_payload_cha_i)));
    vlTOPp->PowerMeter__DOT__power_val_cha_i = vlTOPp->PowerMeter__DOT__power_val_i;
    vlTOPp->PowerMeter__DOT__power_val_cha_q = vlTOPp->PowerMeter__DOT__power_val_q;
    vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5 
        = (((QData)((IData)((1U & (vlTOPp->PowerMeter__DOT__sq_q_regNext 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->PowerMeter__DOT__sq_q_regNext)));
    vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2 
        = (((QData)((IData)((1U & (vlTOPp->PowerMeter__DOT__sq_i_regNext 
                                   >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlTOPp->PowerMeter__DOT__sq_i_regNext)));
    vlTOPp->power_result_payload_cha_i = vlTOPp->PowerMeter__DOT__power_val_cha_i;
    vlTOPp->power_result_payload_cha_q = vlTOPp->PowerMeter__DOT__power_val_cha_q;
    vlTOPp->PowerMeter__DOT___zz_power_cal_q = (0xfffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (VL_ULL(1) 
                                                               & ((VL_ULL(0x1fff00000) 
                                                                   + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                                  >> 0x20U))))
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (0x1fffffU 
                                                      & ((IData)(0x100000U) 
                                                         + (IData)(vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(
                                                               (VL_ULL(0xfff) 
                                                                & ((VL_ULL(0x1fff00000) 
                                                                    + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                                   >> 0x15U))))
                                                     : (IData)(
                                                               (VL_ULL(0xfff) 
                                                                & ((VL_ULL(0x1fff00000) 
                                                                    + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_5) 
                                                                   >> 0x15U))))
                                                    : (IData)(
                                                              (VL_ULL(0xfff) 
                                                               & ((VL_ULL(0x100000) 
                                                                   + 
                                                                   (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->PowerMeter__DOT__sq_q_regNext 
                                                                                >> 0x1fU)))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlTOPp->PowerMeter__DOT__sq_q_regNext)))) 
                                                                  >> 0x15U)))));
    vlTOPp->PowerMeter__DOT___zz_power_cal_i = (0xfffU 
                                                & ((1U 
                                                    & (IData)(
                                                              (VL_ULL(1) 
                                                               & ((VL_ULL(0x1fff00000) 
                                                                   + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                                  >> 0x20U))))
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (0x1fffffU 
                                                      & ((IData)(0x100000U) 
                                                         + (IData)(vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2))))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(
                                                               (VL_ULL(0xfff) 
                                                                & ((VL_ULL(0x1fff00000) 
                                                                    + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                                   >> 0x15U))))
                                                     : (IData)(
                                                               (VL_ULL(0xfff) 
                                                                & ((VL_ULL(0x1fff00000) 
                                                                    + vlTOPp->PowerMeter__DOT___zz___05Fzz_when_SInt_l332_2) 
                                                                   >> 0x15U))))
                                                    : (IData)(
                                                              (VL_ULL(0xfff) 
                                                               & ((VL_ULL(0x100000) 
                                                                   + 
                                                                   (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlTOPp->PowerMeter__DOT__sq_i_regNext 
                                                                                >> 0x1fU)))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlTOPp->PowerMeter__DOT__sq_i_regNext)))) 
                                                                  >> 0x15U)))));
}

VL_INLINE_OPT void VPowerMeter::_sequent__TOP__7(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_sequent__TOP__7\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->PowerMeter__DOT__power_val_i = 0U;
        vlTOPp->PowerMeter__DOT__power_val_q = 0U;
        vlTOPp->PowerMeter__DOT__power_result_valid_1 = 0U;
    } else {
        if (vlTOPp->PowerMeter__DOT__power_cal_valid) {
            vlTOPp->PowerMeter__DOT__power_val_i = 
                (0xffffU & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_val_i) 
                            + ((0xf800U & (VL_NEGATE_I((IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->PowerMeter__DOT__power_cal_i) 
                                                                   >> 0xaU)))) 
                                           << 0xbU)) 
                               | (IData)(vlTOPp->PowerMeter__DOT__power_cal_i))));
            vlTOPp->PowerMeter__DOT__power_val_q = 
                (0xffffU & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_val_q) 
                            + ((0xf800U & (VL_NEGATE_I((IData)(
                                                               (1U 
                                                                & ((IData)(vlTOPp->PowerMeter__DOT__power_cal_q) 
                                                                   >> 0xaU)))) 
                                           << 0xbU)) 
                               | (IData)(vlTOPp->PowerMeter__DOT__power_cal_q))));
            vlTOPp->PowerMeter__DOT__power_result_valid_1 = 1U;
        } else {
            vlTOPp->PowerMeter__DOT__power_result_valid_1 = 0U;
            vlTOPp->PowerMeter__DOT__power_val_i = 0U;
            vlTOPp->PowerMeter__DOT__power_val_q = 0U;
        }
    }
    vlTOPp->power_result_valid = vlTOPp->PowerMeter__DOT__power_result_valid_1;
    vlTOPp->PowerMeter__DOT___zz_power_val_i = (0xffffU 
                                                & ((IData)(vlTOPp->PowerMeter__DOT__power_val_i) 
                                                   - 
                                                   ((0xf800U 
                                                     & (VL_NEGATE_I((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31) 
                                                                                >> 0xaU)))) 
                                                        << 0xbU)) 
                                                    | (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_2__DOT__shift_reg_31))));
    vlTOPp->PowerMeter__DOT___zz_power_val_q = (0xffffU 
                                                & ((IData)(vlTOPp->PowerMeter__DOT__power_val_q) 
                                                   - 
                                                   ((0xf800U 
                                                     & (VL_NEGATE_I((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31) 
                                                                                >> 0xaU)))) 
                                                        << 0xbU)) 
                                                    | (IData)(vlTOPp->PowerMeter__DOT__shiftRegisterE_3__DOT__shift_reg_31))));
    vlTOPp->PowerMeter__DOT__power_cal_valid = ((~ (IData)(vlTOPp->reset)) 
                                                & (IData)(vlTOPp->raw_data_valid));
}

VL_INLINE_OPT void VPowerMeter::_sequent__TOP__8(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_sequent__TOP__8\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->PowerMeter__DOT__power_cal_i = (0x7ffU 
                                            & ((0x800U 
                                                & (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i))
                                                ? (
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i) 
                                                        >> 0xaU)))
                                                    ? 0x400U
                                                    : (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i))
                                                    ? 0x3ffU
                                                    : (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_i))));
    vlTOPp->PowerMeter__DOT__power_cal_q = (0x7ffU 
                                            & ((0x800U 
                                                & (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q))
                                                ? (
                                                   (3U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q) 
                                                        >> 0xaU)))
                                                    ? 0x400U
                                                    : (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q))
                                                : (
                                                   (0x400U 
                                                    & (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q))
                                                    ? 0x3ffU
                                                    : (IData)(vlTOPp->PowerMeter__DOT___zz_power_cal_q))));
}

void VPowerMeter::_eval(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_eval\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VPowerMeter::_change_request(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_change_request\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VPowerMeter::_change_request_1(VPowerMeter__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_change_request_1\n"); );
    VPowerMeter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPowerMeter::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPowerMeter::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
