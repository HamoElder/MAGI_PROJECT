// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__56(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__56\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp949[16];
    WData/*511:0*/ __Vtemp950[16];
    WData/*511:0*/ __Vtemp951[16];
    WData/*511:0*/ __Vtemp952[16];
    WData/*511:0*/ __Vtemp953[16];
    WData/*511:0*/ __Vtemp954[16];
    WData/*511:0*/ __Vtemp955[16];
    WData/*511:0*/ __Vtemp956[16];
    WData/*511:0*/ __Vtemp957[16];
    WData/*511:0*/ __Vtemp958[16];
    WData/*511:0*/ __Vtemp959[16];
    WData/*511:0*/ __Vtemp960[16];
    WData/*511:0*/ __Vtemp961[16];
    WData/*511:0*/ __Vtemp962[16];
    WData/*511:0*/ __Vtemp963[16];
    WData/*511:0*/ __Vtemp964[16];
    WData/*511:0*/ __Vtemp965[16];
    WData/*511:0*/ __Vtemp966[16];
    WData/*511:0*/ __Vtemp967[16];
    WData/*511:0*/ __Vtemp968[16];
    WData/*511:0*/ __Vtemp969[16];
    WData/*511:0*/ __Vtemp970[16];
    WData/*511:0*/ __Vtemp971[16];
    WData/*511:0*/ __Vtemp972[16];
    WData/*511:0*/ __Vtemp973[16];
    WData/*511:0*/ __Vtemp974[16];
    WData/*511:0*/ __Vtemp975[16];
    WData/*511:0*/ __Vtemp976[16];
    WData/*511:0*/ __Vtemp977[16];
    WData/*511:0*/ __Vtemp978[16];
    WData/*511:0*/ __Vtemp979[16];
    WData/*511:0*/ __Vtemp980[16];
    WData/*511:0*/ __Vtemp981[16];
    WData/*511:0*/ __Vtemp982[16];
    WData/*511:0*/ __Vtemp983[16];
    WData/*511:0*/ __Vtemp984[16];
    WData/*511:0*/ __Vtemp985[16];
    WData/*511:0*/ __Vtemp986[16];
    WData/*511:0*/ __Vtemp987[16];
    WData/*511:0*/ __Vtemp988[16];
    WData/*511:0*/ __Vtemp989[16];
    WData/*511:0*/ __Vtemp990[16];
    WData/*511:0*/ __Vtemp991[16];
    WData/*511:0*/ __Vtemp992[16];
    WData/*511:0*/ __Vtemp993[16];
    WData/*511:0*/ __Vtemp994[16];
    WData/*511:0*/ __Vtemp995[16];
    WData/*511:0*/ __Vtemp996[16];
    WData/*511:0*/ __Vtemp997[16];
    WData/*511:0*/ __Vtemp998[16];
    WData/*511:0*/ __Vtemp999[16];
    WData/*511:0*/ __Vtemp1000[16];
    WData/*511:0*/ __Vtemp1001[16];
    WData/*511:0*/ __Vtemp1002[16];
    WData/*511:0*/ __Vtemp1003[16];
    WData/*511:0*/ __Vtemp1004[16];
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp949[0U] = 1U;
            __Vtemp949[1U] = 0U;
            __Vtemp949[2U] = 0U;
            __Vtemp949[3U] = 0U;
            __Vtemp949[4U] = 0U;
            __Vtemp949[5U] = 0U;
            __Vtemp949[6U] = 0U;
            __Vtemp949[7U] = 0U;
            __Vtemp949[8U] = 0U;
            __Vtemp949[9U] = 0U;
            __Vtemp949[0xaU] = 0U;
            __Vtemp949[0xbU] = 0U;
            __Vtemp949[0xcU] = 0U;
            __Vtemp949[0xdU] = 0U;
            __Vtemp949[0xeU] = 0U;
            __Vtemp949[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp950, __Vtemp949, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp950[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_203 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp951[0U] = 1U;
            __Vtemp951[1U] = 0U;
            __Vtemp951[2U] = 0U;
            __Vtemp951[3U] = 0U;
            __Vtemp951[4U] = 0U;
            __Vtemp951[5U] = 0U;
            __Vtemp951[6U] = 0U;
            __Vtemp951[7U] = 0U;
            __Vtemp951[8U] = 0U;
            __Vtemp951[9U] = 0U;
            __Vtemp951[0xaU] = 0U;
            __Vtemp951[0xbU] = 0U;
            __Vtemp951[0xcU] = 0U;
            __Vtemp951[0xdU] = 0U;
            __Vtemp951[0xeU] = 0U;
            __Vtemp951[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp952, __Vtemp951, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp952[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_141 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp953[0U] = 1U;
            __Vtemp953[1U] = 0U;
            __Vtemp953[2U] = 0U;
            __Vtemp953[3U] = 0U;
            __Vtemp953[4U] = 0U;
            __Vtemp953[5U] = 0U;
            __Vtemp953[6U] = 0U;
            __Vtemp953[7U] = 0U;
            __Vtemp953[8U] = 0U;
            __Vtemp953[9U] = 0U;
            __Vtemp953[0xaU] = 0U;
            __Vtemp953[0xbU] = 0U;
            __Vtemp953[0xcU] = 0U;
            __Vtemp953[0xdU] = 0U;
            __Vtemp953[0xeU] = 0U;
            __Vtemp953[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp954, __Vtemp953, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp954[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_206 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp955[0U] = 1U;
            __Vtemp955[1U] = 0U;
            __Vtemp955[2U] = 0U;
            __Vtemp955[3U] = 0U;
            __Vtemp955[4U] = 0U;
            __Vtemp955[5U] = 0U;
            __Vtemp955[6U] = 0U;
            __Vtemp955[7U] = 0U;
            __Vtemp955[8U] = 0U;
            __Vtemp955[9U] = 0U;
            __Vtemp955[0xaU] = 0U;
            __Vtemp955[0xbU] = 0U;
            __Vtemp955[0xcU] = 0U;
            __Vtemp955[0xdU] = 0U;
            __Vtemp955[0xeU] = 0U;
            __Vtemp955[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp956, __Vtemp955, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp956[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_207 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp957[0U] = 1U;
            __Vtemp957[1U] = 0U;
            __Vtemp957[2U] = 0U;
            __Vtemp957[3U] = 0U;
            __Vtemp957[4U] = 0U;
            __Vtemp957[5U] = 0U;
            __Vtemp957[6U] = 0U;
            __Vtemp957[7U] = 0U;
            __Vtemp957[8U] = 0U;
            __Vtemp957[9U] = 0U;
            __Vtemp957[0xaU] = 0U;
            __Vtemp957[0xbU] = 0U;
            __Vtemp957[0xcU] = 0U;
            __Vtemp957[0xdU] = 0U;
            __Vtemp957[0xeU] = 0U;
            __Vtemp957[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp958, __Vtemp957, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp958[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_208 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp959[0U] = 1U;
            __Vtemp959[1U] = 0U;
            __Vtemp959[2U] = 0U;
            __Vtemp959[3U] = 0U;
            __Vtemp959[4U] = 0U;
            __Vtemp959[5U] = 0U;
            __Vtemp959[6U] = 0U;
            __Vtemp959[7U] = 0U;
            __Vtemp959[8U] = 0U;
            __Vtemp959[9U] = 0U;
            __Vtemp959[0xaU] = 0U;
            __Vtemp959[0xbU] = 0U;
            __Vtemp959[0xcU] = 0U;
            __Vtemp959[0xdU] = 0U;
            __Vtemp959[0xeU] = 0U;
            __Vtemp959[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp960, __Vtemp959, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp960[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_209 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp961[0U] = 1U;
            __Vtemp961[1U] = 0U;
            __Vtemp961[2U] = 0U;
            __Vtemp961[3U] = 0U;
            __Vtemp961[4U] = 0U;
            __Vtemp961[5U] = 0U;
            __Vtemp961[6U] = 0U;
            __Vtemp961[7U] = 0U;
            __Vtemp961[8U] = 0U;
            __Vtemp961[9U] = 0U;
            __Vtemp961[0xaU] = 0U;
            __Vtemp961[0xbU] = 0U;
            __Vtemp961[0xcU] = 0U;
            __Vtemp961[0xdU] = 0U;
            __Vtemp961[0xeU] = 0U;
            __Vtemp961[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp962, __Vtemp961, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp962[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_210 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp963[0U] = 1U;
            __Vtemp963[1U] = 0U;
            __Vtemp963[2U] = 0U;
            __Vtemp963[3U] = 0U;
            __Vtemp963[4U] = 0U;
            __Vtemp963[5U] = 0U;
            __Vtemp963[6U] = 0U;
            __Vtemp963[7U] = 0U;
            __Vtemp963[8U] = 0U;
            __Vtemp963[9U] = 0U;
            __Vtemp963[0xaU] = 0U;
            __Vtemp963[0xbU] = 0U;
            __Vtemp963[0xcU] = 0U;
            __Vtemp963[0xdU] = 0U;
            __Vtemp963[0xeU] = 0U;
            __Vtemp963[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp964, __Vtemp963, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp964[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_211 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp965[0U] = 1U;
            __Vtemp965[1U] = 0U;
            __Vtemp965[2U] = 0U;
            __Vtemp965[3U] = 0U;
            __Vtemp965[4U] = 0U;
            __Vtemp965[5U] = 0U;
            __Vtemp965[6U] = 0U;
            __Vtemp965[7U] = 0U;
            __Vtemp965[8U] = 0U;
            __Vtemp965[9U] = 0U;
            __Vtemp965[0xaU] = 0U;
            __Vtemp965[0xbU] = 0U;
            __Vtemp965[0xcU] = 0U;
            __Vtemp965[0xdU] = 0U;
            __Vtemp965[0xeU] = 0U;
            __Vtemp965[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp966, __Vtemp965, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp966[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_212 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp967[0U] = 1U;
            __Vtemp967[1U] = 0U;
            __Vtemp967[2U] = 0U;
            __Vtemp967[3U] = 0U;
            __Vtemp967[4U] = 0U;
            __Vtemp967[5U] = 0U;
            __Vtemp967[6U] = 0U;
            __Vtemp967[7U] = 0U;
            __Vtemp967[8U] = 0U;
            __Vtemp967[9U] = 0U;
            __Vtemp967[0xaU] = 0U;
            __Vtemp967[0xbU] = 0U;
            __Vtemp967[0xcU] = 0U;
            __Vtemp967[0xdU] = 0U;
            __Vtemp967[0xeU] = 0U;
            __Vtemp967[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp968, __Vtemp967, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp968[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_213 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp969[0U] = 1U;
            __Vtemp969[1U] = 0U;
            __Vtemp969[2U] = 0U;
            __Vtemp969[3U] = 0U;
            __Vtemp969[4U] = 0U;
            __Vtemp969[5U] = 0U;
            __Vtemp969[6U] = 0U;
            __Vtemp969[7U] = 0U;
            __Vtemp969[8U] = 0U;
            __Vtemp969[9U] = 0U;
            __Vtemp969[0xaU] = 0U;
            __Vtemp969[0xbU] = 0U;
            __Vtemp969[0xcU] = 0U;
            __Vtemp969[0xdU] = 0U;
            __Vtemp969[0xeU] = 0U;
            __Vtemp969[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp970, __Vtemp969, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp970[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_214 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp971[0U] = 1U;
            __Vtemp971[1U] = 0U;
            __Vtemp971[2U] = 0U;
            __Vtemp971[3U] = 0U;
            __Vtemp971[4U] = 0U;
            __Vtemp971[5U] = 0U;
            __Vtemp971[6U] = 0U;
            __Vtemp971[7U] = 0U;
            __Vtemp971[8U] = 0U;
            __Vtemp971[9U] = 0U;
            __Vtemp971[0xaU] = 0U;
            __Vtemp971[0xbU] = 0U;
            __Vtemp971[0xcU] = 0U;
            __Vtemp971[0xdU] = 0U;
            __Vtemp971[0xeU] = 0U;
            __Vtemp971[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp972, __Vtemp971, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp972[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_215 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp973[0U] = 1U;
            __Vtemp973[1U] = 0U;
            __Vtemp973[2U] = 0U;
            __Vtemp973[3U] = 0U;
            __Vtemp973[4U] = 0U;
            __Vtemp973[5U] = 0U;
            __Vtemp973[6U] = 0U;
            __Vtemp973[7U] = 0U;
            __Vtemp973[8U] = 0U;
            __Vtemp973[9U] = 0U;
            __Vtemp973[0xaU] = 0U;
            __Vtemp973[0xbU] = 0U;
            __Vtemp973[0xcU] = 0U;
            __Vtemp973[0xdU] = 0U;
            __Vtemp973[0xeU] = 0U;
            __Vtemp973[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp974, __Vtemp973, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp974[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_216 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp975[0U] = 1U;
            __Vtemp975[1U] = 0U;
            __Vtemp975[2U] = 0U;
            __Vtemp975[3U] = 0U;
            __Vtemp975[4U] = 0U;
            __Vtemp975[5U] = 0U;
            __Vtemp975[6U] = 0U;
            __Vtemp975[7U] = 0U;
            __Vtemp975[8U] = 0U;
            __Vtemp975[9U] = 0U;
            __Vtemp975[0xaU] = 0U;
            __Vtemp975[0xbU] = 0U;
            __Vtemp975[0xcU] = 0U;
            __Vtemp975[0xdU] = 0U;
            __Vtemp975[0xeU] = 0U;
            __Vtemp975[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp976, __Vtemp975, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp976[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_217 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp977[0U] = 1U;
            __Vtemp977[1U] = 0U;
            __Vtemp977[2U] = 0U;
            __Vtemp977[3U] = 0U;
            __Vtemp977[4U] = 0U;
            __Vtemp977[5U] = 0U;
            __Vtemp977[6U] = 0U;
            __Vtemp977[7U] = 0U;
            __Vtemp977[8U] = 0U;
            __Vtemp977[9U] = 0U;
            __Vtemp977[0xaU] = 0U;
            __Vtemp977[0xbU] = 0U;
            __Vtemp977[0xcU] = 0U;
            __Vtemp977[0xdU] = 0U;
            __Vtemp977[0xeU] = 0U;
            __Vtemp977[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp978, __Vtemp977, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp978[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_218 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp979[0U] = 1U;
            __Vtemp979[1U] = 0U;
            __Vtemp979[2U] = 0U;
            __Vtemp979[3U] = 0U;
            __Vtemp979[4U] = 0U;
            __Vtemp979[5U] = 0U;
            __Vtemp979[6U] = 0U;
            __Vtemp979[7U] = 0U;
            __Vtemp979[8U] = 0U;
            __Vtemp979[9U] = 0U;
            __Vtemp979[0xaU] = 0U;
            __Vtemp979[0xbU] = 0U;
            __Vtemp979[0xcU] = 0U;
            __Vtemp979[0xdU] = 0U;
            __Vtemp979[0xeU] = 0U;
            __Vtemp979[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp980, __Vtemp979, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp980[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_219 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp981[0U] = 1U;
            __Vtemp981[1U] = 0U;
            __Vtemp981[2U] = 0U;
            __Vtemp981[3U] = 0U;
            __Vtemp981[4U] = 0U;
            __Vtemp981[5U] = 0U;
            __Vtemp981[6U] = 0U;
            __Vtemp981[7U] = 0U;
            __Vtemp981[8U] = 0U;
            __Vtemp981[9U] = 0U;
            __Vtemp981[0xaU] = 0U;
            __Vtemp981[0xbU] = 0U;
            __Vtemp981[0xcU] = 0U;
            __Vtemp981[0xdU] = 0U;
            __Vtemp981[0xeU] = 0U;
            __Vtemp981[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp982, __Vtemp981, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp982[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_220 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp983[0U] = 1U;
            __Vtemp983[1U] = 0U;
            __Vtemp983[2U] = 0U;
            __Vtemp983[3U] = 0U;
            __Vtemp983[4U] = 0U;
            __Vtemp983[5U] = 0U;
            __Vtemp983[6U] = 0U;
            __Vtemp983[7U] = 0U;
            __Vtemp983[8U] = 0U;
            __Vtemp983[9U] = 0U;
            __Vtemp983[0xaU] = 0U;
            __Vtemp983[0xbU] = 0U;
            __Vtemp983[0xcU] = 0U;
            __Vtemp983[0xdU] = 0U;
            __Vtemp983[0xeU] = 0U;
            __Vtemp983[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp984, __Vtemp983, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp984[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_221 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp985[0U] = 1U;
            __Vtemp985[1U] = 0U;
            __Vtemp985[2U] = 0U;
            __Vtemp985[3U] = 0U;
            __Vtemp985[4U] = 0U;
            __Vtemp985[5U] = 0U;
            __Vtemp985[6U] = 0U;
            __Vtemp985[7U] = 0U;
            __Vtemp985[8U] = 0U;
            __Vtemp985[9U] = 0U;
            __Vtemp985[0xaU] = 0U;
            __Vtemp985[0xbU] = 0U;
            __Vtemp985[0xcU] = 0U;
            __Vtemp985[0xdU] = 0U;
            __Vtemp985[0xeU] = 0U;
            __Vtemp985[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp986, __Vtemp985, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp986[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_222 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp987[0U] = 1U;
            __Vtemp987[1U] = 0U;
            __Vtemp987[2U] = 0U;
            __Vtemp987[3U] = 0U;
            __Vtemp987[4U] = 0U;
            __Vtemp987[5U] = 0U;
            __Vtemp987[6U] = 0U;
            __Vtemp987[7U] = 0U;
            __Vtemp987[8U] = 0U;
            __Vtemp987[9U] = 0U;
            __Vtemp987[0xaU] = 0U;
            __Vtemp987[0xbU] = 0U;
            __Vtemp987[0xcU] = 0U;
            __Vtemp987[0xdU] = 0U;
            __Vtemp987[0xeU] = 0U;
            __Vtemp987[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp988, __Vtemp987, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp988[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_223 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp989[0U] = 1U;
            __Vtemp989[1U] = 0U;
            __Vtemp989[2U] = 0U;
            __Vtemp989[3U] = 0U;
            __Vtemp989[4U] = 0U;
            __Vtemp989[5U] = 0U;
            __Vtemp989[6U] = 0U;
            __Vtemp989[7U] = 0U;
            __Vtemp989[8U] = 0U;
            __Vtemp989[9U] = 0U;
            __Vtemp989[0xaU] = 0U;
            __Vtemp989[0xbU] = 0U;
            __Vtemp989[0xcU] = 0U;
            __Vtemp989[0xdU] = 0U;
            __Vtemp989[0xeU] = 0U;
            __Vtemp989[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp990, __Vtemp989, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp990[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_224 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp991[0U] = 1U;
            __Vtemp991[1U] = 0U;
            __Vtemp991[2U] = 0U;
            __Vtemp991[3U] = 0U;
            __Vtemp991[4U] = 0U;
            __Vtemp991[5U] = 0U;
            __Vtemp991[6U] = 0U;
            __Vtemp991[7U] = 0U;
            __Vtemp991[8U] = 0U;
            __Vtemp991[9U] = 0U;
            __Vtemp991[0xaU] = 0U;
            __Vtemp991[0xbU] = 0U;
            __Vtemp991[0xcU] = 0U;
            __Vtemp991[0xdU] = 0U;
            __Vtemp991[0xeU] = 0U;
            __Vtemp991[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp992, __Vtemp991, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp992[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_225 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp993[0U] = 1U;
            __Vtemp993[1U] = 0U;
            __Vtemp993[2U] = 0U;
            __Vtemp993[3U] = 0U;
            __Vtemp993[4U] = 0U;
            __Vtemp993[5U] = 0U;
            __Vtemp993[6U] = 0U;
            __Vtemp993[7U] = 0U;
            __Vtemp993[8U] = 0U;
            __Vtemp993[9U] = 0U;
            __Vtemp993[0xaU] = 0U;
            __Vtemp993[0xbU] = 0U;
            __Vtemp993[0xcU] = 0U;
            __Vtemp993[0xdU] = 0U;
            __Vtemp993[0xeU] = 0U;
            __Vtemp993[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp994, __Vtemp993, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp994[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_226 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp995[0U] = 1U;
            __Vtemp995[1U] = 0U;
            __Vtemp995[2U] = 0U;
            __Vtemp995[3U] = 0U;
            __Vtemp995[4U] = 0U;
            __Vtemp995[5U] = 0U;
            __Vtemp995[6U] = 0U;
            __Vtemp995[7U] = 0U;
            __Vtemp995[8U] = 0U;
            __Vtemp995[9U] = 0U;
            __Vtemp995[0xaU] = 0U;
            __Vtemp995[0xbU] = 0U;
            __Vtemp995[0xcU] = 0U;
            __Vtemp995[0xdU] = 0U;
            __Vtemp995[0xeU] = 0U;
            __Vtemp995[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp996, __Vtemp995, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp996[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_227 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp997[0U] = 1U;
            __Vtemp997[1U] = 0U;
            __Vtemp997[2U] = 0U;
            __Vtemp997[3U] = 0U;
            __Vtemp997[4U] = 0U;
            __Vtemp997[5U] = 0U;
            __Vtemp997[6U] = 0U;
            __Vtemp997[7U] = 0U;
            __Vtemp997[8U] = 0U;
            __Vtemp997[9U] = 0U;
            __Vtemp997[0xaU] = 0U;
            __Vtemp997[0xbU] = 0U;
            __Vtemp997[0xcU] = 0U;
            __Vtemp997[0xdU] = 0U;
            __Vtemp997[0xeU] = 0U;
            __Vtemp997[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp998, __Vtemp997, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp998[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_228 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp999[0U] = 1U;
            __Vtemp999[1U] = 0U;
            __Vtemp999[2U] = 0U;
            __Vtemp999[3U] = 0U;
            __Vtemp999[4U] = 0U;
            __Vtemp999[5U] = 0U;
            __Vtemp999[6U] = 0U;
            __Vtemp999[7U] = 0U;
            __Vtemp999[8U] = 0U;
            __Vtemp999[9U] = 0U;
            __Vtemp999[0xaU] = 0U;
            __Vtemp999[0xbU] = 0U;
            __Vtemp999[0xcU] = 0U;
            __Vtemp999[0xdU] = 0U;
            __Vtemp999[0xeU] = 0U;
            __Vtemp999[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1000, __Vtemp999, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1000[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_229 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1001[0U] = 1U;
            __Vtemp1001[1U] = 0U;
            __Vtemp1001[2U] = 0U;
            __Vtemp1001[3U] = 0U;
            __Vtemp1001[4U] = 0U;
            __Vtemp1001[5U] = 0U;
            __Vtemp1001[6U] = 0U;
            __Vtemp1001[7U] = 0U;
            __Vtemp1001[8U] = 0U;
            __Vtemp1001[9U] = 0U;
            __Vtemp1001[0xaU] = 0U;
            __Vtemp1001[0xbU] = 0U;
            __Vtemp1001[0xcU] = 0U;
            __Vtemp1001[0xdU] = 0U;
            __Vtemp1001[0xeU] = 0U;
            __Vtemp1001[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1002, __Vtemp1001, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1002[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_230 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1003[0U] = 1U;
            __Vtemp1003[1U] = 0U;
            __Vtemp1003[2U] = 0U;
            __Vtemp1003[3U] = 0U;
            __Vtemp1003[4U] = 0U;
            __Vtemp1003[5U] = 0U;
            __Vtemp1003[6U] = 0U;
            __Vtemp1003[7U] = 0U;
            __Vtemp1003[8U] = 0U;
            __Vtemp1003[9U] = 0U;
            __Vtemp1003[0xaU] = 0U;
            __Vtemp1003[0xbU] = 0U;
            __Vtemp1003[0xcU] = 0U;
            __Vtemp1003[0xdU] = 0U;
            __Vtemp1003[0xeU] = 0U;
            __Vtemp1003[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1004, __Vtemp1003, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1004[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_231 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__57(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__57\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1005[16];
    WData/*511:0*/ __Vtemp1006[16];
    WData/*511:0*/ __Vtemp1007[16];
    WData/*511:0*/ __Vtemp1008[16];
    WData/*511:0*/ __Vtemp1009[16];
    WData/*511:0*/ __Vtemp1010[16];
    WData/*511:0*/ __Vtemp1011[16];
    WData/*511:0*/ __Vtemp1012[16];
    WData/*511:0*/ __Vtemp1013[16];
    WData/*511:0*/ __Vtemp1014[16];
    WData/*511:0*/ __Vtemp1015[16];
    WData/*511:0*/ __Vtemp1016[16];
    WData/*511:0*/ __Vtemp1017[16];
    WData/*511:0*/ __Vtemp1018[16];
    WData/*511:0*/ __Vtemp1019[16];
    WData/*511:0*/ __Vtemp1020[16];
    WData/*511:0*/ __Vtemp1021[16];
    WData/*511:0*/ __Vtemp1022[16];
    WData/*511:0*/ __Vtemp1023[16];
    WData/*511:0*/ __Vtemp1024[16];
    WData/*511:0*/ __Vtemp1025[16];
    WData/*511:0*/ __Vtemp1026[16];
    WData/*511:0*/ __Vtemp1027[16];
    WData/*511:0*/ __Vtemp1028[16];
    WData/*511:0*/ __Vtemp1029[16];
    WData/*511:0*/ __Vtemp1030[16];
    WData/*511:0*/ __Vtemp1031[16];
    WData/*511:0*/ __Vtemp1032[16];
    WData/*511:0*/ __Vtemp1033[16];
    WData/*511:0*/ __Vtemp1034[16];
    WData/*511:0*/ __Vtemp1035[16];
    WData/*511:0*/ __Vtemp1036[16];
    WData/*511:0*/ __Vtemp1037[16];
    WData/*511:0*/ __Vtemp1038[16];
    WData/*511:0*/ __Vtemp1039[16];
    WData/*511:0*/ __Vtemp1040[16];
    WData/*511:0*/ __Vtemp1041[16];
    WData/*511:0*/ __Vtemp1042[16];
    WData/*511:0*/ __Vtemp1043[16];
    WData/*511:0*/ __Vtemp1044[16];
    WData/*511:0*/ __Vtemp1045[16];
    WData/*511:0*/ __Vtemp1046[16];
    WData/*511:0*/ __Vtemp1047[16];
    WData/*511:0*/ __Vtemp1048[16];
    WData/*511:0*/ __Vtemp1049[16];
    WData/*511:0*/ __Vtemp1050[16];
    WData/*511:0*/ __Vtemp1051[16];
    WData/*511:0*/ __Vtemp1052[16];
    WData/*511:0*/ __Vtemp1053[16];
    WData/*511:0*/ __Vtemp1054[16];
    WData/*511:0*/ __Vtemp1055[16];
    WData/*511:0*/ __Vtemp1056[16];
    WData/*511:0*/ __Vtemp1057[16];
    WData/*511:0*/ __Vtemp1058[16];
    WData/*511:0*/ __Vtemp1059[16];
    WData/*511:0*/ __Vtemp1060[16];
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1005[0U] = 1U;
            __Vtemp1005[1U] = 0U;
            __Vtemp1005[2U] = 0U;
            __Vtemp1005[3U] = 0U;
            __Vtemp1005[4U] = 0U;
            __Vtemp1005[5U] = 0U;
            __Vtemp1005[6U] = 0U;
            __Vtemp1005[7U] = 0U;
            __Vtemp1005[8U] = 0U;
            __Vtemp1005[9U] = 0U;
            __Vtemp1005[0xaU] = 0U;
            __Vtemp1005[0xbU] = 0U;
            __Vtemp1005[0xcU] = 0U;
            __Vtemp1005[0xdU] = 0U;
            __Vtemp1005[0xeU] = 0U;
            __Vtemp1005[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1006, __Vtemp1005, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1006[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_232 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1007[0U] = 1U;
            __Vtemp1007[1U] = 0U;
            __Vtemp1007[2U] = 0U;
            __Vtemp1007[3U] = 0U;
            __Vtemp1007[4U] = 0U;
            __Vtemp1007[5U] = 0U;
            __Vtemp1007[6U] = 0U;
            __Vtemp1007[7U] = 0U;
            __Vtemp1007[8U] = 0U;
            __Vtemp1007[9U] = 0U;
            __Vtemp1007[0xaU] = 0U;
            __Vtemp1007[0xbU] = 0U;
            __Vtemp1007[0xcU] = 0U;
            __Vtemp1007[0xdU] = 0U;
            __Vtemp1007[0xeU] = 0U;
            __Vtemp1007[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1008, __Vtemp1007, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1008[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_233 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1009[0U] = 1U;
            __Vtemp1009[1U] = 0U;
            __Vtemp1009[2U] = 0U;
            __Vtemp1009[3U] = 0U;
            __Vtemp1009[4U] = 0U;
            __Vtemp1009[5U] = 0U;
            __Vtemp1009[6U] = 0U;
            __Vtemp1009[7U] = 0U;
            __Vtemp1009[8U] = 0U;
            __Vtemp1009[9U] = 0U;
            __Vtemp1009[0xaU] = 0U;
            __Vtemp1009[0xbU] = 0U;
            __Vtemp1009[0xcU] = 0U;
            __Vtemp1009[0xdU] = 0U;
            __Vtemp1009[0xeU] = 0U;
            __Vtemp1009[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1010, __Vtemp1009, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1010[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_234 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1011[0U] = 1U;
            __Vtemp1011[1U] = 0U;
            __Vtemp1011[2U] = 0U;
            __Vtemp1011[3U] = 0U;
            __Vtemp1011[4U] = 0U;
            __Vtemp1011[5U] = 0U;
            __Vtemp1011[6U] = 0U;
            __Vtemp1011[7U] = 0U;
            __Vtemp1011[8U] = 0U;
            __Vtemp1011[9U] = 0U;
            __Vtemp1011[0xaU] = 0U;
            __Vtemp1011[0xbU] = 0U;
            __Vtemp1011[0xcU] = 0U;
            __Vtemp1011[0xdU] = 0U;
            __Vtemp1011[0xeU] = 0U;
            __Vtemp1011[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1012, __Vtemp1011, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1012[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_235 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1013[0U] = 1U;
            __Vtemp1013[1U] = 0U;
            __Vtemp1013[2U] = 0U;
            __Vtemp1013[3U] = 0U;
            __Vtemp1013[4U] = 0U;
            __Vtemp1013[5U] = 0U;
            __Vtemp1013[6U] = 0U;
            __Vtemp1013[7U] = 0U;
            __Vtemp1013[8U] = 0U;
            __Vtemp1013[9U] = 0U;
            __Vtemp1013[0xaU] = 0U;
            __Vtemp1013[0xbU] = 0U;
            __Vtemp1013[0xcU] = 0U;
            __Vtemp1013[0xdU] = 0U;
            __Vtemp1013[0xeU] = 0U;
            __Vtemp1013[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1014, __Vtemp1013, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1014[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_236 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1015[0U] = 1U;
            __Vtemp1015[1U] = 0U;
            __Vtemp1015[2U] = 0U;
            __Vtemp1015[3U] = 0U;
            __Vtemp1015[4U] = 0U;
            __Vtemp1015[5U] = 0U;
            __Vtemp1015[6U] = 0U;
            __Vtemp1015[7U] = 0U;
            __Vtemp1015[8U] = 0U;
            __Vtemp1015[9U] = 0U;
            __Vtemp1015[0xaU] = 0U;
            __Vtemp1015[0xbU] = 0U;
            __Vtemp1015[0xcU] = 0U;
            __Vtemp1015[0xdU] = 0U;
            __Vtemp1015[0xeU] = 0U;
            __Vtemp1015[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1016, __Vtemp1015, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1016[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_237 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1017[0U] = 1U;
            __Vtemp1017[1U] = 0U;
            __Vtemp1017[2U] = 0U;
            __Vtemp1017[3U] = 0U;
            __Vtemp1017[4U] = 0U;
            __Vtemp1017[5U] = 0U;
            __Vtemp1017[6U] = 0U;
            __Vtemp1017[7U] = 0U;
            __Vtemp1017[8U] = 0U;
            __Vtemp1017[9U] = 0U;
            __Vtemp1017[0xaU] = 0U;
            __Vtemp1017[0xbU] = 0U;
            __Vtemp1017[0xcU] = 0U;
            __Vtemp1017[0xdU] = 0U;
            __Vtemp1017[0xeU] = 0U;
            __Vtemp1017[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1018, __Vtemp1017, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1018[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_238 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1019[0U] = 1U;
            __Vtemp1019[1U] = 0U;
            __Vtemp1019[2U] = 0U;
            __Vtemp1019[3U] = 0U;
            __Vtemp1019[4U] = 0U;
            __Vtemp1019[5U] = 0U;
            __Vtemp1019[6U] = 0U;
            __Vtemp1019[7U] = 0U;
            __Vtemp1019[8U] = 0U;
            __Vtemp1019[9U] = 0U;
            __Vtemp1019[0xaU] = 0U;
            __Vtemp1019[0xbU] = 0U;
            __Vtemp1019[0xcU] = 0U;
            __Vtemp1019[0xdU] = 0U;
            __Vtemp1019[0xeU] = 0U;
            __Vtemp1019[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1020, __Vtemp1019, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1020[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_239 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1021[0U] = 1U;
            __Vtemp1021[1U] = 0U;
            __Vtemp1021[2U] = 0U;
            __Vtemp1021[3U] = 0U;
            __Vtemp1021[4U] = 0U;
            __Vtemp1021[5U] = 0U;
            __Vtemp1021[6U] = 0U;
            __Vtemp1021[7U] = 0U;
            __Vtemp1021[8U] = 0U;
            __Vtemp1021[9U] = 0U;
            __Vtemp1021[0xaU] = 0U;
            __Vtemp1021[0xbU] = 0U;
            __Vtemp1021[0xcU] = 0U;
            __Vtemp1021[0xdU] = 0U;
            __Vtemp1021[0xeU] = 0U;
            __Vtemp1021[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1022, __Vtemp1021, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1022[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_240 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1023[0U] = 1U;
            __Vtemp1023[1U] = 0U;
            __Vtemp1023[2U] = 0U;
            __Vtemp1023[3U] = 0U;
            __Vtemp1023[4U] = 0U;
            __Vtemp1023[5U] = 0U;
            __Vtemp1023[6U] = 0U;
            __Vtemp1023[7U] = 0U;
            __Vtemp1023[8U] = 0U;
            __Vtemp1023[9U] = 0U;
            __Vtemp1023[0xaU] = 0U;
            __Vtemp1023[0xbU] = 0U;
            __Vtemp1023[0xcU] = 0U;
            __Vtemp1023[0xdU] = 0U;
            __Vtemp1023[0xeU] = 0U;
            __Vtemp1023[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1024, __Vtemp1023, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1024[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_241 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1025[0U] = 1U;
            __Vtemp1025[1U] = 0U;
            __Vtemp1025[2U] = 0U;
            __Vtemp1025[3U] = 0U;
            __Vtemp1025[4U] = 0U;
            __Vtemp1025[5U] = 0U;
            __Vtemp1025[6U] = 0U;
            __Vtemp1025[7U] = 0U;
            __Vtemp1025[8U] = 0U;
            __Vtemp1025[9U] = 0U;
            __Vtemp1025[0xaU] = 0U;
            __Vtemp1025[0xbU] = 0U;
            __Vtemp1025[0xcU] = 0U;
            __Vtemp1025[0xdU] = 0U;
            __Vtemp1025[0xeU] = 0U;
            __Vtemp1025[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1026, __Vtemp1025, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1026[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_242 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1027[0U] = 1U;
            __Vtemp1027[1U] = 0U;
            __Vtemp1027[2U] = 0U;
            __Vtemp1027[3U] = 0U;
            __Vtemp1027[4U] = 0U;
            __Vtemp1027[5U] = 0U;
            __Vtemp1027[6U] = 0U;
            __Vtemp1027[7U] = 0U;
            __Vtemp1027[8U] = 0U;
            __Vtemp1027[9U] = 0U;
            __Vtemp1027[0xaU] = 0U;
            __Vtemp1027[0xbU] = 0U;
            __Vtemp1027[0xcU] = 0U;
            __Vtemp1027[0xdU] = 0U;
            __Vtemp1027[0xeU] = 0U;
            __Vtemp1027[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1028, __Vtemp1027, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1028[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_243 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1029[0U] = 1U;
            __Vtemp1029[1U] = 0U;
            __Vtemp1029[2U] = 0U;
            __Vtemp1029[3U] = 0U;
            __Vtemp1029[4U] = 0U;
            __Vtemp1029[5U] = 0U;
            __Vtemp1029[6U] = 0U;
            __Vtemp1029[7U] = 0U;
            __Vtemp1029[8U] = 0U;
            __Vtemp1029[9U] = 0U;
            __Vtemp1029[0xaU] = 0U;
            __Vtemp1029[0xbU] = 0U;
            __Vtemp1029[0xcU] = 0U;
            __Vtemp1029[0xdU] = 0U;
            __Vtemp1029[0xeU] = 0U;
            __Vtemp1029[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1030, __Vtemp1029, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1030[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_244 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1031[0U] = 1U;
            __Vtemp1031[1U] = 0U;
            __Vtemp1031[2U] = 0U;
            __Vtemp1031[3U] = 0U;
            __Vtemp1031[4U] = 0U;
            __Vtemp1031[5U] = 0U;
            __Vtemp1031[6U] = 0U;
            __Vtemp1031[7U] = 0U;
            __Vtemp1031[8U] = 0U;
            __Vtemp1031[9U] = 0U;
            __Vtemp1031[0xaU] = 0U;
            __Vtemp1031[0xbU] = 0U;
            __Vtemp1031[0xcU] = 0U;
            __Vtemp1031[0xdU] = 0U;
            __Vtemp1031[0xeU] = 0U;
            __Vtemp1031[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1032, __Vtemp1031, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1032[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_245 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1033[0U] = 1U;
            __Vtemp1033[1U] = 0U;
            __Vtemp1033[2U] = 0U;
            __Vtemp1033[3U] = 0U;
            __Vtemp1033[4U] = 0U;
            __Vtemp1033[5U] = 0U;
            __Vtemp1033[6U] = 0U;
            __Vtemp1033[7U] = 0U;
            __Vtemp1033[8U] = 0U;
            __Vtemp1033[9U] = 0U;
            __Vtemp1033[0xaU] = 0U;
            __Vtemp1033[0xbU] = 0U;
            __Vtemp1033[0xcU] = 0U;
            __Vtemp1033[0xdU] = 0U;
            __Vtemp1033[0xeU] = 0U;
            __Vtemp1033[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1034, __Vtemp1033, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1034[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_246 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1035[0U] = 1U;
            __Vtemp1035[1U] = 0U;
            __Vtemp1035[2U] = 0U;
            __Vtemp1035[3U] = 0U;
            __Vtemp1035[4U] = 0U;
            __Vtemp1035[5U] = 0U;
            __Vtemp1035[6U] = 0U;
            __Vtemp1035[7U] = 0U;
            __Vtemp1035[8U] = 0U;
            __Vtemp1035[9U] = 0U;
            __Vtemp1035[0xaU] = 0U;
            __Vtemp1035[0xbU] = 0U;
            __Vtemp1035[0xcU] = 0U;
            __Vtemp1035[0xdU] = 0U;
            __Vtemp1035[0xeU] = 0U;
            __Vtemp1035[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1036, __Vtemp1035, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1036[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_247 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1037[0U] = 1U;
            __Vtemp1037[1U] = 0U;
            __Vtemp1037[2U] = 0U;
            __Vtemp1037[3U] = 0U;
            __Vtemp1037[4U] = 0U;
            __Vtemp1037[5U] = 0U;
            __Vtemp1037[6U] = 0U;
            __Vtemp1037[7U] = 0U;
            __Vtemp1037[8U] = 0U;
            __Vtemp1037[9U] = 0U;
            __Vtemp1037[0xaU] = 0U;
            __Vtemp1037[0xbU] = 0U;
            __Vtemp1037[0xcU] = 0U;
            __Vtemp1037[0xdU] = 0U;
            __Vtemp1037[0xeU] = 0U;
            __Vtemp1037[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1038, __Vtemp1037, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1038[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_248 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1039[0U] = 1U;
            __Vtemp1039[1U] = 0U;
            __Vtemp1039[2U] = 0U;
            __Vtemp1039[3U] = 0U;
            __Vtemp1039[4U] = 0U;
            __Vtemp1039[5U] = 0U;
            __Vtemp1039[6U] = 0U;
            __Vtemp1039[7U] = 0U;
            __Vtemp1039[8U] = 0U;
            __Vtemp1039[9U] = 0U;
            __Vtemp1039[0xaU] = 0U;
            __Vtemp1039[0xbU] = 0U;
            __Vtemp1039[0xcU] = 0U;
            __Vtemp1039[0xdU] = 0U;
            __Vtemp1039[0xeU] = 0U;
            __Vtemp1039[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1040, __Vtemp1039, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1040[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_249 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1041[0U] = 1U;
            __Vtemp1041[1U] = 0U;
            __Vtemp1041[2U] = 0U;
            __Vtemp1041[3U] = 0U;
            __Vtemp1041[4U] = 0U;
            __Vtemp1041[5U] = 0U;
            __Vtemp1041[6U] = 0U;
            __Vtemp1041[7U] = 0U;
            __Vtemp1041[8U] = 0U;
            __Vtemp1041[9U] = 0U;
            __Vtemp1041[0xaU] = 0U;
            __Vtemp1041[0xbU] = 0U;
            __Vtemp1041[0xcU] = 0U;
            __Vtemp1041[0xdU] = 0U;
            __Vtemp1041[0xeU] = 0U;
            __Vtemp1041[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1042, __Vtemp1041, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1042[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_250 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1043[0U] = 1U;
            __Vtemp1043[1U] = 0U;
            __Vtemp1043[2U] = 0U;
            __Vtemp1043[3U] = 0U;
            __Vtemp1043[4U] = 0U;
            __Vtemp1043[5U] = 0U;
            __Vtemp1043[6U] = 0U;
            __Vtemp1043[7U] = 0U;
            __Vtemp1043[8U] = 0U;
            __Vtemp1043[9U] = 0U;
            __Vtemp1043[0xaU] = 0U;
            __Vtemp1043[0xbU] = 0U;
            __Vtemp1043[0xcU] = 0U;
            __Vtemp1043[0xdU] = 0U;
            __Vtemp1043[0xeU] = 0U;
            __Vtemp1043[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1044, __Vtemp1043, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1044[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_251 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1045[0U] = 1U;
            __Vtemp1045[1U] = 0U;
            __Vtemp1045[2U] = 0U;
            __Vtemp1045[3U] = 0U;
            __Vtemp1045[4U] = 0U;
            __Vtemp1045[5U] = 0U;
            __Vtemp1045[6U] = 0U;
            __Vtemp1045[7U] = 0U;
            __Vtemp1045[8U] = 0U;
            __Vtemp1045[9U] = 0U;
            __Vtemp1045[0xaU] = 0U;
            __Vtemp1045[0xbU] = 0U;
            __Vtemp1045[0xcU] = 0U;
            __Vtemp1045[0xdU] = 0U;
            __Vtemp1045[0xeU] = 0U;
            __Vtemp1045[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1046, __Vtemp1045, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1046[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_252 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1047[0U] = 1U;
            __Vtemp1047[1U] = 0U;
            __Vtemp1047[2U] = 0U;
            __Vtemp1047[3U] = 0U;
            __Vtemp1047[4U] = 0U;
            __Vtemp1047[5U] = 0U;
            __Vtemp1047[6U] = 0U;
            __Vtemp1047[7U] = 0U;
            __Vtemp1047[8U] = 0U;
            __Vtemp1047[9U] = 0U;
            __Vtemp1047[0xaU] = 0U;
            __Vtemp1047[0xbU] = 0U;
            __Vtemp1047[0xcU] = 0U;
            __Vtemp1047[0xdU] = 0U;
            __Vtemp1047[0xeU] = 0U;
            __Vtemp1047[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1048, __Vtemp1047, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1048[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_253 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1049[0U] = 1U;
            __Vtemp1049[1U] = 0U;
            __Vtemp1049[2U] = 0U;
            __Vtemp1049[3U] = 0U;
            __Vtemp1049[4U] = 0U;
            __Vtemp1049[5U] = 0U;
            __Vtemp1049[6U] = 0U;
            __Vtemp1049[7U] = 0U;
            __Vtemp1049[8U] = 0U;
            __Vtemp1049[9U] = 0U;
            __Vtemp1049[0xaU] = 0U;
            __Vtemp1049[0xbU] = 0U;
            __Vtemp1049[0xcU] = 0U;
            __Vtemp1049[0xdU] = 0U;
            __Vtemp1049[0xeU] = 0U;
            __Vtemp1049[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1050, __Vtemp1049, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1050[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_254 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1051[0U] = 1U;
            __Vtemp1051[1U] = 0U;
            __Vtemp1051[2U] = 0U;
            __Vtemp1051[3U] = 0U;
            __Vtemp1051[4U] = 0U;
            __Vtemp1051[5U] = 0U;
            __Vtemp1051[6U] = 0U;
            __Vtemp1051[7U] = 0U;
            __Vtemp1051[8U] = 0U;
            __Vtemp1051[9U] = 0U;
            __Vtemp1051[0xaU] = 0U;
            __Vtemp1051[0xbU] = 0U;
            __Vtemp1051[0xcU] = 0U;
            __Vtemp1051[0xdU] = 0U;
            __Vtemp1051[0xeU] = 0U;
            __Vtemp1051[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1052, __Vtemp1051, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1052[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_255 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1053[0U] = 1U;
            __Vtemp1053[1U] = 0U;
            __Vtemp1053[2U] = 0U;
            __Vtemp1053[3U] = 0U;
            __Vtemp1053[4U] = 0U;
            __Vtemp1053[5U] = 0U;
            __Vtemp1053[6U] = 0U;
            __Vtemp1053[7U] = 0U;
            __Vtemp1053[8U] = 0U;
            __Vtemp1053[9U] = 0U;
            __Vtemp1053[0xaU] = 0U;
            __Vtemp1053[0xbU] = 0U;
            __Vtemp1053[0xcU] = 0U;
            __Vtemp1053[0xdU] = 0U;
            __Vtemp1053[0xeU] = 0U;
            __Vtemp1053[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1054, __Vtemp1053, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1054[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_256 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1055[0U] = 1U;
            __Vtemp1055[1U] = 0U;
            __Vtemp1055[2U] = 0U;
            __Vtemp1055[3U] = 0U;
            __Vtemp1055[4U] = 0U;
            __Vtemp1055[5U] = 0U;
            __Vtemp1055[6U] = 0U;
            __Vtemp1055[7U] = 0U;
            __Vtemp1055[8U] = 0U;
            __Vtemp1055[9U] = 0U;
            __Vtemp1055[0xaU] = 0U;
            __Vtemp1055[0xbU] = 0U;
            __Vtemp1055[0xcU] = 0U;
            __Vtemp1055[0xdU] = 0U;
            __Vtemp1055[0xeU] = 0U;
            __Vtemp1055[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1056, __Vtemp1055, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1056[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_257 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1057[0U] = 1U;
            __Vtemp1057[1U] = 0U;
            __Vtemp1057[2U] = 0U;
            __Vtemp1057[3U] = 0U;
            __Vtemp1057[4U] = 0U;
            __Vtemp1057[5U] = 0U;
            __Vtemp1057[6U] = 0U;
            __Vtemp1057[7U] = 0U;
            __Vtemp1057[8U] = 0U;
            __Vtemp1057[9U] = 0U;
            __Vtemp1057[0xaU] = 0U;
            __Vtemp1057[0xbU] = 0U;
            __Vtemp1057[0xcU] = 0U;
            __Vtemp1057[0xdU] = 0U;
            __Vtemp1057[0xeU] = 0U;
            __Vtemp1057[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1058, __Vtemp1057, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1058[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_258 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1059[0U] = 1U;
            __Vtemp1059[1U] = 0U;
            __Vtemp1059[2U] = 0U;
            __Vtemp1059[3U] = 0U;
            __Vtemp1059[4U] = 0U;
            __Vtemp1059[5U] = 0U;
            __Vtemp1059[6U] = 0U;
            __Vtemp1059[7U] = 0U;
            __Vtemp1059[8U] = 0U;
            __Vtemp1059[9U] = 0U;
            __Vtemp1059[0xaU] = 0U;
            __Vtemp1059[0xbU] = 0U;
            __Vtemp1059[0xcU] = 0U;
            __Vtemp1059[0xdU] = 0U;
            __Vtemp1059[0xeU] = 0U;
            __Vtemp1059[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1060, __Vtemp1059, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1060[8U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_259 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
