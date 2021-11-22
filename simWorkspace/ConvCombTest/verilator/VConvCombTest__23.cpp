// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__87(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__87\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp2294[16];
    WData/*511:0*/ __Vtemp2295[16];
    WData/*511:0*/ __Vtemp2296[16];
    WData/*511:0*/ __Vtemp2297[16];
    WData/*511:0*/ __Vtemp2298[16];
    WData/*511:0*/ __Vtemp2299[16];
    WData/*511:0*/ __Vtemp2300[16];
    WData/*511:0*/ __Vtemp2301[16];
    WData/*511:0*/ __Vtemp2302[16];
    WData/*511:0*/ __Vtemp2303[16];
    WData/*511:0*/ __Vtemp2304[16];
    WData/*511:0*/ __Vtemp2305[16];
    WData/*511:0*/ __Vtemp2306[16];
    WData/*511:0*/ __Vtemp2307[16];
    WData/*511:0*/ __Vtemp2308[16];
    WData/*511:0*/ __Vtemp2309[16];
    WData/*511:0*/ __Vtemp2310[16];
    WData/*511:0*/ __Vtemp2311[16];
    WData/*511:0*/ __Vtemp2312[16];
    WData/*511:0*/ __Vtemp2313[16];
    WData/*511:0*/ __Vtemp2314[16];
    WData/*511:0*/ __Vtemp2315[16];
    WData/*511:0*/ __Vtemp2316[16];
    WData/*511:0*/ __Vtemp2317[16];
    WData/*511:0*/ __Vtemp2318[16];
    WData/*511:0*/ __Vtemp2319[16];
    WData/*511:0*/ __Vtemp2320[16];
    WData/*511:0*/ __Vtemp2321[16];
    WData/*511:0*/ __Vtemp2322[16];
    WData/*511:0*/ __Vtemp2323[16];
    WData/*511:0*/ __Vtemp2324[16];
    WData/*511:0*/ __Vtemp2325[16];
    WData/*511:0*/ __Vtemp2326[16];
    WData/*511:0*/ __Vtemp2327[16];
    WData/*511:0*/ __Vtemp2328[16];
    WData/*511:0*/ __Vtemp2329[16];
    WData/*511:0*/ __Vtemp2330[16];
    WData/*511:0*/ __Vtemp2331[16];
    WData/*511:0*/ __Vtemp2332[16];
    WData/*511:0*/ __Vtemp2333[16];
    WData/*511:0*/ __Vtemp2334[16];
    WData/*511:0*/ __Vtemp2335[16];
    WData/*511:0*/ __Vtemp2336[16];
    WData/*511:0*/ __Vtemp2337[16];
    WData/*511:0*/ __Vtemp2338[16];
    WData/*511:0*/ __Vtemp2339[16];
    WData/*511:0*/ __Vtemp2340[16];
    WData/*511:0*/ __Vtemp2341[16];
    WData/*511:0*/ __Vtemp2342[16];
    WData/*511:0*/ __Vtemp2343[16];
    WData/*511:0*/ __Vtemp2344[16];
    WData/*511:0*/ __Vtemp2345[16];
    WData/*511:0*/ __Vtemp2346[16];
    WData/*511:0*/ __Vtemp2347[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2294[0U] = 1U;
            __Vtemp2294[1U] = 0U;
            __Vtemp2294[2U] = 0U;
            __Vtemp2294[3U] = 0U;
            __Vtemp2294[4U] = 0U;
            __Vtemp2294[5U] = 0U;
            __Vtemp2294[6U] = 0U;
            __Vtemp2294[7U] = 0U;
            __Vtemp2294[8U] = 0U;
            __Vtemp2294[9U] = 0U;
            __Vtemp2294[0xaU] = 0U;
            __Vtemp2294[0xbU] = 0U;
            __Vtemp2294[0xcU] = 0U;
            __Vtemp2294[0xdU] = 0U;
            __Vtemp2294[0xeU] = 0U;
            __Vtemp2294[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2295, __Vtemp2294, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp2295[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_235 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2296[0U] = 1U;
            __Vtemp2296[1U] = 0U;
            __Vtemp2296[2U] = 0U;
            __Vtemp2296[3U] = 0U;
            __Vtemp2296[4U] = 0U;
            __Vtemp2296[5U] = 0U;
            __Vtemp2296[6U] = 0U;
            __Vtemp2296[7U] = 0U;
            __Vtemp2296[8U] = 0U;
            __Vtemp2296[9U] = 0U;
            __Vtemp2296[0xaU] = 0U;
            __Vtemp2296[0xbU] = 0U;
            __Vtemp2296[0xcU] = 0U;
            __Vtemp2296[0xdU] = 0U;
            __Vtemp2296[0xeU] = 0U;
            __Vtemp2296[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2297, __Vtemp2296, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp2297[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_236 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2298[0U] = 1U;
            __Vtemp2298[1U] = 0U;
            __Vtemp2298[2U] = 0U;
            __Vtemp2298[3U] = 0U;
            __Vtemp2298[4U] = 0U;
            __Vtemp2298[5U] = 0U;
            __Vtemp2298[6U] = 0U;
            __Vtemp2298[7U] = 0U;
            __Vtemp2298[8U] = 0U;
            __Vtemp2298[9U] = 0U;
            __Vtemp2298[0xaU] = 0U;
            __Vtemp2298[0xbU] = 0U;
            __Vtemp2298[0xcU] = 0U;
            __Vtemp2298[0xdU] = 0U;
            __Vtemp2298[0xeU] = 0U;
            __Vtemp2298[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2299, __Vtemp2298, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp2299[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_237 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2300[0U] = 1U;
            __Vtemp2300[1U] = 0U;
            __Vtemp2300[2U] = 0U;
            __Vtemp2300[3U] = 0U;
            __Vtemp2300[4U] = 0U;
            __Vtemp2300[5U] = 0U;
            __Vtemp2300[6U] = 0U;
            __Vtemp2300[7U] = 0U;
            __Vtemp2300[8U] = 0U;
            __Vtemp2300[9U] = 0U;
            __Vtemp2300[0xaU] = 0U;
            __Vtemp2300[0xbU] = 0U;
            __Vtemp2300[0xcU] = 0U;
            __Vtemp2300[0xdU] = 0U;
            __Vtemp2300[0xeU] = 0U;
            __Vtemp2300[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2301, __Vtemp2300, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp2301[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_238 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2302[0U] = 1U;
            __Vtemp2302[1U] = 0U;
            __Vtemp2302[2U] = 0U;
            __Vtemp2302[3U] = 0U;
            __Vtemp2302[4U] = 0U;
            __Vtemp2302[5U] = 0U;
            __Vtemp2302[6U] = 0U;
            __Vtemp2302[7U] = 0U;
            __Vtemp2302[8U] = 0U;
            __Vtemp2302[9U] = 0U;
            __Vtemp2302[0xaU] = 0U;
            __Vtemp2302[0xbU] = 0U;
            __Vtemp2302[0xcU] = 0U;
            __Vtemp2302[0xdU] = 0U;
            __Vtemp2302[0xeU] = 0U;
            __Vtemp2302[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2303, __Vtemp2302, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp2303[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_239 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2304[0U] = 1U;
            __Vtemp2304[1U] = 0U;
            __Vtemp2304[2U] = 0U;
            __Vtemp2304[3U] = 0U;
            __Vtemp2304[4U] = 0U;
            __Vtemp2304[5U] = 0U;
            __Vtemp2304[6U] = 0U;
            __Vtemp2304[7U] = 0U;
            __Vtemp2304[8U] = 0U;
            __Vtemp2304[9U] = 0U;
            __Vtemp2304[0xaU] = 0U;
            __Vtemp2304[0xbU] = 0U;
            __Vtemp2304[0xcU] = 0U;
            __Vtemp2304[0xdU] = 0U;
            __Vtemp2304[0xeU] = 0U;
            __Vtemp2304[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2305, __Vtemp2304, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp2305[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_240 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2306[0U] = 1U;
            __Vtemp2306[1U] = 0U;
            __Vtemp2306[2U] = 0U;
            __Vtemp2306[3U] = 0U;
            __Vtemp2306[4U] = 0U;
            __Vtemp2306[5U] = 0U;
            __Vtemp2306[6U] = 0U;
            __Vtemp2306[7U] = 0U;
            __Vtemp2306[8U] = 0U;
            __Vtemp2306[9U] = 0U;
            __Vtemp2306[0xaU] = 0U;
            __Vtemp2306[0xbU] = 0U;
            __Vtemp2306[0xcU] = 0U;
            __Vtemp2306[0xdU] = 0U;
            __Vtemp2306[0xeU] = 0U;
            __Vtemp2306[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2307, __Vtemp2306, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp2307[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_241 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2308[0U] = 1U;
            __Vtemp2308[1U] = 0U;
            __Vtemp2308[2U] = 0U;
            __Vtemp2308[3U] = 0U;
            __Vtemp2308[4U] = 0U;
            __Vtemp2308[5U] = 0U;
            __Vtemp2308[6U] = 0U;
            __Vtemp2308[7U] = 0U;
            __Vtemp2308[8U] = 0U;
            __Vtemp2308[9U] = 0U;
            __Vtemp2308[0xaU] = 0U;
            __Vtemp2308[0xbU] = 0U;
            __Vtemp2308[0xcU] = 0U;
            __Vtemp2308[0xdU] = 0U;
            __Vtemp2308[0xeU] = 0U;
            __Vtemp2308[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2309, __Vtemp2308, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp2309[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_242 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2310[0U] = 1U;
            __Vtemp2310[1U] = 0U;
            __Vtemp2310[2U] = 0U;
            __Vtemp2310[3U] = 0U;
            __Vtemp2310[4U] = 0U;
            __Vtemp2310[5U] = 0U;
            __Vtemp2310[6U] = 0U;
            __Vtemp2310[7U] = 0U;
            __Vtemp2310[8U] = 0U;
            __Vtemp2310[9U] = 0U;
            __Vtemp2310[0xaU] = 0U;
            __Vtemp2310[0xbU] = 0U;
            __Vtemp2310[0xcU] = 0U;
            __Vtemp2310[0xdU] = 0U;
            __Vtemp2310[0xeU] = 0U;
            __Vtemp2310[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2311, __Vtemp2310, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp2311[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_243 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2312[0U] = 1U;
            __Vtemp2312[1U] = 0U;
            __Vtemp2312[2U] = 0U;
            __Vtemp2312[3U] = 0U;
            __Vtemp2312[4U] = 0U;
            __Vtemp2312[5U] = 0U;
            __Vtemp2312[6U] = 0U;
            __Vtemp2312[7U] = 0U;
            __Vtemp2312[8U] = 0U;
            __Vtemp2312[9U] = 0U;
            __Vtemp2312[0xaU] = 0U;
            __Vtemp2312[0xbU] = 0U;
            __Vtemp2312[0xcU] = 0U;
            __Vtemp2312[0xdU] = 0U;
            __Vtemp2312[0xeU] = 0U;
            __Vtemp2312[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2313, __Vtemp2312, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp2313[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_244 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2314[0U] = 1U;
            __Vtemp2314[1U] = 0U;
            __Vtemp2314[2U] = 0U;
            __Vtemp2314[3U] = 0U;
            __Vtemp2314[4U] = 0U;
            __Vtemp2314[5U] = 0U;
            __Vtemp2314[6U] = 0U;
            __Vtemp2314[7U] = 0U;
            __Vtemp2314[8U] = 0U;
            __Vtemp2314[9U] = 0U;
            __Vtemp2314[0xaU] = 0U;
            __Vtemp2314[0xbU] = 0U;
            __Vtemp2314[0xcU] = 0U;
            __Vtemp2314[0xdU] = 0U;
            __Vtemp2314[0xeU] = 0U;
            __Vtemp2314[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2315, __Vtemp2314, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp2315[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_245 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2316[0U] = 1U;
            __Vtemp2316[1U] = 0U;
            __Vtemp2316[2U] = 0U;
            __Vtemp2316[3U] = 0U;
            __Vtemp2316[4U] = 0U;
            __Vtemp2316[5U] = 0U;
            __Vtemp2316[6U] = 0U;
            __Vtemp2316[7U] = 0U;
            __Vtemp2316[8U] = 0U;
            __Vtemp2316[9U] = 0U;
            __Vtemp2316[0xaU] = 0U;
            __Vtemp2316[0xbU] = 0U;
            __Vtemp2316[0xcU] = 0U;
            __Vtemp2316[0xdU] = 0U;
            __Vtemp2316[0xeU] = 0U;
            __Vtemp2316[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2317, __Vtemp2316, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp2317[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_246 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2318[0U] = 1U;
            __Vtemp2318[1U] = 0U;
            __Vtemp2318[2U] = 0U;
            __Vtemp2318[3U] = 0U;
            __Vtemp2318[4U] = 0U;
            __Vtemp2318[5U] = 0U;
            __Vtemp2318[6U] = 0U;
            __Vtemp2318[7U] = 0U;
            __Vtemp2318[8U] = 0U;
            __Vtemp2318[9U] = 0U;
            __Vtemp2318[0xaU] = 0U;
            __Vtemp2318[0xbU] = 0U;
            __Vtemp2318[0xcU] = 0U;
            __Vtemp2318[0xdU] = 0U;
            __Vtemp2318[0xeU] = 0U;
            __Vtemp2318[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2319, __Vtemp2318, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp2319[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_247 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2320[0U] = 1U;
            __Vtemp2320[1U] = 0U;
            __Vtemp2320[2U] = 0U;
            __Vtemp2320[3U] = 0U;
            __Vtemp2320[4U] = 0U;
            __Vtemp2320[5U] = 0U;
            __Vtemp2320[6U] = 0U;
            __Vtemp2320[7U] = 0U;
            __Vtemp2320[8U] = 0U;
            __Vtemp2320[9U] = 0U;
            __Vtemp2320[0xaU] = 0U;
            __Vtemp2320[0xbU] = 0U;
            __Vtemp2320[0xcU] = 0U;
            __Vtemp2320[0xdU] = 0U;
            __Vtemp2320[0xeU] = 0U;
            __Vtemp2320[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2321, __Vtemp2320, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp2321[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_248 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2322[0U] = 1U;
            __Vtemp2322[1U] = 0U;
            __Vtemp2322[2U] = 0U;
            __Vtemp2322[3U] = 0U;
            __Vtemp2322[4U] = 0U;
            __Vtemp2322[5U] = 0U;
            __Vtemp2322[6U] = 0U;
            __Vtemp2322[7U] = 0U;
            __Vtemp2322[8U] = 0U;
            __Vtemp2322[9U] = 0U;
            __Vtemp2322[0xaU] = 0U;
            __Vtemp2322[0xbU] = 0U;
            __Vtemp2322[0xcU] = 0U;
            __Vtemp2322[0xdU] = 0U;
            __Vtemp2322[0xeU] = 0U;
            __Vtemp2322[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2323, __Vtemp2322, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp2323[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_249 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2324[0U] = 1U;
            __Vtemp2324[1U] = 0U;
            __Vtemp2324[2U] = 0U;
            __Vtemp2324[3U] = 0U;
            __Vtemp2324[4U] = 0U;
            __Vtemp2324[5U] = 0U;
            __Vtemp2324[6U] = 0U;
            __Vtemp2324[7U] = 0U;
            __Vtemp2324[8U] = 0U;
            __Vtemp2324[9U] = 0U;
            __Vtemp2324[0xaU] = 0U;
            __Vtemp2324[0xbU] = 0U;
            __Vtemp2324[0xcU] = 0U;
            __Vtemp2324[0xdU] = 0U;
            __Vtemp2324[0xeU] = 0U;
            __Vtemp2324[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2325, __Vtemp2324, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp2325[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_250 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2326[0U] = 1U;
            __Vtemp2326[1U] = 0U;
            __Vtemp2326[2U] = 0U;
            __Vtemp2326[3U] = 0U;
            __Vtemp2326[4U] = 0U;
            __Vtemp2326[5U] = 0U;
            __Vtemp2326[6U] = 0U;
            __Vtemp2326[7U] = 0U;
            __Vtemp2326[8U] = 0U;
            __Vtemp2326[9U] = 0U;
            __Vtemp2326[0xaU] = 0U;
            __Vtemp2326[0xbU] = 0U;
            __Vtemp2326[0xcU] = 0U;
            __Vtemp2326[0xdU] = 0U;
            __Vtemp2326[0xeU] = 0U;
            __Vtemp2326[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2327, __Vtemp2326, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp2327[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_251 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2328[0U] = 1U;
            __Vtemp2328[1U] = 0U;
            __Vtemp2328[2U] = 0U;
            __Vtemp2328[3U] = 0U;
            __Vtemp2328[4U] = 0U;
            __Vtemp2328[5U] = 0U;
            __Vtemp2328[6U] = 0U;
            __Vtemp2328[7U] = 0U;
            __Vtemp2328[8U] = 0U;
            __Vtemp2328[9U] = 0U;
            __Vtemp2328[0xaU] = 0U;
            __Vtemp2328[0xbU] = 0U;
            __Vtemp2328[0xcU] = 0U;
            __Vtemp2328[0xdU] = 0U;
            __Vtemp2328[0xeU] = 0U;
            __Vtemp2328[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2329, __Vtemp2328, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp2329[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_252 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2330[0U] = 1U;
            __Vtemp2330[1U] = 0U;
            __Vtemp2330[2U] = 0U;
            __Vtemp2330[3U] = 0U;
            __Vtemp2330[4U] = 0U;
            __Vtemp2330[5U] = 0U;
            __Vtemp2330[6U] = 0U;
            __Vtemp2330[7U] = 0U;
            __Vtemp2330[8U] = 0U;
            __Vtemp2330[9U] = 0U;
            __Vtemp2330[0xaU] = 0U;
            __Vtemp2330[0xbU] = 0U;
            __Vtemp2330[0xcU] = 0U;
            __Vtemp2330[0xdU] = 0U;
            __Vtemp2330[0xeU] = 0U;
            __Vtemp2330[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2331, __Vtemp2330, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp2331[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_253 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2332[0U] = 1U;
            __Vtemp2332[1U] = 0U;
            __Vtemp2332[2U] = 0U;
            __Vtemp2332[3U] = 0U;
            __Vtemp2332[4U] = 0U;
            __Vtemp2332[5U] = 0U;
            __Vtemp2332[6U] = 0U;
            __Vtemp2332[7U] = 0U;
            __Vtemp2332[8U] = 0U;
            __Vtemp2332[9U] = 0U;
            __Vtemp2332[0xaU] = 0U;
            __Vtemp2332[0xbU] = 0U;
            __Vtemp2332[0xcU] = 0U;
            __Vtemp2332[0xdU] = 0U;
            __Vtemp2332[0xeU] = 0U;
            __Vtemp2332[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2333, __Vtemp2332, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp2333[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_254 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2334[0U] = 1U;
            __Vtemp2334[1U] = 0U;
            __Vtemp2334[2U] = 0U;
            __Vtemp2334[3U] = 0U;
            __Vtemp2334[4U] = 0U;
            __Vtemp2334[5U] = 0U;
            __Vtemp2334[6U] = 0U;
            __Vtemp2334[7U] = 0U;
            __Vtemp2334[8U] = 0U;
            __Vtemp2334[9U] = 0U;
            __Vtemp2334[0xaU] = 0U;
            __Vtemp2334[0xbU] = 0U;
            __Vtemp2334[0xcU] = 0U;
            __Vtemp2334[0xdU] = 0U;
            __Vtemp2334[0xeU] = 0U;
            __Vtemp2334[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2335, __Vtemp2334, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp2335[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_255 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2336[0U] = 1U;
            __Vtemp2336[1U] = 0U;
            __Vtemp2336[2U] = 0U;
            __Vtemp2336[3U] = 0U;
            __Vtemp2336[4U] = 0U;
            __Vtemp2336[5U] = 0U;
            __Vtemp2336[6U] = 0U;
            __Vtemp2336[7U] = 0U;
            __Vtemp2336[8U] = 0U;
            __Vtemp2336[9U] = 0U;
            __Vtemp2336[0xaU] = 0U;
            __Vtemp2336[0xbU] = 0U;
            __Vtemp2336[0xcU] = 0U;
            __Vtemp2336[0xdU] = 0U;
            __Vtemp2336[0xeU] = 0U;
            __Vtemp2336[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2337, __Vtemp2336, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp2337[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_256 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2338[0U] = 1U;
            __Vtemp2338[1U] = 0U;
            __Vtemp2338[2U] = 0U;
            __Vtemp2338[3U] = 0U;
            __Vtemp2338[4U] = 0U;
            __Vtemp2338[5U] = 0U;
            __Vtemp2338[6U] = 0U;
            __Vtemp2338[7U] = 0U;
            __Vtemp2338[8U] = 0U;
            __Vtemp2338[9U] = 0U;
            __Vtemp2338[0xaU] = 0U;
            __Vtemp2338[0xbU] = 0U;
            __Vtemp2338[0xcU] = 0U;
            __Vtemp2338[0xdU] = 0U;
            __Vtemp2338[0xeU] = 0U;
            __Vtemp2338[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2339, __Vtemp2338, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp2339[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_257 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2340[0U] = 1U;
            __Vtemp2340[1U] = 0U;
            __Vtemp2340[2U] = 0U;
            __Vtemp2340[3U] = 0U;
            __Vtemp2340[4U] = 0U;
            __Vtemp2340[5U] = 0U;
            __Vtemp2340[6U] = 0U;
            __Vtemp2340[7U] = 0U;
            __Vtemp2340[8U] = 0U;
            __Vtemp2340[9U] = 0U;
            __Vtemp2340[0xaU] = 0U;
            __Vtemp2340[0xbU] = 0U;
            __Vtemp2340[0xcU] = 0U;
            __Vtemp2340[0xdU] = 0U;
            __Vtemp2340[0xeU] = 0U;
            __Vtemp2340[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2341, __Vtemp2340, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp2341[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_258 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2342[0U] = 1U;
            __Vtemp2342[1U] = 0U;
            __Vtemp2342[2U] = 0U;
            __Vtemp2342[3U] = 0U;
            __Vtemp2342[4U] = 0U;
            __Vtemp2342[5U] = 0U;
            __Vtemp2342[6U] = 0U;
            __Vtemp2342[7U] = 0U;
            __Vtemp2342[8U] = 0U;
            __Vtemp2342[9U] = 0U;
            __Vtemp2342[0xaU] = 0U;
            __Vtemp2342[0xbU] = 0U;
            __Vtemp2342[0xcU] = 0U;
            __Vtemp2342[0xdU] = 0U;
            __Vtemp2342[0xeU] = 0U;
            __Vtemp2342[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2343, __Vtemp2342, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp2343[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_259 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2344[0U] = 1U;
            __Vtemp2344[1U] = 0U;
            __Vtemp2344[2U] = 0U;
            __Vtemp2344[3U] = 0U;
            __Vtemp2344[4U] = 0U;
            __Vtemp2344[5U] = 0U;
            __Vtemp2344[6U] = 0U;
            __Vtemp2344[7U] = 0U;
            __Vtemp2344[8U] = 0U;
            __Vtemp2344[9U] = 0U;
            __Vtemp2344[0xaU] = 0U;
            __Vtemp2344[0xbU] = 0U;
            __Vtemp2344[0xcU] = 0U;
            __Vtemp2344[0xdU] = 0U;
            __Vtemp2344[0xeU] = 0U;
            __Vtemp2344[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2345, __Vtemp2344, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp2345[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_260 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2346[0U] = 1U;
            __Vtemp2346[1U] = 0U;
            __Vtemp2346[2U] = 0U;
            __Vtemp2346[3U] = 0U;
            __Vtemp2346[4U] = 0U;
            __Vtemp2346[5U] = 0U;
            __Vtemp2346[6U] = 0U;
            __Vtemp2346[7U] = 0U;
            __Vtemp2346[8U] = 0U;
            __Vtemp2346[9U] = 0U;
            __Vtemp2346[0xaU] = 0U;
            __Vtemp2346[0xbU] = 0U;
            __Vtemp2346[0xcU] = 0U;
            __Vtemp2346[0xdU] = 0U;
            __Vtemp2346[0xeU] = 0U;
            __Vtemp2346[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2347, __Vtemp2346, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp2347[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_261 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__88(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__88\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp2348[16];
    WData/*511:0*/ __Vtemp2349[16];
    WData/*511:0*/ __Vtemp2350[16];
    WData/*511:0*/ __Vtemp2351[16];
    WData/*511:0*/ __Vtemp2352[16];
    WData/*511:0*/ __Vtemp2353[16];
    WData/*511:0*/ __Vtemp2354[16];
    WData/*511:0*/ __Vtemp2355[16];
    WData/*511:0*/ __Vtemp2356[16];
    WData/*511:0*/ __Vtemp2357[16];
    WData/*511:0*/ __Vtemp2358[16];
    WData/*511:0*/ __Vtemp2359[16];
    WData/*511:0*/ __Vtemp2360[16];
    WData/*511:0*/ __Vtemp2361[16];
    WData/*511:0*/ __Vtemp2362[16];
    WData/*511:0*/ __Vtemp2363[16];
    WData/*511:0*/ __Vtemp2364[16];
    WData/*511:0*/ __Vtemp2365[16];
    WData/*511:0*/ __Vtemp2366[16];
    WData/*511:0*/ __Vtemp2367[16];
    WData/*511:0*/ __Vtemp2368[16];
    WData/*511:0*/ __Vtemp2369[16];
    WData/*511:0*/ __Vtemp2370[16];
    WData/*511:0*/ __Vtemp2371[16];
    WData/*511:0*/ __Vtemp2372[16];
    WData/*511:0*/ __Vtemp2373[16];
    WData/*511:0*/ __Vtemp2374[16];
    WData/*511:0*/ __Vtemp2375[16];
    WData/*511:0*/ __Vtemp2376[16];
    WData/*511:0*/ __Vtemp2377[16];
    WData/*511:0*/ __Vtemp2378[16];
    WData/*511:0*/ __Vtemp2379[16];
    WData/*511:0*/ __Vtemp2380[16];
    WData/*511:0*/ __Vtemp2381[16];
    WData/*511:0*/ __Vtemp2382[16];
    WData/*511:0*/ __Vtemp2383[16];
    WData/*511:0*/ __Vtemp2384[16];
    WData/*511:0*/ __Vtemp2385[16];
    WData/*511:0*/ __Vtemp2386[16];
    WData/*511:0*/ __Vtemp2387[16];
    WData/*511:0*/ __Vtemp2388[16];
    WData/*511:0*/ __Vtemp2389[16];
    WData/*511:0*/ __Vtemp2390[16];
    WData/*511:0*/ __Vtemp2391[16];
    WData/*511:0*/ __Vtemp2392[16];
    WData/*511:0*/ __Vtemp2393[16];
    WData/*511:0*/ __Vtemp2394[16];
    WData/*511:0*/ __Vtemp2395[16];
    WData/*511:0*/ __Vtemp2396[16];
    WData/*511:0*/ __Vtemp2397[16];
    WData/*511:0*/ __Vtemp2398[16];
    WData/*511:0*/ __Vtemp2399[16];
    WData/*511:0*/ __Vtemp2400[16];
    WData/*511:0*/ __Vtemp2401[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2348[0U] = 1U;
            __Vtemp2348[1U] = 0U;
            __Vtemp2348[2U] = 0U;
            __Vtemp2348[3U] = 0U;
            __Vtemp2348[4U] = 0U;
            __Vtemp2348[5U] = 0U;
            __Vtemp2348[6U] = 0U;
            __Vtemp2348[7U] = 0U;
            __Vtemp2348[8U] = 0U;
            __Vtemp2348[9U] = 0U;
            __Vtemp2348[0xaU] = 0U;
            __Vtemp2348[0xbU] = 0U;
            __Vtemp2348[0xcU] = 0U;
            __Vtemp2348[0xdU] = 0U;
            __Vtemp2348[0xeU] = 0U;
            __Vtemp2348[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2349, __Vtemp2348, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp2349[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_262 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2350[0U] = 1U;
            __Vtemp2350[1U] = 0U;
            __Vtemp2350[2U] = 0U;
            __Vtemp2350[3U] = 0U;
            __Vtemp2350[4U] = 0U;
            __Vtemp2350[5U] = 0U;
            __Vtemp2350[6U] = 0U;
            __Vtemp2350[7U] = 0U;
            __Vtemp2350[8U] = 0U;
            __Vtemp2350[9U] = 0U;
            __Vtemp2350[0xaU] = 0U;
            __Vtemp2350[0xbU] = 0U;
            __Vtemp2350[0xcU] = 0U;
            __Vtemp2350[0xdU] = 0U;
            __Vtemp2350[0xeU] = 0U;
            __Vtemp2350[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2351, __Vtemp2350, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp2351[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_263 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2352[0U] = 1U;
            __Vtemp2352[1U] = 0U;
            __Vtemp2352[2U] = 0U;
            __Vtemp2352[3U] = 0U;
            __Vtemp2352[4U] = 0U;
            __Vtemp2352[5U] = 0U;
            __Vtemp2352[6U] = 0U;
            __Vtemp2352[7U] = 0U;
            __Vtemp2352[8U] = 0U;
            __Vtemp2352[9U] = 0U;
            __Vtemp2352[0xaU] = 0U;
            __Vtemp2352[0xbU] = 0U;
            __Vtemp2352[0xcU] = 0U;
            __Vtemp2352[0xdU] = 0U;
            __Vtemp2352[0xeU] = 0U;
            __Vtemp2352[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2353, __Vtemp2352, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp2353[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_264 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2354[0U] = 1U;
            __Vtemp2354[1U] = 0U;
            __Vtemp2354[2U] = 0U;
            __Vtemp2354[3U] = 0U;
            __Vtemp2354[4U] = 0U;
            __Vtemp2354[5U] = 0U;
            __Vtemp2354[6U] = 0U;
            __Vtemp2354[7U] = 0U;
            __Vtemp2354[8U] = 0U;
            __Vtemp2354[9U] = 0U;
            __Vtemp2354[0xaU] = 0U;
            __Vtemp2354[0xbU] = 0U;
            __Vtemp2354[0xcU] = 0U;
            __Vtemp2354[0xdU] = 0U;
            __Vtemp2354[0xeU] = 0U;
            __Vtemp2354[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2355, __Vtemp2354, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp2355[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_265 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2356[0U] = 1U;
            __Vtemp2356[1U] = 0U;
            __Vtemp2356[2U] = 0U;
            __Vtemp2356[3U] = 0U;
            __Vtemp2356[4U] = 0U;
            __Vtemp2356[5U] = 0U;
            __Vtemp2356[6U] = 0U;
            __Vtemp2356[7U] = 0U;
            __Vtemp2356[8U] = 0U;
            __Vtemp2356[9U] = 0U;
            __Vtemp2356[0xaU] = 0U;
            __Vtemp2356[0xbU] = 0U;
            __Vtemp2356[0xcU] = 0U;
            __Vtemp2356[0xdU] = 0U;
            __Vtemp2356[0xeU] = 0U;
            __Vtemp2356[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2357, __Vtemp2356, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp2357[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_266 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2358[0U] = 1U;
            __Vtemp2358[1U] = 0U;
            __Vtemp2358[2U] = 0U;
            __Vtemp2358[3U] = 0U;
            __Vtemp2358[4U] = 0U;
            __Vtemp2358[5U] = 0U;
            __Vtemp2358[6U] = 0U;
            __Vtemp2358[7U] = 0U;
            __Vtemp2358[8U] = 0U;
            __Vtemp2358[9U] = 0U;
            __Vtemp2358[0xaU] = 0U;
            __Vtemp2358[0xbU] = 0U;
            __Vtemp2358[0xcU] = 0U;
            __Vtemp2358[0xdU] = 0U;
            __Vtemp2358[0xeU] = 0U;
            __Vtemp2358[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2359, __Vtemp2358, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp2359[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_267 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2360[0U] = 1U;
            __Vtemp2360[1U] = 0U;
            __Vtemp2360[2U] = 0U;
            __Vtemp2360[3U] = 0U;
            __Vtemp2360[4U] = 0U;
            __Vtemp2360[5U] = 0U;
            __Vtemp2360[6U] = 0U;
            __Vtemp2360[7U] = 0U;
            __Vtemp2360[8U] = 0U;
            __Vtemp2360[9U] = 0U;
            __Vtemp2360[0xaU] = 0U;
            __Vtemp2360[0xbU] = 0U;
            __Vtemp2360[0xcU] = 0U;
            __Vtemp2360[0xdU] = 0U;
            __Vtemp2360[0xeU] = 0U;
            __Vtemp2360[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2361, __Vtemp2360, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp2361[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_268 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2362[0U] = 1U;
            __Vtemp2362[1U] = 0U;
            __Vtemp2362[2U] = 0U;
            __Vtemp2362[3U] = 0U;
            __Vtemp2362[4U] = 0U;
            __Vtemp2362[5U] = 0U;
            __Vtemp2362[6U] = 0U;
            __Vtemp2362[7U] = 0U;
            __Vtemp2362[8U] = 0U;
            __Vtemp2362[9U] = 0U;
            __Vtemp2362[0xaU] = 0U;
            __Vtemp2362[0xbU] = 0U;
            __Vtemp2362[0xcU] = 0U;
            __Vtemp2362[0xdU] = 0U;
            __Vtemp2362[0xeU] = 0U;
            __Vtemp2362[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2363, __Vtemp2362, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp2363[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_269 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2364[0U] = 1U;
            __Vtemp2364[1U] = 0U;
            __Vtemp2364[2U] = 0U;
            __Vtemp2364[3U] = 0U;
            __Vtemp2364[4U] = 0U;
            __Vtemp2364[5U] = 0U;
            __Vtemp2364[6U] = 0U;
            __Vtemp2364[7U] = 0U;
            __Vtemp2364[8U] = 0U;
            __Vtemp2364[9U] = 0U;
            __Vtemp2364[0xaU] = 0U;
            __Vtemp2364[0xbU] = 0U;
            __Vtemp2364[0xcU] = 0U;
            __Vtemp2364[0xdU] = 0U;
            __Vtemp2364[0xeU] = 0U;
            __Vtemp2364[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2365, __Vtemp2364, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp2365[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_270 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2366[0U] = 1U;
            __Vtemp2366[1U] = 0U;
            __Vtemp2366[2U] = 0U;
            __Vtemp2366[3U] = 0U;
            __Vtemp2366[4U] = 0U;
            __Vtemp2366[5U] = 0U;
            __Vtemp2366[6U] = 0U;
            __Vtemp2366[7U] = 0U;
            __Vtemp2366[8U] = 0U;
            __Vtemp2366[9U] = 0U;
            __Vtemp2366[0xaU] = 0U;
            __Vtemp2366[0xbU] = 0U;
            __Vtemp2366[0xcU] = 0U;
            __Vtemp2366[0xdU] = 0U;
            __Vtemp2366[0xeU] = 0U;
            __Vtemp2366[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2367, __Vtemp2366, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp2367[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_271 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2368[0U] = 1U;
            __Vtemp2368[1U] = 0U;
            __Vtemp2368[2U] = 0U;
            __Vtemp2368[3U] = 0U;
            __Vtemp2368[4U] = 0U;
            __Vtemp2368[5U] = 0U;
            __Vtemp2368[6U] = 0U;
            __Vtemp2368[7U] = 0U;
            __Vtemp2368[8U] = 0U;
            __Vtemp2368[9U] = 0U;
            __Vtemp2368[0xaU] = 0U;
            __Vtemp2368[0xbU] = 0U;
            __Vtemp2368[0xcU] = 0U;
            __Vtemp2368[0xdU] = 0U;
            __Vtemp2368[0xeU] = 0U;
            __Vtemp2368[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2369, __Vtemp2368, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp2369[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_272 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2370[0U] = 1U;
            __Vtemp2370[1U] = 0U;
            __Vtemp2370[2U] = 0U;
            __Vtemp2370[3U] = 0U;
            __Vtemp2370[4U] = 0U;
            __Vtemp2370[5U] = 0U;
            __Vtemp2370[6U] = 0U;
            __Vtemp2370[7U] = 0U;
            __Vtemp2370[8U] = 0U;
            __Vtemp2370[9U] = 0U;
            __Vtemp2370[0xaU] = 0U;
            __Vtemp2370[0xbU] = 0U;
            __Vtemp2370[0xcU] = 0U;
            __Vtemp2370[0xdU] = 0U;
            __Vtemp2370[0xeU] = 0U;
            __Vtemp2370[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2371, __Vtemp2370, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp2371[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_273 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2372[0U] = 1U;
            __Vtemp2372[1U] = 0U;
            __Vtemp2372[2U] = 0U;
            __Vtemp2372[3U] = 0U;
            __Vtemp2372[4U] = 0U;
            __Vtemp2372[5U] = 0U;
            __Vtemp2372[6U] = 0U;
            __Vtemp2372[7U] = 0U;
            __Vtemp2372[8U] = 0U;
            __Vtemp2372[9U] = 0U;
            __Vtemp2372[0xaU] = 0U;
            __Vtemp2372[0xbU] = 0U;
            __Vtemp2372[0xcU] = 0U;
            __Vtemp2372[0xdU] = 0U;
            __Vtemp2372[0xeU] = 0U;
            __Vtemp2372[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2373, __Vtemp2372, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp2373[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_274 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2374[0U] = 1U;
            __Vtemp2374[1U] = 0U;
            __Vtemp2374[2U] = 0U;
            __Vtemp2374[3U] = 0U;
            __Vtemp2374[4U] = 0U;
            __Vtemp2374[5U] = 0U;
            __Vtemp2374[6U] = 0U;
            __Vtemp2374[7U] = 0U;
            __Vtemp2374[8U] = 0U;
            __Vtemp2374[9U] = 0U;
            __Vtemp2374[0xaU] = 0U;
            __Vtemp2374[0xbU] = 0U;
            __Vtemp2374[0xcU] = 0U;
            __Vtemp2374[0xdU] = 0U;
            __Vtemp2374[0xeU] = 0U;
            __Vtemp2374[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2375, __Vtemp2374, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp2375[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_275 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2376[0U] = 1U;
            __Vtemp2376[1U] = 0U;
            __Vtemp2376[2U] = 0U;
            __Vtemp2376[3U] = 0U;
            __Vtemp2376[4U] = 0U;
            __Vtemp2376[5U] = 0U;
            __Vtemp2376[6U] = 0U;
            __Vtemp2376[7U] = 0U;
            __Vtemp2376[8U] = 0U;
            __Vtemp2376[9U] = 0U;
            __Vtemp2376[0xaU] = 0U;
            __Vtemp2376[0xbU] = 0U;
            __Vtemp2376[0xcU] = 0U;
            __Vtemp2376[0xdU] = 0U;
            __Vtemp2376[0xeU] = 0U;
            __Vtemp2376[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2377, __Vtemp2376, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp2377[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_276 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2378[0U] = 1U;
            __Vtemp2378[1U] = 0U;
            __Vtemp2378[2U] = 0U;
            __Vtemp2378[3U] = 0U;
            __Vtemp2378[4U] = 0U;
            __Vtemp2378[5U] = 0U;
            __Vtemp2378[6U] = 0U;
            __Vtemp2378[7U] = 0U;
            __Vtemp2378[8U] = 0U;
            __Vtemp2378[9U] = 0U;
            __Vtemp2378[0xaU] = 0U;
            __Vtemp2378[0xbU] = 0U;
            __Vtemp2378[0xcU] = 0U;
            __Vtemp2378[0xdU] = 0U;
            __Vtemp2378[0xeU] = 0U;
            __Vtemp2378[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2379, __Vtemp2378, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp2379[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_277 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2380[0U] = 1U;
            __Vtemp2380[1U] = 0U;
            __Vtemp2380[2U] = 0U;
            __Vtemp2380[3U] = 0U;
            __Vtemp2380[4U] = 0U;
            __Vtemp2380[5U] = 0U;
            __Vtemp2380[6U] = 0U;
            __Vtemp2380[7U] = 0U;
            __Vtemp2380[8U] = 0U;
            __Vtemp2380[9U] = 0U;
            __Vtemp2380[0xaU] = 0U;
            __Vtemp2380[0xbU] = 0U;
            __Vtemp2380[0xcU] = 0U;
            __Vtemp2380[0xdU] = 0U;
            __Vtemp2380[0xeU] = 0U;
            __Vtemp2380[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2381, __Vtemp2380, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp2381[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_278 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2382[0U] = 1U;
            __Vtemp2382[1U] = 0U;
            __Vtemp2382[2U] = 0U;
            __Vtemp2382[3U] = 0U;
            __Vtemp2382[4U] = 0U;
            __Vtemp2382[5U] = 0U;
            __Vtemp2382[6U] = 0U;
            __Vtemp2382[7U] = 0U;
            __Vtemp2382[8U] = 0U;
            __Vtemp2382[9U] = 0U;
            __Vtemp2382[0xaU] = 0U;
            __Vtemp2382[0xbU] = 0U;
            __Vtemp2382[0xcU] = 0U;
            __Vtemp2382[0xdU] = 0U;
            __Vtemp2382[0xeU] = 0U;
            __Vtemp2382[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2383, __Vtemp2382, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp2383[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_279 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2384[0U] = 1U;
            __Vtemp2384[1U] = 0U;
            __Vtemp2384[2U] = 0U;
            __Vtemp2384[3U] = 0U;
            __Vtemp2384[4U] = 0U;
            __Vtemp2384[5U] = 0U;
            __Vtemp2384[6U] = 0U;
            __Vtemp2384[7U] = 0U;
            __Vtemp2384[8U] = 0U;
            __Vtemp2384[9U] = 0U;
            __Vtemp2384[0xaU] = 0U;
            __Vtemp2384[0xbU] = 0U;
            __Vtemp2384[0xcU] = 0U;
            __Vtemp2384[0xdU] = 0U;
            __Vtemp2384[0xeU] = 0U;
            __Vtemp2384[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2385, __Vtemp2384, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp2385[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_280 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2386[0U] = 1U;
            __Vtemp2386[1U] = 0U;
            __Vtemp2386[2U] = 0U;
            __Vtemp2386[3U] = 0U;
            __Vtemp2386[4U] = 0U;
            __Vtemp2386[5U] = 0U;
            __Vtemp2386[6U] = 0U;
            __Vtemp2386[7U] = 0U;
            __Vtemp2386[8U] = 0U;
            __Vtemp2386[9U] = 0U;
            __Vtemp2386[0xaU] = 0U;
            __Vtemp2386[0xbU] = 0U;
            __Vtemp2386[0xcU] = 0U;
            __Vtemp2386[0xdU] = 0U;
            __Vtemp2386[0xeU] = 0U;
            __Vtemp2386[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2387, __Vtemp2386, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp2387[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_281 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2388[0U] = 1U;
            __Vtemp2388[1U] = 0U;
            __Vtemp2388[2U] = 0U;
            __Vtemp2388[3U] = 0U;
            __Vtemp2388[4U] = 0U;
            __Vtemp2388[5U] = 0U;
            __Vtemp2388[6U] = 0U;
            __Vtemp2388[7U] = 0U;
            __Vtemp2388[8U] = 0U;
            __Vtemp2388[9U] = 0U;
            __Vtemp2388[0xaU] = 0U;
            __Vtemp2388[0xbU] = 0U;
            __Vtemp2388[0xcU] = 0U;
            __Vtemp2388[0xdU] = 0U;
            __Vtemp2388[0xeU] = 0U;
            __Vtemp2388[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2389, __Vtemp2388, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp2389[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_282 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2390[0U] = 1U;
            __Vtemp2390[1U] = 0U;
            __Vtemp2390[2U] = 0U;
            __Vtemp2390[3U] = 0U;
            __Vtemp2390[4U] = 0U;
            __Vtemp2390[5U] = 0U;
            __Vtemp2390[6U] = 0U;
            __Vtemp2390[7U] = 0U;
            __Vtemp2390[8U] = 0U;
            __Vtemp2390[9U] = 0U;
            __Vtemp2390[0xaU] = 0U;
            __Vtemp2390[0xbU] = 0U;
            __Vtemp2390[0xcU] = 0U;
            __Vtemp2390[0xdU] = 0U;
            __Vtemp2390[0xeU] = 0U;
            __Vtemp2390[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2391, __Vtemp2390, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp2391[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_283 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2392[0U] = 1U;
            __Vtemp2392[1U] = 0U;
            __Vtemp2392[2U] = 0U;
            __Vtemp2392[3U] = 0U;
            __Vtemp2392[4U] = 0U;
            __Vtemp2392[5U] = 0U;
            __Vtemp2392[6U] = 0U;
            __Vtemp2392[7U] = 0U;
            __Vtemp2392[8U] = 0U;
            __Vtemp2392[9U] = 0U;
            __Vtemp2392[0xaU] = 0U;
            __Vtemp2392[0xbU] = 0U;
            __Vtemp2392[0xcU] = 0U;
            __Vtemp2392[0xdU] = 0U;
            __Vtemp2392[0xeU] = 0U;
            __Vtemp2392[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2393, __Vtemp2392, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp2393[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_284 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2394[0U] = 1U;
            __Vtemp2394[1U] = 0U;
            __Vtemp2394[2U] = 0U;
            __Vtemp2394[3U] = 0U;
            __Vtemp2394[4U] = 0U;
            __Vtemp2394[5U] = 0U;
            __Vtemp2394[6U] = 0U;
            __Vtemp2394[7U] = 0U;
            __Vtemp2394[8U] = 0U;
            __Vtemp2394[9U] = 0U;
            __Vtemp2394[0xaU] = 0U;
            __Vtemp2394[0xbU] = 0U;
            __Vtemp2394[0xcU] = 0U;
            __Vtemp2394[0xdU] = 0U;
            __Vtemp2394[0xeU] = 0U;
            __Vtemp2394[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2395, __Vtemp2394, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp2395[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_285 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2396[0U] = 1U;
            __Vtemp2396[1U] = 0U;
            __Vtemp2396[2U] = 0U;
            __Vtemp2396[3U] = 0U;
            __Vtemp2396[4U] = 0U;
            __Vtemp2396[5U] = 0U;
            __Vtemp2396[6U] = 0U;
            __Vtemp2396[7U] = 0U;
            __Vtemp2396[8U] = 0U;
            __Vtemp2396[9U] = 0U;
            __Vtemp2396[0xaU] = 0U;
            __Vtemp2396[0xbU] = 0U;
            __Vtemp2396[0xcU] = 0U;
            __Vtemp2396[0xdU] = 0U;
            __Vtemp2396[0xeU] = 0U;
            __Vtemp2396[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2397, __Vtemp2396, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp2397[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_286 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2398[0U] = 1U;
            __Vtemp2398[1U] = 0U;
            __Vtemp2398[2U] = 0U;
            __Vtemp2398[3U] = 0U;
            __Vtemp2398[4U] = 0U;
            __Vtemp2398[5U] = 0U;
            __Vtemp2398[6U] = 0U;
            __Vtemp2398[7U] = 0U;
            __Vtemp2398[8U] = 0U;
            __Vtemp2398[9U] = 0U;
            __Vtemp2398[0xaU] = 0U;
            __Vtemp2398[0xbU] = 0U;
            __Vtemp2398[0xcU] = 0U;
            __Vtemp2398[0xdU] = 0U;
            __Vtemp2398[0xeU] = 0U;
            __Vtemp2398[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2399, __Vtemp2398, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp2399[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_287 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2400[0U] = 1U;
            __Vtemp2400[1U] = 0U;
            __Vtemp2400[2U] = 0U;
            __Vtemp2400[3U] = 0U;
            __Vtemp2400[4U] = 0U;
            __Vtemp2400[5U] = 0U;
            __Vtemp2400[6U] = 0U;
            __Vtemp2400[7U] = 0U;
            __Vtemp2400[8U] = 0U;
            __Vtemp2400[9U] = 0U;
            __Vtemp2400[0xaU] = 0U;
            __Vtemp2400[0xbU] = 0U;
            __Vtemp2400[0xcU] = 0U;
            __Vtemp2400[0xdU] = 0U;
            __Vtemp2400[0xeU] = 0U;
            __Vtemp2400[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2401, __Vtemp2400, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp2401[9U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_288 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
