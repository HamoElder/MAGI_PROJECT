// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCyclicPrefix.h for the primary calling header

#include "VCyclicPrefix.h"
#include "VCyclicPrefix__Syms.h"

//==========

void VCyclicPrefix::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCyclicPrefix::eval\n"); );
    VCyclicPrefix__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CyclicPrefix.v", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCyclicPrefix::_eval_initial_loop(VCyclicPrefix__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/CyclicPrefix.v", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VCyclicPrefix::_sequent__TOP__1(VCyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_sequent__TOP__1\n"); );
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0 = 0U;
    if (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0[0U] 
            = ((0xfffffffeU & ((IData)((((QData)((IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlTOPp->raw_data_payload_fragment_cha_i)))) 
                               << 1U)) | (IData)(vlTOPp->raw_data_payload_last));
        vlTOPp->__Vdlyvval__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0[1U] 
            = ((1U & ((IData)((((QData)((IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->raw_data_payload_fragment_cha_i)))) 
                      >> 0x1fU)) | (0xfffffffeU & ((IData)(
                                                           ((((QData)((IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlTOPp->raw_data_payload_fragment_cha_i))) 
                                                            >> 0x20U)) 
                                                   << 1U)));
        vlTOPp->__Vdlyvval__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0[2U] 
            = (1U & ((IData)(((((QData)((IData)(vlTOPp->raw_data_payload_fragment_cha_q)) 
                                << 0x20U) | (QData)((IData)(vlTOPp->raw_data_payload_fragment_cha_i))) 
                              >> 0x20U)) >> 0x1fU));
        vlTOPp->__Vdlyvset__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0 
            = vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VCyclicPrefix::_sequent__TOP__2(VCyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_sequent__TOP__2\n"); );
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = ((0x40U & (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[0U] 
                              << 6U)) | (((IData)(vlTOPp->raw_data_payload_last) 
                                          << 5U) | 
                                         ((((0xfU & 
                                             (((IData)(vlTOPp->data_len) 
                                               - (IData)(vlTOPp->cp_len)) 
                                              - (IData)(1U))) 
                                            <= (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy)) 
                                           << 4U) | 
                                          (((0U != (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy)) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->CyclicPrefix__DOT__cp_state) 
                                               << 1U) 
                                              | (IData)(vlTOPp->reset))))));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CyclicPrefix__DOT__cp_en = vlTOPp->__Vtable1_CyclicPrefix__DOT__cp_en
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CyclicPrefix__DOT__fifo_pop_en = vlTOPp->__Vtable1_CyclicPrefix__DOT__fifo_pop_en
            [__Vtableidx1];
    }
    if ((4U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->CyclicPrefix__DOT__cp_state = vlTOPp->__Vtable1_CyclicPrefix__DOT__cp_state
            [__Vtableidx1];
    }
    if (vlTOPp->reset) {
        vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popping))) {
            vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy 
                = vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing;
        }
    }
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value)));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy 
        = ((((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy) 
             & (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch)) 
            << 3U) | (7U & ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
                            - (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value))));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full 
        = ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy));
    vlTOPp->raw_data_ready = (1U & (~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full)));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full))))));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popping 
        = ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_pop_valid) 
           & (IData)(vlTOPp->CyclicPrefix__DOT__fifo_pop_en));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popping) {
        vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VCyclicPrefix::_sequent__TOP__4(VCyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_sequent__TOP__4\n"); );
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[0U] 
        = vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram
        [vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext][0U];
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[1U] 
        = vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram
        [vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext][1U];
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[2U] 
        = vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram
        [vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext][2U];
    if (vlTOPp->__Vdlyvset__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0) {
        vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0][0U] 
            = vlTOPp->__Vdlyvval__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0[0U];
        vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0][1U] 
            = vlTOPp->__Vdlyvval__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0[1U];
        vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0][2U] 
            = vlTOPp->__Vdlyvval__CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram__v0[2U];
    }
}

VL_INLINE_OPT void VCyclicPrefix::_combo__TOP__5(VCyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_combo__TOP__5\n"); );
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->raw_data_valid) & (~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full)));
    vlTOPp->result_valid = ((IData)(vlTOPp->CyclicPrefix__DOT__cp_en)
                             ? ((IData)(vlTOPp->raw_data_valid) 
                                & (IData)(vlTOPp->raw_data_ready))
                             : ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_pop_valid) 
                                & (IData)(vlTOPp->CyclicPrefix__DOT__fifo_pop_en)));
    vlTOPp->result_payload_fragment_cha_i = ((IData)(vlTOPp->CyclicPrefix__DOT__cp_en)
                                              ? vlTOPp->raw_data_payload_fragment_cha_i
                                              : ((vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[1U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[0U] 
                                                    >> 1U)));
    vlTOPp->result_payload_fragment_cha_q = ((IData)(vlTOPp->CyclicPrefix__DOT__cp_en)
                                              ? vlTOPp->raw_data_payload_fragment_cha_q
                                              : ((vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[2U] 
                                                  << 0x1fU) 
                                                 | (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[1U] 
                                                    >> 1U)));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_1 = 0U;
    if (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing) {
        vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_1 = 1U;
    }
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing) {
        vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->result_payload_last = ((~ (IData)(vlTOPp->CyclicPrefix__DOT__cp_en)) 
                                   & (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[0U] 
                                      & (IData)(vlTOPp->result_valid)));
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext 
        = (7U & ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
                 + (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VCyclicPrefix::_sequent__TOP__6(VCyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_sequent__TOP__6\n"); );
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext 
        = (7U & ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value) 
                 + (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement)));
}

void VCyclicPrefix::_eval(VCyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_eval\n"); );
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCyclicPrefix::_change_request(VCyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_change_request\n"); );
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCyclicPrefix::_change_request_1(VCyclicPrefix__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_change_request_1\n"); );
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCyclicPrefix::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCyclicPrefix::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((cp_len & 0xfcU))) {
        Verilated::overWidthError("cp_len");}
    if (VL_UNLIKELY((data_len & 0xf0U))) {
        Verilated::overWidthError("data_len");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
