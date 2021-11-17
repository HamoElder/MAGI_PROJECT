// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VViterbiDecoder.h for the primary calling header

#include "VViterbiDecoder.h"
#include "VViterbiDecoder__Syms.h"

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__15(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__15\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 8U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x16U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_22 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 9U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_9 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_45 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 6U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 8U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_8 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_44 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 5U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 7U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 4U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 6U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 3U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x18U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 5U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x29U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 2U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x25U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x31U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xbU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x20U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 2U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x26U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__16(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__16\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x19U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x22U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 4U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x28U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 1U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x20U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x24U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x30U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xaU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 7U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_31 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 1U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_1 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x25U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_37 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_28 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x17U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_23 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_26 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x1bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_27 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x21U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_33 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 3U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_3 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x27U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_39 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x23U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x24U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xcU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xdU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xeU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0xfU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__17(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__17\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x10U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x11U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x12U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x13U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x14U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x15U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x2fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x21U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x32U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x33U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x34U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x35U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x36U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x37U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x38U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x39U)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3aU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3bU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3cU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3dU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3eU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)(((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)) 
                               >> 0x3fU)))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            if ((1U & (IData)((VL_ULL(1) << (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))))) {
                vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0 
                    = (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) 
                << 2U) | (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data) 
                           << 1U) | (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last)));
        vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 
            = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value;
    }
    if (vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0] 
            = vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    }
    if (vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0] 
            = vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__18(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__18\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0] 
            = vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__19(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__19\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xeU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17))));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xdU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (2U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)) 
                            << 1U)));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((0xbU & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (4U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)) 
                            << 2U)));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path 
                = ((7U & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path)) 
                   | (8U & ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)) 
                            << 3U)));
        }
    }
    vlTOPp->decoded_data_payload_fragment = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext;
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val)
            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx)
            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1));
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data 
                = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom
                [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0)
            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3))
            ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2)
            : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1))
            ? 0U : 1U);
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3))
            ? 2U : 3U);
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0 = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1));
        }
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__20(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__20\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1 = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2 = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3 = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3 
                = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1));
        }
    }
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                    + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0) 
                    + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1) 
                    + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1) 
                    + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                    + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2) 
                    + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3) 
                    + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3) 
                    + (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7)));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__22(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__22\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*1:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
    CData/*4:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__goto_tail;
    CData/*0:0*/ __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__reorder_state;
    CData/*5:0*/ __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor;
    CData/*5:0*/ __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor;
    // Body
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__goto_tail 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__goto_tail;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read;
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select 
        = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
    __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor 
        = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor;
    __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor 
        = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor;
    __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__reorder_state 
        = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state;
    if (vlTOPp->reset) {
        __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select = 0U;
        __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read = 0U;
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 0U;
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat = 0U;
        __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__goto_tail = 0U;
        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 5U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
            __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
            __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select = 0U;
        } else {
            if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid) {
                if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l48) {
                    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select 
                        = ((2U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select))
                            ? 0U : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_select));
                    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write = 0U;
                } else {
                    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write 
                        = (0x1fU & ((IData)(1U) + (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write)));
                }
            }
        }
        if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                    = ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))
                        ? 0x1fU : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l126) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 0U;
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                }
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
            } else {
                if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat = 0U;
                    __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__goto_tail = 0U;
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 0U;
                } else {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0x1fU : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l126) {
                        if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat) {
                            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 4U;
                            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat = 0U;
                            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                        } else {
                            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 5U;
                            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                        }
                    }
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                    if ((3U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0x1fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read) 
                                        - (IData)(1U)));
                        if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__goto_tail) {
                            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat 
                                = ((0x10U > (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write)) 
                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select) 
                                      == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select)));
                            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 4U;
                        } else {
                            vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 1U;
                        }
                    }
                } else {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0x1fU : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l126) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 0U;
                        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 1U;
                    }
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 1U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                    vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                        = ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))
                            ? 0x1fU : (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_addr_read_2));
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l126) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 2U;
                    }
                } else {
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1 = 0U;
                    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last = 0U;
                    if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l104) {
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state = 3U;
                        vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
                            = (0x1fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write) 
                                        - (IData)(1U)));
                        __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__goto_tail 
                            = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail;
                    }
                }
            }
        }
    }
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                                          ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid)
                                          : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid)));
    if (vlTOPp->reset) {
        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy = 0U;
    } else {
        if (((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
             != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))) {
            vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy 
                = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing;
        }
    }
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                                          ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                                             & (1U 
                                                == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))
                                          : ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                                             & (1U 
                                                == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext));
    if (vlTOPp->reset) {
        __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
            if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
                __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
            }
        } else {
            if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l32) {
                __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor 
                    = (0x3fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                - (IData)(1U)));
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
            if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l32) {
                __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor 
                    = (0x3fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                - (IData)(1U)));
            }
        } else {
            if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
                __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor 
                    = (0x3fU & ((IData)(1U) + (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
            }
        }
    }
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext) 
                                         == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)));
    if (vlTOPp->reset) {
        __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__reorder_state = 0U;
        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve = 1U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
            if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__when_ReorderLifo_l40) {
                if ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))) {
                    __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__reorder_state = 0U;
                    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve = 1U;
                }
            } else {
                if (((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
                     & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready))) {
                    if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))) {
                        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve = 0U;
                    }
                }
            }
        } else {
            if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__when_ReorderLifo_l40) {
                if ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))) {
                    __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__reorder_state = 1U;
                    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve = 1U;
                }
            } else {
                if (((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
                     & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready))) {
                    if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))) {
                        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__goto_tail 
        = __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__goto_tail;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write 
        = __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select 
        = __Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_select;
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor 
        = __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor;
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor 
        = __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor;
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state 
        = __Vdly__ViterbiDecoder__DOT__lifo_core__DOT__reorder_state;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l48 
        = (0x1fU <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write));
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_select 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select)));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__23(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__23\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail = 0U;
    } else {
        if (vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) {
            vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail = 0U;
        } else {
            if (vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail 
                    = vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last;
            }
        }
    }
    vlTOPp->decoded_data_valid = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext;
    vlTOPp->decoded_data_payload_last = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext;
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__when_ReorderLifo_l40 
        = (1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_lifo_last 
        = ((0x20U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                     - (IData)(1U))) ? ((0x10U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                         ? ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48)))))
                                         : ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32))))))
            : ((0x10U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                         - (IData)(1U))) ? ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16)))))
                : ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                          - (IData)(1U))) ? ((4U & 
                                              ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                              ? ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12)))
                                              : ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8))))
                    : ((4U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                              - (IData)(1U))) ? ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4)))
                        : ((2U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                  - (IData)(1U))) ? 
                           ((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3)
                             : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2))
                            : ((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1)
                                : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0)))))));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__24(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__24\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment 
        = ((0x20U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                     - (IData)(1U))) ? ((0x10U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                         ? ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48)))))
                                         : ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_45)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_44)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_39)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_37)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_33)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32))))))
            : ((0x10U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                         - (IData)(1U))) ? ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_31)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_28)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_27)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_26))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_23)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_22))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16)))))
                : ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                          - (IData)(1U))) ? ((4U & 
                                              ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                              ? ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12)))
                                              : ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_9)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_8))))
                    : ((4U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                              - (IData)(1U))) ? ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4)))
                        : ((2U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                  - (IData)(1U))) ? 
                           ((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_3)
                             : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2))
                            : ((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_1)
                                : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0)))))));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__25(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__25\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_lifo_last 
        = ((0x20U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                     - (IData)(1U))) ? ((0x10U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                         ? ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_63)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_62))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_61)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_60)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_59)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_58))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_57)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_56))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_55)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_54))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_53)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_52)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_51)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_50))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_49)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_48)))))
                                         : ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_47)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_46))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_45)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_44)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_43)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_42))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_41)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_40))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_39)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_38))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_37)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_36)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_35)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_34))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_33)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32))))))
            : ((0x10U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                         - (IData)(1U))) ? ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_27)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_25)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_24))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_21)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_18))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16)))))
                : ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                          - (IData)(1U))) ? ((4U & 
                                              ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                              ? ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_15)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_12)))
                                              : ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8))))
                    : ((4U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                              - (IData)(1U))) ? ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4)))
                        : ((2U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                  - (IData)(1U))) ? 
                           ((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3)
                             : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2))
                            : ((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1)
                                : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_0)))))));
}
