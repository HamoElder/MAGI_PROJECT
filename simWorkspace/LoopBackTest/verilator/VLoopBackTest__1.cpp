// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__40(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__40\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp53[16];
    WData/*511:0*/ __Vtemp54[16];
    WData/*511:0*/ __Vtemp55[16];
    WData/*511:0*/ __Vtemp56[16];
    WData/*511:0*/ __Vtemp57[16];
    WData/*511:0*/ __Vtemp58[16];
    WData/*511:0*/ __Vtemp59[16];
    WData/*511:0*/ __Vtemp60[16];
    WData/*511:0*/ __Vtemp61[16];
    WData/*511:0*/ __Vtemp62[16];
    WData/*511:0*/ __Vtemp63[16];
    WData/*511:0*/ __Vtemp64[16];
    WData/*511:0*/ __Vtemp65[16];
    WData/*511:0*/ __Vtemp66[16];
    WData/*511:0*/ __Vtemp67[16];
    WData/*511:0*/ __Vtemp68[16];
    WData/*511:0*/ __Vtemp69[16];
    WData/*511:0*/ __Vtemp70[16];
    WData/*511:0*/ __Vtemp71[16];
    WData/*511:0*/ __Vtemp72[16];
    WData/*511:0*/ __Vtemp73[16];
    WData/*511:0*/ __Vtemp74[16];
    WData/*511:0*/ __Vtemp75[16];
    WData/*511:0*/ __Vtemp76[16];
    WData/*511:0*/ __Vtemp77[16];
    WData/*511:0*/ __Vtemp78[16];
    WData/*511:0*/ __Vtemp79[16];
    WData/*511:0*/ __Vtemp80[16];
    WData/*511:0*/ __Vtemp81[16];
    WData/*511:0*/ __Vtemp82[16];
    WData/*511:0*/ __Vtemp83[16];
    WData/*511:0*/ __Vtemp84[16];
    WData/*511:0*/ __Vtemp85[16];
    WData/*511:0*/ __Vtemp86[16];
    WData/*511:0*/ __Vtemp87[16];
    WData/*511:0*/ __Vtemp88[16];
    WData/*511:0*/ __Vtemp89[16];
    WData/*511:0*/ __Vtemp90[16];
    WData/*511:0*/ __Vtemp91[16];
    WData/*511:0*/ __Vtemp92[16];
    WData/*511:0*/ __Vtemp93[16];
    WData/*511:0*/ __Vtemp94[16];
    WData/*511:0*/ __Vtemp95[16];
    WData/*511:0*/ __Vtemp96[16];
    WData/*511:0*/ __Vtemp97[16];
    WData/*511:0*/ __Vtemp98[16];
    WData/*511:0*/ __Vtemp99[16];
    WData/*511:0*/ __Vtemp100[16];
    WData/*511:0*/ __Vtemp101[16];
    WData/*511:0*/ __Vtemp102[16];
    WData/*511:0*/ __Vtemp103[16];
    WData/*511:0*/ __Vtemp104[16];
    WData/*511:0*/ __Vtemp105[16];
    WData/*511:0*/ __Vtemp106[16];
    WData/*511:0*/ __Vtemp107[16];
    WData/*511:0*/ __Vtemp108[16];
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp53[0U] = 1U;
            __Vtemp53[1U] = 0U;
            __Vtemp53[2U] = 0U;
            __Vtemp53[3U] = 0U;
            __Vtemp53[4U] = 0U;
            __Vtemp53[5U] = 0U;
            __Vtemp53[6U] = 0U;
            __Vtemp53[7U] = 0U;
            __Vtemp53[8U] = 0U;
            __Vtemp53[9U] = 0U;
            __Vtemp53[0xaU] = 0U;
            __Vtemp53[0xbU] = 0U;
            __Vtemp53[0xcU] = 0U;
            __Vtemp53[0xdU] = 0U;
            __Vtemp53[0xeU] = 0U;
            __Vtemp53[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp54, __Vtemp53, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp54[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_244 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp55[0U] = 1U;
            __Vtemp55[1U] = 0U;
            __Vtemp55[2U] = 0U;
            __Vtemp55[3U] = 0U;
            __Vtemp55[4U] = 0U;
            __Vtemp55[5U] = 0U;
            __Vtemp55[6U] = 0U;
            __Vtemp55[7U] = 0U;
            __Vtemp55[8U] = 0U;
            __Vtemp55[9U] = 0U;
            __Vtemp55[0xaU] = 0U;
            __Vtemp55[0xbU] = 0U;
            __Vtemp55[0xcU] = 0U;
            __Vtemp55[0xdU] = 0U;
            __Vtemp55[0xeU] = 0U;
            __Vtemp55[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp56, __Vtemp55, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp56[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_243 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp57[0U] = 1U;
            __Vtemp57[1U] = 0U;
            __Vtemp57[2U] = 0U;
            __Vtemp57[3U] = 0U;
            __Vtemp57[4U] = 0U;
            __Vtemp57[5U] = 0U;
            __Vtemp57[6U] = 0U;
            __Vtemp57[7U] = 0U;
            __Vtemp57[8U] = 0U;
            __Vtemp57[9U] = 0U;
            __Vtemp57[0xaU] = 0U;
            __Vtemp57[0xbU] = 0U;
            __Vtemp57[0xcU] = 0U;
            __Vtemp57[0xdU] = 0U;
            __Vtemp57[0xeU] = 0U;
            __Vtemp57[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp58, __Vtemp57, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp58[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_242 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp59[0U] = 1U;
            __Vtemp59[1U] = 0U;
            __Vtemp59[2U] = 0U;
            __Vtemp59[3U] = 0U;
            __Vtemp59[4U] = 0U;
            __Vtemp59[5U] = 0U;
            __Vtemp59[6U] = 0U;
            __Vtemp59[7U] = 0U;
            __Vtemp59[8U] = 0U;
            __Vtemp59[9U] = 0U;
            __Vtemp59[0xaU] = 0U;
            __Vtemp59[0xbU] = 0U;
            __Vtemp59[0xcU] = 0U;
            __Vtemp59[0xdU] = 0U;
            __Vtemp59[0xeU] = 0U;
            __Vtemp59[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp60, __Vtemp59, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp60[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_241 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp61[0U] = 1U;
            __Vtemp61[1U] = 0U;
            __Vtemp61[2U] = 0U;
            __Vtemp61[3U] = 0U;
            __Vtemp61[4U] = 0U;
            __Vtemp61[5U] = 0U;
            __Vtemp61[6U] = 0U;
            __Vtemp61[7U] = 0U;
            __Vtemp61[8U] = 0U;
            __Vtemp61[9U] = 0U;
            __Vtemp61[0xaU] = 0U;
            __Vtemp61[0xbU] = 0U;
            __Vtemp61[0xcU] = 0U;
            __Vtemp61[0xdU] = 0U;
            __Vtemp61[0xeU] = 0U;
            __Vtemp61[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp62, __Vtemp61, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp62[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_240 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp63[0U] = 1U;
            __Vtemp63[1U] = 0U;
            __Vtemp63[2U] = 0U;
            __Vtemp63[3U] = 0U;
            __Vtemp63[4U] = 0U;
            __Vtemp63[5U] = 0U;
            __Vtemp63[6U] = 0U;
            __Vtemp63[7U] = 0U;
            __Vtemp63[8U] = 0U;
            __Vtemp63[9U] = 0U;
            __Vtemp63[0xaU] = 0U;
            __Vtemp63[0xbU] = 0U;
            __Vtemp63[0xcU] = 0U;
            __Vtemp63[0xdU] = 0U;
            __Vtemp63[0xeU] = 0U;
            __Vtemp63[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp64, __Vtemp63, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp64[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_239 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp65[0U] = 1U;
            __Vtemp65[1U] = 0U;
            __Vtemp65[2U] = 0U;
            __Vtemp65[3U] = 0U;
            __Vtemp65[4U] = 0U;
            __Vtemp65[5U] = 0U;
            __Vtemp65[6U] = 0U;
            __Vtemp65[7U] = 0U;
            __Vtemp65[8U] = 0U;
            __Vtemp65[9U] = 0U;
            __Vtemp65[0xaU] = 0U;
            __Vtemp65[0xbU] = 0U;
            __Vtemp65[0xcU] = 0U;
            __Vtemp65[0xdU] = 0U;
            __Vtemp65[0xeU] = 0U;
            __Vtemp65[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp66, __Vtemp65, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp66[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_238 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp67[0U] = 1U;
            __Vtemp67[1U] = 0U;
            __Vtemp67[2U] = 0U;
            __Vtemp67[3U] = 0U;
            __Vtemp67[4U] = 0U;
            __Vtemp67[5U] = 0U;
            __Vtemp67[6U] = 0U;
            __Vtemp67[7U] = 0U;
            __Vtemp67[8U] = 0U;
            __Vtemp67[9U] = 0U;
            __Vtemp67[0xaU] = 0U;
            __Vtemp67[0xbU] = 0U;
            __Vtemp67[0xcU] = 0U;
            __Vtemp67[0xdU] = 0U;
            __Vtemp67[0xeU] = 0U;
            __Vtemp67[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp68, __Vtemp67, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp68[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_237 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp69[0U] = 1U;
            __Vtemp69[1U] = 0U;
            __Vtemp69[2U] = 0U;
            __Vtemp69[3U] = 0U;
            __Vtemp69[4U] = 0U;
            __Vtemp69[5U] = 0U;
            __Vtemp69[6U] = 0U;
            __Vtemp69[7U] = 0U;
            __Vtemp69[8U] = 0U;
            __Vtemp69[9U] = 0U;
            __Vtemp69[0xaU] = 0U;
            __Vtemp69[0xbU] = 0U;
            __Vtemp69[0xcU] = 0U;
            __Vtemp69[0xdU] = 0U;
            __Vtemp69[0xeU] = 0U;
            __Vtemp69[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp70, __Vtemp69, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp70[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_236 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp71[0U] = 1U;
            __Vtemp71[1U] = 0U;
            __Vtemp71[2U] = 0U;
            __Vtemp71[3U] = 0U;
            __Vtemp71[4U] = 0U;
            __Vtemp71[5U] = 0U;
            __Vtemp71[6U] = 0U;
            __Vtemp71[7U] = 0U;
            __Vtemp71[8U] = 0U;
            __Vtemp71[9U] = 0U;
            __Vtemp71[0xaU] = 0U;
            __Vtemp71[0xbU] = 0U;
            __Vtemp71[0xcU] = 0U;
            __Vtemp71[0xdU] = 0U;
            __Vtemp71[0xeU] = 0U;
            __Vtemp71[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp72, __Vtemp71, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp72[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_235 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp73[0U] = 1U;
            __Vtemp73[1U] = 0U;
            __Vtemp73[2U] = 0U;
            __Vtemp73[3U] = 0U;
            __Vtemp73[4U] = 0U;
            __Vtemp73[5U] = 0U;
            __Vtemp73[6U] = 0U;
            __Vtemp73[7U] = 0U;
            __Vtemp73[8U] = 0U;
            __Vtemp73[9U] = 0U;
            __Vtemp73[0xaU] = 0U;
            __Vtemp73[0xbU] = 0U;
            __Vtemp73[0xcU] = 0U;
            __Vtemp73[0xdU] = 0U;
            __Vtemp73[0xeU] = 0U;
            __Vtemp73[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp74, __Vtemp73, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp74[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_234 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp75[0U] = 1U;
            __Vtemp75[1U] = 0U;
            __Vtemp75[2U] = 0U;
            __Vtemp75[3U] = 0U;
            __Vtemp75[4U] = 0U;
            __Vtemp75[5U] = 0U;
            __Vtemp75[6U] = 0U;
            __Vtemp75[7U] = 0U;
            __Vtemp75[8U] = 0U;
            __Vtemp75[9U] = 0U;
            __Vtemp75[0xaU] = 0U;
            __Vtemp75[0xbU] = 0U;
            __Vtemp75[0xcU] = 0U;
            __Vtemp75[0xdU] = 0U;
            __Vtemp75[0xeU] = 0U;
            __Vtemp75[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp76, __Vtemp75, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp76[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_233 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp77[0U] = 1U;
            __Vtemp77[1U] = 0U;
            __Vtemp77[2U] = 0U;
            __Vtemp77[3U] = 0U;
            __Vtemp77[4U] = 0U;
            __Vtemp77[5U] = 0U;
            __Vtemp77[6U] = 0U;
            __Vtemp77[7U] = 0U;
            __Vtemp77[8U] = 0U;
            __Vtemp77[9U] = 0U;
            __Vtemp77[0xaU] = 0U;
            __Vtemp77[0xbU] = 0U;
            __Vtemp77[0xcU] = 0U;
            __Vtemp77[0xdU] = 0U;
            __Vtemp77[0xeU] = 0U;
            __Vtemp77[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp78, __Vtemp77, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp78[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_232 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp79[0U] = 1U;
            __Vtemp79[1U] = 0U;
            __Vtemp79[2U] = 0U;
            __Vtemp79[3U] = 0U;
            __Vtemp79[4U] = 0U;
            __Vtemp79[5U] = 0U;
            __Vtemp79[6U] = 0U;
            __Vtemp79[7U] = 0U;
            __Vtemp79[8U] = 0U;
            __Vtemp79[9U] = 0U;
            __Vtemp79[0xaU] = 0U;
            __Vtemp79[0xbU] = 0U;
            __Vtemp79[0xcU] = 0U;
            __Vtemp79[0xdU] = 0U;
            __Vtemp79[0xeU] = 0U;
            __Vtemp79[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp80, __Vtemp79, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp80[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_231 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp81[0U] = 1U;
            __Vtemp81[1U] = 0U;
            __Vtemp81[2U] = 0U;
            __Vtemp81[3U] = 0U;
            __Vtemp81[4U] = 0U;
            __Vtemp81[5U] = 0U;
            __Vtemp81[6U] = 0U;
            __Vtemp81[7U] = 0U;
            __Vtemp81[8U] = 0U;
            __Vtemp81[9U] = 0U;
            __Vtemp81[0xaU] = 0U;
            __Vtemp81[0xbU] = 0U;
            __Vtemp81[0xcU] = 0U;
            __Vtemp81[0xdU] = 0U;
            __Vtemp81[0xeU] = 0U;
            __Vtemp81[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp82, __Vtemp81, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp82[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_230 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp83[0U] = 1U;
            __Vtemp83[1U] = 0U;
            __Vtemp83[2U] = 0U;
            __Vtemp83[3U] = 0U;
            __Vtemp83[4U] = 0U;
            __Vtemp83[5U] = 0U;
            __Vtemp83[6U] = 0U;
            __Vtemp83[7U] = 0U;
            __Vtemp83[8U] = 0U;
            __Vtemp83[9U] = 0U;
            __Vtemp83[0xaU] = 0U;
            __Vtemp83[0xbU] = 0U;
            __Vtemp83[0xcU] = 0U;
            __Vtemp83[0xdU] = 0U;
            __Vtemp83[0xeU] = 0U;
            __Vtemp83[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp84, __Vtemp83, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp84[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_229 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp85[0U] = 1U;
            __Vtemp85[1U] = 0U;
            __Vtemp85[2U] = 0U;
            __Vtemp85[3U] = 0U;
            __Vtemp85[4U] = 0U;
            __Vtemp85[5U] = 0U;
            __Vtemp85[6U] = 0U;
            __Vtemp85[7U] = 0U;
            __Vtemp85[8U] = 0U;
            __Vtemp85[9U] = 0U;
            __Vtemp85[0xaU] = 0U;
            __Vtemp85[0xbU] = 0U;
            __Vtemp85[0xcU] = 0U;
            __Vtemp85[0xdU] = 0U;
            __Vtemp85[0xeU] = 0U;
            __Vtemp85[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp86, __Vtemp85, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp86[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_228 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp87[0U] = 1U;
            __Vtemp87[1U] = 0U;
            __Vtemp87[2U] = 0U;
            __Vtemp87[3U] = 0U;
            __Vtemp87[4U] = 0U;
            __Vtemp87[5U] = 0U;
            __Vtemp87[6U] = 0U;
            __Vtemp87[7U] = 0U;
            __Vtemp87[8U] = 0U;
            __Vtemp87[9U] = 0U;
            __Vtemp87[0xaU] = 0U;
            __Vtemp87[0xbU] = 0U;
            __Vtemp87[0xcU] = 0U;
            __Vtemp87[0xdU] = 0U;
            __Vtemp87[0xeU] = 0U;
            __Vtemp87[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp88, __Vtemp87, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp88[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_227 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp89[0U] = 1U;
            __Vtemp89[1U] = 0U;
            __Vtemp89[2U] = 0U;
            __Vtemp89[3U] = 0U;
            __Vtemp89[4U] = 0U;
            __Vtemp89[5U] = 0U;
            __Vtemp89[6U] = 0U;
            __Vtemp89[7U] = 0U;
            __Vtemp89[8U] = 0U;
            __Vtemp89[9U] = 0U;
            __Vtemp89[0xaU] = 0U;
            __Vtemp89[0xbU] = 0U;
            __Vtemp89[0xcU] = 0U;
            __Vtemp89[0xdU] = 0U;
            __Vtemp89[0xeU] = 0U;
            __Vtemp89[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp90, __Vtemp89, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp90[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_226 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp91[0U] = 1U;
            __Vtemp91[1U] = 0U;
            __Vtemp91[2U] = 0U;
            __Vtemp91[3U] = 0U;
            __Vtemp91[4U] = 0U;
            __Vtemp91[5U] = 0U;
            __Vtemp91[6U] = 0U;
            __Vtemp91[7U] = 0U;
            __Vtemp91[8U] = 0U;
            __Vtemp91[9U] = 0U;
            __Vtemp91[0xaU] = 0U;
            __Vtemp91[0xbU] = 0U;
            __Vtemp91[0xcU] = 0U;
            __Vtemp91[0xdU] = 0U;
            __Vtemp91[0xeU] = 0U;
            __Vtemp91[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp92, __Vtemp91, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp92[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_225 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp93[0U] = 1U;
            __Vtemp93[1U] = 0U;
            __Vtemp93[2U] = 0U;
            __Vtemp93[3U] = 0U;
            __Vtemp93[4U] = 0U;
            __Vtemp93[5U] = 0U;
            __Vtemp93[6U] = 0U;
            __Vtemp93[7U] = 0U;
            __Vtemp93[8U] = 0U;
            __Vtemp93[9U] = 0U;
            __Vtemp93[0xaU] = 0U;
            __Vtemp93[0xbU] = 0U;
            __Vtemp93[0xcU] = 0U;
            __Vtemp93[0xdU] = 0U;
            __Vtemp93[0xeU] = 0U;
            __Vtemp93[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp94, __Vtemp93, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp94[7U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_224 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp95[0U] = 1U;
            __Vtemp95[1U] = 0U;
            __Vtemp95[2U] = 0U;
            __Vtemp95[3U] = 0U;
            __Vtemp95[4U] = 0U;
            __Vtemp95[5U] = 0U;
            __Vtemp95[6U] = 0U;
            __Vtemp95[7U] = 0U;
            __Vtemp95[8U] = 0U;
            __Vtemp95[9U] = 0U;
            __Vtemp95[0xaU] = 0U;
            __Vtemp95[0xbU] = 0U;
            __Vtemp95[0xcU] = 0U;
            __Vtemp95[0xdU] = 0U;
            __Vtemp95[0xeU] = 0U;
            __Vtemp95[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp96, __Vtemp95, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp96[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_223 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp97[0U] = 1U;
            __Vtemp97[1U] = 0U;
            __Vtemp97[2U] = 0U;
            __Vtemp97[3U] = 0U;
            __Vtemp97[4U] = 0U;
            __Vtemp97[5U] = 0U;
            __Vtemp97[6U] = 0U;
            __Vtemp97[7U] = 0U;
            __Vtemp97[8U] = 0U;
            __Vtemp97[9U] = 0U;
            __Vtemp97[0xaU] = 0U;
            __Vtemp97[0xbU] = 0U;
            __Vtemp97[0xcU] = 0U;
            __Vtemp97[0xdU] = 0U;
            __Vtemp97[0xeU] = 0U;
            __Vtemp97[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp98, __Vtemp97, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp98[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_222 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp99[0U] = 1U;
            __Vtemp99[1U] = 0U;
            __Vtemp99[2U] = 0U;
            __Vtemp99[3U] = 0U;
            __Vtemp99[4U] = 0U;
            __Vtemp99[5U] = 0U;
            __Vtemp99[6U] = 0U;
            __Vtemp99[7U] = 0U;
            __Vtemp99[8U] = 0U;
            __Vtemp99[9U] = 0U;
            __Vtemp99[0xaU] = 0U;
            __Vtemp99[0xbU] = 0U;
            __Vtemp99[0xcU] = 0U;
            __Vtemp99[0xdU] = 0U;
            __Vtemp99[0xeU] = 0U;
            __Vtemp99[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp100, __Vtemp99, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp100[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_221 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp101[0U] = 1U;
            __Vtemp101[1U] = 0U;
            __Vtemp101[2U] = 0U;
            __Vtemp101[3U] = 0U;
            __Vtemp101[4U] = 0U;
            __Vtemp101[5U] = 0U;
            __Vtemp101[6U] = 0U;
            __Vtemp101[7U] = 0U;
            __Vtemp101[8U] = 0U;
            __Vtemp101[9U] = 0U;
            __Vtemp101[0xaU] = 0U;
            __Vtemp101[0xbU] = 0U;
            __Vtemp101[0xcU] = 0U;
            __Vtemp101[0xdU] = 0U;
            __Vtemp101[0xeU] = 0U;
            __Vtemp101[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp102, __Vtemp101, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp102[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_220 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp103[0U] = 1U;
            __Vtemp103[1U] = 0U;
            __Vtemp103[2U] = 0U;
            __Vtemp103[3U] = 0U;
            __Vtemp103[4U] = 0U;
            __Vtemp103[5U] = 0U;
            __Vtemp103[6U] = 0U;
            __Vtemp103[7U] = 0U;
            __Vtemp103[8U] = 0U;
            __Vtemp103[9U] = 0U;
            __Vtemp103[0xaU] = 0U;
            __Vtemp103[0xbU] = 0U;
            __Vtemp103[0xcU] = 0U;
            __Vtemp103[0xdU] = 0U;
            __Vtemp103[0xeU] = 0U;
            __Vtemp103[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp104, __Vtemp103, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp104[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_219 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp105[0U] = 1U;
            __Vtemp105[1U] = 0U;
            __Vtemp105[2U] = 0U;
            __Vtemp105[3U] = 0U;
            __Vtemp105[4U] = 0U;
            __Vtemp105[5U] = 0U;
            __Vtemp105[6U] = 0U;
            __Vtemp105[7U] = 0U;
            __Vtemp105[8U] = 0U;
            __Vtemp105[9U] = 0U;
            __Vtemp105[0xaU] = 0U;
            __Vtemp105[0xbU] = 0U;
            __Vtemp105[0xcU] = 0U;
            __Vtemp105[0xdU] = 0U;
            __Vtemp105[0xeU] = 0U;
            __Vtemp105[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp106, __Vtemp105, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp106[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_218 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp107[0U] = 1U;
            __Vtemp107[1U] = 0U;
            __Vtemp107[2U] = 0U;
            __Vtemp107[3U] = 0U;
            __Vtemp107[4U] = 0U;
            __Vtemp107[5U] = 0U;
            __Vtemp107[6U] = 0U;
            __Vtemp107[7U] = 0U;
            __Vtemp107[8U] = 0U;
            __Vtemp107[9U] = 0U;
            __Vtemp107[0xaU] = 0U;
            __Vtemp107[0xbU] = 0U;
            __Vtemp107[0xcU] = 0U;
            __Vtemp107[0xdU] = 0U;
            __Vtemp107[0xeU] = 0U;
            __Vtemp107[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp108, __Vtemp107, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp108[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_217 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__41(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__41\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp109[16];
    WData/*511:0*/ __Vtemp110[16];
    WData/*511:0*/ __Vtemp111[16];
    WData/*511:0*/ __Vtemp112[16];
    WData/*511:0*/ __Vtemp113[16];
    WData/*511:0*/ __Vtemp114[16];
    WData/*511:0*/ __Vtemp115[16];
    WData/*511:0*/ __Vtemp116[16];
    WData/*511:0*/ __Vtemp117[16];
    WData/*511:0*/ __Vtemp118[16];
    WData/*511:0*/ __Vtemp119[16];
    WData/*511:0*/ __Vtemp120[16];
    WData/*511:0*/ __Vtemp121[16];
    WData/*511:0*/ __Vtemp122[16];
    WData/*511:0*/ __Vtemp123[16];
    WData/*511:0*/ __Vtemp124[16];
    WData/*511:0*/ __Vtemp125[16];
    WData/*511:0*/ __Vtemp126[16];
    WData/*511:0*/ __Vtemp127[16];
    WData/*511:0*/ __Vtemp128[16];
    WData/*511:0*/ __Vtemp129[16];
    WData/*511:0*/ __Vtemp130[16];
    WData/*511:0*/ __Vtemp131[16];
    WData/*511:0*/ __Vtemp132[16];
    WData/*511:0*/ __Vtemp133[16];
    WData/*511:0*/ __Vtemp134[16];
    WData/*511:0*/ __Vtemp135[16];
    WData/*511:0*/ __Vtemp136[16];
    WData/*511:0*/ __Vtemp137[16];
    WData/*511:0*/ __Vtemp138[16];
    WData/*511:0*/ __Vtemp139[16];
    WData/*511:0*/ __Vtemp140[16];
    WData/*511:0*/ __Vtemp141[16];
    WData/*511:0*/ __Vtemp142[16];
    WData/*511:0*/ __Vtemp143[16];
    WData/*511:0*/ __Vtemp144[16];
    WData/*511:0*/ __Vtemp145[16];
    WData/*511:0*/ __Vtemp146[16];
    WData/*511:0*/ __Vtemp147[16];
    WData/*511:0*/ __Vtemp148[16];
    WData/*511:0*/ __Vtemp149[16];
    WData/*511:0*/ __Vtemp150[16];
    WData/*511:0*/ __Vtemp151[16];
    WData/*511:0*/ __Vtemp152[16];
    WData/*511:0*/ __Vtemp153[16];
    WData/*511:0*/ __Vtemp154[16];
    WData/*511:0*/ __Vtemp155[16];
    WData/*511:0*/ __Vtemp156[16];
    WData/*511:0*/ __Vtemp157[16];
    WData/*511:0*/ __Vtemp158[16];
    WData/*511:0*/ __Vtemp159[16];
    WData/*511:0*/ __Vtemp160[16];
    WData/*511:0*/ __Vtemp161[16];
    WData/*511:0*/ __Vtemp162[16];
    WData/*511:0*/ __Vtemp163[16];
    WData/*511:0*/ __Vtemp164[16];
    // Body
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp109[0U] = 1U;
            __Vtemp109[1U] = 0U;
            __Vtemp109[2U] = 0U;
            __Vtemp109[3U] = 0U;
            __Vtemp109[4U] = 0U;
            __Vtemp109[5U] = 0U;
            __Vtemp109[6U] = 0U;
            __Vtemp109[7U] = 0U;
            __Vtemp109[8U] = 0U;
            __Vtemp109[9U] = 0U;
            __Vtemp109[0xaU] = 0U;
            __Vtemp109[0xbU] = 0U;
            __Vtemp109[0xcU] = 0U;
            __Vtemp109[0xdU] = 0U;
            __Vtemp109[0xeU] = 0U;
            __Vtemp109[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp110, __Vtemp109, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp110[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_216 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp111[0U] = 1U;
            __Vtemp111[1U] = 0U;
            __Vtemp111[2U] = 0U;
            __Vtemp111[3U] = 0U;
            __Vtemp111[4U] = 0U;
            __Vtemp111[5U] = 0U;
            __Vtemp111[6U] = 0U;
            __Vtemp111[7U] = 0U;
            __Vtemp111[8U] = 0U;
            __Vtemp111[9U] = 0U;
            __Vtemp111[0xaU] = 0U;
            __Vtemp111[0xbU] = 0U;
            __Vtemp111[0xcU] = 0U;
            __Vtemp111[0xdU] = 0U;
            __Vtemp111[0xeU] = 0U;
            __Vtemp111[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp112, __Vtemp111, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp112[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_215 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp113[0U] = 1U;
            __Vtemp113[1U] = 0U;
            __Vtemp113[2U] = 0U;
            __Vtemp113[3U] = 0U;
            __Vtemp113[4U] = 0U;
            __Vtemp113[5U] = 0U;
            __Vtemp113[6U] = 0U;
            __Vtemp113[7U] = 0U;
            __Vtemp113[8U] = 0U;
            __Vtemp113[9U] = 0U;
            __Vtemp113[0xaU] = 0U;
            __Vtemp113[0xbU] = 0U;
            __Vtemp113[0xcU] = 0U;
            __Vtemp113[0xdU] = 0U;
            __Vtemp113[0xeU] = 0U;
            __Vtemp113[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp114, __Vtemp113, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp114[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_214 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp115[0U] = 1U;
            __Vtemp115[1U] = 0U;
            __Vtemp115[2U] = 0U;
            __Vtemp115[3U] = 0U;
            __Vtemp115[4U] = 0U;
            __Vtemp115[5U] = 0U;
            __Vtemp115[6U] = 0U;
            __Vtemp115[7U] = 0U;
            __Vtemp115[8U] = 0U;
            __Vtemp115[9U] = 0U;
            __Vtemp115[0xaU] = 0U;
            __Vtemp115[0xbU] = 0U;
            __Vtemp115[0xcU] = 0U;
            __Vtemp115[0xdU] = 0U;
            __Vtemp115[0xeU] = 0U;
            __Vtemp115[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp116, __Vtemp115, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp116[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_213 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp117[0U] = 1U;
            __Vtemp117[1U] = 0U;
            __Vtemp117[2U] = 0U;
            __Vtemp117[3U] = 0U;
            __Vtemp117[4U] = 0U;
            __Vtemp117[5U] = 0U;
            __Vtemp117[6U] = 0U;
            __Vtemp117[7U] = 0U;
            __Vtemp117[8U] = 0U;
            __Vtemp117[9U] = 0U;
            __Vtemp117[0xaU] = 0U;
            __Vtemp117[0xbU] = 0U;
            __Vtemp117[0xcU] = 0U;
            __Vtemp117[0xdU] = 0U;
            __Vtemp117[0xeU] = 0U;
            __Vtemp117[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp118, __Vtemp117, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp118[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_212 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp119[0U] = 1U;
            __Vtemp119[1U] = 0U;
            __Vtemp119[2U] = 0U;
            __Vtemp119[3U] = 0U;
            __Vtemp119[4U] = 0U;
            __Vtemp119[5U] = 0U;
            __Vtemp119[6U] = 0U;
            __Vtemp119[7U] = 0U;
            __Vtemp119[8U] = 0U;
            __Vtemp119[9U] = 0U;
            __Vtemp119[0xaU] = 0U;
            __Vtemp119[0xbU] = 0U;
            __Vtemp119[0xcU] = 0U;
            __Vtemp119[0xdU] = 0U;
            __Vtemp119[0xeU] = 0U;
            __Vtemp119[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp120, __Vtemp119, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp120[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_211 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp121[0U] = 1U;
            __Vtemp121[1U] = 0U;
            __Vtemp121[2U] = 0U;
            __Vtemp121[3U] = 0U;
            __Vtemp121[4U] = 0U;
            __Vtemp121[5U] = 0U;
            __Vtemp121[6U] = 0U;
            __Vtemp121[7U] = 0U;
            __Vtemp121[8U] = 0U;
            __Vtemp121[9U] = 0U;
            __Vtemp121[0xaU] = 0U;
            __Vtemp121[0xbU] = 0U;
            __Vtemp121[0xcU] = 0U;
            __Vtemp121[0xdU] = 0U;
            __Vtemp121[0xeU] = 0U;
            __Vtemp121[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp122, __Vtemp121, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp122[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_210 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp123[0U] = 1U;
            __Vtemp123[1U] = 0U;
            __Vtemp123[2U] = 0U;
            __Vtemp123[3U] = 0U;
            __Vtemp123[4U] = 0U;
            __Vtemp123[5U] = 0U;
            __Vtemp123[6U] = 0U;
            __Vtemp123[7U] = 0U;
            __Vtemp123[8U] = 0U;
            __Vtemp123[9U] = 0U;
            __Vtemp123[0xaU] = 0U;
            __Vtemp123[0xbU] = 0U;
            __Vtemp123[0xcU] = 0U;
            __Vtemp123[0xdU] = 0U;
            __Vtemp123[0xeU] = 0U;
            __Vtemp123[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp124, __Vtemp123, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp124[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_209 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp125[0U] = 1U;
            __Vtemp125[1U] = 0U;
            __Vtemp125[2U] = 0U;
            __Vtemp125[3U] = 0U;
            __Vtemp125[4U] = 0U;
            __Vtemp125[5U] = 0U;
            __Vtemp125[6U] = 0U;
            __Vtemp125[7U] = 0U;
            __Vtemp125[8U] = 0U;
            __Vtemp125[9U] = 0U;
            __Vtemp125[0xaU] = 0U;
            __Vtemp125[0xbU] = 0U;
            __Vtemp125[0xcU] = 0U;
            __Vtemp125[0xdU] = 0U;
            __Vtemp125[0xeU] = 0U;
            __Vtemp125[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp126, __Vtemp125, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp126[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_208 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp127[0U] = 1U;
            __Vtemp127[1U] = 0U;
            __Vtemp127[2U] = 0U;
            __Vtemp127[3U] = 0U;
            __Vtemp127[4U] = 0U;
            __Vtemp127[5U] = 0U;
            __Vtemp127[6U] = 0U;
            __Vtemp127[7U] = 0U;
            __Vtemp127[8U] = 0U;
            __Vtemp127[9U] = 0U;
            __Vtemp127[0xaU] = 0U;
            __Vtemp127[0xbU] = 0U;
            __Vtemp127[0xcU] = 0U;
            __Vtemp127[0xdU] = 0U;
            __Vtemp127[0xeU] = 0U;
            __Vtemp127[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp128, __Vtemp127, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp128[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_207 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp129[0U] = 1U;
            __Vtemp129[1U] = 0U;
            __Vtemp129[2U] = 0U;
            __Vtemp129[3U] = 0U;
            __Vtemp129[4U] = 0U;
            __Vtemp129[5U] = 0U;
            __Vtemp129[6U] = 0U;
            __Vtemp129[7U] = 0U;
            __Vtemp129[8U] = 0U;
            __Vtemp129[9U] = 0U;
            __Vtemp129[0xaU] = 0U;
            __Vtemp129[0xbU] = 0U;
            __Vtemp129[0xcU] = 0U;
            __Vtemp129[0xdU] = 0U;
            __Vtemp129[0xeU] = 0U;
            __Vtemp129[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp130, __Vtemp129, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp130[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_206 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp131[0U] = 1U;
            __Vtemp131[1U] = 0U;
            __Vtemp131[2U] = 0U;
            __Vtemp131[3U] = 0U;
            __Vtemp131[4U] = 0U;
            __Vtemp131[5U] = 0U;
            __Vtemp131[6U] = 0U;
            __Vtemp131[7U] = 0U;
            __Vtemp131[8U] = 0U;
            __Vtemp131[9U] = 0U;
            __Vtemp131[0xaU] = 0U;
            __Vtemp131[0xbU] = 0U;
            __Vtemp131[0xcU] = 0U;
            __Vtemp131[0xdU] = 0U;
            __Vtemp131[0xeU] = 0U;
            __Vtemp131[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp132, __Vtemp131, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp132[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_205 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp133[0U] = 1U;
            __Vtemp133[1U] = 0U;
            __Vtemp133[2U] = 0U;
            __Vtemp133[3U] = 0U;
            __Vtemp133[4U] = 0U;
            __Vtemp133[5U] = 0U;
            __Vtemp133[6U] = 0U;
            __Vtemp133[7U] = 0U;
            __Vtemp133[8U] = 0U;
            __Vtemp133[9U] = 0U;
            __Vtemp133[0xaU] = 0U;
            __Vtemp133[0xbU] = 0U;
            __Vtemp133[0xcU] = 0U;
            __Vtemp133[0xdU] = 0U;
            __Vtemp133[0xeU] = 0U;
            __Vtemp133[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp134, __Vtemp133, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp134[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_204 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp135[0U] = 1U;
            __Vtemp135[1U] = 0U;
            __Vtemp135[2U] = 0U;
            __Vtemp135[3U] = 0U;
            __Vtemp135[4U] = 0U;
            __Vtemp135[5U] = 0U;
            __Vtemp135[6U] = 0U;
            __Vtemp135[7U] = 0U;
            __Vtemp135[8U] = 0U;
            __Vtemp135[9U] = 0U;
            __Vtemp135[0xaU] = 0U;
            __Vtemp135[0xbU] = 0U;
            __Vtemp135[0xcU] = 0U;
            __Vtemp135[0xdU] = 0U;
            __Vtemp135[0xeU] = 0U;
            __Vtemp135[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp136, __Vtemp135, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp136[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_203 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp137[0U] = 1U;
            __Vtemp137[1U] = 0U;
            __Vtemp137[2U] = 0U;
            __Vtemp137[3U] = 0U;
            __Vtemp137[4U] = 0U;
            __Vtemp137[5U] = 0U;
            __Vtemp137[6U] = 0U;
            __Vtemp137[7U] = 0U;
            __Vtemp137[8U] = 0U;
            __Vtemp137[9U] = 0U;
            __Vtemp137[0xaU] = 0U;
            __Vtemp137[0xbU] = 0U;
            __Vtemp137[0xcU] = 0U;
            __Vtemp137[0xdU] = 0U;
            __Vtemp137[0xeU] = 0U;
            __Vtemp137[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp138, __Vtemp137, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp138[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_202 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp139[0U] = 1U;
            __Vtemp139[1U] = 0U;
            __Vtemp139[2U] = 0U;
            __Vtemp139[3U] = 0U;
            __Vtemp139[4U] = 0U;
            __Vtemp139[5U] = 0U;
            __Vtemp139[6U] = 0U;
            __Vtemp139[7U] = 0U;
            __Vtemp139[8U] = 0U;
            __Vtemp139[9U] = 0U;
            __Vtemp139[0xaU] = 0U;
            __Vtemp139[0xbU] = 0U;
            __Vtemp139[0xcU] = 0U;
            __Vtemp139[0xdU] = 0U;
            __Vtemp139[0xeU] = 0U;
            __Vtemp139[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp140, __Vtemp139, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp140[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_201 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp141[0U] = 1U;
            __Vtemp141[1U] = 0U;
            __Vtemp141[2U] = 0U;
            __Vtemp141[3U] = 0U;
            __Vtemp141[4U] = 0U;
            __Vtemp141[5U] = 0U;
            __Vtemp141[6U] = 0U;
            __Vtemp141[7U] = 0U;
            __Vtemp141[8U] = 0U;
            __Vtemp141[9U] = 0U;
            __Vtemp141[0xaU] = 0U;
            __Vtemp141[0xbU] = 0U;
            __Vtemp141[0xcU] = 0U;
            __Vtemp141[0xdU] = 0U;
            __Vtemp141[0xeU] = 0U;
            __Vtemp141[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp142, __Vtemp141, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp142[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_200 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp143[0U] = 1U;
            __Vtemp143[1U] = 0U;
            __Vtemp143[2U] = 0U;
            __Vtemp143[3U] = 0U;
            __Vtemp143[4U] = 0U;
            __Vtemp143[5U] = 0U;
            __Vtemp143[6U] = 0U;
            __Vtemp143[7U] = 0U;
            __Vtemp143[8U] = 0U;
            __Vtemp143[9U] = 0U;
            __Vtemp143[0xaU] = 0U;
            __Vtemp143[0xbU] = 0U;
            __Vtemp143[0xcU] = 0U;
            __Vtemp143[0xdU] = 0U;
            __Vtemp143[0xeU] = 0U;
            __Vtemp143[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp144, __Vtemp143, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp144[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_199 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp145[0U] = 1U;
            __Vtemp145[1U] = 0U;
            __Vtemp145[2U] = 0U;
            __Vtemp145[3U] = 0U;
            __Vtemp145[4U] = 0U;
            __Vtemp145[5U] = 0U;
            __Vtemp145[6U] = 0U;
            __Vtemp145[7U] = 0U;
            __Vtemp145[8U] = 0U;
            __Vtemp145[9U] = 0U;
            __Vtemp145[0xaU] = 0U;
            __Vtemp145[0xbU] = 0U;
            __Vtemp145[0xcU] = 0U;
            __Vtemp145[0xdU] = 0U;
            __Vtemp145[0xeU] = 0U;
            __Vtemp145[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp146, __Vtemp145, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp146[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_198 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp147[0U] = 1U;
            __Vtemp147[1U] = 0U;
            __Vtemp147[2U] = 0U;
            __Vtemp147[3U] = 0U;
            __Vtemp147[4U] = 0U;
            __Vtemp147[5U] = 0U;
            __Vtemp147[6U] = 0U;
            __Vtemp147[7U] = 0U;
            __Vtemp147[8U] = 0U;
            __Vtemp147[9U] = 0U;
            __Vtemp147[0xaU] = 0U;
            __Vtemp147[0xbU] = 0U;
            __Vtemp147[0xcU] = 0U;
            __Vtemp147[0xdU] = 0U;
            __Vtemp147[0xeU] = 0U;
            __Vtemp147[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp148, __Vtemp147, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp148[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_197 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp149[0U] = 1U;
            __Vtemp149[1U] = 0U;
            __Vtemp149[2U] = 0U;
            __Vtemp149[3U] = 0U;
            __Vtemp149[4U] = 0U;
            __Vtemp149[5U] = 0U;
            __Vtemp149[6U] = 0U;
            __Vtemp149[7U] = 0U;
            __Vtemp149[8U] = 0U;
            __Vtemp149[9U] = 0U;
            __Vtemp149[0xaU] = 0U;
            __Vtemp149[0xbU] = 0U;
            __Vtemp149[0xcU] = 0U;
            __Vtemp149[0xdU] = 0U;
            __Vtemp149[0xeU] = 0U;
            __Vtemp149[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp150, __Vtemp149, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp150[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_196 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp151[0U] = 1U;
            __Vtemp151[1U] = 0U;
            __Vtemp151[2U] = 0U;
            __Vtemp151[3U] = 0U;
            __Vtemp151[4U] = 0U;
            __Vtemp151[5U] = 0U;
            __Vtemp151[6U] = 0U;
            __Vtemp151[7U] = 0U;
            __Vtemp151[8U] = 0U;
            __Vtemp151[9U] = 0U;
            __Vtemp151[0xaU] = 0U;
            __Vtemp151[0xbU] = 0U;
            __Vtemp151[0xcU] = 0U;
            __Vtemp151[0xdU] = 0U;
            __Vtemp151[0xeU] = 0U;
            __Vtemp151[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp152, __Vtemp151, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp152[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_195 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp153[0U] = 1U;
            __Vtemp153[1U] = 0U;
            __Vtemp153[2U] = 0U;
            __Vtemp153[3U] = 0U;
            __Vtemp153[4U] = 0U;
            __Vtemp153[5U] = 0U;
            __Vtemp153[6U] = 0U;
            __Vtemp153[7U] = 0U;
            __Vtemp153[8U] = 0U;
            __Vtemp153[9U] = 0U;
            __Vtemp153[0xaU] = 0U;
            __Vtemp153[0xbU] = 0U;
            __Vtemp153[0xcU] = 0U;
            __Vtemp153[0xdU] = 0U;
            __Vtemp153[0xeU] = 0U;
            __Vtemp153[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp154, __Vtemp153, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp154[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_194 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp155[0U] = 1U;
            __Vtemp155[1U] = 0U;
            __Vtemp155[2U] = 0U;
            __Vtemp155[3U] = 0U;
            __Vtemp155[4U] = 0U;
            __Vtemp155[5U] = 0U;
            __Vtemp155[6U] = 0U;
            __Vtemp155[7U] = 0U;
            __Vtemp155[8U] = 0U;
            __Vtemp155[9U] = 0U;
            __Vtemp155[0xaU] = 0U;
            __Vtemp155[0xbU] = 0U;
            __Vtemp155[0xcU] = 0U;
            __Vtemp155[0xdU] = 0U;
            __Vtemp155[0xeU] = 0U;
            __Vtemp155[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp156, __Vtemp155, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp156[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_193 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp157[0U] = 1U;
            __Vtemp157[1U] = 0U;
            __Vtemp157[2U] = 0U;
            __Vtemp157[3U] = 0U;
            __Vtemp157[4U] = 0U;
            __Vtemp157[5U] = 0U;
            __Vtemp157[6U] = 0U;
            __Vtemp157[7U] = 0U;
            __Vtemp157[8U] = 0U;
            __Vtemp157[9U] = 0U;
            __Vtemp157[0xaU] = 0U;
            __Vtemp157[0xbU] = 0U;
            __Vtemp157[0xcU] = 0U;
            __Vtemp157[0xdU] = 0U;
            __Vtemp157[0xeU] = 0U;
            __Vtemp157[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp158, __Vtemp157, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp158[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_192 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp159[0U] = 1U;
            __Vtemp159[1U] = 0U;
            __Vtemp159[2U] = 0U;
            __Vtemp159[3U] = 0U;
            __Vtemp159[4U] = 0U;
            __Vtemp159[5U] = 0U;
            __Vtemp159[6U] = 0U;
            __Vtemp159[7U] = 0U;
            __Vtemp159[8U] = 0U;
            __Vtemp159[9U] = 0U;
            __Vtemp159[0xaU] = 0U;
            __Vtemp159[0xbU] = 0U;
            __Vtemp159[0xcU] = 0U;
            __Vtemp159[0xdU] = 0U;
            __Vtemp159[0xeU] = 0U;
            __Vtemp159[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp160, __Vtemp159, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp160[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_191 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp161[0U] = 1U;
            __Vtemp161[1U] = 0U;
            __Vtemp161[2U] = 0U;
            __Vtemp161[3U] = 0U;
            __Vtemp161[4U] = 0U;
            __Vtemp161[5U] = 0U;
            __Vtemp161[6U] = 0U;
            __Vtemp161[7U] = 0U;
            __Vtemp161[8U] = 0U;
            __Vtemp161[9U] = 0U;
            __Vtemp161[0xaU] = 0U;
            __Vtemp161[0xbU] = 0U;
            __Vtemp161[0xcU] = 0U;
            __Vtemp161[0xdU] = 0U;
            __Vtemp161[0xeU] = 0U;
            __Vtemp161[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp162, __Vtemp161, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp162[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_190 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp163[0U] = 1U;
            __Vtemp163[1U] = 0U;
            __Vtemp163[2U] = 0U;
            __Vtemp163[3U] = 0U;
            __Vtemp163[4U] = 0U;
            __Vtemp163[5U] = 0U;
            __Vtemp163[6U] = 0U;
            __Vtemp163[7U] = 0U;
            __Vtemp163[8U] = 0U;
            __Vtemp163[9U] = 0U;
            __Vtemp163[0xaU] = 0U;
            __Vtemp163[0xbU] = 0U;
            __Vtemp163[0xcU] = 0U;
            __Vtemp163[0xdU] = 0U;
            __Vtemp163[0xeU] = 0U;
            __Vtemp163[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp164, __Vtemp163, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp164[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_189 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
