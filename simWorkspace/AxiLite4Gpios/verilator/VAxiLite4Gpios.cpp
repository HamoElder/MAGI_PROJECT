// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VAxiLite4Gpios.h for the primary calling header

#include "VAxiLite4Gpios.h"
#include "VAxiLite4Gpios__Syms.h"

//==========

void VAxiLite4Gpios::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VAxiLite4Gpios::eval\n"); );
    VAxiLite4Gpios__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VAxiLite4Gpios::_eval_initial_loop(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/AxiLite4Gpios.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__8(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_sequent__TOP__8\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot 
            = vlTOPp->axil4Ctrl_arprot;
    }
    if (vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready) {
        vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp = 0U;
    }
    if (vlTOPp->axil4Ctrl_arready) {
        vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr 
            = vlTOPp->axil4Ctrl_araddr;
    }
    vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last 
        = vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1;
    vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last 
        = vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1;
    vlTOPp->axil4Ctrl_bresp = vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bresp;
    vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1 
        = vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0;
    vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1 
        = vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0;
    vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0 
        = vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read;
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1)) 
           | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0 
        = vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read;
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1)) 
           | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)));
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__10(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_sequent__TOP__10\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid = 0U;
    } else {
        if (vlTOPp->axil4Ctrl_arready) {
            vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid 
                = vlTOPp->axil4Ctrl_arvalid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2 = 0U;
    } else {
        if (vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready) {
            vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2 
                = vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                        if ((8U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver 
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
    }
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__11(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_sequent__TOP__11\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver 
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
    }
    if (vlTOPp->reset) {
        vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver = 0U;
    } else {
        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlTOPp->axil4Ctrl_awaddr))) {
                    if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlTOPp->axil4Ctrl_awaddr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlTOPp->axil4Ctrl_awaddr)))) {
                                        if (vlTOPp->AxiLite4Gpios__DOT__writeOccur) {
                                            vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver 
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
    }
    vlTOPp->axil4Ctrl_rvalid = vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid;
    vlTOPp->axil4Ctrl_bvalid = vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2;
    vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid 
        = (((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver) 
              & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)) 
             | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver) 
                & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)))) 
            | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver) 
               & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1) 
                  & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last))))) 
           | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver) 
              & ((~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1)) 
                 & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last))));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)) 
           | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)) 
           | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver)));
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__12(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_sequent__TOP__12\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable)) 
           | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable)) 
           | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt = 
        ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt)) 
         | (0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid)));
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0 = 0U;
    if ((0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1 = 0U;
    if ((0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2 = 0U;
    if ((0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3 = 0U;
    if ((0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4 = 0U;
    if ((0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5 = 0U;
    if ((0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5 = 1U;
    }
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__13(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_sequent__TOP__13\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6 = 0U;
    if ((0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7 = 0U;
    if ((0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8 = 0U;
    if ((0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9 = 0U;
    if ((0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10 = 0U;
    if ((0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11 = 0U;
    if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12 = 0U;
    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13 = 0U;
    if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14 = 0U;
    if ((2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15 = 0U;
    if ((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1 = 0U;
    if ((0x8000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1 = 0U;
    if ((0x4000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2 = 0U;
    if ((0x2000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3 = 0U;
    if ((0x1000U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4 = 0U;
    if ((0x800U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5 = 0U;
    if ((0x400U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6 = 0U;
    if ((0x200U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7 = 0U;
    if ((0x100U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8 = 0U;
    if ((0x80U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9 = 0U;
    if ((0x40U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10 = 0U;
    if ((0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11 = 0U;
    if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12 = 0U;
    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13 = 0U;
    if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14 = 0U;
    if ((2U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14 = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15 = 0U;
    if ((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15 = 1U;
    }
    vlTOPp->interrupt_0 = (0U != (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt));
    vlTOPp->AxiLite4Gpios__DOT__readRsp_data = 0U;
    if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                  >> 7U)))) {
        if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver));
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((0x10U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver));
                                }
                            }
                        }
                    }
                } else {
                    if ((8U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                        if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1));
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr))) {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver));
                                }
                            }
                        } else {
                            if ((1U & (~ ((IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr)))) {
                                    vlTOPp->AxiLite4Gpios__DOT__readRsp_data 
                                        = ((0xffff0000U 
                                            & vlTOPp->AxiLite4Gpios__DOT__readRsp_data) 
                                           | (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__14(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_sequent__TOP__14\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out15 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out15)) 
           | (0xffff8000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
                              << 0xfU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out14 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out14)) 
           | (0xffffc000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
                              << 0xeU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13)) 
           | (0xffffe000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
                              << 0xdU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12)) 
           | (0xfffff000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
                              << 0xcU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11)) 
           | (0xfffff800U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
                              << 0xbU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10)) 
           | (0xfffffc00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
                              << 0xaU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9 = 
        ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9)) 
         | (0xfffffe00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
                            << 9U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8 = 
        ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8)) 
         | (0xffffff00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
                            << 8U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7 = 
        ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7)) 
         | (0xffffff80U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
                            << 7U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6 = 
        ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6)) 
         | (0xffffffc0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
                            << 6U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5 = 
        ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5)) 
         | (0xffffffe0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
                            << 5U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4 = 
        ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4)) 
         | (0xfffffff0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
                            << 4U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3 = 
        ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3)) 
         | (0xfffffff8U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
                            << 3U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2 = 
        ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2)) 
         | (0xfffffffcU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
                            << 2U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1 = 
        ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1)) 
         | (0xfffffffeU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14) 
                            << 1U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0 = 
        ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0)) 
         | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15) 
            & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write)));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out31 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out31)) 
           | (0xffff8000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1) 
                              << 0xfU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out30 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out30)) 
           | (0xffffc000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1) 
                              << 0xeU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out29 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out29)) 
           | (0xffffe000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2) 
                              << 0xdU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out28 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out28)) 
           | (0xfffff000U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3) 
                              << 0xcU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out27 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out27)) 
           | (0xfffff800U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4) 
                              << 0xbU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out26 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out26)) 
           | (0xfffffc00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5) 
                              << 0xaU) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out25 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out25)) 
           | (0xfffffe00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6) 
                              << 9U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out24 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out24)) 
           | (0xffffff00U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7) 
                              << 8U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out23 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out23)) 
           | (0xffffff80U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8) 
                              << 7U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out22 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out22)) 
           | (0xffffffc0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9) 
                              << 6U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out21 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out21)) 
           | (0xffffffe0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10) 
                              << 5U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out20 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out20)) 
           | (0xfffffff0U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11) 
                              << 4U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out19 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out19)) 
           | (0xfffffff8U & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12) 
                              << 3U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out18 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out18)) 
           | (0xfffffffcU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13) 
                              << 2U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out17 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out17)) 
           | (0xfffffffeU & (((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14) 
                              << 1U) & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write))));
    vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out16 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out16)) 
           | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15) 
              & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write)));
    vlTOPp->axil4Ctrl_rdata = vlTOPp->AxiLite4Gpios__DOT__readRsp_data;
    vlTOPp->gpio_0__out2 = (((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out0) 
                                           & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15)) 
                                          | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out1) 
                                             & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14) 
                                                << 1U))) 
                                         | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out2) 
                                            & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
                                               << 2U))) 
                                        | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out3) 
                                           & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
                                              << 3U))) 
                                       | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out4) 
                                          & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
                                             << 4U))) 
                                      | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out5) 
                                         & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
                                            << 5U))) 
                                     | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out6) 
                                        & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
                                           << 6U))) 
                                    | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out7) 
                                       & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
                                          << 7U))) 
                                   | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out8) 
                                      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
                                         << 8U))) | 
                                  ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out9) 
                                   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
                                      << 9U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out10) 
                                                  & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
                                                     << 0xaU))) 
                                | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out11) 
                                   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
                                      << 0xbU))) | 
                               ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out12) 
                                & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
                                   << 0xcU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out13) 
                                                 & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
                                                    << 0xdU))) 
                             | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out14) 
                                & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
                                   << 0xeU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_0__out__out15) 
                                                 & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
                                                    << 0xfU)));
    vlTOPp->gpio_1__out3 = (((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out16) 
                                           & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15)) 
                                          | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out17) 
                                             & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14) 
                                                << 1U))) 
                                         | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out18) 
                                            & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13) 
                                               << 2U))) 
                                        | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out19) 
                                           & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12) 
                                              << 3U))) 
                                       | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out20) 
                                          & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11) 
                                             << 4U))) 
                                      | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out21) 
                                         & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10) 
                                            << 5U))) 
                                     | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out22) 
                                        & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9) 
                                           << 6U))) 
                                    | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out23) 
                                       & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8) 
                                          << 7U))) 
                                   | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out24) 
                                      & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7) 
                                         << 8U))) | 
                                  ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out25) 
                                   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6) 
                                      << 9U))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out26) 
                                                  & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5) 
                                                     << 0xaU))) 
                                | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out27) 
                                   & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4) 
                                      << 0xbU))) | 
                               ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out28) 
                                & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3) 
                                   << 0xcU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out29) 
                                                 & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2) 
                                                    << 0xdU))) 
                             | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out30) 
                                & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1) 
                                   << 0xeU))) | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpio_1__out__out31) 
                                                 & ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1) 
                                                    << 0xfU)));
}

