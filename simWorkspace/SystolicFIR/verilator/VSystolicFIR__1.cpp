// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystolicFIR.h for the primary calling header

#include "VSystolicFIR.h"
#include "VSystolicFIR__Syms.h"

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__21(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__21\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x10), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x10), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0x10), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xd), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xd), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xd), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xd), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_221__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__22(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__22\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_192__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_163__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_134__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xa), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xa), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xa), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(0xa), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(7), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(7), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(7), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(7), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__23(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__23\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_220__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_191__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_162__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_133__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(5), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(5), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(5), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(5), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(3), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(3), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(3), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__24(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__24\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_MULS_QQQ(38,38,38, VL_ULL(3), 
                                                      (VL_ULL(0x3fffffffff) 
                                                       & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_1))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_219__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_190__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_161__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_132__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__next_adder)))));
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__25(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__25\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__mult 
                = (VL_ULL(0x3fffffffff) & VL_EXTENDS_QI(38,32, vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_218__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_189__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_160__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_131__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__next_adder)))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__next_adder 
                = (VL_ULL(0x3fffffffff) & (vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__mult 
                                           + (((QData)((IData)(
                                                               (0x3fU 
                                                                & VL_NEGATE_I((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__next_adder 
                                                                                >> 0x1fU)))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__next_adder)))));
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__26(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__26\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->raw_data_3_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__next_adder 
                = vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__mult;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->raw_data_2_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__next_adder 
                = vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__mult;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->raw_data_1_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__next_adder 
                = vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__mult;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__next_adder = VL_ULL(0);
    } else {
        if (vlTOPp->raw_data_0_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__next_adder 
                = vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__mult;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_217__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_188__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_159__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_130__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->raw_data_3_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->raw_data_2_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->raw_data_1_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__mult = VL_ULL(0);
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__mult = VL_ULL(0);
    } else {
        if (vlTOPp->raw_data_0_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__mult = VL_ULL(0);
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_216__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_187__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_158__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_129__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__27(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__27\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_215__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_186__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_157__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_128__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_214__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_185__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_156__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_127__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__28(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__28\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_213__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_184__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_155__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_126__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_212__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_183__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_154__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_125__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_211__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_182__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_153__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_124__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__29(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__29\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_210__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_181__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_152__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_123__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_209__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_180__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_151__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_122__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_208__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_179__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_150__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_121__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__30(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__30\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_207__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_178__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_149__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_120__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_206__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_177__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_148__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_119__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_205__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
}

VL_INLINE_OPT void VSystolicFIR::_sequent__TOP__31(VSystolicFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystolicFIR::_sequent__TOP__31\n"); );
    VSystolicFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_176__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_147__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_118__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__valid_regNext));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_204__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_175__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_146__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__valid_regNext) {
            vlTOPp->SystolicFIR__DOT__systolicCore_117__DOT__shiftRegister_116__DOT__shift_reg_0 
                = vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__shiftRegister_116__DOT__shift_reg_1;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_3_valid));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->raw_data_3_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_2_valid));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->raw_data_2_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_1_valid));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->raw_data_1_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->raw_data_0_valid));
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__shiftRegister_116__DOT__shift_reg_1 = 0U;
    } else {
        if (vlTOPp->raw_data_0_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__shiftRegister_116__DOT__shift_reg_1 
                = vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__shiftRegister_116__DOT__shift_reg_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->raw_data_3_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_203__DOT__shiftRegister_116__DOT__shift_reg_0 
                = ((0xffff0000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->raw_data_3_payload) 
                                                           >> 0xfU)))) 
                                   << 0x10U)) | (IData)(vlTOPp->raw_data_3_payload));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->raw_data_2_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_174__DOT__shiftRegister_116__DOT__shift_reg_0 
                = ((0xffff0000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->raw_data_2_payload) 
                                                           >> 0xfU)))) 
                                   << 0x10U)) | (IData)(vlTOPp->raw_data_2_payload));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->raw_data_1_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_145__DOT__shiftRegister_116__DOT__shift_reg_0 
                = ((0xffff0000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->raw_data_1_payload) 
                                                           >> 0xfU)))) 
                                   << 0x10U)) | (IData)(vlTOPp->raw_data_1_payload));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__shiftRegister_116__DOT__shift_reg_0 = 0U;
    } else {
        if (vlTOPp->raw_data_0_valid) {
            vlTOPp->SystolicFIR__DOT__systolicCore_116__DOT__shiftRegister_116__DOT__shift_reg_0 
                = ((0xffff0000U & (VL_NEGATE_I((IData)(
                                                       (1U 
                                                        & ((IData)(vlTOPp->raw_data_0_payload) 
                                                           >> 0xfU)))) 
                                   << 0x10U)) | (IData)(vlTOPp->raw_data_0_payload));
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
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
        vlTOPp->_sequent__TOP__21(vlSymsp);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
        vlTOPp->_sequent__TOP__27(vlSymsp);
        vlTOPp->_sequent__TOP__28(vlSymsp);
        vlTOPp->_sequent__TOP__29(vlSymsp);
        vlTOPp->_sequent__TOP__30(vlSymsp);
        vlTOPp->_sequent__TOP__31(vlSymsp);
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
    if (VL_UNLIKELY((raw_data_0_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_0_valid");}
    if (VL_UNLIKELY((raw_data_1_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_1_valid");}
    if (VL_UNLIKELY((raw_data_2_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_2_valid");}
    if (VL_UNLIKELY((raw_data_3_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_3_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
