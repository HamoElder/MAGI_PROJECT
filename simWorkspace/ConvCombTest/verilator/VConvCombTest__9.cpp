// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__60(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__60\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp740[0U] = 1U;
            __Vtemp740[1U] = 0U;
            __Vtemp740[2U] = 0U;
            __Vtemp740[3U] = 0U;
            __Vtemp740[4U] = 0U;
            __Vtemp740[5U] = 0U;
            __Vtemp740[6U] = 0U;
            __Vtemp740[7U] = 0U;
            __Vtemp740[8U] = 0U;
            __Vtemp740[9U] = 0U;
            __Vtemp740[0xaU] = 0U;
            __Vtemp740[0xbU] = 0U;
            __Vtemp740[0xcU] = 0U;
            __Vtemp740[0xdU] = 0U;
            __Vtemp740[0xeU] = 0U;
            __Vtemp740[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp741, __Vtemp740, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp741[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp742[0U] = 1U;
            __Vtemp742[1U] = 0U;
            __Vtemp742[2U] = 0U;
            __Vtemp742[3U] = 0U;
            __Vtemp742[4U] = 0U;
            __Vtemp742[5U] = 0U;
            __Vtemp742[6U] = 0U;
            __Vtemp742[7U] = 0U;
            __Vtemp742[8U] = 0U;
            __Vtemp742[9U] = 0U;
            __Vtemp742[0xaU] = 0U;
            __Vtemp742[0xbU] = 0U;
            __Vtemp742[0xcU] = 0U;
            __Vtemp742[0xdU] = 0U;
            __Vtemp742[0xeU] = 0U;
            __Vtemp742[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp743, __Vtemp742, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp743[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_105 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp744[0U] = 1U;
            __Vtemp744[1U] = 0U;
            __Vtemp744[2U] = 0U;
            __Vtemp744[3U] = 0U;
            __Vtemp744[4U] = 0U;
            __Vtemp744[5U] = 0U;
            __Vtemp744[6U] = 0U;
            __Vtemp744[7U] = 0U;
            __Vtemp744[8U] = 0U;
            __Vtemp744[9U] = 0U;
            __Vtemp744[0xaU] = 0U;
            __Vtemp744[0xbU] = 0U;
            __Vtemp744[0xcU] = 0U;
            __Vtemp744[0xdU] = 0U;
            __Vtemp744[0xeU] = 0U;
            __Vtemp744[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp745, __Vtemp744, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp745[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp746[0U] = 1U;
            __Vtemp746[1U] = 0U;
            __Vtemp746[2U] = 0U;
            __Vtemp746[3U] = 0U;
            __Vtemp746[4U] = 0U;
            __Vtemp746[5U] = 0U;
            __Vtemp746[6U] = 0U;
            __Vtemp746[7U] = 0U;
            __Vtemp746[8U] = 0U;
            __Vtemp746[9U] = 0U;
            __Vtemp746[0xaU] = 0U;
            __Vtemp746[0xbU] = 0U;
            __Vtemp746[0xcU] = 0U;
            __Vtemp746[0xdU] = 0U;
            __Vtemp746[0xeU] = 0U;
            __Vtemp746[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp747, __Vtemp746, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp747[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_185 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp748[0U] = 1U;
            __Vtemp748[1U] = 0U;
            __Vtemp748[2U] = 0U;
            __Vtemp748[3U] = 0U;
            __Vtemp748[4U] = 0U;
            __Vtemp748[5U] = 0U;
            __Vtemp748[6U] = 0U;
            __Vtemp748[7U] = 0U;
            __Vtemp748[8U] = 0U;
            __Vtemp748[9U] = 0U;
            __Vtemp748[0xaU] = 0U;
            __Vtemp748[0xbU] = 0U;
            __Vtemp748[0xcU] = 0U;
            __Vtemp748[0xdU] = 0U;
            __Vtemp748[0xeU] = 0U;
            __Vtemp748[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp749, __Vtemp748, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp749[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp750[0U] = 1U;
            __Vtemp750[1U] = 0U;
            __Vtemp750[2U] = 0U;
            __Vtemp750[3U] = 0U;
            __Vtemp750[4U] = 0U;
            __Vtemp750[5U] = 0U;
            __Vtemp750[6U] = 0U;
            __Vtemp750[7U] = 0U;
            __Vtemp750[8U] = 0U;
            __Vtemp750[9U] = 0U;
            __Vtemp750[0xaU] = 0U;
            __Vtemp750[0xbU] = 0U;
            __Vtemp750[0xcU] = 0U;
            __Vtemp750[0xdU] = 0U;
            __Vtemp750[0xeU] = 0U;
            __Vtemp750[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp751, __Vtemp750, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp751[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_111 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp752[0U] = 1U;
            __Vtemp752[1U] = 0U;
            __Vtemp752[2U] = 0U;
            __Vtemp752[3U] = 0U;
            __Vtemp752[4U] = 0U;
            __Vtemp752[5U] = 0U;
            __Vtemp752[6U] = 0U;
            __Vtemp752[7U] = 0U;
            __Vtemp752[8U] = 0U;
            __Vtemp752[9U] = 0U;
            __Vtemp752[0xaU] = 0U;
            __Vtemp752[0xbU] = 0U;
            __Vtemp752[0xcU] = 0U;
            __Vtemp752[0xdU] = 0U;
            __Vtemp752[0xeU] = 0U;
            __Vtemp752[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp753, __Vtemp752, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp753[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp754[0U] = 1U;
            __Vtemp754[1U] = 0U;
            __Vtemp754[2U] = 0U;
            __Vtemp754[3U] = 0U;
            __Vtemp754[4U] = 0U;
            __Vtemp754[5U] = 0U;
            __Vtemp754[6U] = 0U;
            __Vtemp754[7U] = 0U;
            __Vtemp754[8U] = 0U;
            __Vtemp754[9U] = 0U;
            __Vtemp754[0xaU] = 0U;
            __Vtemp754[0xbU] = 0U;
            __Vtemp754[0xcU] = 0U;
            __Vtemp754[0xdU] = 0U;
            __Vtemp754[0xeU] = 0U;
            __Vtemp754[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp755, __Vtemp754, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp755[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_155 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp756[0U] = 1U;
            __Vtemp756[1U] = 0U;
            __Vtemp756[2U] = 0U;
            __Vtemp756[3U] = 0U;
            __Vtemp756[4U] = 0U;
            __Vtemp756[5U] = 0U;
            __Vtemp756[6U] = 0U;
            __Vtemp756[7U] = 0U;
            __Vtemp756[8U] = 0U;
            __Vtemp756[9U] = 0U;
            __Vtemp756[0xaU] = 0U;
            __Vtemp756[0xbU] = 0U;
            __Vtemp756[0xcU] = 0U;
            __Vtemp756[0xdU] = 0U;
            __Vtemp756[0xeU] = 0U;
            __Vtemp756[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp757, __Vtemp756, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp757[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp758[0U] = 1U;
            __Vtemp758[1U] = 0U;
            __Vtemp758[2U] = 0U;
            __Vtemp758[3U] = 0U;
            __Vtemp758[4U] = 0U;
            __Vtemp758[5U] = 0U;
            __Vtemp758[6U] = 0U;
            __Vtemp758[7U] = 0U;
            __Vtemp758[8U] = 0U;
            __Vtemp758[9U] = 0U;
            __Vtemp758[0xaU] = 0U;
            __Vtemp758[0xbU] = 0U;
            __Vtemp758[0xcU] = 0U;
            __Vtemp758[0xdU] = 0U;
            __Vtemp758[0xeU] = 0U;
            __Vtemp758[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp759, __Vtemp758, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp759[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_191 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp760[0U] = 1U;
            __Vtemp760[1U] = 0U;
            __Vtemp760[2U] = 0U;
            __Vtemp760[3U] = 0U;
            __Vtemp760[4U] = 0U;
            __Vtemp760[5U] = 0U;
            __Vtemp760[6U] = 0U;
            __Vtemp760[7U] = 0U;
            __Vtemp760[8U] = 0U;
            __Vtemp760[9U] = 0U;
            __Vtemp760[0xaU] = 0U;
            __Vtemp760[0xbU] = 0U;
            __Vtemp760[0xcU] = 0U;
            __Vtemp760[0xdU] = 0U;
            __Vtemp760[0xeU] = 0U;
            __Vtemp760[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp761, __Vtemp760, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp761[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp762[0U] = 1U;
            __Vtemp762[1U] = 0U;
            __Vtemp762[2U] = 0U;
            __Vtemp762[3U] = 0U;
            __Vtemp762[4U] = 0U;
            __Vtemp762[5U] = 0U;
            __Vtemp762[6U] = 0U;
            __Vtemp762[7U] = 0U;
            __Vtemp762[8U] = 0U;
            __Vtemp762[9U] = 0U;
            __Vtemp762[0xaU] = 0U;
            __Vtemp762[0xbU] = 0U;
            __Vtemp762[0xcU] = 0U;
            __Vtemp762[0xdU] = 0U;
            __Vtemp762[0xeU] = 0U;
            __Vtemp762[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp763, __Vtemp762, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp763[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_117 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp764[0U] = 1U;
            __Vtemp764[1U] = 0U;
            __Vtemp764[2U] = 0U;
            __Vtemp764[3U] = 0U;
            __Vtemp764[4U] = 0U;
            __Vtemp764[5U] = 0U;
            __Vtemp764[6U] = 0U;
            __Vtemp764[7U] = 0U;
            __Vtemp764[8U] = 0U;
            __Vtemp764[9U] = 0U;
            __Vtemp764[0xaU] = 0U;
            __Vtemp764[0xbU] = 0U;
            __Vtemp764[0xcU] = 0U;
            __Vtemp764[0xdU] = 0U;
            __Vtemp764[0xeU] = 0U;
            __Vtemp764[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp765, __Vtemp764, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp765[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp766[0U] = 1U;
            __Vtemp766[1U] = 0U;
            __Vtemp766[2U] = 0U;
            __Vtemp766[3U] = 0U;
            __Vtemp766[4U] = 0U;
            __Vtemp766[5U] = 0U;
            __Vtemp766[6U] = 0U;
            __Vtemp766[7U] = 0U;
            __Vtemp766[8U] = 0U;
            __Vtemp766[9U] = 0U;
            __Vtemp766[0xaU] = 0U;
            __Vtemp766[0xbU] = 0U;
            __Vtemp766[0xcU] = 0U;
            __Vtemp766[0xdU] = 0U;
            __Vtemp766[0xeU] = 0U;
            __Vtemp766[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp767, __Vtemp766, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp767[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_187 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp768[0U] = 1U;
            __Vtemp768[1U] = 0U;
            __Vtemp768[2U] = 0U;
            __Vtemp768[3U] = 0U;
            __Vtemp768[4U] = 0U;
            __Vtemp768[5U] = 0U;
            __Vtemp768[6U] = 0U;
            __Vtemp768[7U] = 0U;
            __Vtemp768[8U] = 0U;
            __Vtemp768[9U] = 0U;
            __Vtemp768[0xaU] = 0U;
            __Vtemp768[0xbU] = 0U;
            __Vtemp768[0xcU] = 0U;
            __Vtemp768[0xdU] = 0U;
            __Vtemp768[0xeU] = 0U;
            __Vtemp768[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp769, __Vtemp768, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp769[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp770[0U] = 1U;
            __Vtemp770[1U] = 0U;
            __Vtemp770[2U] = 0U;
            __Vtemp770[3U] = 0U;
            __Vtemp770[4U] = 0U;
            __Vtemp770[5U] = 0U;
            __Vtemp770[6U] = 0U;
            __Vtemp770[7U] = 0U;
            __Vtemp770[8U] = 0U;
            __Vtemp770[9U] = 0U;
            __Vtemp770[0xaU] = 0U;
            __Vtemp770[0xbU] = 0U;
            __Vtemp770[0xcU] = 0U;
            __Vtemp770[0xdU] = 0U;
            __Vtemp770[0xeU] = 0U;
            __Vtemp770[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp771, __Vtemp770, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp771[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_113 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp772[0U] = 1U;
            __Vtemp772[1U] = 0U;
            __Vtemp772[2U] = 0U;
            __Vtemp772[3U] = 0U;
            __Vtemp772[4U] = 0U;
            __Vtemp772[5U] = 0U;
            __Vtemp772[6U] = 0U;
            __Vtemp772[7U] = 0U;
            __Vtemp772[8U] = 0U;
            __Vtemp772[9U] = 0U;
            __Vtemp772[0xaU] = 0U;
            __Vtemp772[0xbU] = 0U;
            __Vtemp772[0xcU] = 0U;
            __Vtemp772[0xdU] = 0U;
            __Vtemp772[0xeU] = 0U;
            __Vtemp772[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp773, __Vtemp772, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp773[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp774[0U] = 1U;
            __Vtemp774[1U] = 0U;
            __Vtemp774[2U] = 0U;
            __Vtemp774[3U] = 0U;
            __Vtemp774[4U] = 0U;
            __Vtemp774[5U] = 0U;
            __Vtemp774[6U] = 0U;
            __Vtemp774[7U] = 0U;
            __Vtemp774[8U] = 0U;
            __Vtemp774[9U] = 0U;
            __Vtemp774[0xaU] = 0U;
            __Vtemp774[0xbU] = 0U;
            __Vtemp774[0xcU] = 0U;
            __Vtemp774[0xdU] = 0U;
            __Vtemp774[0xeU] = 0U;
            __Vtemp774[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp775, __Vtemp774, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp775[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_188 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp776[0U] = 1U;
            __Vtemp776[1U] = 0U;
            __Vtemp776[2U] = 0U;
            __Vtemp776[3U] = 0U;
            __Vtemp776[4U] = 0U;
            __Vtemp776[5U] = 0U;
            __Vtemp776[6U] = 0U;
            __Vtemp776[7U] = 0U;
            __Vtemp776[8U] = 0U;
            __Vtemp776[9U] = 0U;
            __Vtemp776[0xaU] = 0U;
            __Vtemp776[0xbU] = 0U;
            __Vtemp776[0xcU] = 0U;
            __Vtemp776[0xdU] = 0U;
            __Vtemp776[0xeU] = 0U;
            __Vtemp776[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp777, __Vtemp776, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp777[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp778[0U] = 1U;
            __Vtemp778[1U] = 0U;
            __Vtemp778[2U] = 0U;
            __Vtemp778[3U] = 0U;
            __Vtemp778[4U] = 0U;
            __Vtemp778[5U] = 0U;
            __Vtemp778[6U] = 0U;
            __Vtemp778[7U] = 0U;
            __Vtemp778[8U] = 0U;
            __Vtemp778[9U] = 0U;
            __Vtemp778[0xaU] = 0U;
            __Vtemp778[0xbU] = 0U;
            __Vtemp778[0xcU] = 0U;
            __Vtemp778[0xdU] = 0U;
            __Vtemp778[0xeU] = 0U;
            __Vtemp778[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp779, __Vtemp778, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp779[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_114 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp780[0U] = 1U;
            __Vtemp780[1U] = 0U;
            __Vtemp780[2U] = 0U;
            __Vtemp780[3U] = 0U;
            __Vtemp780[4U] = 0U;
            __Vtemp780[5U] = 0U;
            __Vtemp780[6U] = 0U;
            __Vtemp780[7U] = 0U;
            __Vtemp780[8U] = 0U;
            __Vtemp780[9U] = 0U;
            __Vtemp780[0xaU] = 0U;
            __Vtemp780[0xbU] = 0U;
            __Vtemp780[0xcU] = 0U;
            __Vtemp780[0xdU] = 0U;
            __Vtemp780[0xeU] = 0U;
            __Vtemp780[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp781, __Vtemp780, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp781[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp782[0U] = 1U;
            __Vtemp782[1U] = 0U;
            __Vtemp782[2U] = 0U;
            __Vtemp782[3U] = 0U;
            __Vtemp782[4U] = 0U;
            __Vtemp782[5U] = 0U;
            __Vtemp782[6U] = 0U;
            __Vtemp782[7U] = 0U;
            __Vtemp782[8U] = 0U;
            __Vtemp782[9U] = 0U;
            __Vtemp782[0xaU] = 0U;
            __Vtemp782[0xbU] = 0U;
            __Vtemp782[0xcU] = 0U;
            __Vtemp782[0xdU] = 0U;
            __Vtemp782[0xeU] = 0U;
            __Vtemp782[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp783, __Vtemp782, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp783[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_164 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp784[0U] = 1U;
            __Vtemp784[1U] = 0U;
            __Vtemp784[2U] = 0U;
            __Vtemp784[3U] = 0U;
            __Vtemp784[4U] = 0U;
            __Vtemp784[5U] = 0U;
            __Vtemp784[6U] = 0U;
            __Vtemp784[7U] = 0U;
            __Vtemp784[8U] = 0U;
            __Vtemp784[9U] = 0U;
            __Vtemp784[0xaU] = 0U;
            __Vtemp784[0xbU] = 0U;
            __Vtemp784[0xcU] = 0U;
            __Vtemp784[0xdU] = 0U;
            __Vtemp784[0xeU] = 0U;
            __Vtemp784[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp785, __Vtemp784, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp785[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp786[0U] = 1U;
            __Vtemp786[1U] = 0U;
            __Vtemp786[2U] = 0U;
            __Vtemp786[3U] = 0U;
            __Vtemp786[4U] = 0U;
            __Vtemp786[5U] = 0U;
            __Vtemp786[6U] = 0U;
            __Vtemp786[7U] = 0U;
            __Vtemp786[8U] = 0U;
            __Vtemp786[9U] = 0U;
            __Vtemp786[0xaU] = 0U;
            __Vtemp786[0xbU] = 0U;
            __Vtemp786[0xcU] = 0U;
            __Vtemp786[0xdU] = 0U;
            __Vtemp786[0xeU] = 0U;
            __Vtemp786[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp787, __Vtemp786, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp787[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_165 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp788[0U] = 1U;
            __Vtemp788[1U] = 0U;
            __Vtemp788[2U] = 0U;
            __Vtemp788[3U] = 0U;
            __Vtemp788[4U] = 0U;
            __Vtemp788[5U] = 0U;
            __Vtemp788[6U] = 0U;
            __Vtemp788[7U] = 0U;
            __Vtemp788[8U] = 0U;
            __Vtemp788[9U] = 0U;
            __Vtemp788[0xaU] = 0U;
            __Vtemp788[0xbU] = 0U;
            __Vtemp788[0xcU] = 0U;
            __Vtemp788[0xdU] = 0U;
            __Vtemp788[0xeU] = 0U;
            __Vtemp788[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp789, __Vtemp788, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp789[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp790[0U] = 1U;
            __Vtemp790[1U] = 0U;
            __Vtemp790[2U] = 0U;
            __Vtemp790[3U] = 0U;
            __Vtemp790[4U] = 0U;
            __Vtemp790[5U] = 0U;
            __Vtemp790[6U] = 0U;
            __Vtemp790[7U] = 0U;
            __Vtemp790[8U] = 0U;
            __Vtemp790[9U] = 0U;
            __Vtemp790[0xaU] = 0U;
            __Vtemp790[0xbU] = 0U;
            __Vtemp790[0xcU] = 0U;
            __Vtemp790[0xdU] = 0U;
            __Vtemp790[0xeU] = 0U;
            __Vtemp790[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp791, __Vtemp790, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp791[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_166 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp792[0U] = 1U;
            __Vtemp792[1U] = 0U;
            __Vtemp792[2U] = 0U;
            __Vtemp792[3U] = 0U;
            __Vtemp792[4U] = 0U;
            __Vtemp792[5U] = 0U;
            __Vtemp792[6U] = 0U;
            __Vtemp792[7U] = 0U;
            __Vtemp792[8U] = 0U;
            __Vtemp792[9U] = 0U;
            __Vtemp792[0xaU] = 0U;
            __Vtemp792[0xbU] = 0U;
            __Vtemp792[0xcU] = 0U;
            __Vtemp792[0xdU] = 0U;
            __Vtemp792[0xeU] = 0U;
            __Vtemp792[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp793, __Vtemp792, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp793[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp794[0U] = 1U;
            __Vtemp794[1U] = 0U;
            __Vtemp794[2U] = 0U;
            __Vtemp794[3U] = 0U;
            __Vtemp794[4U] = 0U;
            __Vtemp794[5U] = 0U;
            __Vtemp794[6U] = 0U;
            __Vtemp794[7U] = 0U;
            __Vtemp794[8U] = 0U;
            __Vtemp794[9U] = 0U;
            __Vtemp794[0xaU] = 0U;
            __Vtemp794[0xbU] = 0U;
            __Vtemp794[0xcU] = 0U;
            __Vtemp794[0xdU] = 0U;
            __Vtemp794[0xeU] = 0U;
            __Vtemp794[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp795, __Vtemp794, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp795[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__61(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__61\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp837[16];
    WData/*511:0*/ __Vtemp838[16];
    WData/*511:0*/ __Vtemp839[16];
    WData/*511:0*/ __Vtemp840[16];
    WData/*511:0*/ __Vtemp841[16];
    WData/*511:0*/ __Vtemp842[16];
    WData/*511:0*/ __Vtemp843[16];
    WData/*511:0*/ __Vtemp844[16];
    WData/*511:0*/ __Vtemp845[16];
    WData/*511:0*/ __Vtemp846[16];
    WData/*511:0*/ __Vtemp847[16];
    WData/*511:0*/ __Vtemp848[16];
    WData/*511:0*/ __Vtemp849[16];
    WData/*511:0*/ __Vtemp850[16];
    WData/*511:0*/ __Vtemp851[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp796[0U] = 1U;
            __Vtemp796[1U] = 0U;
            __Vtemp796[2U] = 0U;
            __Vtemp796[3U] = 0U;
            __Vtemp796[4U] = 0U;
            __Vtemp796[5U] = 0U;
            __Vtemp796[6U] = 0U;
            __Vtemp796[7U] = 0U;
            __Vtemp796[8U] = 0U;
            __Vtemp796[9U] = 0U;
            __Vtemp796[0xaU] = 0U;
            __Vtemp796[0xbU] = 0U;
            __Vtemp796[0xcU] = 0U;
            __Vtemp796[0xdU] = 0U;
            __Vtemp796[0xeU] = 0U;
            __Vtemp796[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp797, __Vtemp796, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp797[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_167 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp798[0U] = 1U;
            __Vtemp798[1U] = 0U;
            __Vtemp798[2U] = 0U;
            __Vtemp798[3U] = 0U;
            __Vtemp798[4U] = 0U;
            __Vtemp798[5U] = 0U;
            __Vtemp798[6U] = 0U;
            __Vtemp798[7U] = 0U;
            __Vtemp798[8U] = 0U;
            __Vtemp798[9U] = 0U;
            __Vtemp798[0xaU] = 0U;
            __Vtemp798[0xbU] = 0U;
            __Vtemp798[0xcU] = 0U;
            __Vtemp798[0xdU] = 0U;
            __Vtemp798[0xeU] = 0U;
            __Vtemp798[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp799, __Vtemp798, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp799[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp800[0U] = 1U;
            __Vtemp800[1U] = 0U;
            __Vtemp800[2U] = 0U;
            __Vtemp800[3U] = 0U;
            __Vtemp800[4U] = 0U;
            __Vtemp800[5U] = 0U;
            __Vtemp800[6U] = 0U;
            __Vtemp800[7U] = 0U;
            __Vtemp800[8U] = 0U;
            __Vtemp800[9U] = 0U;
            __Vtemp800[0xaU] = 0U;
            __Vtemp800[0xbU] = 0U;
            __Vtemp800[0xcU] = 0U;
            __Vtemp800[0xdU] = 0U;
            __Vtemp800[0xeU] = 0U;
            __Vtemp800[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp801, __Vtemp800, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp801[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp802[0U] = 1U;
            __Vtemp802[1U] = 0U;
            __Vtemp802[2U] = 0U;
            __Vtemp802[3U] = 0U;
            __Vtemp802[4U] = 0U;
            __Vtemp802[5U] = 0U;
            __Vtemp802[6U] = 0U;
            __Vtemp802[7U] = 0U;
            __Vtemp802[8U] = 0U;
            __Vtemp802[9U] = 0U;
            __Vtemp802[0xaU] = 0U;
            __Vtemp802[0xbU] = 0U;
            __Vtemp802[0xcU] = 0U;
            __Vtemp802[0xdU] = 0U;
            __Vtemp802[0xeU] = 0U;
            __Vtemp802[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp803, __Vtemp802, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp803[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_168 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp804[0U] = 1U;
            __Vtemp804[1U] = 0U;
            __Vtemp804[2U] = 0U;
            __Vtemp804[3U] = 0U;
            __Vtemp804[4U] = 0U;
            __Vtemp804[5U] = 0U;
            __Vtemp804[6U] = 0U;
            __Vtemp804[7U] = 0U;
            __Vtemp804[8U] = 0U;
            __Vtemp804[9U] = 0U;
            __Vtemp804[0xaU] = 0U;
            __Vtemp804[0xbU] = 0U;
            __Vtemp804[0xcU] = 0U;
            __Vtemp804[0xdU] = 0U;
            __Vtemp804[0xeU] = 0U;
            __Vtemp804[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp805, __Vtemp804, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp805[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp806[0U] = 1U;
            __Vtemp806[1U] = 0U;
            __Vtemp806[2U] = 0U;
            __Vtemp806[3U] = 0U;
            __Vtemp806[4U] = 0U;
            __Vtemp806[5U] = 0U;
            __Vtemp806[6U] = 0U;
            __Vtemp806[7U] = 0U;
            __Vtemp806[8U] = 0U;
            __Vtemp806[9U] = 0U;
            __Vtemp806[0xaU] = 0U;
            __Vtemp806[0xbU] = 0U;
            __Vtemp806[0xcU] = 0U;
            __Vtemp806[0xdU] = 0U;
            __Vtemp806[0xeU] = 0U;
            __Vtemp806[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp807, __Vtemp806, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp807[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp808[0U] = 1U;
            __Vtemp808[1U] = 0U;
            __Vtemp808[2U] = 0U;
            __Vtemp808[3U] = 0U;
            __Vtemp808[4U] = 0U;
            __Vtemp808[5U] = 0U;
            __Vtemp808[6U] = 0U;
            __Vtemp808[7U] = 0U;
            __Vtemp808[8U] = 0U;
            __Vtemp808[9U] = 0U;
            __Vtemp808[0xaU] = 0U;
            __Vtemp808[0xbU] = 0U;
            __Vtemp808[0xcU] = 0U;
            __Vtemp808[0xdU] = 0U;
            __Vtemp808[0xeU] = 0U;
            __Vtemp808[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp809, __Vtemp808, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp809[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_169 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp810[0U] = 1U;
            __Vtemp810[1U] = 0U;
            __Vtemp810[2U] = 0U;
            __Vtemp810[3U] = 0U;
            __Vtemp810[4U] = 0U;
            __Vtemp810[5U] = 0U;
            __Vtemp810[6U] = 0U;
            __Vtemp810[7U] = 0U;
            __Vtemp810[8U] = 0U;
            __Vtemp810[9U] = 0U;
            __Vtemp810[0xaU] = 0U;
            __Vtemp810[0xbU] = 0U;
            __Vtemp810[0xcU] = 0U;
            __Vtemp810[0xdU] = 0U;
            __Vtemp810[0xeU] = 0U;
            __Vtemp810[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp811, __Vtemp810, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp811[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp812[0U] = 1U;
            __Vtemp812[1U] = 0U;
            __Vtemp812[2U] = 0U;
            __Vtemp812[3U] = 0U;
            __Vtemp812[4U] = 0U;
            __Vtemp812[5U] = 0U;
            __Vtemp812[6U] = 0U;
            __Vtemp812[7U] = 0U;
            __Vtemp812[8U] = 0U;
            __Vtemp812[9U] = 0U;
            __Vtemp812[0xaU] = 0U;
            __Vtemp812[0xbU] = 0U;
            __Vtemp812[0xcU] = 0U;
            __Vtemp812[0xdU] = 0U;
            __Vtemp812[0xeU] = 0U;
            __Vtemp812[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp813, __Vtemp812, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp813[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp814[0U] = 1U;
            __Vtemp814[1U] = 0U;
            __Vtemp814[2U] = 0U;
            __Vtemp814[3U] = 0U;
            __Vtemp814[4U] = 0U;
            __Vtemp814[5U] = 0U;
            __Vtemp814[6U] = 0U;
            __Vtemp814[7U] = 0U;
            __Vtemp814[8U] = 0U;
            __Vtemp814[9U] = 0U;
            __Vtemp814[0xaU] = 0U;
            __Vtemp814[0xbU] = 0U;
            __Vtemp814[0xcU] = 0U;
            __Vtemp814[0xdU] = 0U;
            __Vtemp814[0xeU] = 0U;
            __Vtemp814[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp815, __Vtemp814, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp815[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_170 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp816[0U] = 1U;
            __Vtemp816[1U] = 0U;
            __Vtemp816[2U] = 0U;
            __Vtemp816[3U] = 0U;
            __Vtemp816[4U] = 0U;
            __Vtemp816[5U] = 0U;
            __Vtemp816[6U] = 0U;
            __Vtemp816[7U] = 0U;
            __Vtemp816[8U] = 0U;
            __Vtemp816[9U] = 0U;
            __Vtemp816[0xaU] = 0U;
            __Vtemp816[0xbU] = 0U;
            __Vtemp816[0xcU] = 0U;
            __Vtemp816[0xdU] = 0U;
            __Vtemp816[0xeU] = 0U;
            __Vtemp816[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp817, __Vtemp816, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp817[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp818[0U] = 1U;
            __Vtemp818[1U] = 0U;
            __Vtemp818[2U] = 0U;
            __Vtemp818[3U] = 0U;
            __Vtemp818[4U] = 0U;
            __Vtemp818[5U] = 0U;
            __Vtemp818[6U] = 0U;
            __Vtemp818[7U] = 0U;
            __Vtemp818[8U] = 0U;
            __Vtemp818[9U] = 0U;
            __Vtemp818[0xaU] = 0U;
            __Vtemp818[0xbU] = 0U;
            __Vtemp818[0xcU] = 0U;
            __Vtemp818[0xdU] = 0U;
            __Vtemp818[0xeU] = 0U;
            __Vtemp818[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp819, __Vtemp818, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp819[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp820[0U] = 1U;
            __Vtemp820[1U] = 0U;
            __Vtemp820[2U] = 0U;
            __Vtemp820[3U] = 0U;
            __Vtemp820[4U] = 0U;
            __Vtemp820[5U] = 0U;
            __Vtemp820[6U] = 0U;
            __Vtemp820[7U] = 0U;
            __Vtemp820[8U] = 0U;
            __Vtemp820[9U] = 0U;
            __Vtemp820[0xaU] = 0U;
            __Vtemp820[0xbU] = 0U;
            __Vtemp820[0xcU] = 0U;
            __Vtemp820[0xdU] = 0U;
            __Vtemp820[0xeU] = 0U;
            __Vtemp820[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp821, __Vtemp820, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp821[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_171 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp822[0U] = 1U;
            __Vtemp822[1U] = 0U;
            __Vtemp822[2U] = 0U;
            __Vtemp822[3U] = 0U;
            __Vtemp822[4U] = 0U;
            __Vtemp822[5U] = 0U;
            __Vtemp822[6U] = 0U;
            __Vtemp822[7U] = 0U;
            __Vtemp822[8U] = 0U;
            __Vtemp822[9U] = 0U;
            __Vtemp822[0xaU] = 0U;
            __Vtemp822[0xbU] = 0U;
            __Vtemp822[0xcU] = 0U;
            __Vtemp822[0xdU] = 0U;
            __Vtemp822[0xeU] = 0U;
            __Vtemp822[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp823, __Vtemp822, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp823[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp824[0U] = 1U;
            __Vtemp824[1U] = 0U;
            __Vtemp824[2U] = 0U;
            __Vtemp824[3U] = 0U;
            __Vtemp824[4U] = 0U;
            __Vtemp824[5U] = 0U;
            __Vtemp824[6U] = 0U;
            __Vtemp824[7U] = 0U;
            __Vtemp824[8U] = 0U;
            __Vtemp824[9U] = 0U;
            __Vtemp824[0xaU] = 0U;
            __Vtemp824[0xbU] = 0U;
            __Vtemp824[0xcU] = 0U;
            __Vtemp824[0xdU] = 0U;
            __Vtemp824[0xeU] = 0U;
            __Vtemp824[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp825, __Vtemp824, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp825[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp826[0U] = 1U;
            __Vtemp826[1U] = 0U;
            __Vtemp826[2U] = 0U;
            __Vtemp826[3U] = 0U;
            __Vtemp826[4U] = 0U;
            __Vtemp826[5U] = 0U;
            __Vtemp826[6U] = 0U;
            __Vtemp826[7U] = 0U;
            __Vtemp826[8U] = 0U;
            __Vtemp826[9U] = 0U;
            __Vtemp826[0xaU] = 0U;
            __Vtemp826[0xbU] = 0U;
            __Vtemp826[0xcU] = 0U;
            __Vtemp826[0xdU] = 0U;
            __Vtemp826[0xeU] = 0U;
            __Vtemp826[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp827, __Vtemp826, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp827[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_172 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp828[0U] = 1U;
            __Vtemp828[1U] = 0U;
            __Vtemp828[2U] = 0U;
            __Vtemp828[3U] = 0U;
            __Vtemp828[4U] = 0U;
            __Vtemp828[5U] = 0U;
            __Vtemp828[6U] = 0U;
            __Vtemp828[7U] = 0U;
            __Vtemp828[8U] = 0U;
            __Vtemp828[9U] = 0U;
            __Vtemp828[0xaU] = 0U;
            __Vtemp828[0xbU] = 0U;
            __Vtemp828[0xcU] = 0U;
            __Vtemp828[0xdU] = 0U;
            __Vtemp828[0xeU] = 0U;
            __Vtemp828[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp829, __Vtemp828, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp829[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp830[0U] = 1U;
            __Vtemp830[1U] = 0U;
            __Vtemp830[2U] = 0U;
            __Vtemp830[3U] = 0U;
            __Vtemp830[4U] = 0U;
            __Vtemp830[5U] = 0U;
            __Vtemp830[6U] = 0U;
            __Vtemp830[7U] = 0U;
            __Vtemp830[8U] = 0U;
            __Vtemp830[9U] = 0U;
            __Vtemp830[0xaU] = 0U;
            __Vtemp830[0xbU] = 0U;
            __Vtemp830[0xcU] = 0U;
            __Vtemp830[0xdU] = 0U;
            __Vtemp830[0xeU] = 0U;
            __Vtemp830[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp831, __Vtemp830, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp831[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp832[0U] = 1U;
            __Vtemp832[1U] = 0U;
            __Vtemp832[2U] = 0U;
            __Vtemp832[3U] = 0U;
            __Vtemp832[4U] = 0U;
            __Vtemp832[5U] = 0U;
            __Vtemp832[6U] = 0U;
            __Vtemp832[7U] = 0U;
            __Vtemp832[8U] = 0U;
            __Vtemp832[9U] = 0U;
            __Vtemp832[0xaU] = 0U;
            __Vtemp832[0xbU] = 0U;
            __Vtemp832[0xcU] = 0U;
            __Vtemp832[0xdU] = 0U;
            __Vtemp832[0xeU] = 0U;
            __Vtemp832[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp833, __Vtemp832, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp833[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_173 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp834[0U] = 1U;
            __Vtemp834[1U] = 0U;
            __Vtemp834[2U] = 0U;
            __Vtemp834[3U] = 0U;
            __Vtemp834[4U] = 0U;
            __Vtemp834[5U] = 0U;
            __Vtemp834[6U] = 0U;
            __Vtemp834[7U] = 0U;
            __Vtemp834[8U] = 0U;
            __Vtemp834[9U] = 0U;
            __Vtemp834[0xaU] = 0U;
            __Vtemp834[0xbU] = 0U;
            __Vtemp834[0xcU] = 0U;
            __Vtemp834[0xdU] = 0U;
            __Vtemp834[0xeU] = 0U;
            __Vtemp834[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp835, __Vtemp834, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp835[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp836[0U] = 1U;
            __Vtemp836[1U] = 0U;
            __Vtemp836[2U] = 0U;
            __Vtemp836[3U] = 0U;
            __Vtemp836[4U] = 0U;
            __Vtemp836[5U] = 0U;
            __Vtemp836[6U] = 0U;
            __Vtemp836[7U] = 0U;
            __Vtemp836[8U] = 0U;
            __Vtemp836[9U] = 0U;
            __Vtemp836[0xaU] = 0U;
            __Vtemp836[0xbU] = 0U;
            __Vtemp836[0xcU] = 0U;
            __Vtemp836[0xdU] = 0U;
            __Vtemp836[0xeU] = 0U;
            __Vtemp836[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp837, __Vtemp836, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp837[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_47 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp838[0U] = 1U;
            __Vtemp838[1U] = 0U;
            __Vtemp838[2U] = 0U;
            __Vtemp838[3U] = 0U;
            __Vtemp838[4U] = 0U;
            __Vtemp838[5U] = 0U;
            __Vtemp838[6U] = 0U;
            __Vtemp838[7U] = 0U;
            __Vtemp838[8U] = 0U;
            __Vtemp838[9U] = 0U;
            __Vtemp838[0xaU] = 0U;
            __Vtemp838[0xbU] = 0U;
            __Vtemp838[0xcU] = 0U;
            __Vtemp838[0xdU] = 0U;
            __Vtemp838[0xeU] = 0U;
            __Vtemp838[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp839, __Vtemp838, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp839[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_199 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp840[0U] = 1U;
            __Vtemp840[1U] = 0U;
            __Vtemp840[2U] = 0U;
            __Vtemp840[3U] = 0U;
            __Vtemp840[4U] = 0U;
            __Vtemp840[5U] = 0U;
            __Vtemp840[6U] = 0U;
            __Vtemp840[7U] = 0U;
            __Vtemp840[8U] = 0U;
            __Vtemp840[9U] = 0U;
            __Vtemp840[0xaU] = 0U;
            __Vtemp840[0xbU] = 0U;
            __Vtemp840[0xcU] = 0U;
            __Vtemp840[0xdU] = 0U;
            __Vtemp840[0xeU] = 0U;
            __Vtemp840[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp841, __Vtemp840, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp841[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_34 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp842[0U] = 1U;
            __Vtemp842[1U] = 0U;
            __Vtemp842[2U] = 0U;
            __Vtemp842[3U] = 0U;
            __Vtemp842[4U] = 0U;
            __Vtemp842[5U] = 0U;
            __Vtemp842[6U] = 0U;
            __Vtemp842[7U] = 0U;
            __Vtemp842[8U] = 0U;
            __Vtemp842[9U] = 0U;
            __Vtemp842[0xaU] = 0U;
            __Vtemp842[0xbU] = 0U;
            __Vtemp842[0xcU] = 0U;
            __Vtemp842[0xdU] = 0U;
            __Vtemp842[0xeU] = 0U;
            __Vtemp842[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp843, __Vtemp842, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp843[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_150 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp844[0U] = 1U;
            __Vtemp844[1U] = 0U;
            __Vtemp844[2U] = 0U;
            __Vtemp844[3U] = 0U;
            __Vtemp844[4U] = 0U;
            __Vtemp844[5U] = 0U;
            __Vtemp844[6U] = 0U;
            __Vtemp844[7U] = 0U;
            __Vtemp844[8U] = 0U;
            __Vtemp844[9U] = 0U;
            __Vtemp844[0xaU] = 0U;
            __Vtemp844[0xbU] = 0U;
            __Vtemp844[0xcU] = 0U;
            __Vtemp844[0xdU] = 0U;
            __Vtemp844[0xeU] = 0U;
            __Vtemp844[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp845, __Vtemp844, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp845[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_151 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp846[0U] = 1U;
            __Vtemp846[1U] = 0U;
            __Vtemp846[2U] = 0U;
            __Vtemp846[3U] = 0U;
            __Vtemp846[4U] = 0U;
            __Vtemp846[5U] = 0U;
            __Vtemp846[6U] = 0U;
            __Vtemp846[7U] = 0U;
            __Vtemp846[8U] = 0U;
            __Vtemp846[9U] = 0U;
            __Vtemp846[0xaU] = 0U;
            __Vtemp846[0xbU] = 0U;
            __Vtemp846[0xcU] = 0U;
            __Vtemp846[0xdU] = 0U;
            __Vtemp846[0xeU] = 0U;
            __Vtemp846[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp847, __Vtemp846, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp847[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_152 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp848[0U] = 1U;
            __Vtemp848[1U] = 0U;
            __Vtemp848[2U] = 0U;
            __Vtemp848[3U] = 0U;
            __Vtemp848[4U] = 0U;
            __Vtemp848[5U] = 0U;
            __Vtemp848[6U] = 0U;
            __Vtemp848[7U] = 0U;
            __Vtemp848[8U] = 0U;
            __Vtemp848[9U] = 0U;
            __Vtemp848[0xaU] = 0U;
            __Vtemp848[0xbU] = 0U;
            __Vtemp848[0xcU] = 0U;
            __Vtemp848[0xdU] = 0U;
            __Vtemp848[0xeU] = 0U;
            __Vtemp848[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp849, __Vtemp848, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp849[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_50 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp850[0U] = 1U;
            __Vtemp850[1U] = 0U;
            __Vtemp850[2U] = 0U;
            __Vtemp850[3U] = 0U;
            __Vtemp850[4U] = 0U;
            __Vtemp850[5U] = 0U;
            __Vtemp850[6U] = 0U;
            __Vtemp850[7U] = 0U;
            __Vtemp850[8U] = 0U;
            __Vtemp850[9U] = 0U;
            __Vtemp850[0xaU] = 0U;
            __Vtemp850[0xbU] = 0U;
            __Vtemp850[0xcU] = 0U;
            __Vtemp850[0xdU] = 0U;
            __Vtemp850[0xeU] = 0U;
            __Vtemp850[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp851, __Vtemp850, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp851[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_51 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