VL_INLINE_OPT void VAxiLite4Gpios::_sequent__TOP__15(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_sequent__TOP__15\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->gpio_0 = ((IData)(vlTOPp->gpio_0__out2) 
                      & ((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_15) 
                                       | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_14) 
                                          << 1U)) | 
                                      ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_13) 
                                       << 2U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_12) 
                                                  << 3U)) 
                                    | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_11) 
                                       << 4U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_10) 
                                                  << 5U)) 
                                  | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_9) 
                                     << 6U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_8) 
                                                << 7U)) 
                                | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_7) 
                                   << 8U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_6) 
                                              << 9U)) 
                              | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_5) 
                                 << 0xaU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_4) 
                                              << 0xbU)) 
                            | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_3) 
                               << 0xcU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_2) 
                                            << 0xdU)) 
                          | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0_1) 
                             << 0xeU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_0) 
                                          << 0xfU)));
    vlTOPp->gpio_1 = ((IData)(vlTOPp->gpio_1__out3) 
                      & ((((((((((((((((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_15) 
                                       | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_14) 
                                          << 1U)) | 
                                      ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_13) 
                                       << 2U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_12) 
                                                  << 3U)) 
                                    | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_11) 
                                       << 4U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_10) 
                                                  << 5U)) 
                                  | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_9) 
                                     << 6U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_8) 
                                                << 7U)) 
                                | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_7) 
                                   << 8U)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_6) 
                                              << 9U)) 
                              | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_5) 
                                 << 0xaU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_4) 
                                              << 0xbU)) 
                            | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_3) 
                               << 0xcU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_2) 
                                            << 0xdU)) 
                          | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1_1) 
                             << 0xeU)) | ((IData)(vlTOPp->AxiLite4Gpios__DOT___zz_gpio_1) 
                                          << 0xfU)));
}

