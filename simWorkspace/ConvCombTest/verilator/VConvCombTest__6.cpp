// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__54(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__54\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp404[16];
    WData/*511:0*/ __Vtemp405[16];
    WData/*511:0*/ __Vtemp406[16];
    WData/*511:0*/ __Vtemp407[16];
    WData/*511:0*/ __Vtemp408[16];
    WData/*511:0*/ __Vtemp409[16];
    WData/*511:0*/ __Vtemp410[16];
    WData/*511:0*/ __Vtemp411[16];
    WData/*511:0*/ __Vtemp412[16];
    WData/*511:0*/ __Vtemp413[16];
    WData/*511:0*/ __Vtemp414[16];
    WData/*511:0*/ __Vtemp415[16];
    WData/*511:0*/ __Vtemp416[16];
    WData/*511:0*/ __Vtemp417[16];
    WData/*511:0*/ __Vtemp418[16];
    WData/*511:0*/ __Vtemp419[16];
    WData/*511:0*/ __Vtemp420[16];
    WData/*511:0*/ __Vtemp421[16];
    WData/*511:0*/ __Vtemp422[16];
    WData/*511:0*/ __Vtemp423[16];
    WData/*511:0*/ __Vtemp424[16];
    WData/*511:0*/ __Vtemp425[16];
    WData/*511:0*/ __Vtemp426[16];
    WData/*511:0*/ __Vtemp427[16];
    WData/*511:0*/ __Vtemp428[16];
    WData/*511:0*/ __Vtemp429[16];
    WData/*511:0*/ __Vtemp430[16];
    WData/*511:0*/ __Vtemp431[16];
    WData/*511:0*/ __Vtemp432[16];
    WData/*511:0*/ __Vtemp433[16];
    WData/*511:0*/ __Vtemp434[16];
    WData/*511:0*/ __Vtemp435[16];
    WData/*511:0*/ __Vtemp436[16];
    WData/*511:0*/ __Vtemp437[16];
    WData/*511:0*/ __Vtemp438[16];
    WData/*511:0*/ __Vtemp439[16];
    WData/*511:0*/ __Vtemp440[16];
    WData/*511:0*/ __Vtemp441[16];
    WData/*511:0*/ __Vtemp442[16];
    WData/*511:0*/ __Vtemp443[16];
    WData/*511:0*/ __Vtemp444[16];
    WData/*511:0*/ __Vtemp445[16];
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
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp404[0U] = 1U;
            __Vtemp404[1U] = 0U;
            __Vtemp404[2U] = 0U;
            __Vtemp404[3U] = 0U;
            __Vtemp404[4U] = 0U;
            __Vtemp404[5U] = 0U;
            __Vtemp404[6U] = 0U;
            __Vtemp404[7U] = 0U;
            __Vtemp404[8U] = 0U;
            __Vtemp404[9U] = 0U;
            __Vtemp404[0xaU] = 0U;
            __Vtemp404[0xbU] = 0U;
            __Vtemp404[0xcU] = 0U;
            __Vtemp404[0xdU] = 0U;
            __Vtemp404[0xeU] = 0U;
            __Vtemp404[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp405, __Vtemp404, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp405[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_62 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp406[0U] = 1U;
            __Vtemp406[1U] = 0U;
            __Vtemp406[2U] = 0U;
            __Vtemp406[3U] = 0U;
            __Vtemp406[4U] = 0U;
            __Vtemp406[5U] = 0U;
            __Vtemp406[6U] = 0U;
            __Vtemp406[7U] = 0U;
            __Vtemp406[8U] = 0U;
            __Vtemp406[9U] = 0U;
            __Vtemp406[0xaU] = 0U;
            __Vtemp406[0xbU] = 0U;
            __Vtemp406[0xcU] = 0U;
            __Vtemp406[0xdU] = 0U;
            __Vtemp406[0xeU] = 0U;
            __Vtemp406[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp407, __Vtemp406, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp407[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_61 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp408[0U] = 1U;
            __Vtemp408[1U] = 0U;
            __Vtemp408[2U] = 0U;
            __Vtemp408[3U] = 0U;
            __Vtemp408[4U] = 0U;
            __Vtemp408[5U] = 0U;
            __Vtemp408[6U] = 0U;
            __Vtemp408[7U] = 0U;
            __Vtemp408[8U] = 0U;
            __Vtemp408[9U] = 0U;
            __Vtemp408[0xaU] = 0U;
            __Vtemp408[0xbU] = 0U;
            __Vtemp408[0xcU] = 0U;
            __Vtemp408[0xdU] = 0U;
            __Vtemp408[0xeU] = 0U;
            __Vtemp408[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp409, __Vtemp408, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp409[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_60 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp410[0U] = 1U;
            __Vtemp410[1U] = 0U;
            __Vtemp410[2U] = 0U;
            __Vtemp410[3U] = 0U;
            __Vtemp410[4U] = 0U;
            __Vtemp410[5U] = 0U;
            __Vtemp410[6U] = 0U;
            __Vtemp410[7U] = 0U;
            __Vtemp410[8U] = 0U;
            __Vtemp410[9U] = 0U;
            __Vtemp410[0xaU] = 0U;
            __Vtemp410[0xbU] = 0U;
            __Vtemp410[0xcU] = 0U;
            __Vtemp410[0xdU] = 0U;
            __Vtemp410[0xeU] = 0U;
            __Vtemp410[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp411, __Vtemp410, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp411[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_59 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp412[0U] = 1U;
            __Vtemp412[1U] = 0U;
            __Vtemp412[2U] = 0U;
            __Vtemp412[3U] = 0U;
            __Vtemp412[4U] = 0U;
            __Vtemp412[5U] = 0U;
            __Vtemp412[6U] = 0U;
            __Vtemp412[7U] = 0U;
            __Vtemp412[8U] = 0U;
            __Vtemp412[9U] = 0U;
            __Vtemp412[0xaU] = 0U;
            __Vtemp412[0xbU] = 0U;
            __Vtemp412[0xcU] = 0U;
            __Vtemp412[0xdU] = 0U;
            __Vtemp412[0xeU] = 0U;
            __Vtemp412[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp413, __Vtemp412, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp413[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_58 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp414[0U] = 1U;
            __Vtemp414[1U] = 0U;
            __Vtemp414[2U] = 0U;
            __Vtemp414[3U] = 0U;
            __Vtemp414[4U] = 0U;
            __Vtemp414[5U] = 0U;
            __Vtemp414[6U] = 0U;
            __Vtemp414[7U] = 0U;
            __Vtemp414[8U] = 0U;
            __Vtemp414[9U] = 0U;
            __Vtemp414[0xaU] = 0U;
            __Vtemp414[0xbU] = 0U;
            __Vtemp414[0xcU] = 0U;
            __Vtemp414[0xdU] = 0U;
            __Vtemp414[0xeU] = 0U;
            __Vtemp414[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp415, __Vtemp414, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp415[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_57 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp416[0U] = 1U;
            __Vtemp416[1U] = 0U;
            __Vtemp416[2U] = 0U;
            __Vtemp416[3U] = 0U;
            __Vtemp416[4U] = 0U;
            __Vtemp416[5U] = 0U;
            __Vtemp416[6U] = 0U;
            __Vtemp416[7U] = 0U;
            __Vtemp416[8U] = 0U;
            __Vtemp416[9U] = 0U;
            __Vtemp416[0xaU] = 0U;
            __Vtemp416[0xbU] = 0U;
            __Vtemp416[0xcU] = 0U;
            __Vtemp416[0xdU] = 0U;
            __Vtemp416[0xeU] = 0U;
            __Vtemp416[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp417, __Vtemp416, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp417[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_56 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp418[0U] = 1U;
            __Vtemp418[1U] = 0U;
            __Vtemp418[2U] = 0U;
            __Vtemp418[3U] = 0U;
            __Vtemp418[4U] = 0U;
            __Vtemp418[5U] = 0U;
            __Vtemp418[6U] = 0U;
            __Vtemp418[7U] = 0U;
            __Vtemp418[8U] = 0U;
            __Vtemp418[9U] = 0U;
            __Vtemp418[0xaU] = 0U;
            __Vtemp418[0xbU] = 0U;
            __Vtemp418[0xcU] = 0U;
            __Vtemp418[0xdU] = 0U;
            __Vtemp418[0xeU] = 0U;
            __Vtemp418[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp419, __Vtemp418, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp419[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_55 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp420[0U] = 1U;
            __Vtemp420[1U] = 0U;
            __Vtemp420[2U] = 0U;
            __Vtemp420[3U] = 0U;
            __Vtemp420[4U] = 0U;
            __Vtemp420[5U] = 0U;
            __Vtemp420[6U] = 0U;
            __Vtemp420[7U] = 0U;
            __Vtemp420[8U] = 0U;
            __Vtemp420[9U] = 0U;
            __Vtemp420[0xaU] = 0U;
            __Vtemp420[0xbU] = 0U;
            __Vtemp420[0xcU] = 0U;
            __Vtemp420[0xdU] = 0U;
            __Vtemp420[0xeU] = 0U;
            __Vtemp420[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp421, __Vtemp420, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp421[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_54 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp422[0U] = 1U;
            __Vtemp422[1U] = 0U;
            __Vtemp422[2U] = 0U;
            __Vtemp422[3U] = 0U;
            __Vtemp422[4U] = 0U;
            __Vtemp422[5U] = 0U;
            __Vtemp422[6U] = 0U;
            __Vtemp422[7U] = 0U;
            __Vtemp422[8U] = 0U;
            __Vtemp422[9U] = 0U;
            __Vtemp422[0xaU] = 0U;
            __Vtemp422[0xbU] = 0U;
            __Vtemp422[0xcU] = 0U;
            __Vtemp422[0xdU] = 0U;
            __Vtemp422[0xeU] = 0U;
            __Vtemp422[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp423, __Vtemp422, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp423[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_53 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp424[0U] = 1U;
            __Vtemp424[1U] = 0U;
            __Vtemp424[2U] = 0U;
            __Vtemp424[3U] = 0U;
            __Vtemp424[4U] = 0U;
            __Vtemp424[5U] = 0U;
            __Vtemp424[6U] = 0U;
            __Vtemp424[7U] = 0U;
            __Vtemp424[8U] = 0U;
            __Vtemp424[9U] = 0U;
            __Vtemp424[0xaU] = 0U;
            __Vtemp424[0xbU] = 0U;
            __Vtemp424[0xcU] = 0U;
            __Vtemp424[0xdU] = 0U;
            __Vtemp424[0xeU] = 0U;
            __Vtemp424[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp425, __Vtemp424, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp425[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_52 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp426[0U] = 1U;
            __Vtemp426[1U] = 0U;
            __Vtemp426[2U] = 0U;
            __Vtemp426[3U] = 0U;
            __Vtemp426[4U] = 0U;
            __Vtemp426[5U] = 0U;
            __Vtemp426[6U] = 0U;
            __Vtemp426[7U] = 0U;
            __Vtemp426[8U] = 0U;
            __Vtemp426[9U] = 0U;
            __Vtemp426[0xaU] = 0U;
            __Vtemp426[0xbU] = 0U;
            __Vtemp426[0xcU] = 0U;
            __Vtemp426[0xdU] = 0U;
            __Vtemp426[0xeU] = 0U;
            __Vtemp426[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp427, __Vtemp426, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp427[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_51 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp428[0U] = 1U;
            __Vtemp428[1U] = 0U;
            __Vtemp428[2U] = 0U;
            __Vtemp428[3U] = 0U;
            __Vtemp428[4U] = 0U;
            __Vtemp428[5U] = 0U;
            __Vtemp428[6U] = 0U;
            __Vtemp428[7U] = 0U;
            __Vtemp428[8U] = 0U;
            __Vtemp428[9U] = 0U;
            __Vtemp428[0xaU] = 0U;
            __Vtemp428[0xbU] = 0U;
            __Vtemp428[0xcU] = 0U;
            __Vtemp428[0xdU] = 0U;
            __Vtemp428[0xeU] = 0U;
            __Vtemp428[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp429, __Vtemp428, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp429[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_50 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp430[0U] = 1U;
            __Vtemp430[1U] = 0U;
            __Vtemp430[2U] = 0U;
            __Vtemp430[3U] = 0U;
            __Vtemp430[4U] = 0U;
            __Vtemp430[5U] = 0U;
            __Vtemp430[6U] = 0U;
            __Vtemp430[7U] = 0U;
            __Vtemp430[8U] = 0U;
            __Vtemp430[9U] = 0U;
            __Vtemp430[0xaU] = 0U;
            __Vtemp430[0xbU] = 0U;
            __Vtemp430[0xcU] = 0U;
            __Vtemp430[0xdU] = 0U;
            __Vtemp430[0xeU] = 0U;
            __Vtemp430[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp431, __Vtemp430, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp431[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_49 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp432[0U] = 1U;
            __Vtemp432[1U] = 0U;
            __Vtemp432[2U] = 0U;
            __Vtemp432[3U] = 0U;
            __Vtemp432[4U] = 0U;
            __Vtemp432[5U] = 0U;
            __Vtemp432[6U] = 0U;
            __Vtemp432[7U] = 0U;
            __Vtemp432[8U] = 0U;
            __Vtemp432[9U] = 0U;
            __Vtemp432[0xaU] = 0U;
            __Vtemp432[0xbU] = 0U;
            __Vtemp432[0xcU] = 0U;
            __Vtemp432[0xdU] = 0U;
            __Vtemp432[0xeU] = 0U;
            __Vtemp432[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp433, __Vtemp432, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp433[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_48 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp434[0U] = 1U;
            __Vtemp434[1U] = 0U;
            __Vtemp434[2U] = 0U;
            __Vtemp434[3U] = 0U;
            __Vtemp434[4U] = 0U;
            __Vtemp434[5U] = 0U;
            __Vtemp434[6U] = 0U;
            __Vtemp434[7U] = 0U;
            __Vtemp434[8U] = 0U;
            __Vtemp434[9U] = 0U;
            __Vtemp434[0xaU] = 0U;
            __Vtemp434[0xbU] = 0U;
            __Vtemp434[0xcU] = 0U;
            __Vtemp434[0xdU] = 0U;
            __Vtemp434[0xeU] = 0U;
            __Vtemp434[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp435, __Vtemp434, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp435[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_47 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp436[0U] = 1U;
            __Vtemp436[1U] = 0U;
            __Vtemp436[2U] = 0U;
            __Vtemp436[3U] = 0U;
            __Vtemp436[4U] = 0U;
            __Vtemp436[5U] = 0U;
            __Vtemp436[6U] = 0U;
            __Vtemp436[7U] = 0U;
            __Vtemp436[8U] = 0U;
            __Vtemp436[9U] = 0U;
            __Vtemp436[0xaU] = 0U;
            __Vtemp436[0xbU] = 0U;
            __Vtemp436[0xcU] = 0U;
            __Vtemp436[0xdU] = 0U;
            __Vtemp436[0xeU] = 0U;
            __Vtemp436[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp437, __Vtemp436, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp437[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_46 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp438[0U] = 1U;
            __Vtemp438[1U] = 0U;
            __Vtemp438[2U] = 0U;
            __Vtemp438[3U] = 0U;
            __Vtemp438[4U] = 0U;
            __Vtemp438[5U] = 0U;
            __Vtemp438[6U] = 0U;
            __Vtemp438[7U] = 0U;
            __Vtemp438[8U] = 0U;
            __Vtemp438[9U] = 0U;
            __Vtemp438[0xaU] = 0U;
            __Vtemp438[0xbU] = 0U;
            __Vtemp438[0xcU] = 0U;
            __Vtemp438[0xdU] = 0U;
            __Vtemp438[0xeU] = 0U;
            __Vtemp438[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp439, __Vtemp438, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp439[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_45 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp440[0U] = 1U;
            __Vtemp440[1U] = 0U;
            __Vtemp440[2U] = 0U;
            __Vtemp440[3U] = 0U;
            __Vtemp440[4U] = 0U;
            __Vtemp440[5U] = 0U;
            __Vtemp440[6U] = 0U;
            __Vtemp440[7U] = 0U;
            __Vtemp440[8U] = 0U;
            __Vtemp440[9U] = 0U;
            __Vtemp440[0xaU] = 0U;
            __Vtemp440[0xbU] = 0U;
            __Vtemp440[0xcU] = 0U;
            __Vtemp440[0xdU] = 0U;
            __Vtemp440[0xeU] = 0U;
            __Vtemp440[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp441, __Vtemp440, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp441[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_44 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp442[0U] = 1U;
            __Vtemp442[1U] = 0U;
            __Vtemp442[2U] = 0U;
            __Vtemp442[3U] = 0U;
            __Vtemp442[4U] = 0U;
            __Vtemp442[5U] = 0U;
            __Vtemp442[6U] = 0U;
            __Vtemp442[7U] = 0U;
            __Vtemp442[8U] = 0U;
            __Vtemp442[9U] = 0U;
            __Vtemp442[0xaU] = 0U;
            __Vtemp442[0xbU] = 0U;
            __Vtemp442[0xcU] = 0U;
            __Vtemp442[0xdU] = 0U;
            __Vtemp442[0xeU] = 0U;
            __Vtemp442[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp443, __Vtemp442, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp443[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_43 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp444[0U] = 1U;
            __Vtemp444[1U] = 0U;
            __Vtemp444[2U] = 0U;
            __Vtemp444[3U] = 0U;
            __Vtemp444[4U] = 0U;
            __Vtemp444[5U] = 0U;
            __Vtemp444[6U] = 0U;
            __Vtemp444[7U] = 0U;
            __Vtemp444[8U] = 0U;
            __Vtemp444[9U] = 0U;
            __Vtemp444[0xaU] = 0U;
            __Vtemp444[0xbU] = 0U;
            __Vtemp444[0xcU] = 0U;
            __Vtemp444[0xdU] = 0U;
            __Vtemp444[0xeU] = 0U;
            __Vtemp444[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp445, __Vtemp444, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp445[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_42 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
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
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__55(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__55\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
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
}
