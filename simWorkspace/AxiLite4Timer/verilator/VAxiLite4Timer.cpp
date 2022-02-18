// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Timer.h for the primary calling header

#include "VAxiLite4Timer.h"
#include "VAxiLite4Timer__Syms.h"

//==========

void VAxiLite4Timer::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4Timer::eval\n"); );
    VAxiLite4Timer__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/AxiLite4Timer.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4Timer::_eval_initial_loop(VAxiLite4Timer__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/AxiLite4Timer.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4Timer::_sequent__TOP__2(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_sequent__TOP__2\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    SData/*15:0*/ __Vdly__AxiLite4Timer__DOT__timer_module__DOT__timer_counter;
    // Body
    __Vdly__AxiLite4Timer__DOT__timer_module__DOT__timer_counter 
        = vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter;
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    if (vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A__DOT__divider_counter 
        = ((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full) 
                  | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))
            ? 0U : (0xfU & ((IData)(1U) + (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A__DOT__divider_counter))));
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B__DOT__divider_counter 
        = ((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full) 
                  | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))
            ? 0U : (0xffffU & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B__DOT__divider_counter) 
                               + (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full))));
    if (vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver) {
        if ((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT___zz_interrupt_clc) 
                   | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))) {
            __Vdly__AxiLite4Timer__DOT__timer_module__DOT__timer_counter 
                = vlTOPp->AxiLite4Timer__DOT___zz_reload_val;
        } else {
            if ((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit)))) {
                __Vdly__AxiLite4Timer__DOT__timer_module__DOT__timer_counter 
                    = (0xffffU & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter) 
                                  + (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full)));
            }
        }
    } else {
        __Vdly__AxiLite4Timer__DOT__timer_module__DOT__timer_counter 
            = (0xffffU & ((1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit) 
                                 | (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver))))
                           ? (IData)(vlTOPp->AxiLite4Timer__DOT___zz_reload_val)
                           : ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter) 
                              + (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full))));
    }
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter 
        = __Vdly__AxiLite4Timer__DOT__timer_module__DOT__timer_counter;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bresp;
}

