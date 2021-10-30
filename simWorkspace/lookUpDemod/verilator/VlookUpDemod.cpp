// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VlookUpDemod.h for the primary calling header

#include "VlookUpDemod.h"
#include "VlookUpDemod__Syms.h"

//==========

void VlookUpDemod::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VlookUpDemod::eval\n"); );
    VlookUpDemod__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/lookUpDemod.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VlookUpDemod::_eval_initial_loop(VlookUpDemod__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/lookUpDemod.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VlookUpDemod::_sequent__TOP__1(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_sequent__TOP__1\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->lookUpDemod__DOT__demod_data_i = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_i));
    vlTOPp->lookUpDemod__DOT__demod_data_q = ((IData)(vlTOPp->reset)
                                               ? 0U
                                               : (IData)(vlTOPp->data_flow_mod_iq_payload_cha_q));
    vlTOPp->lookUpDemod__DOT__unit_valid = ((~ (IData)(vlTOPp->reset)) 
                                            & (IData)(vlTOPp->lookUpDemod__DOT__demod_valid));
    vlTOPp->data_flow_unit_data_valid = vlTOPp->lookUpDemod__DOT__unit_valid;
}

VL_INLINE_OPT void VlookUpDemod::_sequent__TOP__3(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_sequent__TOP__3\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x4000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_14 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x2000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_13 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x1000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_12 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((8U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_3 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((2U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_1 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x400U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_10 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x10U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_4 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((4U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_2 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x800U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_11 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x20U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_5 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((1U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_0 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x40U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_6 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x80U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_7 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x100U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_8 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((1U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_0 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U == (IData)(vlTOPp->w_sel))) {
            if ((0x200U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                vlTOPp->lookUpDemod__DOT__comp_mem_i_9 
                    = (0xffffU & vlTOPp->w_data);
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((2U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_1 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((4U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_2 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((8U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_3 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VlookUpDemod::_sequent__TOP__4(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_sequent__TOP__4\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x10U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_4 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x20U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_5 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x40U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_6 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x80U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_7 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x100U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_8 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x200U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_9 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x400U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_10 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x800U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_11 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x1000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_12 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x2000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_13 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U == (IData)(vlTOPp->w_sel))) {
                    if ((0x4000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__comp_mem_q_14 
                            = (0xffffU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->lookUpDemod__DOT__demod_valid) {
        if (((((((((0U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q)) 
                   | (1U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                  | (3U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                 | (7U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                | (0xfU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
               | (0x1fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
              | (0x3fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
             | (0x7fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q)))) {
            vlTOPp->lookUpDemod__DOT__unit_data_q = 
                ((0U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                  ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_0)
                  : ((1U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                      ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_1)
                      : ((3U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                          ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_2)
                          : ((7U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                              ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_3)
                              : ((0xfU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                                  ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_4)
                                  : ((0x1fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                                      ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_5)
                                      : ((0x3fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                                          ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_6)
                                          : (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_7))))))));
        } else {
            if (((((((((0xffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q)) 
                       | (0x1ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                      | (0x3ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                     | (0x7ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                    | (0xfffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                   | (0x1fffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                  | (0x3fffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))) 
                 | (0x7fffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q)))) {
                vlTOPp->lookUpDemod__DOT__unit_data_q 
                    = ((0xffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                        ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_8)
                        : ((0x1ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                            ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_9)
                            : ((0x3ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                                ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_10)
                                : ((0x7ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                                    ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_11)
                                    : ((0xfffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                                        ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_12)
                                        : ((0x1fffU 
                                            == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                                            ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_13)
                                            : ((0x3fffU 
                                                == (IData)(vlTOPp->lookUpDemod__DOT__compTable_q))
                                                ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_14)
                                                : (IData)(vlTOPp->lookUpDemod__DOT__code_mem_q_15))))))));
            }
        }
    } else {
        vlTOPp->lookUpDemod__DOT__unit_data_q = 0U;
    }
    if (vlTOPp->lookUpDemod__DOT__demod_valid) {
        if (((((((((0U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i)) 
                   | (1U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                  | (3U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                 | (7U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                | (0xfU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
               | (0x1fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
              | (0x3fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
             | (0x7fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i)))) {
            vlTOPp->lookUpDemod__DOT__unit_data_i = 
                ((0U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                  ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_0)
                  : ((1U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                      ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_1)
                      : ((3U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                          ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_2)
                          : ((7U == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                              ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_3)
                              : ((0xfU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                                  ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_4)
                                  : ((0x1fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                                      ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_5)
                                      : ((0x3fU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                                          ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_6)
                                          : (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_7))))))));
        } else {
            if (((((((((0xffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i)) 
                       | (0x1ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                      | (0x3ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                     | (0x7ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                    | (0xfffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                   | (0x1fffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                  | (0x3fffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))) 
                 | (0x7fffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i)))) {
                vlTOPp->lookUpDemod__DOT__unit_data_i 
                    = ((0xffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                        ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_8)
                        : ((0x1ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                            ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_9)
                            : ((0x3ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                                ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_10)
                                : ((0x7ffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                                    ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_11)
                                    : ((0xfffU == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                                        ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_12)
                                        : ((0x1fffU 
                                            == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                                            ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_13)
                                            : ((0x3fffU 
                                                == (IData)(vlTOPp->lookUpDemod__DOT__compTable_i))
                                                ? (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_14)
                                                : (IData)(vlTOPp->lookUpDemod__DOT__code_mem_i_15))))))));
            }
        }
    } else {
        vlTOPp->lookUpDemod__DOT__unit_data_i = 0U;
    }
}

VL_INLINE_OPT void VlookUpDemod::_sequent__TOP__5(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_sequent__TOP__5\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((1U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_0 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((2U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_1 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((4U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_2 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((8U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_3 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x10U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_4 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x20U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_5 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x40U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_6 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x80U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_7 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x100U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_8 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x200U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_9 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x400U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_10 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x800U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_11 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VlookUpDemod::_sequent__TOP__6(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_sequent__TOP__6\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x1000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_12 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x2000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_13 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x4000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_14 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U != (IData)(vlTOPp->w_sel))) {
                if ((2U != (IData)(vlTOPp->w_sel))) {
                    if ((0x8000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                        vlTOPp->lookUpDemod__DOT__code_mem_q_15 
                            = (0xfU & vlTOPp->w_data);
                    }
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((1U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_0 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((2U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_1 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((4U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_2 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((8U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_3 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x10U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_4 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x20U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_5 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x40U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_6 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x80U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_7 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x100U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_8 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x200U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_9 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x400U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_10 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x800U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_11 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x1000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_12 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x2000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_13 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x4000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_14 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
    if (vlTOPp->w_en) {
        if ((0U != (IData)(vlTOPp->w_sel))) {
            if ((1U == (IData)(vlTOPp->w_sel))) {
                if ((0x8000U & ((IData)(1U) << (IData)(vlTOPp->w_addr)))) {
                    vlTOPp->lookUpDemod__DOT__code_mem_i_15 
                        = (0xfU & vlTOPp->w_data);
                }
            }
        }
    }
}

VL_INLINE_OPT void VlookUpDemod::_sequent__TOP__9(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_sequent__TOP__9\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->lookUpDemod__DOT__compTable_q = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q));
    vlTOPp->lookUpDemod__DOT__compTable_i = ((IData)(vlTOPp->reset)
                                              ? 0U : (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i));
    vlTOPp->lookUpDemod__DOT__demod_valid = ((~ (IData)(vlTOPp->reset)) 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__demod_valid_iq));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7ffeU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | VL_LTS_III(32,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_0), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7ffdU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_1), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 1U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7ffbU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_2), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 2U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7ff7U 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_3), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 3U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7fefU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_4), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 4U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7fdfU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_5), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 5U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7fbfU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_6), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 6U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7f7fU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_7), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 7U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7effU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_8), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 8U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7dffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_9), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 9U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7bffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_10), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xaU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x77ffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_11), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xbU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x6fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_12), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xcU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x5fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_13), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xdU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x3fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_14), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xeU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7ffeU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | VL_LTS_III(32,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_0), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7ffdU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_1), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 1U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7ffbU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_2), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 2U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7ff7U 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_3), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 3U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7fefU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_4), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 4U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7fdfU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_5), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 5U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7fbfU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_6), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 6U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7f7fU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_7), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 7U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7effU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_8), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 8U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7dffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_9), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 9U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7bffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_10), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xaU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x77ffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_11), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xbU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x6fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_12), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xcU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x5fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_13), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xdU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x3fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_14), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xeU));
    vlTOPp->lookUpDemod__DOT__demod_valid_iq = ((~ (IData)(vlTOPp->reset)) 
                                                & ((IData)(vlTOPp->data_flow_mod_iq_valid) 
                                                   & (~ (IData)(vlTOPp->w_en))));
}

VL_INLINE_OPT void VlookUpDemod::_combo__TOP__10(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_combo__TOP__10\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_flow_unit_data_payload = (0x7fU & 
                                           (((IData)(vlTOPp->lookUpDemod__DOT__unit_data_i) 
                                             << (IData)(vlTOPp->iq_shift)) 
                                            | (IData)(vlTOPp->lookUpDemod__DOT__unit_data_q)));
}

void VlookUpDemod::_eval(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_eval\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__10(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VlookUpDemod::_change_request(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_change_request\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VlookUpDemod::_change_request_1(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_change_request_1\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VlookUpDemod::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((w_en & 0xfeU))) {
        Verilated::overWidthError("w_en");}
    if (VL_UNLIKELY((w_addr & 0xf0U))) {
        Verilated::overWidthError("w_addr");}
    if (VL_UNLIKELY((w_sel & 0xfcU))) {
        Verilated::overWidthError("w_sel");}
    if (VL_UNLIKELY((iq_shift & 0xfcU))) {
        Verilated::overWidthError("iq_shift");}
    if (VL_UNLIKELY((data_flow_mod_iq_valid & 0xfeU))) {
        Verilated::overWidthError("data_flow_mod_iq_valid");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
