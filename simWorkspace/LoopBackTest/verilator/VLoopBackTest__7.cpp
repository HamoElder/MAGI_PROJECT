// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__52(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__52\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp725[16];
    WData/*511:0*/ __Vtemp726[16];
    WData/*511:0*/ __Vtemp727[16];
    WData/*511:0*/ __Vtemp728[16];
    WData/*511:0*/ __Vtemp729[16];
    WData/*511:0*/ __Vtemp730[16];
    WData/*511:0*/ __Vtemp731[16];
    WData/*511:0*/ __Vtemp732[16];
    WData/*511:0*/ __Vtemp733[16];
    WData/*511:0*/ __Vtemp734[16];
    WData/*511:0*/ __Vtemp735[16];
    WData/*511:0*/ __Vtemp736[16];
    WData/*511:0*/ __Vtemp737[16];
    WData/*511:0*/ __Vtemp738[16];
    WData/*511:0*/ __Vtemp739[16];
    WData/*511:0*/ __Vtemp740[16];
    WData/*511:0*/ __Vtemp741[16];
    WData/*511:0*/ __Vtemp742[16];
    WData/*511:0*/ __Vtemp743[16];
    WData/*511:0*/ __Vtemp744[16];
    WData/*511:0*/ __Vtemp745[16];
    WData/*511:0*/ __Vtemp746[16];
    WData/*511:0*/ __Vtemp747[16];
    WData/*511:0*/ __Vtemp748[16];
    WData/*511:0*/ __Vtemp749[16];
    WData/*511:0*/ __Vtemp750[16];
    WData/*511:0*/ __Vtemp751[16];
    WData/*511:0*/ __Vtemp752[16];
    WData/*511:0*/ __Vtemp753[16];
    WData/*511:0*/ __Vtemp754[16];
    WData/*511:0*/ __Vtemp755[16];
    WData/*511:0*/ __Vtemp756[16];
    WData/*511:0*/ __Vtemp757[16];
    WData/*511:0*/ __Vtemp758[16];
    WData/*511:0*/ __Vtemp759[16];
    WData/*511:0*/ __Vtemp760[16];
    WData/*511:0*/ __Vtemp761[16];
    WData/*511:0*/ __Vtemp762[16];
    WData/*511:0*/ __Vtemp763[16];
    WData/*511:0*/ __Vtemp764[16];
    WData/*511:0*/ __Vtemp765[16];
    WData/*511:0*/ __Vtemp766[16];
    WData/*511:0*/ __Vtemp767[16];
    WData/*511:0*/ __Vtemp768[16];
    WData/*511:0*/ __Vtemp769[16];
    WData/*511:0*/ __Vtemp770[16];
    WData/*511:0*/ __Vtemp771[16];
    WData/*511:0*/ __Vtemp772[16];
    WData/*511:0*/ __Vtemp773[16];
    WData/*511:0*/ __Vtemp774[16];
    WData/*511:0*/ __Vtemp775[16];
    WData/*511:0*/ __Vtemp776[16];
    WData/*511:0*/ __Vtemp777[16];
    WData/*511:0*/ __Vtemp778[16];
    WData/*511:0*/ __Vtemp779[16];
    WData/*511:0*/ __Vtemp780[16];
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp725[0U] = 1U;
            __Vtemp725[1U] = 0U;
            __Vtemp725[2U] = 0U;
            __Vtemp725[3U] = 0U;
            __Vtemp725[4U] = 0U;
            __Vtemp725[5U] = 0U;
            __Vtemp725[6U] = 0U;
            __Vtemp725[7U] = 0U;
            __Vtemp725[8U] = 0U;
            __Vtemp725[9U] = 0U;
            __Vtemp725[0xaU] = 0U;
            __Vtemp725[0xbU] = 0U;
            __Vtemp725[0xcU] = 0U;
            __Vtemp725[0xdU] = 0U;
            __Vtemp725[0xeU] = 0U;
            __Vtemp725[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp726, __Vtemp725, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp726[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_23 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp727[0U] = 1U;
            __Vtemp727[1U] = 0U;
            __Vtemp727[2U] = 0U;
            __Vtemp727[3U] = 0U;
            __Vtemp727[4U] = 0U;
            __Vtemp727[5U] = 0U;
            __Vtemp727[6U] = 0U;
            __Vtemp727[7U] = 0U;
            __Vtemp727[8U] = 0U;
            __Vtemp727[9U] = 0U;
            __Vtemp727[0xaU] = 0U;
            __Vtemp727[0xbU] = 0U;
            __Vtemp727[0xcU] = 0U;
            __Vtemp727[0xdU] = 0U;
            __Vtemp727[0xeU] = 0U;
            __Vtemp727[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp728, __Vtemp727, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp728[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_175 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp729[0U] = 1U;
            __Vtemp729[1U] = 0U;
            __Vtemp729[2U] = 0U;
            __Vtemp729[3U] = 0U;
            __Vtemp729[4U] = 0U;
            __Vtemp729[5U] = 0U;
            __Vtemp729[6U] = 0U;
            __Vtemp729[7U] = 0U;
            __Vtemp729[8U] = 0U;
            __Vtemp729[9U] = 0U;
            __Vtemp729[0xaU] = 0U;
            __Vtemp729[0xbU] = 0U;
            __Vtemp729[0xcU] = 0U;
            __Vtemp729[0xdU] = 0U;
            __Vtemp729[0xeU] = 0U;
            __Vtemp729[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp730, __Vtemp729, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp730[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp731[0U] = 1U;
            __Vtemp731[1U] = 0U;
            __Vtemp731[2U] = 0U;
            __Vtemp731[3U] = 0U;
            __Vtemp731[4U] = 0U;
            __Vtemp731[5U] = 0U;
            __Vtemp731[6U] = 0U;
            __Vtemp731[7U] = 0U;
            __Vtemp731[8U] = 0U;
            __Vtemp731[9U] = 0U;
            __Vtemp731[0xaU] = 0U;
            __Vtemp731[0xbU] = 0U;
            __Vtemp731[0xcU] = 0U;
            __Vtemp731[0xdU] = 0U;
            __Vtemp731[0xeU] = 0U;
            __Vtemp731[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp732, __Vtemp731, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp732[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_101 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp733[0U] = 1U;
            __Vtemp733[1U] = 0U;
            __Vtemp733[2U] = 0U;
            __Vtemp733[3U] = 0U;
            __Vtemp733[4U] = 0U;
            __Vtemp733[5U] = 0U;
            __Vtemp733[6U] = 0U;
            __Vtemp733[7U] = 0U;
            __Vtemp733[8U] = 0U;
            __Vtemp733[9U] = 0U;
            __Vtemp733[0xaU] = 0U;
            __Vtemp733[0xbU] = 0U;
            __Vtemp733[0xcU] = 0U;
            __Vtemp733[0xdU] = 0U;
            __Vtemp733[0xeU] = 0U;
            __Vtemp733[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp734, __Vtemp733, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp734[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_26 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp735[0U] = 1U;
            __Vtemp735[1U] = 0U;
            __Vtemp735[2U] = 0U;
            __Vtemp735[3U] = 0U;
            __Vtemp735[4U] = 0U;
            __Vtemp735[5U] = 0U;
            __Vtemp735[6U] = 0U;
            __Vtemp735[7U] = 0U;
            __Vtemp735[8U] = 0U;
            __Vtemp735[9U] = 0U;
            __Vtemp735[0xaU] = 0U;
            __Vtemp735[0xbU] = 0U;
            __Vtemp735[0xcU] = 0U;
            __Vtemp735[0xdU] = 0U;
            __Vtemp735[0xeU] = 0U;
            __Vtemp735[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp736, __Vtemp735, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp736[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_178 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp737[0U] = 1U;
            __Vtemp737[1U] = 0U;
            __Vtemp737[2U] = 0U;
            __Vtemp737[3U] = 0U;
            __Vtemp737[4U] = 0U;
            __Vtemp737[5U] = 0U;
            __Vtemp737[6U] = 0U;
            __Vtemp737[7U] = 0U;
            __Vtemp737[8U] = 0U;
            __Vtemp737[9U] = 0U;
            __Vtemp737[0xaU] = 0U;
            __Vtemp737[0xbU] = 0U;
            __Vtemp737[0xcU] = 0U;
            __Vtemp737[0xdU] = 0U;
            __Vtemp737[0xeU] = 0U;
            __Vtemp737[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp738, __Vtemp737, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp738[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp739[0U] = 1U;
            __Vtemp739[1U] = 0U;
            __Vtemp739[2U] = 0U;
            __Vtemp739[3U] = 0U;
            __Vtemp739[4U] = 0U;
            __Vtemp739[5U] = 0U;
            __Vtemp739[6U] = 0U;
            __Vtemp739[7U] = 0U;
            __Vtemp739[8U] = 0U;
            __Vtemp739[9U] = 0U;
            __Vtemp739[0xaU] = 0U;
            __Vtemp739[0xbU] = 0U;
            __Vtemp739[0xcU] = 0U;
            __Vtemp739[0xdU] = 0U;
            __Vtemp739[0xeU] = 0U;
            __Vtemp739[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp740, __Vtemp739, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp740[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_104 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp741[0U] = 1U;
            __Vtemp741[1U] = 0U;
            __Vtemp741[2U] = 0U;
            __Vtemp741[3U] = 0U;
            __Vtemp741[4U] = 0U;
            __Vtemp741[5U] = 0U;
            __Vtemp741[6U] = 0U;
            __Vtemp741[7U] = 0U;
            __Vtemp741[8U] = 0U;
            __Vtemp741[9U] = 0U;
            __Vtemp741[0xaU] = 0U;
            __Vtemp741[0xbU] = 0U;
            __Vtemp741[0xcU] = 0U;
            __Vtemp741[0xdU] = 0U;
            __Vtemp741[0xeU] = 0U;
            __Vtemp741[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp742, __Vtemp741, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp742[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_27 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp743[0U] = 1U;
            __Vtemp743[1U] = 0U;
            __Vtemp743[2U] = 0U;
            __Vtemp743[3U] = 0U;
            __Vtemp743[4U] = 0U;
            __Vtemp743[5U] = 0U;
            __Vtemp743[6U] = 0U;
            __Vtemp743[7U] = 0U;
            __Vtemp743[8U] = 0U;
            __Vtemp743[9U] = 0U;
            __Vtemp743[0xaU] = 0U;
            __Vtemp743[0xbU] = 0U;
            __Vtemp743[0xcU] = 0U;
            __Vtemp743[0xdU] = 0U;
            __Vtemp743[0xeU] = 0U;
            __Vtemp743[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp744, __Vtemp743, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp744[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_179 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp745[0U] = 1U;
            __Vtemp745[1U] = 0U;
            __Vtemp745[2U] = 0U;
            __Vtemp745[3U] = 0U;
            __Vtemp745[4U] = 0U;
            __Vtemp745[5U] = 0U;
            __Vtemp745[6U] = 0U;
            __Vtemp745[7U] = 0U;
            __Vtemp745[8U] = 0U;
            __Vtemp745[9U] = 0U;
            __Vtemp745[0xaU] = 0U;
            __Vtemp745[0xbU] = 0U;
            __Vtemp745[0xcU] = 0U;
            __Vtemp745[0xdU] = 0U;
            __Vtemp745[0xeU] = 0U;
            __Vtemp745[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp746, __Vtemp745, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp746[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp747[0U] = 1U;
            __Vtemp747[1U] = 0U;
            __Vtemp747[2U] = 0U;
            __Vtemp747[3U] = 0U;
            __Vtemp747[4U] = 0U;
            __Vtemp747[5U] = 0U;
            __Vtemp747[6U] = 0U;
            __Vtemp747[7U] = 0U;
            __Vtemp747[8U] = 0U;
            __Vtemp747[9U] = 0U;
            __Vtemp747[0xaU] = 0U;
            __Vtemp747[0xbU] = 0U;
            __Vtemp747[0xcU] = 0U;
            __Vtemp747[0xdU] = 0U;
            __Vtemp747[0xeU] = 0U;
            __Vtemp747[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp748, __Vtemp747, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp748[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_105 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp749[0U] = 1U;
            __Vtemp749[1U] = 0U;
            __Vtemp749[2U] = 0U;
            __Vtemp749[3U] = 0U;
            __Vtemp749[4U] = 0U;
            __Vtemp749[5U] = 0U;
            __Vtemp749[6U] = 0U;
            __Vtemp749[7U] = 0U;
            __Vtemp749[8U] = 0U;
            __Vtemp749[9U] = 0U;
            __Vtemp749[0xaU] = 0U;
            __Vtemp749[0xbU] = 0U;
            __Vtemp749[0xcU] = 0U;
            __Vtemp749[0xdU] = 0U;
            __Vtemp749[0xeU] = 0U;
            __Vtemp749[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp750, __Vtemp749, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp750[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp751[0U] = 1U;
            __Vtemp751[1U] = 0U;
            __Vtemp751[2U] = 0U;
            __Vtemp751[3U] = 0U;
            __Vtemp751[4U] = 0U;
            __Vtemp751[5U] = 0U;
            __Vtemp751[6U] = 0U;
            __Vtemp751[7U] = 0U;
            __Vtemp751[8U] = 0U;
            __Vtemp751[9U] = 0U;
            __Vtemp751[0xaU] = 0U;
            __Vtemp751[0xbU] = 0U;
            __Vtemp751[0xcU] = 0U;
            __Vtemp751[0xdU] = 0U;
            __Vtemp751[0xeU] = 0U;
            __Vtemp751[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp752, __Vtemp751, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp752[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_185 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp753[0U] = 1U;
            __Vtemp753[1U] = 0U;
            __Vtemp753[2U] = 0U;
            __Vtemp753[3U] = 0U;
            __Vtemp753[4U] = 0U;
            __Vtemp753[5U] = 0U;
            __Vtemp753[6U] = 0U;
            __Vtemp753[7U] = 0U;
            __Vtemp753[8U] = 0U;
            __Vtemp753[9U] = 0U;
            __Vtemp753[0xaU] = 0U;
            __Vtemp753[0xbU] = 0U;
            __Vtemp753[0xcU] = 0U;
            __Vtemp753[0xdU] = 0U;
            __Vtemp753[0xeU] = 0U;
            __Vtemp753[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp754, __Vtemp753, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp754[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp755[0U] = 1U;
            __Vtemp755[1U] = 0U;
            __Vtemp755[2U] = 0U;
            __Vtemp755[3U] = 0U;
            __Vtemp755[4U] = 0U;
            __Vtemp755[5U] = 0U;
            __Vtemp755[6U] = 0U;
            __Vtemp755[7U] = 0U;
            __Vtemp755[8U] = 0U;
            __Vtemp755[9U] = 0U;
            __Vtemp755[0xaU] = 0U;
            __Vtemp755[0xbU] = 0U;
            __Vtemp755[0xcU] = 0U;
            __Vtemp755[0xdU] = 0U;
            __Vtemp755[0xeU] = 0U;
            __Vtemp755[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp756, __Vtemp755, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp756[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_111 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp757[0U] = 1U;
            __Vtemp757[1U] = 0U;
            __Vtemp757[2U] = 0U;
            __Vtemp757[3U] = 0U;
            __Vtemp757[4U] = 0U;
            __Vtemp757[5U] = 0U;
            __Vtemp757[6U] = 0U;
            __Vtemp757[7U] = 0U;
            __Vtemp757[8U] = 0U;
            __Vtemp757[9U] = 0U;
            __Vtemp757[0xaU] = 0U;
            __Vtemp757[0xbU] = 0U;
            __Vtemp757[0xcU] = 0U;
            __Vtemp757[0xdU] = 0U;
            __Vtemp757[0xeU] = 0U;
            __Vtemp757[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp758, __Vtemp757, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp758[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp759[0U] = 1U;
            __Vtemp759[1U] = 0U;
            __Vtemp759[2U] = 0U;
            __Vtemp759[3U] = 0U;
            __Vtemp759[4U] = 0U;
            __Vtemp759[5U] = 0U;
            __Vtemp759[6U] = 0U;
            __Vtemp759[7U] = 0U;
            __Vtemp759[8U] = 0U;
            __Vtemp759[9U] = 0U;
            __Vtemp759[0xaU] = 0U;
            __Vtemp759[0xbU] = 0U;
            __Vtemp759[0xcU] = 0U;
            __Vtemp759[0xdU] = 0U;
            __Vtemp759[0xeU] = 0U;
            __Vtemp759[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp760, __Vtemp759, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp760[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_155 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp761[0U] = 1U;
            __Vtemp761[1U] = 0U;
            __Vtemp761[2U] = 0U;
            __Vtemp761[3U] = 0U;
            __Vtemp761[4U] = 0U;
            __Vtemp761[5U] = 0U;
            __Vtemp761[6U] = 0U;
            __Vtemp761[7U] = 0U;
            __Vtemp761[8U] = 0U;
            __Vtemp761[9U] = 0U;
            __Vtemp761[0xaU] = 0U;
            __Vtemp761[0xbU] = 0U;
            __Vtemp761[0xcU] = 0U;
            __Vtemp761[0xdU] = 0U;
            __Vtemp761[0xeU] = 0U;
            __Vtemp761[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp762, __Vtemp761, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp762[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp763[0U] = 1U;
            __Vtemp763[1U] = 0U;
            __Vtemp763[2U] = 0U;
            __Vtemp763[3U] = 0U;
            __Vtemp763[4U] = 0U;
            __Vtemp763[5U] = 0U;
            __Vtemp763[6U] = 0U;
            __Vtemp763[7U] = 0U;
            __Vtemp763[8U] = 0U;
            __Vtemp763[9U] = 0U;
            __Vtemp763[0xaU] = 0U;
            __Vtemp763[0xbU] = 0U;
            __Vtemp763[0xcU] = 0U;
            __Vtemp763[0xdU] = 0U;
            __Vtemp763[0xeU] = 0U;
            __Vtemp763[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp764, __Vtemp763, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp764[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_191 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp765[0U] = 1U;
            __Vtemp765[1U] = 0U;
            __Vtemp765[2U] = 0U;
            __Vtemp765[3U] = 0U;
            __Vtemp765[4U] = 0U;
            __Vtemp765[5U] = 0U;
            __Vtemp765[6U] = 0U;
            __Vtemp765[7U] = 0U;
            __Vtemp765[8U] = 0U;
            __Vtemp765[9U] = 0U;
            __Vtemp765[0xaU] = 0U;
            __Vtemp765[0xbU] = 0U;
            __Vtemp765[0xcU] = 0U;
            __Vtemp765[0xdU] = 0U;
            __Vtemp765[0xeU] = 0U;
            __Vtemp765[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp766, __Vtemp765, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp766[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp767[0U] = 1U;
            __Vtemp767[1U] = 0U;
            __Vtemp767[2U] = 0U;
            __Vtemp767[3U] = 0U;
            __Vtemp767[4U] = 0U;
            __Vtemp767[5U] = 0U;
            __Vtemp767[6U] = 0U;
            __Vtemp767[7U] = 0U;
            __Vtemp767[8U] = 0U;
            __Vtemp767[9U] = 0U;
            __Vtemp767[0xaU] = 0U;
            __Vtemp767[0xbU] = 0U;
            __Vtemp767[0xcU] = 0U;
            __Vtemp767[0xdU] = 0U;
            __Vtemp767[0xeU] = 0U;
            __Vtemp767[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp768, __Vtemp767, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp768[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_117 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp769[0U] = 1U;
            __Vtemp769[1U] = 0U;
            __Vtemp769[2U] = 0U;
            __Vtemp769[3U] = 0U;
            __Vtemp769[4U] = 0U;
            __Vtemp769[5U] = 0U;
            __Vtemp769[6U] = 0U;
            __Vtemp769[7U] = 0U;
            __Vtemp769[8U] = 0U;
            __Vtemp769[9U] = 0U;
            __Vtemp769[0xaU] = 0U;
            __Vtemp769[0xbU] = 0U;
            __Vtemp769[0xcU] = 0U;
            __Vtemp769[0xdU] = 0U;
            __Vtemp769[0xeU] = 0U;
            __Vtemp769[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp770, __Vtemp769, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp770[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp771[0U] = 1U;
            __Vtemp771[1U] = 0U;
            __Vtemp771[2U] = 0U;
            __Vtemp771[3U] = 0U;
            __Vtemp771[4U] = 0U;
            __Vtemp771[5U] = 0U;
            __Vtemp771[6U] = 0U;
            __Vtemp771[7U] = 0U;
            __Vtemp771[8U] = 0U;
            __Vtemp771[9U] = 0U;
            __Vtemp771[0xaU] = 0U;
            __Vtemp771[0xbU] = 0U;
            __Vtemp771[0xcU] = 0U;
            __Vtemp771[0xdU] = 0U;
            __Vtemp771[0xeU] = 0U;
            __Vtemp771[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp772, __Vtemp771, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp772[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_187 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp773[0U] = 1U;
            __Vtemp773[1U] = 0U;
            __Vtemp773[2U] = 0U;
            __Vtemp773[3U] = 0U;
            __Vtemp773[4U] = 0U;
            __Vtemp773[5U] = 0U;
            __Vtemp773[6U] = 0U;
            __Vtemp773[7U] = 0U;
            __Vtemp773[8U] = 0U;
            __Vtemp773[9U] = 0U;
            __Vtemp773[0xaU] = 0U;
            __Vtemp773[0xbU] = 0U;
            __Vtemp773[0xcU] = 0U;
            __Vtemp773[0xdU] = 0U;
            __Vtemp773[0xeU] = 0U;
            __Vtemp773[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp774, __Vtemp773, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp774[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp775[0U] = 1U;
            __Vtemp775[1U] = 0U;
            __Vtemp775[2U] = 0U;
            __Vtemp775[3U] = 0U;
            __Vtemp775[4U] = 0U;
            __Vtemp775[5U] = 0U;
            __Vtemp775[6U] = 0U;
            __Vtemp775[7U] = 0U;
            __Vtemp775[8U] = 0U;
            __Vtemp775[9U] = 0U;
            __Vtemp775[0xaU] = 0U;
            __Vtemp775[0xbU] = 0U;
            __Vtemp775[0xcU] = 0U;
            __Vtemp775[0xdU] = 0U;
            __Vtemp775[0xeU] = 0U;
            __Vtemp775[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp776, __Vtemp775, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp776[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_113 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp777[0U] = 1U;
            __Vtemp777[1U] = 0U;
            __Vtemp777[2U] = 0U;
            __Vtemp777[3U] = 0U;
            __Vtemp777[4U] = 0U;
            __Vtemp777[5U] = 0U;
            __Vtemp777[6U] = 0U;
            __Vtemp777[7U] = 0U;
            __Vtemp777[8U] = 0U;
            __Vtemp777[9U] = 0U;
            __Vtemp777[0xaU] = 0U;
            __Vtemp777[0xbU] = 0U;
            __Vtemp777[0xcU] = 0U;
            __Vtemp777[0xdU] = 0U;
            __Vtemp777[0xeU] = 0U;
            __Vtemp777[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp778, __Vtemp777, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp778[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp779[0U] = 1U;
            __Vtemp779[1U] = 0U;
            __Vtemp779[2U] = 0U;
            __Vtemp779[3U] = 0U;
            __Vtemp779[4U] = 0U;
            __Vtemp779[5U] = 0U;
            __Vtemp779[6U] = 0U;
            __Vtemp779[7U] = 0U;
            __Vtemp779[8U] = 0U;
            __Vtemp779[9U] = 0U;
            __Vtemp779[0xaU] = 0U;
            __Vtemp779[0xbU] = 0U;
            __Vtemp779[0xcU] = 0U;
            __Vtemp779[0xdU] = 0U;
            __Vtemp779[0xeU] = 0U;
            __Vtemp779[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp780, __Vtemp779, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp780[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_188 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__53(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__53\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp781[16];
    WData/*511:0*/ __Vtemp782[16];
    WData/*511:0*/ __Vtemp783[16];
    WData/*511:0*/ __Vtemp784[16];
    WData/*511:0*/ __Vtemp785[16];
    WData/*511:0*/ __Vtemp786[16];
    WData/*511:0*/ __Vtemp787[16];
    WData/*511:0*/ __Vtemp788[16];
    WData/*511:0*/ __Vtemp789[16];
    WData/*511:0*/ __Vtemp790[16];
    WData/*511:0*/ __Vtemp791[16];
    WData/*511:0*/ __Vtemp792[16];
    WData/*511:0*/ __Vtemp793[16];
    WData/*511:0*/ __Vtemp794[16];
    WData/*511:0*/ __Vtemp795[16];
    WData/*511:0*/ __Vtemp796[16];
    WData/*511:0*/ __Vtemp797[16];
    WData/*511:0*/ __Vtemp798[16];
    WData/*511:0*/ __Vtemp799[16];
    WData/*511:0*/ __Vtemp800[16];
    WData/*511:0*/ __Vtemp801[16];
    WData/*511:0*/ __Vtemp802[16];
    WData/*511:0*/ __Vtemp803[16];
    WData/*511:0*/ __Vtemp804[16];
    WData/*511:0*/ __Vtemp805[16];
    WData/*511:0*/ __Vtemp806[16];
    WData/*511:0*/ __Vtemp807[16];
    WData/*511:0*/ __Vtemp808[16];
    WData/*511:0*/ __Vtemp809[16];
    WData/*511:0*/ __Vtemp810[16];
    WData/*511:0*/ __Vtemp811[16];
    WData/*511:0*/ __Vtemp812[16];
    WData/*511:0*/ __Vtemp813[16];
    WData/*511:0*/ __Vtemp814[16];
    WData/*511:0*/ __Vtemp815[16];
    WData/*511:0*/ __Vtemp816[16];
    WData/*511:0*/ __Vtemp817[16];
    WData/*511:0*/ __Vtemp818[16];
    WData/*511:0*/ __Vtemp819[16];
    WData/*511:0*/ __Vtemp820[16];
    WData/*511:0*/ __Vtemp821[16];
    WData/*511:0*/ __Vtemp822[16];
    WData/*511:0*/ __Vtemp823[16];
    WData/*511:0*/ __Vtemp824[16];
    WData/*511:0*/ __Vtemp825[16];
    WData/*511:0*/ __Vtemp826[16];
    WData/*511:0*/ __Vtemp827[16];
    WData/*511:0*/ __Vtemp828[16];
    WData/*511:0*/ __Vtemp829[16];
    WData/*511:0*/ __Vtemp830[16];
    WData/*511:0*/ __Vtemp831[16];
    WData/*511:0*/ __Vtemp832[16];
    WData/*511:0*/ __Vtemp833[16];
    WData/*511:0*/ __Vtemp834[16];
    WData/*511:0*/ __Vtemp835[16];
    WData/*511:0*/ __Vtemp836[16];
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp781[0U] = 1U;
            __Vtemp781[1U] = 0U;
            __Vtemp781[2U] = 0U;
            __Vtemp781[3U] = 0U;
            __Vtemp781[4U] = 0U;
            __Vtemp781[5U] = 0U;
            __Vtemp781[6U] = 0U;
            __Vtemp781[7U] = 0U;
            __Vtemp781[8U] = 0U;
            __Vtemp781[9U] = 0U;
            __Vtemp781[0xaU] = 0U;
            __Vtemp781[0xbU] = 0U;
            __Vtemp781[0xcU] = 0U;
            __Vtemp781[0xdU] = 0U;
            __Vtemp781[0xeU] = 0U;
            __Vtemp781[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp782, __Vtemp781, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp782[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp783[0U] = 1U;
            __Vtemp783[1U] = 0U;
            __Vtemp783[2U] = 0U;
            __Vtemp783[3U] = 0U;
            __Vtemp783[4U] = 0U;
            __Vtemp783[5U] = 0U;
            __Vtemp783[6U] = 0U;
            __Vtemp783[7U] = 0U;
            __Vtemp783[8U] = 0U;
            __Vtemp783[9U] = 0U;
            __Vtemp783[0xaU] = 0U;
            __Vtemp783[0xbU] = 0U;
            __Vtemp783[0xcU] = 0U;
            __Vtemp783[0xdU] = 0U;
            __Vtemp783[0xeU] = 0U;
            __Vtemp783[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp784, __Vtemp783, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp784[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_114 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp785[0U] = 1U;
            __Vtemp785[1U] = 0U;
            __Vtemp785[2U] = 0U;
            __Vtemp785[3U] = 0U;
            __Vtemp785[4U] = 0U;
            __Vtemp785[5U] = 0U;
            __Vtemp785[6U] = 0U;
            __Vtemp785[7U] = 0U;
            __Vtemp785[8U] = 0U;
            __Vtemp785[9U] = 0U;
            __Vtemp785[0xaU] = 0U;
            __Vtemp785[0xbU] = 0U;
            __Vtemp785[0xcU] = 0U;
            __Vtemp785[0xdU] = 0U;
            __Vtemp785[0xeU] = 0U;
            __Vtemp785[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp786, __Vtemp785, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp786[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp787[0U] = 1U;
            __Vtemp787[1U] = 0U;
            __Vtemp787[2U] = 0U;
            __Vtemp787[3U] = 0U;
            __Vtemp787[4U] = 0U;
            __Vtemp787[5U] = 0U;
            __Vtemp787[6U] = 0U;
            __Vtemp787[7U] = 0U;
            __Vtemp787[8U] = 0U;
            __Vtemp787[9U] = 0U;
            __Vtemp787[0xaU] = 0U;
            __Vtemp787[0xbU] = 0U;
            __Vtemp787[0xcU] = 0U;
            __Vtemp787[0xdU] = 0U;
            __Vtemp787[0xeU] = 0U;
            __Vtemp787[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp788, __Vtemp787, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp788[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_164 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp789[0U] = 1U;
            __Vtemp789[1U] = 0U;
            __Vtemp789[2U] = 0U;
            __Vtemp789[3U] = 0U;
            __Vtemp789[4U] = 0U;
            __Vtemp789[5U] = 0U;
            __Vtemp789[6U] = 0U;
            __Vtemp789[7U] = 0U;
            __Vtemp789[8U] = 0U;
            __Vtemp789[9U] = 0U;
            __Vtemp789[0xaU] = 0U;
            __Vtemp789[0xbU] = 0U;
            __Vtemp789[0xcU] = 0U;
            __Vtemp789[0xdU] = 0U;
            __Vtemp789[0xeU] = 0U;
            __Vtemp789[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp790, __Vtemp789, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp790[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp791[0U] = 1U;
            __Vtemp791[1U] = 0U;
            __Vtemp791[2U] = 0U;
            __Vtemp791[3U] = 0U;
            __Vtemp791[4U] = 0U;
            __Vtemp791[5U] = 0U;
            __Vtemp791[6U] = 0U;
            __Vtemp791[7U] = 0U;
            __Vtemp791[8U] = 0U;
            __Vtemp791[9U] = 0U;
            __Vtemp791[0xaU] = 0U;
            __Vtemp791[0xbU] = 0U;
            __Vtemp791[0xcU] = 0U;
            __Vtemp791[0xdU] = 0U;
            __Vtemp791[0xeU] = 0U;
            __Vtemp791[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp792, __Vtemp791, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp792[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_165 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp793[0U] = 1U;
            __Vtemp793[1U] = 0U;
            __Vtemp793[2U] = 0U;
            __Vtemp793[3U] = 0U;
            __Vtemp793[4U] = 0U;
            __Vtemp793[5U] = 0U;
            __Vtemp793[6U] = 0U;
            __Vtemp793[7U] = 0U;
            __Vtemp793[8U] = 0U;
            __Vtemp793[9U] = 0U;
            __Vtemp793[0xaU] = 0U;
            __Vtemp793[0xbU] = 0U;
            __Vtemp793[0xcU] = 0U;
            __Vtemp793[0xdU] = 0U;
            __Vtemp793[0xeU] = 0U;
            __Vtemp793[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp794, __Vtemp793, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp794[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp795[0U] = 1U;
            __Vtemp795[1U] = 0U;
            __Vtemp795[2U] = 0U;
            __Vtemp795[3U] = 0U;
            __Vtemp795[4U] = 0U;
            __Vtemp795[5U] = 0U;
            __Vtemp795[6U] = 0U;
            __Vtemp795[7U] = 0U;
            __Vtemp795[8U] = 0U;
            __Vtemp795[9U] = 0U;
            __Vtemp795[0xaU] = 0U;
            __Vtemp795[0xbU] = 0U;
            __Vtemp795[0xcU] = 0U;
            __Vtemp795[0xdU] = 0U;
            __Vtemp795[0xeU] = 0U;
            __Vtemp795[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp796, __Vtemp795, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp796[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_166 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp797[0U] = 1U;
            __Vtemp797[1U] = 0U;
            __Vtemp797[2U] = 0U;
            __Vtemp797[3U] = 0U;
            __Vtemp797[4U] = 0U;
            __Vtemp797[5U] = 0U;
            __Vtemp797[6U] = 0U;
            __Vtemp797[7U] = 0U;
            __Vtemp797[8U] = 0U;
            __Vtemp797[9U] = 0U;
            __Vtemp797[0xaU] = 0U;
            __Vtemp797[0xbU] = 0U;
            __Vtemp797[0xcU] = 0U;
            __Vtemp797[0xdU] = 0U;
            __Vtemp797[0xeU] = 0U;
            __Vtemp797[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp798, __Vtemp797, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp798[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp799[0U] = 1U;
            __Vtemp799[1U] = 0U;
            __Vtemp799[2U] = 0U;
            __Vtemp799[3U] = 0U;
            __Vtemp799[4U] = 0U;
            __Vtemp799[5U] = 0U;
            __Vtemp799[6U] = 0U;
            __Vtemp799[7U] = 0U;
            __Vtemp799[8U] = 0U;
            __Vtemp799[9U] = 0U;
            __Vtemp799[0xaU] = 0U;
            __Vtemp799[0xbU] = 0U;
            __Vtemp799[0xcU] = 0U;
            __Vtemp799[0xdU] = 0U;
            __Vtemp799[0xeU] = 0U;
            __Vtemp799[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp800, __Vtemp799, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp800[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp801[0U] = 1U;
            __Vtemp801[1U] = 0U;
            __Vtemp801[2U] = 0U;
            __Vtemp801[3U] = 0U;
            __Vtemp801[4U] = 0U;
            __Vtemp801[5U] = 0U;
            __Vtemp801[6U] = 0U;
            __Vtemp801[7U] = 0U;
            __Vtemp801[8U] = 0U;
            __Vtemp801[9U] = 0U;
            __Vtemp801[0xaU] = 0U;
            __Vtemp801[0xbU] = 0U;
            __Vtemp801[0xcU] = 0U;
            __Vtemp801[0xdU] = 0U;
            __Vtemp801[0xeU] = 0U;
            __Vtemp801[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp802, __Vtemp801, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp802[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_167 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp803[0U] = 1U;
            __Vtemp803[1U] = 0U;
            __Vtemp803[2U] = 0U;
            __Vtemp803[3U] = 0U;
            __Vtemp803[4U] = 0U;
            __Vtemp803[5U] = 0U;
            __Vtemp803[6U] = 0U;
            __Vtemp803[7U] = 0U;
            __Vtemp803[8U] = 0U;
            __Vtemp803[9U] = 0U;
            __Vtemp803[0xaU] = 0U;
            __Vtemp803[0xbU] = 0U;
            __Vtemp803[0xcU] = 0U;
            __Vtemp803[0xdU] = 0U;
            __Vtemp803[0xeU] = 0U;
            __Vtemp803[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp804, __Vtemp803, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp804[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp805[0U] = 1U;
            __Vtemp805[1U] = 0U;
            __Vtemp805[2U] = 0U;
            __Vtemp805[3U] = 0U;
            __Vtemp805[4U] = 0U;
            __Vtemp805[5U] = 0U;
            __Vtemp805[6U] = 0U;
            __Vtemp805[7U] = 0U;
            __Vtemp805[8U] = 0U;
            __Vtemp805[9U] = 0U;
            __Vtemp805[0xaU] = 0U;
            __Vtemp805[0xbU] = 0U;
            __Vtemp805[0xcU] = 0U;
            __Vtemp805[0xdU] = 0U;
            __Vtemp805[0xeU] = 0U;
            __Vtemp805[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp806, __Vtemp805, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp806[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp807[0U] = 1U;
            __Vtemp807[1U] = 0U;
            __Vtemp807[2U] = 0U;
            __Vtemp807[3U] = 0U;
            __Vtemp807[4U] = 0U;
            __Vtemp807[5U] = 0U;
            __Vtemp807[6U] = 0U;
            __Vtemp807[7U] = 0U;
            __Vtemp807[8U] = 0U;
            __Vtemp807[9U] = 0U;
            __Vtemp807[0xaU] = 0U;
            __Vtemp807[0xbU] = 0U;
            __Vtemp807[0xcU] = 0U;
            __Vtemp807[0xdU] = 0U;
            __Vtemp807[0xeU] = 0U;
            __Vtemp807[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp808, __Vtemp807, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp808[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_168 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp809[0U] = 1U;
            __Vtemp809[1U] = 0U;
            __Vtemp809[2U] = 0U;
            __Vtemp809[3U] = 0U;
            __Vtemp809[4U] = 0U;
            __Vtemp809[5U] = 0U;
            __Vtemp809[6U] = 0U;
            __Vtemp809[7U] = 0U;
            __Vtemp809[8U] = 0U;
            __Vtemp809[9U] = 0U;
            __Vtemp809[0xaU] = 0U;
            __Vtemp809[0xbU] = 0U;
            __Vtemp809[0xcU] = 0U;
            __Vtemp809[0xdU] = 0U;
            __Vtemp809[0xeU] = 0U;
            __Vtemp809[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp810, __Vtemp809, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp810[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp811[0U] = 1U;
            __Vtemp811[1U] = 0U;
            __Vtemp811[2U] = 0U;
            __Vtemp811[3U] = 0U;
            __Vtemp811[4U] = 0U;
            __Vtemp811[5U] = 0U;
            __Vtemp811[6U] = 0U;
            __Vtemp811[7U] = 0U;
            __Vtemp811[8U] = 0U;
            __Vtemp811[9U] = 0U;
            __Vtemp811[0xaU] = 0U;
            __Vtemp811[0xbU] = 0U;
            __Vtemp811[0xcU] = 0U;
            __Vtemp811[0xdU] = 0U;
            __Vtemp811[0xeU] = 0U;
            __Vtemp811[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp812, __Vtemp811, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp812[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp813[0U] = 1U;
            __Vtemp813[1U] = 0U;
            __Vtemp813[2U] = 0U;
            __Vtemp813[3U] = 0U;
            __Vtemp813[4U] = 0U;
            __Vtemp813[5U] = 0U;
            __Vtemp813[6U] = 0U;
            __Vtemp813[7U] = 0U;
            __Vtemp813[8U] = 0U;
            __Vtemp813[9U] = 0U;
            __Vtemp813[0xaU] = 0U;
            __Vtemp813[0xbU] = 0U;
            __Vtemp813[0xcU] = 0U;
            __Vtemp813[0xdU] = 0U;
            __Vtemp813[0xeU] = 0U;
            __Vtemp813[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp814, __Vtemp813, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp814[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_169 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp815[0U] = 1U;
            __Vtemp815[1U] = 0U;
            __Vtemp815[2U] = 0U;
            __Vtemp815[3U] = 0U;
            __Vtemp815[4U] = 0U;
            __Vtemp815[5U] = 0U;
            __Vtemp815[6U] = 0U;
            __Vtemp815[7U] = 0U;
            __Vtemp815[8U] = 0U;
            __Vtemp815[9U] = 0U;
            __Vtemp815[0xaU] = 0U;
            __Vtemp815[0xbU] = 0U;
            __Vtemp815[0xcU] = 0U;
            __Vtemp815[0xdU] = 0U;
            __Vtemp815[0xeU] = 0U;
            __Vtemp815[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp816, __Vtemp815, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp816[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp817[0U] = 1U;
            __Vtemp817[1U] = 0U;
            __Vtemp817[2U] = 0U;
            __Vtemp817[3U] = 0U;
            __Vtemp817[4U] = 0U;
            __Vtemp817[5U] = 0U;
            __Vtemp817[6U] = 0U;
            __Vtemp817[7U] = 0U;
            __Vtemp817[8U] = 0U;
            __Vtemp817[9U] = 0U;
            __Vtemp817[0xaU] = 0U;
            __Vtemp817[0xbU] = 0U;
            __Vtemp817[0xcU] = 0U;
            __Vtemp817[0xdU] = 0U;
            __Vtemp817[0xeU] = 0U;
            __Vtemp817[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp818, __Vtemp817, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp818[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp819[0U] = 1U;
            __Vtemp819[1U] = 0U;
            __Vtemp819[2U] = 0U;
            __Vtemp819[3U] = 0U;
            __Vtemp819[4U] = 0U;
            __Vtemp819[5U] = 0U;
            __Vtemp819[6U] = 0U;
            __Vtemp819[7U] = 0U;
            __Vtemp819[8U] = 0U;
            __Vtemp819[9U] = 0U;
            __Vtemp819[0xaU] = 0U;
            __Vtemp819[0xbU] = 0U;
            __Vtemp819[0xcU] = 0U;
            __Vtemp819[0xdU] = 0U;
            __Vtemp819[0xeU] = 0U;
            __Vtemp819[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp820, __Vtemp819, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp820[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_170 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp821[0U] = 1U;
            __Vtemp821[1U] = 0U;
            __Vtemp821[2U] = 0U;
            __Vtemp821[3U] = 0U;
            __Vtemp821[4U] = 0U;
            __Vtemp821[5U] = 0U;
            __Vtemp821[6U] = 0U;
            __Vtemp821[7U] = 0U;
            __Vtemp821[8U] = 0U;
            __Vtemp821[9U] = 0U;
            __Vtemp821[0xaU] = 0U;
            __Vtemp821[0xbU] = 0U;
            __Vtemp821[0xcU] = 0U;
            __Vtemp821[0xdU] = 0U;
            __Vtemp821[0xeU] = 0U;
            __Vtemp821[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp822, __Vtemp821, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp822[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp823[0U] = 1U;
            __Vtemp823[1U] = 0U;
            __Vtemp823[2U] = 0U;
            __Vtemp823[3U] = 0U;
            __Vtemp823[4U] = 0U;
            __Vtemp823[5U] = 0U;
            __Vtemp823[6U] = 0U;
            __Vtemp823[7U] = 0U;
            __Vtemp823[8U] = 0U;
            __Vtemp823[9U] = 0U;
            __Vtemp823[0xaU] = 0U;
            __Vtemp823[0xbU] = 0U;
            __Vtemp823[0xcU] = 0U;
            __Vtemp823[0xdU] = 0U;
            __Vtemp823[0xeU] = 0U;
            __Vtemp823[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp824, __Vtemp823, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp824[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp825[0U] = 1U;
            __Vtemp825[1U] = 0U;
            __Vtemp825[2U] = 0U;
            __Vtemp825[3U] = 0U;
            __Vtemp825[4U] = 0U;
            __Vtemp825[5U] = 0U;
            __Vtemp825[6U] = 0U;
            __Vtemp825[7U] = 0U;
            __Vtemp825[8U] = 0U;
            __Vtemp825[9U] = 0U;
            __Vtemp825[0xaU] = 0U;
            __Vtemp825[0xbU] = 0U;
            __Vtemp825[0xcU] = 0U;
            __Vtemp825[0xdU] = 0U;
            __Vtemp825[0xeU] = 0U;
            __Vtemp825[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp826, __Vtemp825, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp826[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_171 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp827[0U] = 1U;
            __Vtemp827[1U] = 0U;
            __Vtemp827[2U] = 0U;
            __Vtemp827[3U] = 0U;
            __Vtemp827[4U] = 0U;
            __Vtemp827[5U] = 0U;
            __Vtemp827[6U] = 0U;
            __Vtemp827[7U] = 0U;
            __Vtemp827[8U] = 0U;
            __Vtemp827[9U] = 0U;
            __Vtemp827[0xaU] = 0U;
            __Vtemp827[0xbU] = 0U;
            __Vtemp827[0xcU] = 0U;
            __Vtemp827[0xdU] = 0U;
            __Vtemp827[0xeU] = 0U;
            __Vtemp827[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp828, __Vtemp827, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp828[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp829[0U] = 1U;
            __Vtemp829[1U] = 0U;
            __Vtemp829[2U] = 0U;
            __Vtemp829[3U] = 0U;
            __Vtemp829[4U] = 0U;
            __Vtemp829[5U] = 0U;
            __Vtemp829[6U] = 0U;
            __Vtemp829[7U] = 0U;
            __Vtemp829[8U] = 0U;
            __Vtemp829[9U] = 0U;
            __Vtemp829[0xaU] = 0U;
            __Vtemp829[0xbU] = 0U;
            __Vtemp829[0xcU] = 0U;
            __Vtemp829[0xdU] = 0U;
            __Vtemp829[0xeU] = 0U;
            __Vtemp829[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp830, __Vtemp829, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp830[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp831[0U] = 1U;
            __Vtemp831[1U] = 0U;
            __Vtemp831[2U] = 0U;
            __Vtemp831[3U] = 0U;
            __Vtemp831[4U] = 0U;
            __Vtemp831[5U] = 0U;
            __Vtemp831[6U] = 0U;
            __Vtemp831[7U] = 0U;
            __Vtemp831[8U] = 0U;
            __Vtemp831[9U] = 0U;
            __Vtemp831[0xaU] = 0U;
            __Vtemp831[0xbU] = 0U;
            __Vtemp831[0xcU] = 0U;
            __Vtemp831[0xdU] = 0U;
            __Vtemp831[0xeU] = 0U;
            __Vtemp831[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp832, __Vtemp831, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp832[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_172 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp833[0U] = 1U;
            __Vtemp833[1U] = 0U;
            __Vtemp833[2U] = 0U;
            __Vtemp833[3U] = 0U;
            __Vtemp833[4U] = 0U;
            __Vtemp833[5U] = 0U;
            __Vtemp833[6U] = 0U;
            __Vtemp833[7U] = 0U;
            __Vtemp833[8U] = 0U;
            __Vtemp833[9U] = 0U;
            __Vtemp833[0xaU] = 0U;
            __Vtemp833[0xbU] = 0U;
            __Vtemp833[0xcU] = 0U;
            __Vtemp833[0xdU] = 0U;
            __Vtemp833[0xeU] = 0U;
            __Vtemp833[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp834, __Vtemp833, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp834[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp835[0U] = 1U;
            __Vtemp835[1U] = 0U;
            __Vtemp835[2U] = 0U;
            __Vtemp835[3U] = 0U;
            __Vtemp835[4U] = 0U;
            __Vtemp835[5U] = 0U;
            __Vtemp835[6U] = 0U;
            __Vtemp835[7U] = 0U;
            __Vtemp835[8U] = 0U;
            __Vtemp835[9U] = 0U;
            __Vtemp835[0xaU] = 0U;
            __Vtemp835[0xbU] = 0U;
            __Vtemp835[0xcU] = 0U;
            __Vtemp835[0xdU] = 0U;
            __Vtemp835[0xeU] = 0U;
            __Vtemp835[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp836, __Vtemp835, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp836[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