VL_INLINE_OPT void VAxiLite4Timer::_sequent__TOP__3(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_sequent__TOP__3\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT___zz_interrupt_clc = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0xcU != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x18U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                                    vlTOPp->AxiLite4Timer__DOT___zz_interrupt_clc 
                                        = (1U & vlTOPp->axil4Ctrl_wdata);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT___zz_reload_val = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                        vlTOPp->AxiLite4Timer__DOT___zz_reload_val 
                            = (0xffffU & vlTOPp->axil4Ctrl_wdata);
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT___zz_divider_B_limit = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0xcU != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x10U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                                vlTOPp->AxiLite4Timer__DOT___zz_divider_B_limit 
                                    = (0xffffU & vlTOPp->axil4Ctrl_wdata);
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Timer::_sequent__TOP__4(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_sequent__TOP__4\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT___zz_divider_A_limit = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0xcU == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                            vlTOPp->AxiLite4Timer__DOT___zz_divider_A_limit 
                                = (0xfU & vlTOPp->axil4Ctrl_wdata);
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT___zz_period = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                    vlTOPp->AxiLite4Timer__DOT___zz_period 
                        = (0xffffU & vlTOPp->axil4Ctrl_wdata);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT___zz_oc_compare_val = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if ((4U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                if ((8U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0xcU != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((0x10U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((0x18U != (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((0x2cU == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                    if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                                        vlTOPp->AxiLite4Timer__DOT___zz_oc_compare_val 
                                            = (0xffffU 
                                               & vlTOPp->axil4Ctrl_wdata);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver 
                    = (1U & (vlTOPp->axil4Ctrl_wdata 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver = 1U;
    } else {
        if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver 
                    = (1U & (vlTOPp->axil4Ctrl_wdata 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT__timer_module_oc_en_driver = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                vlTOPp->AxiLite4Timer__DOT__timer_module_oc_en_driver 
                    = (1U & (vlTOPp->axil4Ctrl_wdata 
                             >> 4U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->axil4Ctrl_awaddr))) {
            if (vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire) {
                vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver 
                    = (1U & vlTOPp->axil4Ctrl_wdata);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_valid;
        }
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_oc_en_driver) 
           & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter) 
              < (IData)(vlTOPp->AxiLite4Timer__DOT___zz_oc_compare_val)));
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A_full 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver) 
           & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_A__DOT__divider_counter) 
              == (IData)(vlTOPp->AxiLite4Timer__DOT___zz_divider_A_limit)));
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B_full 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver) 
           & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__clock_divider_B__DOT__divider_counter) 
              == (IData)(vlTOPp->AxiLite4Timer__DOT___zz_divider_B_limit)));
    vlTOPp->AxiLite4Timer__DOT__readRsp_data = 0U;
    if ((0U == (IData)(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr))) {
        vlTOPp->AxiLite4Timer__DOT__readRsp_data = 
            ((0xfffffffeU & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
             | (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver));
        vlTOPp->AxiLite4Timer__DOT__readRsp_data = 
            ((0xfffffffdU & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
             | ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver) 
                << 1U));
        vlTOPp->AxiLite4Timer__DOT__readRsp_data = 
            ((0xfffffffbU & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
             | ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver) 
                << 2U));
        vlTOPp->AxiLite4Timer__DOT__readRsp_data = 
            ((0xffffffefU & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
             | ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_oc_en_driver) 
                << 4U));
    } else {
        if ((0x14U == (IData)(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rData_addr))) {
            vlTOPp->AxiLite4Timer__DOT__readRsp_data 
                = ((0xffff0000U & vlTOPp->AxiLite4Timer__DOT__readRsp_data) 
                   | (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter));
        }
    }
    vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_enable_driver) 
           & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__timer_counter) 
              == (IData)(vlTOPp->AxiLite4Timer__DOT___zz_period)));
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->oc = vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc;
    vlTOPp->oc_n = (1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__outputCompare_1_oc)));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Timer__DOT__readRsp_data;
    vlTOPp->timer_interrupt = (1U & ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_en_driver)
                                      ? ((IData)(vlTOPp->AxiLite4Timer__DOT__timer_module__DOT__limit)
                                          ? (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver)
                                          : (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver)))
                                      : (~ (IData)(vlTOPp->AxiLite4Timer__DOT__timer_module_interrupt_polarity_driver))));
}

VL_INLINE_OPT void VAxiLite4Timer::_combo__TOP__6(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_combo__TOP__6\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Timer__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire 
        = ((IData)(vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_valid) 
           & (IData)(vlTOPp->AxiLite4Timer__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Timer__DOT__writeJoinEvent_fire;
}

void VAxiLite4Timer::_eval(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_eval\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4Timer::_change_request(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_change_request\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4Timer::_change_request_1(VAxiLite4Timer__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_change_request_1\n"); );
    VAxiLite4Timer* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4Timer::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Timer::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((axil4Ctrl_awvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_awvalid");}
    if (VL_UNLIKELY((axil4Ctrl_awprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_awprot");}
    if (VL_UNLIKELY((axil4Ctrl_wvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_wvalid");}
    if (VL_UNLIKELY((axil4Ctrl_wstrb & 0xf0U))) {
        Verilated::overWidthError("axil4Ctrl_wstrb");}
    if (VL_UNLIKELY((axil4Ctrl_bready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_bready");}
    if (VL_UNLIKELY((axil4Ctrl_arvalid & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_arvalid");}
    if (VL_UNLIKELY((axil4Ctrl_arprot & 0xf8U))) {
        Verilated::overWidthError("axil4Ctrl_arprot");}
    if (VL_UNLIKELY((axil4Ctrl_rready & 0xfeU))) {
        Verilated::overWidthError("axil4Ctrl_rready");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
