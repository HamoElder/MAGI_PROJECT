// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBitonicSort.h for the primary calling header

#include "VBitonicSort.h"
#include "VBitonicSort__Syms.h"

//==========

void VBitonicSort::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBitonicSort::eval\n"); );
    VBitonicSort__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/BitonicSort.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBitonicSort::_eval_initial_loop(VBitonicSort__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/BitonicSort.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VBitonicSort::_sequent__TOP__2(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_sequent__TOP__2\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_idx 
        = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx));
    vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_idx 
        = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx));
    vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_data 
        = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_data 
        = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel)
            ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data)
            : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data));
    vlTOPp->sorted_data_1_payload_idx = vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_idx;
    vlTOPp->sorted_data_0_payload_idx = vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_idx;
    vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_idx 
        = ((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx));
    vlTOPp->sorted_data_1_payload_data = vlTOPp->BitonicSort__DOT__cmpUnit_7_out2_regNext_data;
    vlTOPp->sorted_data_0_payload_data = vlTOPp->BitonicSort__DOT__cmpUnit_7_out1_regNext_data;
    vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data 
        = ((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data)
            : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data));
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx 
            = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
                ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx)
                : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data 
            = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
                ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data)
                : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_idx 
            = ((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx)
                : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_0_data 
            = ((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data)
                : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_idx 
            = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
                ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx)
                : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_0_data 
            = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
                ? (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data)
                : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_2_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_idx 
            = ((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx)
                : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_0_data 
            = ((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
                ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data)
                : (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_2_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_idx 
            = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
                ? (IData)(vlTOPp->raw_data_payload_idx)
                : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_0_data 
            = ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
                ? (IData)(vlTOPp->raw_data_payload_data)
                : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data));
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_6_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_data;
    }
}

VL_INLINE_OPT void VBitonicSort::_sequent__TOP__3(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_sequent__TOP__3\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_5_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_4_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_3_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_2_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_idx 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_1_data 
            = vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_data;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_idx 
            = vlTOPp->raw_data_payload_idx;
    }
    if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
        vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_0_data 
            = vlTOPp->raw_data_payload_data;
    }
}

VL_INLINE_OPT void VBitonicSort::_sequent__TOP__4(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_sequent__TOP__4\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdly__BitonicSort__DOT__cnt;
    // Body
    __Vdly__BitonicSort__DOT__cnt = vlTOPp->BitonicSort__DOT__cnt;
    if (vlTOPp->reset) {
        __Vdly__BitonicSort__DOT__cnt = 0U;
    } else {
        if (vlTOPp->BitonicSort__DOT__when_BitonicSort_l23) {
            __Vdly__BitonicSort__DOT__cnt = ((0x17U 
                                              == (IData)(vlTOPp->BitonicSort__DOT__cnt))
                                              ? 0U : (IData)(vlTOPp->BitonicSort__DOT___zz_cnt));
        }
    }
    vlTOPp->BitonicSort__DOT__cnt = __Vdly__BitonicSort__DOT__cnt;
    vlTOPp->BitonicSort__DOT___zz_cnt = (0x1fU & ((IData)(1U) 
                                                  + (IData)(vlTOPp->BitonicSort__DOT__cnt)));
    vlTOPp->sorted_data_0_valid = (0xfU < (IData)(vlTOPp->BitonicSort__DOT__cnt));
    vlTOPp->sorted_data_1_valid = (0xfU < (IData)(vlTOPp->BitonicSort__DOT__cnt));
    vlTOPp->raw_data_ready = (0x10U > (IData)(vlTOPp->BitonicSort__DOT__cnt));
}

VL_INLINE_OPT void VBitonicSort::_combo__TOP__6(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_combo__TOP__6\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data) 
           < (IData)(vlTOPp->raw_data_payload_data));
    vlTOPp->BitonicSort__DOT__when_BitonicSort_l23 
        = (((IData)(vlTOPp->raw_data_valid) & (IData)(vlTOPp->raw_data_ready)) 
           | (0x10U <= (IData)(vlTOPp->BitonicSort__DOT__cnt)));
    vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_idx)
          : (IData)(vlTOPp->raw_data_payload_idx));
    vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_7__DOT__shift_reg_7_data)
          : (IData)(vlTOPp->raw_data_payload_data));
    vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx 
        = ((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_idx));
    vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data 
        = ((4U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_4_out1_data)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_8__DOT__shift_reg_3_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data) 
           < (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_idx)
          : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_idx));
    vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_9__DOT__shift_reg_3_data)
          : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_3_out2_data));
    vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx 
        = ((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_idx));
    vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data 
        = ((2U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_5_out1_data)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_10__DOT__shift_reg_1_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data) 
           < (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_idx)
          : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_idx));
    vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data = 
        ((IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6__DOT__cmp_less_result)
          ? (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_11__DOT__shift_reg_1_data)
          : (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_4_out2_data));
    vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_idx 
        = ((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_idx)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_idx));
    vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data 
        = ((1U & (IData)(vlTOPp->BitonicSort__DOT__cnt))
            ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_6_out1_data)
            : (IData)(vlTOPp->BitonicSort__DOT__shiftRegister_12__DOT__shift_reg_0_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result 
        = ((IData)(vlTOPp->BitonicSort__DOT__shiftRegister_13__DOT__shift_reg_0_data) 
           < (IData)(vlTOPp->BitonicSort__DOT__cmpSwitch_5_out2_data));
    vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_sel 
        = (1U & ((IData)(vlTOPp->BitonicSort__DOT__when_BitonicSort_l23)
                  ? (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result)
                  : (~ (IData)(vlTOPp->BitonicSort__DOT__cmpUnit_7__DOT__cmp_less_result))));
}

void VBitonicSort::_eval(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_eval\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VBitonicSort::_change_request(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_change_request\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VBitonicSort::_change_request_1(VBitonicSort__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_change_request_1\n"); );
    VBitonicSort* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VBitonicSort::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBitonicSort::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_idx & 0xf0U))) {
        Verilated::overWidthError("raw_data_payload_idx");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
