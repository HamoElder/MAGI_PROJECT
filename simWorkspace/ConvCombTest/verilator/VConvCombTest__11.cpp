// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__64(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__64\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp964[0U] = 1U;
            __Vtemp964[1U] = 0U;
            __Vtemp964[2U] = 0U;
            __Vtemp964[3U] = 0U;
            __Vtemp964[4U] = 0U;
            __Vtemp964[5U] = 0U;
            __Vtemp964[6U] = 0U;
            __Vtemp964[7U] = 0U;
            __Vtemp964[8U] = 0U;
            __Vtemp964[9U] = 0U;
            __Vtemp964[0xaU] = 0U;
            __Vtemp964[0xbU] = 0U;
            __Vtemp964[0xcU] = 0U;
            __Vtemp964[0xdU] = 0U;
            __Vtemp964[0xeU] = 0U;
            __Vtemp964[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp965, __Vtemp964, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp965[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_214 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp966[0U] = 1U;
            __Vtemp966[1U] = 0U;
            __Vtemp966[2U] = 0U;
            __Vtemp966[3U] = 0U;
            __Vtemp966[4U] = 0U;
            __Vtemp966[5U] = 0U;
            __Vtemp966[6U] = 0U;
            __Vtemp966[7U] = 0U;
            __Vtemp966[8U] = 0U;
            __Vtemp966[9U] = 0U;
            __Vtemp966[0xaU] = 0U;
            __Vtemp966[0xbU] = 0U;
            __Vtemp966[0xcU] = 0U;
            __Vtemp966[0xdU] = 0U;
            __Vtemp966[0xeU] = 0U;
            __Vtemp966[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp967, __Vtemp966, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp967[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_215 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp968[0U] = 1U;
            __Vtemp968[1U] = 0U;
            __Vtemp968[2U] = 0U;
            __Vtemp968[3U] = 0U;
            __Vtemp968[4U] = 0U;
            __Vtemp968[5U] = 0U;
            __Vtemp968[6U] = 0U;
            __Vtemp968[7U] = 0U;
            __Vtemp968[8U] = 0U;
            __Vtemp968[9U] = 0U;
            __Vtemp968[0xaU] = 0U;
            __Vtemp968[0xbU] = 0U;
            __Vtemp968[0xcU] = 0U;
            __Vtemp968[0xdU] = 0U;
            __Vtemp968[0xeU] = 0U;
            __Vtemp968[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp969, __Vtemp968, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp969[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_216 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp970[0U] = 1U;
            __Vtemp970[1U] = 0U;
            __Vtemp970[2U] = 0U;
            __Vtemp970[3U] = 0U;
            __Vtemp970[4U] = 0U;
            __Vtemp970[5U] = 0U;
            __Vtemp970[6U] = 0U;
            __Vtemp970[7U] = 0U;
            __Vtemp970[8U] = 0U;
            __Vtemp970[9U] = 0U;
            __Vtemp970[0xaU] = 0U;
            __Vtemp970[0xbU] = 0U;
            __Vtemp970[0xcU] = 0U;
            __Vtemp970[0xdU] = 0U;
            __Vtemp970[0xeU] = 0U;
            __Vtemp970[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp971, __Vtemp970, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp971[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_217 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp972[0U] = 1U;
            __Vtemp972[1U] = 0U;
            __Vtemp972[2U] = 0U;
            __Vtemp972[3U] = 0U;
            __Vtemp972[4U] = 0U;
            __Vtemp972[5U] = 0U;
            __Vtemp972[6U] = 0U;
            __Vtemp972[7U] = 0U;
            __Vtemp972[8U] = 0U;
            __Vtemp972[9U] = 0U;
            __Vtemp972[0xaU] = 0U;
            __Vtemp972[0xbU] = 0U;
            __Vtemp972[0xcU] = 0U;
            __Vtemp972[0xdU] = 0U;
            __Vtemp972[0xeU] = 0U;
            __Vtemp972[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp973, __Vtemp972, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp973[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_218 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp974[0U] = 1U;
            __Vtemp974[1U] = 0U;
            __Vtemp974[2U] = 0U;
            __Vtemp974[3U] = 0U;
            __Vtemp974[4U] = 0U;
            __Vtemp974[5U] = 0U;
            __Vtemp974[6U] = 0U;
            __Vtemp974[7U] = 0U;
            __Vtemp974[8U] = 0U;
            __Vtemp974[9U] = 0U;
            __Vtemp974[0xaU] = 0U;
            __Vtemp974[0xbU] = 0U;
            __Vtemp974[0xcU] = 0U;
            __Vtemp974[0xdU] = 0U;
            __Vtemp974[0xeU] = 0U;
            __Vtemp974[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp975, __Vtemp974, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp975[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_219 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp976[0U] = 1U;
            __Vtemp976[1U] = 0U;
            __Vtemp976[2U] = 0U;
            __Vtemp976[3U] = 0U;
            __Vtemp976[4U] = 0U;
            __Vtemp976[5U] = 0U;
            __Vtemp976[6U] = 0U;
            __Vtemp976[7U] = 0U;
            __Vtemp976[8U] = 0U;
            __Vtemp976[9U] = 0U;
            __Vtemp976[0xaU] = 0U;
            __Vtemp976[0xbU] = 0U;
            __Vtemp976[0xcU] = 0U;
            __Vtemp976[0xdU] = 0U;
            __Vtemp976[0xeU] = 0U;
            __Vtemp976[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp977, __Vtemp976, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp977[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_220 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp978[0U] = 1U;
            __Vtemp978[1U] = 0U;
            __Vtemp978[2U] = 0U;
            __Vtemp978[3U] = 0U;
            __Vtemp978[4U] = 0U;
            __Vtemp978[5U] = 0U;
            __Vtemp978[6U] = 0U;
            __Vtemp978[7U] = 0U;
            __Vtemp978[8U] = 0U;
            __Vtemp978[9U] = 0U;
            __Vtemp978[0xaU] = 0U;
            __Vtemp978[0xbU] = 0U;
            __Vtemp978[0xcU] = 0U;
            __Vtemp978[0xdU] = 0U;
            __Vtemp978[0xeU] = 0U;
            __Vtemp978[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp979, __Vtemp978, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp979[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_221 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp980[0U] = 1U;
            __Vtemp980[1U] = 0U;
            __Vtemp980[2U] = 0U;
            __Vtemp980[3U] = 0U;
            __Vtemp980[4U] = 0U;
            __Vtemp980[5U] = 0U;
            __Vtemp980[6U] = 0U;
            __Vtemp980[7U] = 0U;
            __Vtemp980[8U] = 0U;
            __Vtemp980[9U] = 0U;
            __Vtemp980[0xaU] = 0U;
            __Vtemp980[0xbU] = 0U;
            __Vtemp980[0xcU] = 0U;
            __Vtemp980[0xdU] = 0U;
            __Vtemp980[0xeU] = 0U;
            __Vtemp980[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp981, __Vtemp980, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp981[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_222 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp982[0U] = 1U;
            __Vtemp982[1U] = 0U;
            __Vtemp982[2U] = 0U;
            __Vtemp982[3U] = 0U;
            __Vtemp982[4U] = 0U;
            __Vtemp982[5U] = 0U;
            __Vtemp982[6U] = 0U;
            __Vtemp982[7U] = 0U;
            __Vtemp982[8U] = 0U;
            __Vtemp982[9U] = 0U;
            __Vtemp982[0xaU] = 0U;
            __Vtemp982[0xbU] = 0U;
            __Vtemp982[0xcU] = 0U;
            __Vtemp982[0xdU] = 0U;
            __Vtemp982[0xeU] = 0U;
            __Vtemp982[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp983, __Vtemp982, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp983[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_223 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp984[0U] = 1U;
            __Vtemp984[1U] = 0U;
            __Vtemp984[2U] = 0U;
            __Vtemp984[3U] = 0U;
            __Vtemp984[4U] = 0U;
            __Vtemp984[5U] = 0U;
            __Vtemp984[6U] = 0U;
            __Vtemp984[7U] = 0U;
            __Vtemp984[8U] = 0U;
            __Vtemp984[9U] = 0U;
            __Vtemp984[0xaU] = 0U;
            __Vtemp984[0xbU] = 0U;
            __Vtemp984[0xcU] = 0U;
            __Vtemp984[0xdU] = 0U;
            __Vtemp984[0xeU] = 0U;
            __Vtemp984[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp985, __Vtemp984, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp985[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_224 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp986[0U] = 1U;
            __Vtemp986[1U] = 0U;
            __Vtemp986[2U] = 0U;
            __Vtemp986[3U] = 0U;
            __Vtemp986[4U] = 0U;
            __Vtemp986[5U] = 0U;
            __Vtemp986[6U] = 0U;
            __Vtemp986[7U] = 0U;
            __Vtemp986[8U] = 0U;
            __Vtemp986[9U] = 0U;
            __Vtemp986[0xaU] = 0U;
            __Vtemp986[0xbU] = 0U;
            __Vtemp986[0xcU] = 0U;
            __Vtemp986[0xdU] = 0U;
            __Vtemp986[0xeU] = 0U;
            __Vtemp986[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp987, __Vtemp986, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp987[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_225 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp988[0U] = 1U;
            __Vtemp988[1U] = 0U;
            __Vtemp988[2U] = 0U;
            __Vtemp988[3U] = 0U;
            __Vtemp988[4U] = 0U;
            __Vtemp988[5U] = 0U;
            __Vtemp988[6U] = 0U;
            __Vtemp988[7U] = 0U;
            __Vtemp988[8U] = 0U;
            __Vtemp988[9U] = 0U;
            __Vtemp988[0xaU] = 0U;
            __Vtemp988[0xbU] = 0U;
            __Vtemp988[0xcU] = 0U;
            __Vtemp988[0xdU] = 0U;
            __Vtemp988[0xeU] = 0U;
            __Vtemp988[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp989, __Vtemp988, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp989[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_226 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp990[0U] = 1U;
            __Vtemp990[1U] = 0U;
            __Vtemp990[2U] = 0U;
            __Vtemp990[3U] = 0U;
            __Vtemp990[4U] = 0U;
            __Vtemp990[5U] = 0U;
            __Vtemp990[6U] = 0U;
            __Vtemp990[7U] = 0U;
            __Vtemp990[8U] = 0U;
            __Vtemp990[9U] = 0U;
            __Vtemp990[0xaU] = 0U;
            __Vtemp990[0xbU] = 0U;
            __Vtemp990[0xcU] = 0U;
            __Vtemp990[0xdU] = 0U;
            __Vtemp990[0xeU] = 0U;
            __Vtemp990[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp991, __Vtemp990, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp991[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_227 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp992[0U] = 1U;
            __Vtemp992[1U] = 0U;
            __Vtemp992[2U] = 0U;
            __Vtemp992[3U] = 0U;
            __Vtemp992[4U] = 0U;
            __Vtemp992[5U] = 0U;
            __Vtemp992[6U] = 0U;
            __Vtemp992[7U] = 0U;
            __Vtemp992[8U] = 0U;
            __Vtemp992[9U] = 0U;
            __Vtemp992[0xaU] = 0U;
            __Vtemp992[0xbU] = 0U;
            __Vtemp992[0xcU] = 0U;
            __Vtemp992[0xdU] = 0U;
            __Vtemp992[0xeU] = 0U;
            __Vtemp992[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp993, __Vtemp992, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp993[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_228 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp994[0U] = 1U;
            __Vtemp994[1U] = 0U;
            __Vtemp994[2U] = 0U;
            __Vtemp994[3U] = 0U;
            __Vtemp994[4U] = 0U;
            __Vtemp994[5U] = 0U;
            __Vtemp994[6U] = 0U;
            __Vtemp994[7U] = 0U;
            __Vtemp994[8U] = 0U;
            __Vtemp994[9U] = 0U;
            __Vtemp994[0xaU] = 0U;
            __Vtemp994[0xbU] = 0U;
            __Vtemp994[0xcU] = 0U;
            __Vtemp994[0xdU] = 0U;
            __Vtemp994[0xeU] = 0U;
            __Vtemp994[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp995, __Vtemp994, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp995[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_229 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp996[0U] = 1U;
            __Vtemp996[1U] = 0U;
            __Vtemp996[2U] = 0U;
            __Vtemp996[3U] = 0U;
            __Vtemp996[4U] = 0U;
            __Vtemp996[5U] = 0U;
            __Vtemp996[6U] = 0U;
            __Vtemp996[7U] = 0U;
            __Vtemp996[8U] = 0U;
            __Vtemp996[9U] = 0U;
            __Vtemp996[0xaU] = 0U;
            __Vtemp996[0xbU] = 0U;
            __Vtemp996[0xcU] = 0U;
            __Vtemp996[0xdU] = 0U;
            __Vtemp996[0xeU] = 0U;
            __Vtemp996[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp997, __Vtemp996, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp997[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_230 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp998[0U] = 1U;
            __Vtemp998[1U] = 0U;
            __Vtemp998[2U] = 0U;
            __Vtemp998[3U] = 0U;
            __Vtemp998[4U] = 0U;
            __Vtemp998[5U] = 0U;
            __Vtemp998[6U] = 0U;
            __Vtemp998[7U] = 0U;
            __Vtemp998[8U] = 0U;
            __Vtemp998[9U] = 0U;
            __Vtemp998[0xaU] = 0U;
            __Vtemp998[0xbU] = 0U;
            __Vtemp998[0xcU] = 0U;
            __Vtemp998[0xdU] = 0U;
            __Vtemp998[0xeU] = 0U;
            __Vtemp998[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp999, __Vtemp998, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp999[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_231 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1000[0U] = 1U;
            __Vtemp1000[1U] = 0U;
            __Vtemp1000[2U] = 0U;
            __Vtemp1000[3U] = 0U;
            __Vtemp1000[4U] = 0U;
            __Vtemp1000[5U] = 0U;
            __Vtemp1000[6U] = 0U;
            __Vtemp1000[7U] = 0U;
            __Vtemp1000[8U] = 0U;
            __Vtemp1000[9U] = 0U;
            __Vtemp1000[0xaU] = 0U;
            __Vtemp1000[0xbU] = 0U;
            __Vtemp1000[0xcU] = 0U;
            __Vtemp1000[0xdU] = 0U;
            __Vtemp1000[0xeU] = 0U;
            __Vtemp1000[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1001, __Vtemp1000, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1001[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_232 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1002[0U] = 1U;
            __Vtemp1002[1U] = 0U;
            __Vtemp1002[2U] = 0U;
            __Vtemp1002[3U] = 0U;
            __Vtemp1002[4U] = 0U;
            __Vtemp1002[5U] = 0U;
            __Vtemp1002[6U] = 0U;
            __Vtemp1002[7U] = 0U;
            __Vtemp1002[8U] = 0U;
            __Vtemp1002[9U] = 0U;
            __Vtemp1002[0xaU] = 0U;
            __Vtemp1002[0xbU] = 0U;
            __Vtemp1002[0xcU] = 0U;
            __Vtemp1002[0xdU] = 0U;
            __Vtemp1002[0xeU] = 0U;
            __Vtemp1002[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1003, __Vtemp1002, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1003[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_233 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1004[0U] = 1U;
            __Vtemp1004[1U] = 0U;
            __Vtemp1004[2U] = 0U;
            __Vtemp1004[3U] = 0U;
            __Vtemp1004[4U] = 0U;
            __Vtemp1004[5U] = 0U;
            __Vtemp1004[6U] = 0U;
            __Vtemp1004[7U] = 0U;
            __Vtemp1004[8U] = 0U;
            __Vtemp1004[9U] = 0U;
            __Vtemp1004[0xaU] = 0U;
            __Vtemp1004[0xbU] = 0U;
            __Vtemp1004[0xcU] = 0U;
            __Vtemp1004[0xdU] = 0U;
            __Vtemp1004[0xeU] = 0U;
            __Vtemp1004[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1005, __Vtemp1004, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1005[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_234 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1006[0U] = 1U;
            __Vtemp1006[1U] = 0U;
            __Vtemp1006[2U] = 0U;
            __Vtemp1006[3U] = 0U;
            __Vtemp1006[4U] = 0U;
            __Vtemp1006[5U] = 0U;
            __Vtemp1006[6U] = 0U;
            __Vtemp1006[7U] = 0U;
            __Vtemp1006[8U] = 0U;
            __Vtemp1006[9U] = 0U;
            __Vtemp1006[0xaU] = 0U;
            __Vtemp1006[0xbU] = 0U;
            __Vtemp1006[0xcU] = 0U;
            __Vtemp1006[0xdU] = 0U;
            __Vtemp1006[0xeU] = 0U;
            __Vtemp1006[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1007, __Vtemp1006, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1007[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_235 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1008[0U] = 1U;
            __Vtemp1008[1U] = 0U;
            __Vtemp1008[2U] = 0U;
            __Vtemp1008[3U] = 0U;
            __Vtemp1008[4U] = 0U;
            __Vtemp1008[5U] = 0U;
            __Vtemp1008[6U] = 0U;
            __Vtemp1008[7U] = 0U;
            __Vtemp1008[8U] = 0U;
            __Vtemp1008[9U] = 0U;
            __Vtemp1008[0xaU] = 0U;
            __Vtemp1008[0xbU] = 0U;
            __Vtemp1008[0xcU] = 0U;
            __Vtemp1008[0xdU] = 0U;
            __Vtemp1008[0xeU] = 0U;
            __Vtemp1008[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1009, __Vtemp1008, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1009[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_236 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1010[0U] = 1U;
            __Vtemp1010[1U] = 0U;
            __Vtemp1010[2U] = 0U;
            __Vtemp1010[3U] = 0U;
            __Vtemp1010[4U] = 0U;
            __Vtemp1010[5U] = 0U;
            __Vtemp1010[6U] = 0U;
            __Vtemp1010[7U] = 0U;
            __Vtemp1010[8U] = 0U;
            __Vtemp1010[9U] = 0U;
            __Vtemp1010[0xaU] = 0U;
            __Vtemp1010[0xbU] = 0U;
            __Vtemp1010[0xcU] = 0U;
            __Vtemp1010[0xdU] = 0U;
            __Vtemp1010[0xeU] = 0U;
            __Vtemp1010[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1011, __Vtemp1010, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1011[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_237 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1012[0U] = 1U;
            __Vtemp1012[1U] = 0U;
            __Vtemp1012[2U] = 0U;
            __Vtemp1012[3U] = 0U;
            __Vtemp1012[4U] = 0U;
            __Vtemp1012[5U] = 0U;
            __Vtemp1012[6U] = 0U;
            __Vtemp1012[7U] = 0U;
            __Vtemp1012[8U] = 0U;
            __Vtemp1012[9U] = 0U;
            __Vtemp1012[0xaU] = 0U;
            __Vtemp1012[0xbU] = 0U;
            __Vtemp1012[0xcU] = 0U;
            __Vtemp1012[0xdU] = 0U;
            __Vtemp1012[0xeU] = 0U;
            __Vtemp1012[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1013, __Vtemp1012, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1013[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_238 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1014[0U] = 1U;
            __Vtemp1014[1U] = 0U;
            __Vtemp1014[2U] = 0U;
            __Vtemp1014[3U] = 0U;
            __Vtemp1014[4U] = 0U;
            __Vtemp1014[5U] = 0U;
            __Vtemp1014[6U] = 0U;
            __Vtemp1014[7U] = 0U;
            __Vtemp1014[8U] = 0U;
            __Vtemp1014[9U] = 0U;
            __Vtemp1014[0xaU] = 0U;
            __Vtemp1014[0xbU] = 0U;
            __Vtemp1014[0xcU] = 0U;
            __Vtemp1014[0xdU] = 0U;
            __Vtemp1014[0xeU] = 0U;
            __Vtemp1014[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1015, __Vtemp1014, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1015[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_239 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1016[0U] = 1U;
            __Vtemp1016[1U] = 0U;
            __Vtemp1016[2U] = 0U;
            __Vtemp1016[3U] = 0U;
            __Vtemp1016[4U] = 0U;
            __Vtemp1016[5U] = 0U;
            __Vtemp1016[6U] = 0U;
            __Vtemp1016[7U] = 0U;
            __Vtemp1016[8U] = 0U;
            __Vtemp1016[9U] = 0U;
            __Vtemp1016[0xaU] = 0U;
            __Vtemp1016[0xbU] = 0U;
            __Vtemp1016[0xcU] = 0U;
            __Vtemp1016[0xdU] = 0U;
            __Vtemp1016[0xeU] = 0U;
            __Vtemp1016[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1017, __Vtemp1016, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1017[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_240 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1018[0U] = 1U;
            __Vtemp1018[1U] = 0U;
            __Vtemp1018[2U] = 0U;
            __Vtemp1018[3U] = 0U;
            __Vtemp1018[4U] = 0U;
            __Vtemp1018[5U] = 0U;
            __Vtemp1018[6U] = 0U;
            __Vtemp1018[7U] = 0U;
            __Vtemp1018[8U] = 0U;
            __Vtemp1018[9U] = 0U;
            __Vtemp1018[0xaU] = 0U;
            __Vtemp1018[0xbU] = 0U;
            __Vtemp1018[0xcU] = 0U;
            __Vtemp1018[0xdU] = 0U;
            __Vtemp1018[0xeU] = 0U;
            __Vtemp1018[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1019, __Vtemp1018, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1019[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_241 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__65(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__65\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp1061[16];
    WData/*511:0*/ __Vtemp1062[16];
    WData/*511:0*/ __Vtemp1063[16];
    WData/*511:0*/ __Vtemp1064[16];
    WData/*511:0*/ __Vtemp1065[16];
    WData/*511:0*/ __Vtemp1066[16];
    WData/*511:0*/ __Vtemp1067[16];
    WData/*511:0*/ __Vtemp1068[16];
    WData/*511:0*/ __Vtemp1069[16];
    WData/*511:0*/ __Vtemp1070[16];
    WData/*511:0*/ __Vtemp1071[16];
    WData/*511:0*/ __Vtemp1072[16];
    WData/*511:0*/ __Vtemp1073[16];
    WData/*511:0*/ __Vtemp1074[16];
    WData/*511:0*/ __Vtemp1075[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1020[0U] = 1U;
            __Vtemp1020[1U] = 0U;
            __Vtemp1020[2U] = 0U;
            __Vtemp1020[3U] = 0U;
            __Vtemp1020[4U] = 0U;
            __Vtemp1020[5U] = 0U;
            __Vtemp1020[6U] = 0U;
            __Vtemp1020[7U] = 0U;
            __Vtemp1020[8U] = 0U;
            __Vtemp1020[9U] = 0U;
            __Vtemp1020[0xaU] = 0U;
            __Vtemp1020[0xbU] = 0U;
            __Vtemp1020[0xcU] = 0U;
            __Vtemp1020[0xdU] = 0U;
            __Vtemp1020[0xeU] = 0U;
            __Vtemp1020[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1021, __Vtemp1020, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1021[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_242 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1022[0U] = 1U;
            __Vtemp1022[1U] = 0U;
            __Vtemp1022[2U] = 0U;
            __Vtemp1022[3U] = 0U;
            __Vtemp1022[4U] = 0U;
            __Vtemp1022[5U] = 0U;
            __Vtemp1022[6U] = 0U;
            __Vtemp1022[7U] = 0U;
            __Vtemp1022[8U] = 0U;
            __Vtemp1022[9U] = 0U;
            __Vtemp1022[0xaU] = 0U;
            __Vtemp1022[0xbU] = 0U;
            __Vtemp1022[0xcU] = 0U;
            __Vtemp1022[0xdU] = 0U;
            __Vtemp1022[0xeU] = 0U;
            __Vtemp1022[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1023, __Vtemp1022, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1023[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_243 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1024[0U] = 1U;
            __Vtemp1024[1U] = 0U;
            __Vtemp1024[2U] = 0U;
            __Vtemp1024[3U] = 0U;
            __Vtemp1024[4U] = 0U;
            __Vtemp1024[5U] = 0U;
            __Vtemp1024[6U] = 0U;
            __Vtemp1024[7U] = 0U;
            __Vtemp1024[8U] = 0U;
            __Vtemp1024[9U] = 0U;
            __Vtemp1024[0xaU] = 0U;
            __Vtemp1024[0xbU] = 0U;
            __Vtemp1024[0xcU] = 0U;
            __Vtemp1024[0xdU] = 0U;
            __Vtemp1024[0xeU] = 0U;
            __Vtemp1024[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1025, __Vtemp1024, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1025[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_244 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1026[0U] = 1U;
            __Vtemp1026[1U] = 0U;
            __Vtemp1026[2U] = 0U;
            __Vtemp1026[3U] = 0U;
            __Vtemp1026[4U] = 0U;
            __Vtemp1026[5U] = 0U;
            __Vtemp1026[6U] = 0U;
            __Vtemp1026[7U] = 0U;
            __Vtemp1026[8U] = 0U;
            __Vtemp1026[9U] = 0U;
            __Vtemp1026[0xaU] = 0U;
            __Vtemp1026[0xbU] = 0U;
            __Vtemp1026[0xcU] = 0U;
            __Vtemp1026[0xdU] = 0U;
            __Vtemp1026[0xeU] = 0U;
            __Vtemp1026[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1027, __Vtemp1026, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1027[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_245 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1028[0U] = 1U;
            __Vtemp1028[1U] = 0U;
            __Vtemp1028[2U] = 0U;
            __Vtemp1028[3U] = 0U;
            __Vtemp1028[4U] = 0U;
            __Vtemp1028[5U] = 0U;
            __Vtemp1028[6U] = 0U;
            __Vtemp1028[7U] = 0U;
            __Vtemp1028[8U] = 0U;
            __Vtemp1028[9U] = 0U;
            __Vtemp1028[0xaU] = 0U;
            __Vtemp1028[0xbU] = 0U;
            __Vtemp1028[0xcU] = 0U;
            __Vtemp1028[0xdU] = 0U;
            __Vtemp1028[0xeU] = 0U;
            __Vtemp1028[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1029, __Vtemp1028, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1029[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_246 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1030[0U] = 1U;
            __Vtemp1030[1U] = 0U;
            __Vtemp1030[2U] = 0U;
            __Vtemp1030[3U] = 0U;
            __Vtemp1030[4U] = 0U;
            __Vtemp1030[5U] = 0U;
            __Vtemp1030[6U] = 0U;
            __Vtemp1030[7U] = 0U;
            __Vtemp1030[8U] = 0U;
            __Vtemp1030[9U] = 0U;
            __Vtemp1030[0xaU] = 0U;
            __Vtemp1030[0xbU] = 0U;
            __Vtemp1030[0xcU] = 0U;
            __Vtemp1030[0xdU] = 0U;
            __Vtemp1030[0xeU] = 0U;
            __Vtemp1030[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1031, __Vtemp1030, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1031[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_247 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1032[0U] = 1U;
            __Vtemp1032[1U] = 0U;
            __Vtemp1032[2U] = 0U;
            __Vtemp1032[3U] = 0U;
            __Vtemp1032[4U] = 0U;
            __Vtemp1032[5U] = 0U;
            __Vtemp1032[6U] = 0U;
            __Vtemp1032[7U] = 0U;
            __Vtemp1032[8U] = 0U;
            __Vtemp1032[9U] = 0U;
            __Vtemp1032[0xaU] = 0U;
            __Vtemp1032[0xbU] = 0U;
            __Vtemp1032[0xcU] = 0U;
            __Vtemp1032[0xdU] = 0U;
            __Vtemp1032[0xeU] = 0U;
            __Vtemp1032[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1033, __Vtemp1032, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1033[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_248 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1034[0U] = 1U;
            __Vtemp1034[1U] = 0U;
            __Vtemp1034[2U] = 0U;
            __Vtemp1034[3U] = 0U;
            __Vtemp1034[4U] = 0U;
            __Vtemp1034[5U] = 0U;
            __Vtemp1034[6U] = 0U;
            __Vtemp1034[7U] = 0U;
            __Vtemp1034[8U] = 0U;
            __Vtemp1034[9U] = 0U;
            __Vtemp1034[0xaU] = 0U;
            __Vtemp1034[0xbU] = 0U;
            __Vtemp1034[0xcU] = 0U;
            __Vtemp1034[0xdU] = 0U;
            __Vtemp1034[0xeU] = 0U;
            __Vtemp1034[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1035, __Vtemp1034, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1035[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_249 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1036[0U] = 1U;
            __Vtemp1036[1U] = 0U;
            __Vtemp1036[2U] = 0U;
            __Vtemp1036[3U] = 0U;
            __Vtemp1036[4U] = 0U;
            __Vtemp1036[5U] = 0U;
            __Vtemp1036[6U] = 0U;
            __Vtemp1036[7U] = 0U;
            __Vtemp1036[8U] = 0U;
            __Vtemp1036[9U] = 0U;
            __Vtemp1036[0xaU] = 0U;
            __Vtemp1036[0xbU] = 0U;
            __Vtemp1036[0xcU] = 0U;
            __Vtemp1036[0xdU] = 0U;
            __Vtemp1036[0xeU] = 0U;
            __Vtemp1036[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1037, __Vtemp1036, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1037[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_250 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1038[0U] = 1U;
            __Vtemp1038[1U] = 0U;
            __Vtemp1038[2U] = 0U;
            __Vtemp1038[3U] = 0U;
            __Vtemp1038[4U] = 0U;
            __Vtemp1038[5U] = 0U;
            __Vtemp1038[6U] = 0U;
            __Vtemp1038[7U] = 0U;
            __Vtemp1038[8U] = 0U;
            __Vtemp1038[9U] = 0U;
            __Vtemp1038[0xaU] = 0U;
            __Vtemp1038[0xbU] = 0U;
            __Vtemp1038[0xcU] = 0U;
            __Vtemp1038[0xdU] = 0U;
            __Vtemp1038[0xeU] = 0U;
            __Vtemp1038[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1039, __Vtemp1038, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1039[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_251 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1040[0U] = 1U;
            __Vtemp1040[1U] = 0U;
            __Vtemp1040[2U] = 0U;
            __Vtemp1040[3U] = 0U;
            __Vtemp1040[4U] = 0U;
            __Vtemp1040[5U] = 0U;
            __Vtemp1040[6U] = 0U;
            __Vtemp1040[7U] = 0U;
            __Vtemp1040[8U] = 0U;
            __Vtemp1040[9U] = 0U;
            __Vtemp1040[0xaU] = 0U;
            __Vtemp1040[0xbU] = 0U;
            __Vtemp1040[0xcU] = 0U;
            __Vtemp1040[0xdU] = 0U;
            __Vtemp1040[0xeU] = 0U;
            __Vtemp1040[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1041, __Vtemp1040, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1041[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_252 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1042[0U] = 1U;
            __Vtemp1042[1U] = 0U;
            __Vtemp1042[2U] = 0U;
            __Vtemp1042[3U] = 0U;
            __Vtemp1042[4U] = 0U;
            __Vtemp1042[5U] = 0U;
            __Vtemp1042[6U] = 0U;
            __Vtemp1042[7U] = 0U;
            __Vtemp1042[8U] = 0U;
            __Vtemp1042[9U] = 0U;
            __Vtemp1042[0xaU] = 0U;
            __Vtemp1042[0xbU] = 0U;
            __Vtemp1042[0xcU] = 0U;
            __Vtemp1042[0xdU] = 0U;
            __Vtemp1042[0xeU] = 0U;
            __Vtemp1042[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1043, __Vtemp1042, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1043[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_253 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1044[0U] = 1U;
            __Vtemp1044[1U] = 0U;
            __Vtemp1044[2U] = 0U;
            __Vtemp1044[3U] = 0U;
            __Vtemp1044[4U] = 0U;
            __Vtemp1044[5U] = 0U;
            __Vtemp1044[6U] = 0U;
            __Vtemp1044[7U] = 0U;
            __Vtemp1044[8U] = 0U;
            __Vtemp1044[9U] = 0U;
            __Vtemp1044[0xaU] = 0U;
            __Vtemp1044[0xbU] = 0U;
            __Vtemp1044[0xcU] = 0U;
            __Vtemp1044[0xdU] = 0U;
            __Vtemp1044[0xeU] = 0U;
            __Vtemp1044[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1045, __Vtemp1044, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1045[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_254 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1046[0U] = 1U;
            __Vtemp1046[1U] = 0U;
            __Vtemp1046[2U] = 0U;
            __Vtemp1046[3U] = 0U;
            __Vtemp1046[4U] = 0U;
            __Vtemp1046[5U] = 0U;
            __Vtemp1046[6U] = 0U;
            __Vtemp1046[7U] = 0U;
            __Vtemp1046[8U] = 0U;
            __Vtemp1046[9U] = 0U;
            __Vtemp1046[0xaU] = 0U;
            __Vtemp1046[0xbU] = 0U;
            __Vtemp1046[0xcU] = 0U;
            __Vtemp1046[0xdU] = 0U;
            __Vtemp1046[0xeU] = 0U;
            __Vtemp1046[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1047, __Vtemp1046, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1047[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_255 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1048[0U] = 1U;
            __Vtemp1048[1U] = 0U;
            __Vtemp1048[2U] = 0U;
            __Vtemp1048[3U] = 0U;
            __Vtemp1048[4U] = 0U;
            __Vtemp1048[5U] = 0U;
            __Vtemp1048[6U] = 0U;
            __Vtemp1048[7U] = 0U;
            __Vtemp1048[8U] = 0U;
            __Vtemp1048[9U] = 0U;
            __Vtemp1048[0xaU] = 0U;
            __Vtemp1048[0xbU] = 0U;
            __Vtemp1048[0xcU] = 0U;
            __Vtemp1048[0xdU] = 0U;
            __Vtemp1048[0xeU] = 0U;
            __Vtemp1048[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1049, __Vtemp1048, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1049[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_256 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1050[0U] = 1U;
            __Vtemp1050[1U] = 0U;
            __Vtemp1050[2U] = 0U;
            __Vtemp1050[3U] = 0U;
            __Vtemp1050[4U] = 0U;
            __Vtemp1050[5U] = 0U;
            __Vtemp1050[6U] = 0U;
            __Vtemp1050[7U] = 0U;
            __Vtemp1050[8U] = 0U;
            __Vtemp1050[9U] = 0U;
            __Vtemp1050[0xaU] = 0U;
            __Vtemp1050[0xbU] = 0U;
            __Vtemp1050[0xcU] = 0U;
            __Vtemp1050[0xdU] = 0U;
            __Vtemp1050[0xeU] = 0U;
            __Vtemp1050[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1051, __Vtemp1050, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1051[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_257 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1052[0U] = 1U;
            __Vtemp1052[1U] = 0U;
            __Vtemp1052[2U] = 0U;
            __Vtemp1052[3U] = 0U;
            __Vtemp1052[4U] = 0U;
            __Vtemp1052[5U] = 0U;
            __Vtemp1052[6U] = 0U;
            __Vtemp1052[7U] = 0U;
            __Vtemp1052[8U] = 0U;
            __Vtemp1052[9U] = 0U;
            __Vtemp1052[0xaU] = 0U;
            __Vtemp1052[0xbU] = 0U;
            __Vtemp1052[0xcU] = 0U;
            __Vtemp1052[0xdU] = 0U;
            __Vtemp1052[0xeU] = 0U;
            __Vtemp1052[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1053, __Vtemp1052, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1053[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_258 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1054[0U] = 1U;
            __Vtemp1054[1U] = 0U;
            __Vtemp1054[2U] = 0U;
            __Vtemp1054[3U] = 0U;
            __Vtemp1054[4U] = 0U;
            __Vtemp1054[5U] = 0U;
            __Vtemp1054[6U] = 0U;
            __Vtemp1054[7U] = 0U;
            __Vtemp1054[8U] = 0U;
            __Vtemp1054[9U] = 0U;
            __Vtemp1054[0xaU] = 0U;
            __Vtemp1054[0xbU] = 0U;
            __Vtemp1054[0xcU] = 0U;
            __Vtemp1054[0xdU] = 0U;
            __Vtemp1054[0xeU] = 0U;
            __Vtemp1054[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1055, __Vtemp1054, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1055[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_259 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1056[0U] = 1U;
            __Vtemp1056[1U] = 0U;
            __Vtemp1056[2U] = 0U;
            __Vtemp1056[3U] = 0U;
            __Vtemp1056[4U] = 0U;
            __Vtemp1056[5U] = 0U;
            __Vtemp1056[6U] = 0U;
            __Vtemp1056[7U] = 0U;
            __Vtemp1056[8U] = 0U;
            __Vtemp1056[9U] = 0U;
            __Vtemp1056[0xaU] = 0U;
            __Vtemp1056[0xbU] = 0U;
            __Vtemp1056[0xcU] = 0U;
            __Vtemp1056[0xdU] = 0U;
            __Vtemp1056[0xeU] = 0U;
            __Vtemp1056[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1057, __Vtemp1056, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1057[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_260 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1058[0U] = 1U;
            __Vtemp1058[1U] = 0U;
            __Vtemp1058[2U] = 0U;
            __Vtemp1058[3U] = 0U;
            __Vtemp1058[4U] = 0U;
            __Vtemp1058[5U] = 0U;
            __Vtemp1058[6U] = 0U;
            __Vtemp1058[7U] = 0U;
            __Vtemp1058[8U] = 0U;
            __Vtemp1058[9U] = 0U;
            __Vtemp1058[0xaU] = 0U;
            __Vtemp1058[0xbU] = 0U;
            __Vtemp1058[0xcU] = 0U;
            __Vtemp1058[0xdU] = 0U;
            __Vtemp1058[0xeU] = 0U;
            __Vtemp1058[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1059, __Vtemp1058, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1059[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_261 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1060[0U] = 1U;
            __Vtemp1060[1U] = 0U;
            __Vtemp1060[2U] = 0U;
            __Vtemp1060[3U] = 0U;
            __Vtemp1060[4U] = 0U;
            __Vtemp1060[5U] = 0U;
            __Vtemp1060[6U] = 0U;
            __Vtemp1060[7U] = 0U;
            __Vtemp1060[8U] = 0U;
            __Vtemp1060[9U] = 0U;
            __Vtemp1060[0xaU] = 0U;
            __Vtemp1060[0xbU] = 0U;
            __Vtemp1060[0xcU] = 0U;
            __Vtemp1060[0xdU] = 0U;
            __Vtemp1060[0xeU] = 0U;
            __Vtemp1060[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1061, __Vtemp1060, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1061[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_262 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1062[0U] = 1U;
            __Vtemp1062[1U] = 0U;
            __Vtemp1062[2U] = 0U;
            __Vtemp1062[3U] = 0U;
            __Vtemp1062[4U] = 0U;
            __Vtemp1062[5U] = 0U;
            __Vtemp1062[6U] = 0U;
            __Vtemp1062[7U] = 0U;
            __Vtemp1062[8U] = 0U;
            __Vtemp1062[9U] = 0U;
            __Vtemp1062[0xaU] = 0U;
            __Vtemp1062[0xbU] = 0U;
            __Vtemp1062[0xcU] = 0U;
            __Vtemp1062[0xdU] = 0U;
            __Vtemp1062[0xeU] = 0U;
            __Vtemp1062[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1063, __Vtemp1062, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1063[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_263 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1064[0U] = 1U;
            __Vtemp1064[1U] = 0U;
            __Vtemp1064[2U] = 0U;
            __Vtemp1064[3U] = 0U;
            __Vtemp1064[4U] = 0U;
            __Vtemp1064[5U] = 0U;
            __Vtemp1064[6U] = 0U;
            __Vtemp1064[7U] = 0U;
            __Vtemp1064[8U] = 0U;
            __Vtemp1064[9U] = 0U;
            __Vtemp1064[0xaU] = 0U;
            __Vtemp1064[0xbU] = 0U;
            __Vtemp1064[0xcU] = 0U;
            __Vtemp1064[0xdU] = 0U;
            __Vtemp1064[0xeU] = 0U;
            __Vtemp1064[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1065, __Vtemp1064, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1065[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_264 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1066[0U] = 1U;
            __Vtemp1066[1U] = 0U;
            __Vtemp1066[2U] = 0U;
            __Vtemp1066[3U] = 0U;
            __Vtemp1066[4U] = 0U;
            __Vtemp1066[5U] = 0U;
            __Vtemp1066[6U] = 0U;
            __Vtemp1066[7U] = 0U;
            __Vtemp1066[8U] = 0U;
            __Vtemp1066[9U] = 0U;
            __Vtemp1066[0xaU] = 0U;
            __Vtemp1066[0xbU] = 0U;
            __Vtemp1066[0xcU] = 0U;
            __Vtemp1066[0xdU] = 0U;
            __Vtemp1066[0xeU] = 0U;
            __Vtemp1066[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1067, __Vtemp1066, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1067[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_265 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1068[0U] = 1U;
            __Vtemp1068[1U] = 0U;
            __Vtemp1068[2U] = 0U;
            __Vtemp1068[3U] = 0U;
            __Vtemp1068[4U] = 0U;
            __Vtemp1068[5U] = 0U;
            __Vtemp1068[6U] = 0U;
            __Vtemp1068[7U] = 0U;
            __Vtemp1068[8U] = 0U;
            __Vtemp1068[9U] = 0U;
            __Vtemp1068[0xaU] = 0U;
            __Vtemp1068[0xbU] = 0U;
            __Vtemp1068[0xcU] = 0U;
            __Vtemp1068[0xdU] = 0U;
            __Vtemp1068[0xeU] = 0U;
            __Vtemp1068[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1069, __Vtemp1068, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1069[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_266 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1070[0U] = 1U;
            __Vtemp1070[1U] = 0U;
            __Vtemp1070[2U] = 0U;
            __Vtemp1070[3U] = 0U;
            __Vtemp1070[4U] = 0U;
            __Vtemp1070[5U] = 0U;
            __Vtemp1070[6U] = 0U;
            __Vtemp1070[7U] = 0U;
            __Vtemp1070[8U] = 0U;
            __Vtemp1070[9U] = 0U;
            __Vtemp1070[0xaU] = 0U;
            __Vtemp1070[0xbU] = 0U;
            __Vtemp1070[0xcU] = 0U;
            __Vtemp1070[0xdU] = 0U;
            __Vtemp1070[0xeU] = 0U;
            __Vtemp1070[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1071, __Vtemp1070, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1071[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_267 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp1072[0U] = 1U;
            __Vtemp1072[1U] = 0U;
            __Vtemp1072[2U] = 0U;
            __Vtemp1072[3U] = 0U;
            __Vtemp1072[4U] = 0U;
            __Vtemp1072[5U] = 0U;
            __Vtemp1072[6U] = 0U;
            __Vtemp1072[7U] = 0U;
            __Vtemp1072[8U] = 0U;
            __Vtemp1072[9U] = 0U;
            __Vtemp1072[0xaU] = 0U;
            __Vtemp1072[0xbU] = 0U;
            __Vtemp1072[0xcU] = 0U;
            __Vtemp1072[0xdU] = 0U;
            __Vtemp1072[0xeU] = 0U;
            __Vtemp1072[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1073, __Vtemp1072, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1073[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_0 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1074[0U] = 1U;
            __Vtemp1074[1U] = 0U;
            __Vtemp1074[2U] = 0U;
            __Vtemp1074[3U] = 0U;
            __Vtemp1074[4U] = 0U;
            __Vtemp1074[5U] = 0U;
            __Vtemp1074[6U] = 0U;
            __Vtemp1074[7U] = 0U;
            __Vtemp1074[8U] = 0U;
            __Vtemp1074[9U] = 0U;
            __Vtemp1074[0xaU] = 0U;
            __Vtemp1074[0xbU] = 0U;
            __Vtemp1074[0xcU] = 0U;
            __Vtemp1074[0xdU] = 0U;
            __Vtemp1074[0xeU] = 0U;
            __Vtemp1074[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1075, __Vtemp1074, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1075[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