VL_INLINE_OPT void VAxiLite4Gpios::_combo__TOP__16(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_combo__TOP__16\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid 
        = ((IData)(vlTOPp->axil4Ctrl_awvalid) & (IData)(vlTOPp->axil4Ctrl_wvalid));
    vlTOPp->axil4Ctrl_arready = vlTOPp->axil4Ctrl_rready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))) {
        vlTOPp->axil4Ctrl_arready = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready 
        = vlTOPp->axil4Ctrl_bready;
    if ((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))) {
        vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready = 1U;
    }
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (1U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (2U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (4U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (8U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x10U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x20U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x40U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x80U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x100U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x200U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x400U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x800U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x1000U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x2000U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x4000U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read)) 
           | (0x8000U & (IData)(vlTOPp->gpio_0)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xfffeU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (1U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xfffdU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (2U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xfffbU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (4U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xfff7U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (8U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xffefU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x10U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xffdfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x20U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xffbfU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x40U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xff7fU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x80U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xfeffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x100U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xfdffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x200U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xfbffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x400U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xf7ffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x800U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xefffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x1000U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xdfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x2000U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0xbfffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x4000U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read 
        = ((0x7fffU & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read)) 
           | (0x8000U & (IData)(vlTOPp->gpio_1)));
    vlTOPp->AxiLite4Gpios__DOT__writeOccur = ((IData)(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid) 
                                              & (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
    vlTOPp->axil4Ctrl_awready = vlTOPp->AxiLite4Gpios__DOT__writeOccur;
    vlTOPp->axil4Ctrl_wready = vlTOPp->AxiLite4Gpios__DOT__writeOccur;
}

void VAxiLite4Gpios::_eval(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_eval\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
    }
    vlTOPp->_combo__TOP__16(vlSymsp);
    vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VAxiLite4Gpios::_change_request(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_change_request\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VAxiLite4Gpios::_change_request_1(VAxiLite4Gpios__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_change_request_1\n"); );
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VAxiLite4Gpios::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VAxiLite4Gpios::_eval_debug_assertions\n"); );
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
