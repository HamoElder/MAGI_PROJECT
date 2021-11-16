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

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__4(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__4\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__next_adder));
        }
    }
    vlTOPp->filtered_data_valid = vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__valid_regNext;
    vlTOPp->filtered_data_payload_0 = vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__next_adder;
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(6U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__mult = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_41__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0xfffffcU), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__next_adder));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0xfffffdU), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_40__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(5U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__next_adder));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(6U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_39__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0xfffffaU), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__next_adder));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0xfffff3U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__next_adder));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__5(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__5\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_38__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(7U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x2cU), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_37__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x40U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0x2cU), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_36__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(7U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0xfffff3U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_35__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0xfffffaU), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(6U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__6(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__6\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_34__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(5U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0xfffffdU), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_33__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__next_adder 
                = (0xffffffU & (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__mult 
                                + vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(0xfffffcU), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__mult = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__mult = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__next_adder 
                = vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__mult;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_32__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__mult = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__mult 
                = (0xffffffU & VL_MULS_III(24,24,24, (IData)(6U), 
                                           (0xffffffU 
                                            & VL_EXTENDS_II(24,16, (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_1)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_31__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_30__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_29__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_28__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__7(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__7\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_27__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_26__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_25__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_24__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_23__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_22__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_valid));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_21__DOT__shiftRegister_21__DOT__shift_reg_0 
                = vlTOPp->raw_data_payload_0;
        }
    }
}

void VSystolicFIR::_eval(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_eval\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
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
