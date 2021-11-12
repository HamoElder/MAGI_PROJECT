// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicFIR.h for the primary calling header

#include "VSystolicFIR.h"
#include "VSystolicFIR__Syms.h"

//==========

void VSystolicFIR::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSystolicFIR::eval\n"); );
    VSystolicFIR__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/SystolicFIR.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VSystolicFIR::_eval_initial_loop(VSystolicFIR__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/SystolicFIR.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSystolicFIR::_combo__TOP__1(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_combo__TOP__1\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_valid = vlTOPp->raw_data_valid;
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__5(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__5\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_31 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_30 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_29));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_31 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_30 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_29));
    vlTOPp->SystolicFIR__DOT__shiftRegister_67__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_50__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_1;
    vlTOPp->filtered_data_payload_cha_q = vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_31;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_30 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_29 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_28 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_27));
    vlTOPp->filtered_data_payload_cha_i = vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_31;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_30 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_29 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_28 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_27));
    vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_28 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_27 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_26 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_25));
    vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_28 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_27 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_26 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_25));
    vlTOPp->SystolicFIR__DOT__shiftRegister_66__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_26 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_25 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_24 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_23));
    vlTOPp->SystolicFIR__DOT__shiftRegister_49__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_26 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_25 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_24 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_23));
    vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_24 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_23 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_22 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_21));
    vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_24 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_23 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_22 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_21));
    vlTOPp->SystolicFIR__DOT__shiftRegister_65__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_22 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_21 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_20 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_19));
    vlTOPp->SystolicFIR__DOT__shiftRegister_48__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_22 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_21 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_20 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_19));
    vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_20 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_19 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_18 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_17));
    vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_20 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_19 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_18 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_17));
    vlTOPp->SystolicFIR__DOT__shiftRegister_64__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_18 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_17 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_16 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_15));
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__6(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__6\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__shiftRegister_47__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_18 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_17 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_16 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_15));
    vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_16 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_15 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_14 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_13));
    vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_16 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_15 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_14 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_13));
    vlTOPp->SystolicFIR__DOT__shiftRegister_63__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_14 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_13 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_12 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_11));
    vlTOPp->SystolicFIR__DOT__shiftRegister_46__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_14 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_13 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_12 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_11));
    vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_12 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_11 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_10 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_9));
    vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_12 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_11 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_10 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_9));
    vlTOPp->SystolicFIR__DOT__shiftRegister_62__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_10 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_9 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_8 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_7));
    vlTOPp->SystolicFIR__DOT__shiftRegister_45__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_10 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_9 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_8 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_7));
    vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_8 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_7 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_6 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_5));
    vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_8 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_7 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_6 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_5));
    vlTOPp->SystolicFIR__DOT__shiftRegister_61__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_6 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_5 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_4 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_3));
    vlTOPp->SystolicFIR__DOT__shiftRegister_44__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_6 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_5 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_4 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_3));
    vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_4 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_3 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_2 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_1));
    vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_4 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_1)))));
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__7(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__7\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_3 
        = (0xffffffU & (vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_2 
                        + vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_1));
    vlTOPp->SystolicFIR__DOT__shiftRegister_60__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_1 
        = vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q_2 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT__shiftRegister_43__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_1 
        = vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i_2 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_q 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT___zz_filtered_data_payload_cha_i 
        = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x7fU), 
                                   (0xffffffU & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_1)))));
    vlTOPp->SystolicFIR__DOT__shiftRegister_59__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_42__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_58__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_41__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_57__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_40__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_56__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_39__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_55__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_38__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_54__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_37__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_53__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_36__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_52__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_35__DOT__shift_reg_0 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_1;
    vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_1 
        = vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_0;
    vlTOPp->SystolicFIR__DOT__shiftRegister_51__DOT__shift_reg_0 
        = vlTOPp->raw_data_payload_cha_q;
    vlTOPp->SystolicFIR__DOT__shiftRegister_34__DOT__shift_reg_0 
        = vlTOPp->raw_data_payload_cha_i;
}

void VSystolicFIR::_eval(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_eval\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VSystolicFIR::_change_request(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_change_request\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VSystolicFIR::_change_request_1(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_change_request_1\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSystolicFIR::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
