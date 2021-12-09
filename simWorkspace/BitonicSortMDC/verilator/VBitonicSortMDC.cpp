// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitonicSortMDC.h for the primary calling header

#include "VBitonicSortMDC.h"
#include "VBitonicSortMDC__Syms.h"

//==========

void VBitonicSortMDC::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBitonicSortMDC::eval\n"); );
    VBitonicSortMDC__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/BitonicSortMDC.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBitonicSortMDC::_eval_initial_loop(VBitonicSortMDC__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/BitonicSortMDC.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBitonicSortMDC::_sequent__TOP__1(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_sequent__TOP__1\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_7_out2_regNext_data 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_7_out1_regNext_data 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data));
    vlTOPp->sorted_data_payload_high_data = vlTOPp->BitonicSortMDC__DOT__cmpUnit_7_out2_regNext_data;
    vlTOPp->sorted_data_payload_low_data = vlTOPp->BitonicSortMDC__DOT__cmpUnit_7_out1_regNext_data;
    vlTOPp->BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data 
        = ((1U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_12__DOT__shift_reg_0_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6_out1_data));
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_12__DOT__shift_reg_0_data 
            = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel)
                ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data)
                : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data));
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_0_data 
            = ((2U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
                ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_1_data)
                : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5_out1_data));
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_0_data 
            = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel)
                ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data)
                : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data));
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_2_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_2_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_1_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_0_data 
            = ((4U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
                ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_3_data)
                : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4_out1_data));
    }
}

VL_INLINE_OPT void VBitonicSortMDC::_sequent__TOP__2(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_sequent__TOP__2\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_3_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_2_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_2_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_1_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_0_data 
            = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel)
                ? (IData)(vlTOPp->raw_data_payload_data)
                : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data));
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_6_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_6_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_5_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_5_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_4_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_4_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_3_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_3_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_2_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_2_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_1_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
        vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_0_data 
            = vlTOPp->raw_data_payload_data;
    }
}

VL_INLINE_OPT void VBitonicSortMDC::_sequent__TOP__3(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_sequent__TOP__3\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__BitonicSortMDC__DOT__cnt;
    // Body
    __Vdly__BitonicSortMDC__DOT__cnt = vlTOPp->BitonicSortMDC__DOT__cnt;
    if (vlTOPp->reset) {
        __Vdly__BitonicSortMDC__DOT__cnt = 0U;
    } else {
        if (vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27) {
            __Vdly__BitonicSortMDC__DOT__cnt = ((0x17U 
                                                 == (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
                                                 ? 0U
                                                 : (IData)(vlTOPp->BitonicSortMDC__DOT___zz_cnt));
        }
    }
    vlTOPp->BitonicSortMDC__DOT__cnt = __Vdly__BitonicSortMDC__DOT__cnt;
    vlTOPp->BitonicSortMDC__DOT___zz_cnt = (0x1fU & 
                                            ((IData)(1U) 
                                             + (IData)(vlTOPp->BitonicSortMDC__DOT__cnt)));
    vlTOPp->sorted_data_valid = (0xfU < (IData)(vlTOPp->BitonicSortMDC__DOT__cnt));
    vlTOPp->raw_data_ready = (0x10U > (IData)(vlTOPp->BitonicSortMDC__DOT__cnt));
}

VL_INLINE_OPT void VBitonicSortMDC::_combo__TOP__5(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_combo__TOP__5\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data) 
           < (IData)(vlTOPp->raw_data_payload_data));
    vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27 
        = (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready)) 
           | (0x10U <= (IData)(vlTOPp->BitonicSortMDC__DOT__cnt)));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_less_result))));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_4_out1_data 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_7__DOT__shift_reg_7_data)
            : (IData)(vlTOPp->raw_data_payload_data));
    vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data 
        = ((4U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_4_out1_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_8__DOT__shift_reg_3_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data) 
           < (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_less_result))));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_5_out1_data 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_9__DOT__shift_reg_3_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_3_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data 
        = ((2U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_5_out1_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_10__DOT__shift_reg_1_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data) 
           < (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->ascending_order) ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_less_result))));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_6_out1_data 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_11__DOT__shift_reg_1_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_4_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data 
        = ((1U & (IData)(vlTOPp->BitonicSortMDC__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_6_out1_data)
            : (IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_12__DOT__shift_reg_0_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSortMDC__DOT__shiftRegister_13__DOT__shift_reg_0_data) 
           < (IData)(vlTOPp->BitonicSortMDC__DOT__cmpSwitch_5_out2_data));
    vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->BitonicSortMDC__DOT__when_BitonicSortMDC_l27)
                  ? (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSortMDC__DOT__cmpUnit_7__DOT__cmp_less_result))));
}

void VBitonicSortMDC::_eval(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_eval\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VBitonicSortMDC::_change_request(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_change_request\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBitonicSortMDC::_change_request_1(VBitonicSortMDC__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_change_request_1\n"); );
    VBitonicSortMDC* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBitonicSortMDC::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSortMDC::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((ascending_order & 0xfeU))) {
        Verilated::overWidthError("ascending_order");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
