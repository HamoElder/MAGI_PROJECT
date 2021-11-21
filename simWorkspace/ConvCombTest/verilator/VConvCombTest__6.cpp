// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__54(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__54\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp446[16];
    WData/*511:0*/ __Vtemp447[16];
    WData/*511:0*/ __Vtemp448[16];
    WData/*511:0*/ __Vtemp449[16];
    WData/*511:0*/ __Vtemp450[16];
    WData/*511:0*/ __Vtemp451[16];
    WData/*511:0*/ __Vtemp452[16];
    WData/*511:0*/ __Vtemp453[16];
    WData/*511:0*/ __Vtemp454[16];
    WData/*511:0*/ __Vtemp455[16];
    WData/*511:0*/ __Vtemp456[16];
    WData/*511:0*/ __Vtemp457[16];
    WData/*511:0*/ __Vtemp458[16];
    WData/*511:0*/ __Vtemp459[16];
    WData/*511:0*/ __Vtemp460[16];
    WData/*511:0*/ __Vtemp461[16];
    WData/*511:0*/ __Vtemp462[16];
    WData/*511:0*/ __Vtemp463[16];
    WData/*511:0*/ __Vtemp464[16];
    WData/*511:0*/ __Vtemp465[16];
    WData/*511:0*/ __Vtemp466[16];
    WData/*511:0*/ __Vtemp467[16];
    WData/*511:0*/ __Vtemp468[16];
    WData/*511:0*/ __Vtemp469[16];
    WData/*511:0*/ __Vtemp470[16];
    WData/*511:0*/ __Vtemp471[16];
    WData/*511:0*/ __Vtemp472[16];
    WData/*511:0*/ __Vtemp473[16];
    WData/*511:0*/ __Vtemp474[16];
    WData/*511:0*/ __Vtemp475[16];
    WData/*511:0*/ __Vtemp476[16];
    WData/*511:0*/ __Vtemp477[16];
    WData/*511:0*/ __Vtemp478[16];
    WData/*511:0*/ __Vtemp479[16];
    WData/*511:0*/ __Vtemp480[16];
    WData/*511:0*/ __Vtemp481[16];
    WData/*511:0*/ __Vtemp482[16];
    WData/*511:0*/ __Vtemp483[16];
    WData/*511:0*/ __Vtemp484[16];
    WData/*511:0*/ __Vtemp485[16];
    WData/*511:0*/ __Vtemp486[16];
    WData/*511:0*/ __Vtemp487[16];
    WData/*511:0*/ __Vtemp488[16];
    WData/*511:0*/ __Vtemp489[16];
    WData/*511:0*/ __Vtemp490[16];
    WData/*511:0*/ __Vtemp491[16];
    WData/*511:0*/ __Vtemp492[16];
    WData/*511:0*/ __Vtemp493[16];
    WData/*511:0*/ __Vtemp494[16];
    WData/*511:0*/ __Vtemp495[16];
    WData/*511:0*/ __Vtemp496[16];
    WData/*511:0*/ __Vtemp497[16];
    WData/*511:0*/ __Vtemp498[16];
    WData/*511:0*/ __Vtemp499[16];
    WData/*511:0*/ __Vtemp500[16];
    WData/*511:0*/ __Vtemp501[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp446[0U] = 1U;
            __Vtemp446[1U] = 0U;
            __Vtemp446[2U] = 0U;
            __Vtemp446[3U] = 0U;
            __Vtemp446[4U] = 0U;
            __Vtemp446[5U] = 0U;
            __Vtemp446[6U] = 0U;
            __Vtemp446[7U] = 0U;
            __Vtemp446[8U] = 0U;
            __Vtemp446[9U] = 0U;
            __Vtemp446[0xaU] = 0U;
            __Vtemp446[0xbU] = 0U;
            __Vtemp446[0xcU] = 0U;
            __Vtemp446[0xdU] = 0U;
            __Vtemp446[0xeU] = 0U;
            __Vtemp446[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp447, __Vtemp446, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp447[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_41 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp448[0U] = 1U;
            __Vtemp448[1U] = 0U;
            __Vtemp448[2U] = 0U;
            __Vtemp448[3U] = 0U;
            __Vtemp448[4U] = 0U;
            __Vtemp448[5U] = 0U;
            __Vtemp448[6U] = 0U;
            __Vtemp448[7U] = 0U;
            __Vtemp448[8U] = 0U;
            __Vtemp448[9U] = 0U;
            __Vtemp448[0xaU] = 0U;
            __Vtemp448[0xbU] = 0U;
            __Vtemp448[0xcU] = 0U;
            __Vtemp448[0xdU] = 0U;
            __Vtemp448[0xeU] = 0U;
            __Vtemp448[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp449, __Vtemp448, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp449[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_40 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp450[0U] = 1U;
            __Vtemp450[1U] = 0U;
            __Vtemp450[2U] = 0U;
            __Vtemp450[3U] = 0U;
            __Vtemp450[4U] = 0U;
            __Vtemp450[5U] = 0U;
            __Vtemp450[6U] = 0U;
            __Vtemp450[7U] = 0U;
            __Vtemp450[8U] = 0U;
            __Vtemp450[9U] = 0U;
            __Vtemp450[0xaU] = 0U;
            __Vtemp450[0xbU] = 0U;
            __Vtemp450[0xcU] = 0U;
            __Vtemp450[0xdU] = 0U;
            __Vtemp450[0xeU] = 0U;
            __Vtemp450[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp451, __Vtemp450, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp451[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_39 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp452[0U] = 1U;
            __Vtemp452[1U] = 0U;
            __Vtemp452[2U] = 0U;
            __Vtemp452[3U] = 0U;
            __Vtemp452[4U] = 0U;
            __Vtemp452[5U] = 0U;
            __Vtemp452[6U] = 0U;
            __Vtemp452[7U] = 0U;
            __Vtemp452[8U] = 0U;
            __Vtemp452[9U] = 0U;
            __Vtemp452[0xaU] = 0U;
            __Vtemp452[0xbU] = 0U;
            __Vtemp452[0xcU] = 0U;
            __Vtemp452[0xdU] = 0U;
            __Vtemp452[0xeU] = 0U;
            __Vtemp452[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp453, __Vtemp452, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp453[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_38 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp454[0U] = 1U;
            __Vtemp454[1U] = 0U;
            __Vtemp454[2U] = 0U;
            __Vtemp454[3U] = 0U;
            __Vtemp454[4U] = 0U;
            __Vtemp454[5U] = 0U;
            __Vtemp454[6U] = 0U;
            __Vtemp454[7U] = 0U;
            __Vtemp454[8U] = 0U;
            __Vtemp454[9U] = 0U;
            __Vtemp454[0xaU] = 0U;
            __Vtemp454[0xbU] = 0U;
            __Vtemp454[0xcU] = 0U;
            __Vtemp454[0xdU] = 0U;
            __Vtemp454[0xeU] = 0U;
            __Vtemp454[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp455, __Vtemp454, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp455[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_100 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp456[0U] = 1U;
            __Vtemp456[1U] = 0U;
            __Vtemp456[2U] = 0U;
            __Vtemp456[3U] = 0U;
            __Vtemp456[4U] = 0U;
            __Vtemp456[5U] = 0U;
            __Vtemp456[6U] = 0U;
            __Vtemp456[7U] = 0U;
            __Vtemp456[8U] = 0U;
            __Vtemp456[9U] = 0U;
            __Vtemp456[0xaU] = 0U;
            __Vtemp456[0xbU] = 0U;
            __Vtemp456[0xcU] = 0U;
            __Vtemp456[0xdU] = 0U;
            __Vtemp456[0xeU] = 0U;
            __Vtemp456[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp457, __Vtemp456, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp457[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_202 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp458[0U] = 1U;
            __Vtemp458[1U] = 0U;
            __Vtemp458[2U] = 0U;
            __Vtemp458[3U] = 0U;
            __Vtemp458[4U] = 0U;
            __Vtemp458[5U] = 0U;
            __Vtemp458[6U] = 0U;
            __Vtemp458[7U] = 0U;
            __Vtemp458[8U] = 0U;
            __Vtemp458[9U] = 0U;
            __Vtemp458[0xaU] = 0U;
            __Vtemp458[0xbU] = 0U;
            __Vtemp458[0xcU] = 0U;
            __Vtemp458[0xdU] = 0U;
            __Vtemp458[0xeU] = 0U;
            __Vtemp458[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp459, __Vtemp458, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp459[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_37 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp460[0U] = 1U;
            __Vtemp460[1U] = 0U;
            __Vtemp460[2U] = 0U;
            __Vtemp460[3U] = 0U;
            __Vtemp460[4U] = 0U;
            __Vtemp460[5U] = 0U;
            __Vtemp460[6U] = 0U;
            __Vtemp460[7U] = 0U;
            __Vtemp460[8U] = 0U;
            __Vtemp460[9U] = 0U;
            __Vtemp460[0xaU] = 0U;
            __Vtemp460[0xbU] = 0U;
            __Vtemp460[0xcU] = 0U;
            __Vtemp460[0xdU] = 0U;
            __Vtemp460[0xeU] = 0U;
            __Vtemp460[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp461, __Vtemp460, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp461[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_99 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp462[0U] = 1U;
            __Vtemp462[1U] = 0U;
            __Vtemp462[2U] = 0U;
            __Vtemp462[3U] = 0U;
            __Vtemp462[4U] = 0U;
            __Vtemp462[5U] = 0U;
            __Vtemp462[6U] = 0U;
            __Vtemp462[7U] = 0U;
            __Vtemp462[8U] = 0U;
            __Vtemp462[9U] = 0U;
            __Vtemp462[0xaU] = 0U;
            __Vtemp462[0xbU] = 0U;
            __Vtemp462[0xcU] = 0U;
            __Vtemp462[0xdU] = 0U;
            __Vtemp462[0xeU] = 0U;
            __Vtemp462[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp463, __Vtemp462, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp463[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_201 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp464[0U] = 1U;
            __Vtemp464[1U] = 0U;
            __Vtemp464[2U] = 0U;
            __Vtemp464[3U] = 0U;
            __Vtemp464[4U] = 0U;
            __Vtemp464[5U] = 0U;
            __Vtemp464[6U] = 0U;
            __Vtemp464[7U] = 0U;
            __Vtemp464[8U] = 0U;
            __Vtemp464[9U] = 0U;
            __Vtemp464[0xaU] = 0U;
            __Vtemp464[0xbU] = 0U;
            __Vtemp464[0xcU] = 0U;
            __Vtemp464[0xdU] = 0U;
            __Vtemp464[0xeU] = 0U;
            __Vtemp464[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp465, __Vtemp464, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp465[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_36 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp466[0U] = 1U;
            __Vtemp466[1U] = 0U;
            __Vtemp466[2U] = 0U;
            __Vtemp466[3U] = 0U;
            __Vtemp466[4U] = 0U;
            __Vtemp466[5U] = 0U;
            __Vtemp466[6U] = 0U;
            __Vtemp466[7U] = 0U;
            __Vtemp466[8U] = 0U;
            __Vtemp466[9U] = 0U;
            __Vtemp466[0xaU] = 0U;
            __Vtemp466[0xbU] = 0U;
            __Vtemp466[0xcU] = 0U;
            __Vtemp466[0xdU] = 0U;
            __Vtemp466[0xeU] = 0U;
            __Vtemp466[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp467, __Vtemp466, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp467[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_98 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp468[0U] = 1U;
            __Vtemp468[1U] = 0U;
            __Vtemp468[2U] = 0U;
            __Vtemp468[3U] = 0U;
            __Vtemp468[4U] = 0U;
            __Vtemp468[5U] = 0U;
            __Vtemp468[6U] = 0U;
            __Vtemp468[7U] = 0U;
            __Vtemp468[8U] = 0U;
            __Vtemp468[9U] = 0U;
            __Vtemp468[0xaU] = 0U;
            __Vtemp468[0xbU] = 0U;
            __Vtemp468[0xcU] = 0U;
            __Vtemp468[0xdU] = 0U;
            __Vtemp468[0xeU] = 0U;
            __Vtemp468[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp469, __Vtemp468, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp469[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_148 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp470[0U] = 1U;
            __Vtemp470[1U] = 0U;
            __Vtemp470[2U] = 0U;
            __Vtemp470[3U] = 0U;
            __Vtemp470[4U] = 0U;
            __Vtemp470[5U] = 0U;
            __Vtemp470[6U] = 0U;
            __Vtemp470[7U] = 0U;
            __Vtemp470[8U] = 0U;
            __Vtemp470[9U] = 0U;
            __Vtemp470[0xaU] = 0U;
            __Vtemp470[0xbU] = 0U;
            __Vtemp470[0xcU] = 0U;
            __Vtemp470[0xdU] = 0U;
            __Vtemp470[0xeU] = 0U;
            __Vtemp470[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp471, __Vtemp470, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp471[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_147 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp472[0U] = 1U;
            __Vtemp472[1U] = 0U;
            __Vtemp472[2U] = 0U;
            __Vtemp472[3U] = 0U;
            __Vtemp472[4U] = 0U;
            __Vtemp472[5U] = 0U;
            __Vtemp472[6U] = 0U;
            __Vtemp472[7U] = 0U;
            __Vtemp472[8U] = 0U;
            __Vtemp472[9U] = 0U;
            __Vtemp472[0xaU] = 0U;
            __Vtemp472[0xbU] = 0U;
            __Vtemp472[0xcU] = 0U;
            __Vtemp472[0xdU] = 0U;
            __Vtemp472[0xeU] = 0U;
            __Vtemp472[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp473, __Vtemp472, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp473[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_146 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp474[0U] = 1U;
            __Vtemp474[1U] = 0U;
            __Vtemp474[2U] = 0U;
            __Vtemp474[3U] = 0U;
            __Vtemp474[4U] = 0U;
            __Vtemp474[5U] = 0U;
            __Vtemp474[6U] = 0U;
            __Vtemp474[7U] = 0U;
            __Vtemp474[8U] = 0U;
            __Vtemp474[9U] = 0U;
            __Vtemp474[0xaU] = 0U;
            __Vtemp474[0xbU] = 0U;
            __Vtemp474[0xcU] = 0U;
            __Vtemp474[0xdU] = 0U;
            __Vtemp474[0xeU] = 0U;
            __Vtemp474[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp475, __Vtemp474, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp475[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_145 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp476[0U] = 1U;
            __Vtemp476[1U] = 0U;
            __Vtemp476[2U] = 0U;
            __Vtemp476[3U] = 0U;
            __Vtemp476[4U] = 0U;
            __Vtemp476[5U] = 0U;
            __Vtemp476[6U] = 0U;
            __Vtemp476[7U] = 0U;
            __Vtemp476[8U] = 0U;
            __Vtemp476[9U] = 0U;
            __Vtemp476[0xaU] = 0U;
            __Vtemp476[0xbU] = 0U;
            __Vtemp476[0xcU] = 0U;
            __Vtemp476[0xdU] = 0U;
            __Vtemp476[0xeU] = 0U;
            __Vtemp476[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp477, __Vtemp476, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp477[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_144 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp478[0U] = 1U;
            __Vtemp478[1U] = 0U;
            __Vtemp478[2U] = 0U;
            __Vtemp478[3U] = 0U;
            __Vtemp478[4U] = 0U;
            __Vtemp478[5U] = 0U;
            __Vtemp478[6U] = 0U;
            __Vtemp478[7U] = 0U;
            __Vtemp478[8U] = 0U;
            __Vtemp478[9U] = 0U;
            __Vtemp478[0xaU] = 0U;
            __Vtemp478[0xbU] = 0U;
            __Vtemp478[0xcU] = 0U;
            __Vtemp478[0xdU] = 0U;
            __Vtemp478[0xeU] = 0U;
            __Vtemp478[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp479, __Vtemp478, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp479[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_143 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp480[0U] = 1U;
            __Vtemp480[1U] = 0U;
            __Vtemp480[2U] = 0U;
            __Vtemp480[3U] = 0U;
            __Vtemp480[4U] = 0U;
            __Vtemp480[5U] = 0U;
            __Vtemp480[6U] = 0U;
            __Vtemp480[7U] = 0U;
            __Vtemp480[8U] = 0U;
            __Vtemp480[9U] = 0U;
            __Vtemp480[0xaU] = 0U;
            __Vtemp480[0xbU] = 0U;
            __Vtemp480[0xcU] = 0U;
            __Vtemp480[0xdU] = 0U;
            __Vtemp480[0xeU] = 0U;
            __Vtemp480[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp481, __Vtemp480, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp481[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_142 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp482[0U] = 1U;
            __Vtemp482[1U] = 0U;
            __Vtemp482[2U] = 0U;
            __Vtemp482[3U] = 0U;
            __Vtemp482[4U] = 0U;
            __Vtemp482[5U] = 0U;
            __Vtemp482[6U] = 0U;
            __Vtemp482[7U] = 0U;
            __Vtemp482[8U] = 0U;
            __Vtemp482[9U] = 0U;
            __Vtemp482[0xaU] = 0U;
            __Vtemp482[0xbU] = 0U;
            __Vtemp482[0xcU] = 0U;
            __Vtemp482[0xdU] = 0U;
            __Vtemp482[0xeU] = 0U;
            __Vtemp482[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp483, __Vtemp482, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp483[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_141 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp484[0U] = 1U;
            __Vtemp484[1U] = 0U;
            __Vtemp484[2U] = 0U;
            __Vtemp484[3U] = 0U;
            __Vtemp484[4U] = 0U;
            __Vtemp484[5U] = 0U;
            __Vtemp484[6U] = 0U;
            __Vtemp484[7U] = 0U;
            __Vtemp484[8U] = 0U;
            __Vtemp484[9U] = 0U;
            __Vtemp484[0xaU] = 0U;
            __Vtemp484[0xbU] = 0U;
            __Vtemp484[0xcU] = 0U;
            __Vtemp484[0xdU] = 0U;
            __Vtemp484[0xeU] = 0U;
            __Vtemp484[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp485, __Vtemp484, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp485[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_140 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp486[0U] = 1U;
            __Vtemp486[1U] = 0U;
            __Vtemp486[2U] = 0U;
            __Vtemp486[3U] = 0U;
            __Vtemp486[4U] = 0U;
            __Vtemp486[5U] = 0U;
            __Vtemp486[6U] = 0U;
            __Vtemp486[7U] = 0U;
            __Vtemp486[8U] = 0U;
            __Vtemp486[9U] = 0U;
            __Vtemp486[0xaU] = 0U;
            __Vtemp486[0xbU] = 0U;
            __Vtemp486[0xcU] = 0U;
            __Vtemp486[0xdU] = 0U;
            __Vtemp486[0xeU] = 0U;
            __Vtemp486[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp487, __Vtemp486, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp487[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_139 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp488[0U] = 1U;
            __Vtemp488[1U] = 0U;
            __Vtemp488[2U] = 0U;
            __Vtemp488[3U] = 0U;
            __Vtemp488[4U] = 0U;
            __Vtemp488[5U] = 0U;
            __Vtemp488[6U] = 0U;
            __Vtemp488[7U] = 0U;
            __Vtemp488[8U] = 0U;
            __Vtemp488[9U] = 0U;
            __Vtemp488[0xaU] = 0U;
            __Vtemp488[0xbU] = 0U;
            __Vtemp488[0xcU] = 0U;
            __Vtemp488[0xdU] = 0U;
            __Vtemp488[0xeU] = 0U;
            __Vtemp488[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp489, __Vtemp488, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp489[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_138 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp490[0U] = 1U;
            __Vtemp490[1U] = 0U;
            __Vtemp490[2U] = 0U;
            __Vtemp490[3U] = 0U;
            __Vtemp490[4U] = 0U;
            __Vtemp490[5U] = 0U;
            __Vtemp490[6U] = 0U;
            __Vtemp490[7U] = 0U;
            __Vtemp490[8U] = 0U;
            __Vtemp490[9U] = 0U;
            __Vtemp490[0xaU] = 0U;
            __Vtemp490[0xbU] = 0U;
            __Vtemp490[0xcU] = 0U;
            __Vtemp490[0xdU] = 0U;
            __Vtemp490[0xeU] = 0U;
            __Vtemp490[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp491, __Vtemp490, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp491[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_137 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp492[0U] = 1U;
            __Vtemp492[1U] = 0U;
            __Vtemp492[2U] = 0U;
            __Vtemp492[3U] = 0U;
            __Vtemp492[4U] = 0U;
            __Vtemp492[5U] = 0U;
            __Vtemp492[6U] = 0U;
            __Vtemp492[7U] = 0U;
            __Vtemp492[8U] = 0U;
            __Vtemp492[9U] = 0U;
            __Vtemp492[0xaU] = 0U;
            __Vtemp492[0xbU] = 0U;
            __Vtemp492[0xcU] = 0U;
            __Vtemp492[0xdU] = 0U;
            __Vtemp492[0xeU] = 0U;
            __Vtemp492[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp493, __Vtemp492, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp493[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_136 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp494[0U] = 1U;
            __Vtemp494[1U] = 0U;
            __Vtemp494[2U] = 0U;
            __Vtemp494[3U] = 0U;
            __Vtemp494[4U] = 0U;
            __Vtemp494[5U] = 0U;
            __Vtemp494[6U] = 0U;
            __Vtemp494[7U] = 0U;
            __Vtemp494[8U] = 0U;
            __Vtemp494[9U] = 0U;
            __Vtemp494[0xaU] = 0U;
            __Vtemp494[0xbU] = 0U;
            __Vtemp494[0xcU] = 0U;
            __Vtemp494[0xdU] = 0U;
            __Vtemp494[0xeU] = 0U;
            __Vtemp494[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp495, __Vtemp494, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp495[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_135 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp496[0U] = 1U;
            __Vtemp496[1U] = 0U;
            __Vtemp496[2U] = 0U;
            __Vtemp496[3U] = 0U;
            __Vtemp496[4U] = 0U;
            __Vtemp496[5U] = 0U;
            __Vtemp496[6U] = 0U;
            __Vtemp496[7U] = 0U;
            __Vtemp496[8U] = 0U;
            __Vtemp496[9U] = 0U;
            __Vtemp496[0xaU] = 0U;
            __Vtemp496[0xbU] = 0U;
            __Vtemp496[0xcU] = 0U;
            __Vtemp496[0xdU] = 0U;
            __Vtemp496[0xeU] = 0U;
            __Vtemp496[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp497, __Vtemp496, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp497[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_134 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp498[0U] = 1U;
            __Vtemp498[1U] = 0U;
            __Vtemp498[2U] = 0U;
            __Vtemp498[3U] = 0U;
            __Vtemp498[4U] = 0U;
            __Vtemp498[5U] = 0U;
            __Vtemp498[6U] = 0U;
            __Vtemp498[7U] = 0U;
            __Vtemp498[8U] = 0U;
            __Vtemp498[9U] = 0U;
            __Vtemp498[0xaU] = 0U;
            __Vtemp498[0xbU] = 0U;
            __Vtemp498[0xcU] = 0U;
            __Vtemp498[0xdU] = 0U;
            __Vtemp498[0xeU] = 0U;
            __Vtemp498[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp499, __Vtemp498, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp499[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_133 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp500[0U] = 1U;
            __Vtemp500[1U] = 0U;
            __Vtemp500[2U] = 0U;
            __Vtemp500[3U] = 0U;
            __Vtemp500[4U] = 0U;
            __Vtemp500[5U] = 0U;
            __Vtemp500[6U] = 0U;
            __Vtemp500[7U] = 0U;
            __Vtemp500[8U] = 0U;
            __Vtemp500[9U] = 0U;
            __Vtemp500[0xaU] = 0U;
            __Vtemp500[0xbU] = 0U;
            __Vtemp500[0xcU] = 0U;
            __Vtemp500[0xdU] = 0U;
            __Vtemp500[0xeU] = 0U;
            __Vtemp500[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp501, __Vtemp500, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp501[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_132 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__55(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__55\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp502[16];
    WData/*511:0*/ __Vtemp503[16];
    WData/*511:0*/ __Vtemp504[16];
    WData/*511:0*/ __Vtemp505[16];
    WData/*511:0*/ __Vtemp506[16];
    WData/*511:0*/ __Vtemp507[16];
    WData/*511:0*/ __Vtemp508[16];
    WData/*511:0*/ __Vtemp509[16];
    WData/*511:0*/ __Vtemp510[16];
    WData/*511:0*/ __Vtemp511[16];
    WData/*511:0*/ __Vtemp512[16];
    WData/*511:0*/ __Vtemp513[16];
    WData/*511:0*/ __Vtemp514[16];
    WData/*511:0*/ __Vtemp515[16];
    WData/*511:0*/ __Vtemp516[16];
    WData/*511:0*/ __Vtemp517[16];
    WData/*511:0*/ __Vtemp518[16];
    WData/*511:0*/ __Vtemp519[16];
    WData/*511:0*/ __Vtemp520[16];
    WData/*511:0*/ __Vtemp521[16];
    WData/*511:0*/ __Vtemp522[16];
    WData/*511:0*/ __Vtemp523[16];
    WData/*511:0*/ __Vtemp524[16];
    WData/*511:0*/ __Vtemp525[16];
    WData/*511:0*/ __Vtemp526[16];
    WData/*511:0*/ __Vtemp527[16];
    WData/*511:0*/ __Vtemp528[16];
    WData/*511:0*/ __Vtemp529[16];
    WData/*511:0*/ __Vtemp530[16];
    WData/*511:0*/ __Vtemp531[16];
    WData/*511:0*/ __Vtemp532[16];
    WData/*511:0*/ __Vtemp533[16];
    WData/*511:0*/ __Vtemp534[16];
    WData/*511:0*/ __Vtemp535[16];
    WData/*511:0*/ __Vtemp536[16];
    WData/*511:0*/ __Vtemp537[16];
    WData/*511:0*/ __Vtemp538[16];
    WData/*511:0*/ __Vtemp539[16];
    WData/*511:0*/ __Vtemp540[16];
    WData/*511:0*/ __Vtemp541[16];
    WData/*511:0*/ __Vtemp542[16];
    WData/*511:0*/ __Vtemp543[16];
    WData/*511:0*/ __Vtemp544[16];
    WData/*511:0*/ __Vtemp545[16];
    WData/*511:0*/ __Vtemp546[16];
    WData/*511:0*/ __Vtemp547[16];
    WData/*511:0*/ __Vtemp548[16];
    WData/*511:0*/ __Vtemp549[16];
    WData/*511:0*/ __Vtemp550[16];
    WData/*511:0*/ __Vtemp551[16];
    WData/*511:0*/ __Vtemp552[16];
    WData/*511:0*/ __Vtemp553[16];
    WData/*511:0*/ __Vtemp554[16];
    WData/*511:0*/ __Vtemp555[16];
    WData/*511:0*/ __Vtemp556[16];
    WData/*511:0*/ __Vtemp557[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp502[0U] = 1U;
            __Vtemp502[1U] = 0U;
            __Vtemp502[2U] = 0U;
            __Vtemp502[3U] = 0U;
            __Vtemp502[4U] = 0U;
            __Vtemp502[5U] = 0U;
            __Vtemp502[6U] = 0U;
            __Vtemp502[7U] = 0U;
            __Vtemp502[8U] = 0U;
            __Vtemp502[9U] = 0U;
            __Vtemp502[0xaU] = 0U;
            __Vtemp502[0xbU] = 0U;
            __Vtemp502[0xcU] = 0U;
            __Vtemp502[0xdU] = 0U;
            __Vtemp502[0xeU] = 0U;
            __Vtemp502[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp503, __Vtemp502, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp503[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_131 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp504[0U] = 1U;
            __Vtemp504[1U] = 0U;
            __Vtemp504[2U] = 0U;
            __Vtemp504[3U] = 0U;
            __Vtemp504[4U] = 0U;
            __Vtemp504[5U] = 0U;
            __Vtemp504[6U] = 0U;
            __Vtemp504[7U] = 0U;
            __Vtemp504[8U] = 0U;
            __Vtemp504[9U] = 0U;
            __Vtemp504[0xaU] = 0U;
            __Vtemp504[0xbU] = 0U;
            __Vtemp504[0xcU] = 0U;
            __Vtemp504[0xdU] = 0U;
            __Vtemp504[0xeU] = 0U;
            __Vtemp504[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp505, __Vtemp504, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp505[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_130 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp506[0U] = 1U;
            __Vtemp506[1U] = 0U;
            __Vtemp506[2U] = 0U;
            __Vtemp506[3U] = 0U;
            __Vtemp506[4U] = 0U;
            __Vtemp506[5U] = 0U;
            __Vtemp506[6U] = 0U;
            __Vtemp506[7U] = 0U;
            __Vtemp506[8U] = 0U;
            __Vtemp506[9U] = 0U;
            __Vtemp506[0xaU] = 0U;
            __Vtemp506[0xbU] = 0U;
            __Vtemp506[0xcU] = 0U;
            __Vtemp506[0xdU] = 0U;
            __Vtemp506[0xeU] = 0U;
            __Vtemp506[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp507, __Vtemp506, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp507[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_129 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp508[0U] = 1U;
            __Vtemp508[1U] = 0U;
            __Vtemp508[2U] = 0U;
            __Vtemp508[3U] = 0U;
            __Vtemp508[4U] = 0U;
            __Vtemp508[5U] = 0U;
            __Vtemp508[6U] = 0U;
            __Vtemp508[7U] = 0U;
            __Vtemp508[8U] = 0U;
            __Vtemp508[9U] = 0U;
            __Vtemp508[0xaU] = 0U;
            __Vtemp508[0xbU] = 0U;
            __Vtemp508[0xcU] = 0U;
            __Vtemp508[0xdU] = 0U;
            __Vtemp508[0xeU] = 0U;
            __Vtemp508[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp509, __Vtemp508, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp509[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_128 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp510[0U] = 1U;
            __Vtemp510[1U] = 0U;
            __Vtemp510[2U] = 0U;
            __Vtemp510[3U] = 0U;
            __Vtemp510[4U] = 0U;
            __Vtemp510[5U] = 0U;
            __Vtemp510[6U] = 0U;
            __Vtemp510[7U] = 0U;
            __Vtemp510[8U] = 0U;
            __Vtemp510[9U] = 0U;
            __Vtemp510[0xaU] = 0U;
            __Vtemp510[0xbU] = 0U;
            __Vtemp510[0xcU] = 0U;
            __Vtemp510[0xdU] = 0U;
            __Vtemp510[0xeU] = 0U;
            __Vtemp510[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp511, __Vtemp510, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp511[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_127 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp512[0U] = 1U;
            __Vtemp512[1U] = 0U;
            __Vtemp512[2U] = 0U;
            __Vtemp512[3U] = 0U;
            __Vtemp512[4U] = 0U;
            __Vtemp512[5U] = 0U;
            __Vtemp512[6U] = 0U;
            __Vtemp512[7U] = 0U;
            __Vtemp512[8U] = 0U;
            __Vtemp512[9U] = 0U;
            __Vtemp512[0xaU] = 0U;
            __Vtemp512[0xbU] = 0U;
            __Vtemp512[0xcU] = 0U;
            __Vtemp512[0xdU] = 0U;
            __Vtemp512[0xeU] = 0U;
            __Vtemp512[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp513, __Vtemp512, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp513[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_126 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp514[0U] = 1U;
            __Vtemp514[1U] = 0U;
            __Vtemp514[2U] = 0U;
            __Vtemp514[3U] = 0U;
            __Vtemp514[4U] = 0U;
            __Vtemp514[5U] = 0U;
            __Vtemp514[6U] = 0U;
            __Vtemp514[7U] = 0U;
            __Vtemp514[8U] = 0U;
            __Vtemp514[9U] = 0U;
            __Vtemp514[0xaU] = 0U;
            __Vtemp514[0xbU] = 0U;
            __Vtemp514[0xcU] = 0U;
            __Vtemp514[0xdU] = 0U;
            __Vtemp514[0xeU] = 0U;
            __Vtemp514[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp515, __Vtemp514, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp515[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_125 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp516[0U] = 1U;
            __Vtemp516[1U] = 0U;
            __Vtemp516[2U] = 0U;
            __Vtemp516[3U] = 0U;
            __Vtemp516[4U] = 0U;
            __Vtemp516[5U] = 0U;
            __Vtemp516[6U] = 0U;
            __Vtemp516[7U] = 0U;
            __Vtemp516[8U] = 0U;
            __Vtemp516[9U] = 0U;
            __Vtemp516[0xaU] = 0U;
            __Vtemp516[0xbU] = 0U;
            __Vtemp516[0xcU] = 0U;
            __Vtemp516[0xdU] = 0U;
            __Vtemp516[0xeU] = 0U;
            __Vtemp516[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp517, __Vtemp516, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp517[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp518[0U] = 1U;
            __Vtemp518[1U] = 0U;
            __Vtemp518[2U] = 0U;
            __Vtemp518[3U] = 0U;
            __Vtemp518[4U] = 0U;
            __Vtemp518[5U] = 0U;
            __Vtemp518[6U] = 0U;
            __Vtemp518[7U] = 0U;
            __Vtemp518[8U] = 0U;
            __Vtemp518[9U] = 0U;
            __Vtemp518[0xaU] = 0U;
            __Vtemp518[0xbU] = 0U;
            __Vtemp518[0xcU] = 0U;
            __Vtemp518[0xdU] = 0U;
            __Vtemp518[0xeU] = 0U;
            __Vtemp518[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp519, __Vtemp518, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp519[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_174 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp520[0U] = 1U;
            __Vtemp520[1U] = 0U;
            __Vtemp520[2U] = 0U;
            __Vtemp520[3U] = 0U;
            __Vtemp520[4U] = 0U;
            __Vtemp520[5U] = 0U;
            __Vtemp520[6U] = 0U;
            __Vtemp520[7U] = 0U;
            __Vtemp520[8U] = 0U;
            __Vtemp520[9U] = 0U;
            __Vtemp520[0xaU] = 0U;
            __Vtemp520[0xbU] = 0U;
            __Vtemp520[0xcU] = 0U;
            __Vtemp520[0xdU] = 0U;
            __Vtemp520[0xeU] = 0U;
            __Vtemp520[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp521, __Vtemp520, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp521[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp522[0U] = 1U;
            __Vtemp522[1U] = 0U;
            __Vtemp522[2U] = 0U;
            __Vtemp522[3U] = 0U;
            __Vtemp522[4U] = 0U;
            __Vtemp522[5U] = 0U;
            __Vtemp522[6U] = 0U;
            __Vtemp522[7U] = 0U;
            __Vtemp522[8U] = 0U;
            __Vtemp522[9U] = 0U;
            __Vtemp522[0xaU] = 0U;
            __Vtemp522[0xbU] = 0U;
            __Vtemp522[0xcU] = 0U;
            __Vtemp522[0xdU] = 0U;
            __Vtemp522[0xeU] = 0U;
            __Vtemp522[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp523, __Vtemp522, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp523[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp524[0U] = 1U;
            __Vtemp524[1U] = 0U;
            __Vtemp524[2U] = 0U;
            __Vtemp524[3U] = 0U;
            __Vtemp524[4U] = 0U;
            __Vtemp524[5U] = 0U;
            __Vtemp524[6U] = 0U;
            __Vtemp524[7U] = 0U;
            __Vtemp524[8U] = 0U;
            __Vtemp524[9U] = 0U;
            __Vtemp524[0xaU] = 0U;
            __Vtemp524[0xbU] = 0U;
            __Vtemp524[0xcU] = 0U;
            __Vtemp524[0xdU] = 0U;
            __Vtemp524[0xeU] = 0U;
            __Vtemp524[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp525, __Vtemp524, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp525[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_161 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp526[0U] = 1U;
            __Vtemp526[1U] = 0U;
            __Vtemp526[2U] = 0U;
            __Vtemp526[3U] = 0U;
            __Vtemp526[4U] = 0U;
            __Vtemp526[5U] = 0U;
            __Vtemp526[6U] = 0U;
            __Vtemp526[7U] = 0U;
            __Vtemp526[8U] = 0U;
            __Vtemp526[9U] = 0U;
            __Vtemp526[0xaU] = 0U;
            __Vtemp526[0xbU] = 0U;
            __Vtemp526[0xcU] = 0U;
            __Vtemp526[0xdU] = 0U;
            __Vtemp526[0xeU] = 0U;
            __Vtemp526[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp527, __Vtemp526, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp527[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp528[0U] = 1U;
            __Vtemp528[1U] = 0U;
            __Vtemp528[2U] = 0U;
            __Vtemp528[3U] = 0U;
            __Vtemp528[4U] = 0U;
            __Vtemp528[5U] = 0U;
            __Vtemp528[6U] = 0U;
            __Vtemp528[7U] = 0U;
            __Vtemp528[8U] = 0U;
            __Vtemp528[9U] = 0U;
            __Vtemp528[0xaU] = 0U;
            __Vtemp528[0xbU] = 0U;
            __Vtemp528[0xcU] = 0U;
            __Vtemp528[0xdU] = 0U;
            __Vtemp528[0xeU] = 0U;
            __Vtemp528[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp529, __Vtemp528, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp529[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_197 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp530[0U] = 1U;
            __Vtemp530[1U] = 0U;
            __Vtemp530[2U] = 0U;
            __Vtemp530[3U] = 0U;
            __Vtemp530[4U] = 0U;
            __Vtemp530[5U] = 0U;
            __Vtemp530[6U] = 0U;
            __Vtemp530[7U] = 0U;
            __Vtemp530[8U] = 0U;
            __Vtemp530[9U] = 0U;
            __Vtemp530[0xaU] = 0U;
            __Vtemp530[0xbU] = 0U;
            __Vtemp530[0xcU] = 0U;
            __Vtemp530[0xdU] = 0U;
            __Vtemp530[0xeU] = 0U;
            __Vtemp530[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp531, __Vtemp530, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp531[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp532[0U] = 1U;
            __Vtemp532[1U] = 0U;
            __Vtemp532[2U] = 0U;
            __Vtemp532[3U] = 0U;
            __Vtemp532[4U] = 0U;
            __Vtemp532[5U] = 0U;
            __Vtemp532[6U] = 0U;
            __Vtemp532[7U] = 0U;
            __Vtemp532[8U] = 0U;
            __Vtemp532[9U] = 0U;
            __Vtemp532[0xaU] = 0U;
            __Vtemp532[0xbU] = 0U;
            __Vtemp532[0xcU] = 0U;
            __Vtemp532[0xdU] = 0U;
            __Vtemp532[0xeU] = 0U;
            __Vtemp532[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp533, __Vtemp532, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp533[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_123 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp534[0U] = 1U;
            __Vtemp534[1U] = 0U;
            __Vtemp534[2U] = 0U;
            __Vtemp534[3U] = 0U;
            __Vtemp534[4U] = 0U;
            __Vtemp534[5U] = 0U;
            __Vtemp534[6U] = 0U;
            __Vtemp534[7U] = 0U;
            __Vtemp534[8U] = 0U;
            __Vtemp534[9U] = 0U;
            __Vtemp534[0xaU] = 0U;
            __Vtemp534[0xbU] = 0U;
            __Vtemp534[0xcU] = 0U;
            __Vtemp534[0xdU] = 0U;
            __Vtemp534[0xeU] = 0U;
            __Vtemp534[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp535, __Vtemp534, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp535[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp536[0U] = 1U;
            __Vtemp536[1U] = 0U;
            __Vtemp536[2U] = 0U;
            __Vtemp536[3U] = 0U;
            __Vtemp536[4U] = 0U;
            __Vtemp536[5U] = 0U;
            __Vtemp536[6U] = 0U;
            __Vtemp536[7U] = 0U;
            __Vtemp536[8U] = 0U;
            __Vtemp536[9U] = 0U;
            __Vtemp536[0xaU] = 0U;
            __Vtemp536[0xbU] = 0U;
            __Vtemp536[0xcU] = 0U;
            __Vtemp536[0xdU] = 0U;
            __Vtemp536[0xeU] = 0U;
            __Vtemp536[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp537, __Vtemp536, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp537[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_160 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp538[0U] = 1U;
            __Vtemp538[1U] = 0U;
            __Vtemp538[2U] = 0U;
            __Vtemp538[3U] = 0U;
            __Vtemp538[4U] = 0U;
            __Vtemp538[5U] = 0U;
            __Vtemp538[6U] = 0U;
            __Vtemp538[7U] = 0U;
            __Vtemp538[8U] = 0U;
            __Vtemp538[9U] = 0U;
            __Vtemp538[0xaU] = 0U;
            __Vtemp538[0xbU] = 0U;
            __Vtemp538[0xcU] = 0U;
            __Vtemp538[0xdU] = 0U;
            __Vtemp538[0xeU] = 0U;
            __Vtemp538[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp539, __Vtemp538, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp539[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp540[0U] = 1U;
            __Vtemp540[1U] = 0U;
            __Vtemp540[2U] = 0U;
            __Vtemp540[3U] = 0U;
            __Vtemp540[4U] = 0U;
            __Vtemp540[5U] = 0U;
            __Vtemp540[6U] = 0U;
            __Vtemp540[7U] = 0U;
            __Vtemp540[8U] = 0U;
            __Vtemp540[9U] = 0U;
            __Vtemp540[0xaU] = 0U;
            __Vtemp540[0xbU] = 0U;
            __Vtemp540[0xcU] = 0U;
            __Vtemp540[0xdU] = 0U;
            __Vtemp540[0xeU] = 0U;
            __Vtemp540[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp541, __Vtemp540, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp541[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_196 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp542[0U] = 1U;
            __Vtemp542[1U] = 0U;
            __Vtemp542[2U] = 0U;
            __Vtemp542[3U] = 0U;
            __Vtemp542[4U] = 0U;
            __Vtemp542[5U] = 0U;
            __Vtemp542[6U] = 0U;
            __Vtemp542[7U] = 0U;
            __Vtemp542[8U] = 0U;
            __Vtemp542[9U] = 0U;
            __Vtemp542[0xaU] = 0U;
            __Vtemp542[0xbU] = 0U;
            __Vtemp542[0xcU] = 0U;
            __Vtemp542[0xdU] = 0U;
            __Vtemp542[0xeU] = 0U;
            __Vtemp542[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp543, __Vtemp542, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp543[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp544[0U] = 1U;
            __Vtemp544[1U] = 0U;
            __Vtemp544[2U] = 0U;
            __Vtemp544[3U] = 0U;
            __Vtemp544[4U] = 0U;
            __Vtemp544[5U] = 0U;
            __Vtemp544[6U] = 0U;
            __Vtemp544[7U] = 0U;
            __Vtemp544[8U] = 0U;
            __Vtemp544[9U] = 0U;
            __Vtemp544[0xaU] = 0U;
            __Vtemp544[0xbU] = 0U;
            __Vtemp544[0xcU] = 0U;
            __Vtemp544[0xdU] = 0U;
            __Vtemp544[0xeU] = 0U;
            __Vtemp544[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp545, __Vtemp544, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp545[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_122 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp546[0U] = 1U;
            __Vtemp546[1U] = 0U;
            __Vtemp546[2U] = 0U;
            __Vtemp546[3U] = 0U;
            __Vtemp546[4U] = 0U;
            __Vtemp546[5U] = 0U;
            __Vtemp546[6U] = 0U;
            __Vtemp546[7U] = 0U;
            __Vtemp546[8U] = 0U;
            __Vtemp546[9U] = 0U;
            __Vtemp546[0xaU] = 0U;
            __Vtemp546[0xbU] = 0U;
            __Vtemp546[0xcU] = 0U;
            __Vtemp546[0xdU] = 0U;
            __Vtemp546[0xeU] = 0U;
            __Vtemp546[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp547, __Vtemp546, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp547[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp548[0U] = 1U;
            __Vtemp548[1U] = 0U;
            __Vtemp548[2U] = 0U;
            __Vtemp548[3U] = 0U;
            __Vtemp548[4U] = 0U;
            __Vtemp548[5U] = 0U;
            __Vtemp548[6U] = 0U;
            __Vtemp548[7U] = 0U;
            __Vtemp548[8U] = 0U;
            __Vtemp548[9U] = 0U;
            __Vtemp548[0xaU] = 0U;
            __Vtemp548[0xbU] = 0U;
            __Vtemp548[0xcU] = 0U;
            __Vtemp548[0xdU] = 0U;
            __Vtemp548[0xeU] = 0U;
            __Vtemp548[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp549, __Vtemp548, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp549[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_159 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp550[0U] = 1U;
            __Vtemp550[1U] = 0U;
            __Vtemp550[2U] = 0U;
            __Vtemp550[3U] = 0U;
            __Vtemp550[4U] = 0U;
            __Vtemp550[5U] = 0U;
            __Vtemp550[6U] = 0U;
            __Vtemp550[7U] = 0U;
            __Vtemp550[8U] = 0U;
            __Vtemp550[9U] = 0U;
            __Vtemp550[0xaU] = 0U;
            __Vtemp550[0xbU] = 0U;
            __Vtemp550[0xcU] = 0U;
            __Vtemp550[0xdU] = 0U;
            __Vtemp550[0xeU] = 0U;
            __Vtemp550[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp551, __Vtemp550, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp551[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp552[0U] = 1U;
            __Vtemp552[1U] = 0U;
            __Vtemp552[2U] = 0U;
            __Vtemp552[3U] = 0U;
            __Vtemp552[4U] = 0U;
            __Vtemp552[5U] = 0U;
            __Vtemp552[6U] = 0U;
            __Vtemp552[7U] = 0U;
            __Vtemp552[8U] = 0U;
            __Vtemp552[9U] = 0U;
            __Vtemp552[0xaU] = 0U;
            __Vtemp552[0xbU] = 0U;
            __Vtemp552[0xcU] = 0U;
            __Vtemp552[0xdU] = 0U;
            __Vtemp552[0xeU] = 0U;
            __Vtemp552[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp553, __Vtemp552, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp553[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_195 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp554[0U] = 1U;
            __Vtemp554[1U] = 0U;
            __Vtemp554[2U] = 0U;
            __Vtemp554[3U] = 0U;
            __Vtemp554[4U] = 0U;
            __Vtemp554[5U] = 0U;
            __Vtemp554[6U] = 0U;
            __Vtemp554[7U] = 0U;
            __Vtemp554[8U] = 0U;
            __Vtemp554[9U] = 0U;
            __Vtemp554[0xaU] = 0U;
            __Vtemp554[0xbU] = 0U;
            __Vtemp554[0xcU] = 0U;
            __Vtemp554[0xdU] = 0U;
            __Vtemp554[0xeU] = 0U;
            __Vtemp554[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp555, __Vtemp554, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp555[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp556[0U] = 1U;
            __Vtemp556[1U] = 0U;
            __Vtemp556[2U] = 0U;
            __Vtemp556[3U] = 0U;
            __Vtemp556[4U] = 0U;
            __Vtemp556[5U] = 0U;
            __Vtemp556[6U] = 0U;
            __Vtemp556[7U] = 0U;
            __Vtemp556[8U] = 0U;
            __Vtemp556[9U] = 0U;
            __Vtemp556[0xaU] = 0U;
            __Vtemp556[0xbU] = 0U;
            __Vtemp556[0xcU] = 0U;
            __Vtemp556[0xdU] = 0U;
            __Vtemp556[0xeU] = 0U;
            __Vtemp556[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp557, __Vtemp556, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp557[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_121 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
