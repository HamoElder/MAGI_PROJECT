// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTransposeFIR.h for the primary calling header

#include "VTransposeFIR.h"
#include "VTransposeFIR__Syms.h"

//==========

void VTransposeFIR::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTransposeFIR::eval\n"); );
    VTransposeFIR__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/TransposeFIR.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTransposeFIR::_eval_initial_loop(VTransposeFIR__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/TransposeFIR.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTransposeFIR::_combo__TOP__2(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTransposeFIR::_combo__TOP__2\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_valid = vlTOPp->raw_data_valid;
}

VL_INLINE_OPT void VTransposeFIR::_sequent__TOP__6(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTransposeFIR::_sequent__TOP__6\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_10)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data 
                = (0xffffffU & (VL_MULS_III(24,24,24, 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                            (0xffffffU 
                                             & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_0)))) 
                                + vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data = 0U;
    } else {
        if (vlTOPp->raw_data_valid) {
            vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data = 0U;
        }
    }
}

VL_INLINE_OPT void VTransposeFIR::_sequent__TOP__7(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTransposeFIR::_sequent__TOP__7\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TransposeFIR__DOT__coff_mem_10 = 0x40U;
    vlTOPp->TransposeFIR__DOT__coff_mem_9 = 0x2cU;
    vlTOPp->TransposeFIR__DOT__coff_mem_8 = 7U;
    vlTOPp->TransposeFIR__DOT__coff_mem_7 = 0xf3U;
    vlTOPp->TransposeFIR__DOT__coff_mem_6 = 0xfaU;
    vlTOPp->TransposeFIR__DOT__coff_mem_5 = 6U;
    vlTOPp->TransposeFIR__DOT__coff_mem_4 = 5U;
    vlTOPp->TransposeFIR__DOT__coff_mem_3 = 0xfdU;
    vlTOPp->TransposeFIR__DOT__coff_mem_2 = 0xfcU;
    vlTOPp->TransposeFIR__DOT__coff_mem_1 = 0U;
    vlTOPp->TransposeFIR__DOT__coff_mem_0 = 6U;
}

VL_INLINE_OPT void VTransposeFIR::_combo__TOP__8(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTransposeFIR::_combo__TOP__8\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->filtered_data_payload_0 = (0xffffffU & 
                                       (VL_MULS_III(24,24,24, 
                                                    (0xffffffU 
                                                     & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                    (0xffffffU 
                                                     & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                        + vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data));
}

void VTransposeFIR::_eval(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTransposeFIR::_eval\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__8(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VTransposeFIR::_change_request(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTransposeFIR::_change_request\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTransposeFIR::_change_request_1(VTransposeFIR__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTransposeFIR::_change_request_1\n"); );
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTransposeFIR::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTransposeFIR::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
