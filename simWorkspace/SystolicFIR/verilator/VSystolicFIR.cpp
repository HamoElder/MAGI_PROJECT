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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/SystolicFIR.v", 7, "",
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/SystolicFIR.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__10(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__10\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__valid_regNext));
    vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__valid_regNext));
    vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__valid_regNext));
    vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__next_adder)))));
        }
    }
    vlTOPp->filtered_data_3_valid = vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__valid_regNext;
    vlTOPp->filtered_data_2_valid = vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__valid_regNext;
    vlTOPp->filtered_data_1_valid = vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__valid_regNext;
    vlTOPp->filtered_data_0_valid = vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__valid_regNext;
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->filtered_data_3_payload = (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__next_adder);
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_231__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__next_adder)))));
        }
    }
    vlTOPp->filtered_data_2_payload = (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__next_adder);
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_202__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__next_adder)))));
        }
    }
    vlTOPp->filtered_data_1_payload = (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__next_adder);
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_173__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__next_adder)))));
        }
    }
    vlTOPp->filtered_data_0_payload = (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__next_adder);
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_144__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__11(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__11\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_230__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_201__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_172__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_143__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__12(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__12\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_229__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_200__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_171__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_142__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__13(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__13\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(3), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(3), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(3), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(3), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_228__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_199__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__14(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__14\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_170__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_141__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(5), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(5), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(5), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(5), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(7), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(7), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(7), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(7), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__15(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__15\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_227__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_198__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_169__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_140__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xa), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xa), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xa), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xa), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xd), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xd), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xd), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__16(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__16\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xd), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_226__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_197__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_168__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_139__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x10), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x10), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x10), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x10), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x13), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__17(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__17\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x13), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x13), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x13), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_225__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_196__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_167__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_138__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x15), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x15), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x15), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x15), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__18(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__18\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_224__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_195__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_166__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_137__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__19(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__19\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x17), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_223__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_194__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_165__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_136__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x15), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x15), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x15), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__20(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__20\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x15), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x13), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x13), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x13), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x13), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_222__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_193__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_164__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_135__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x10), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__next_adder)))));
        }
    }
}
