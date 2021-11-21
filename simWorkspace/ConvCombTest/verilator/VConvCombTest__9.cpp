// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__60(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__60\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp837[16];
    // Body
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
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__61(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__61\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp852[16];
    WData/*511:0*/ __Vtemp853[16];
    WData/*511:0*/ __Vtemp854[16];
    WData/*511:0*/ __Vtemp855[16];
    WData/*511:0*/ __Vtemp856[16];
    WData/*511:0*/ __Vtemp857[16];
    WData/*511:0*/ __Vtemp858[16];
    WData/*511:0*/ __Vtemp859[16];
    WData/*511:0*/ __Vtemp860[16];
    WData/*511:0*/ __Vtemp861[16];
    WData/*511:0*/ __Vtemp862[16];
    WData/*511:0*/ __Vtemp863[16];
    WData/*511:0*/ __Vtemp864[16];
    WData/*511:0*/ __Vtemp865[16];
    WData/*511:0*/ __Vtemp866[16];
    WData/*511:0*/ __Vtemp867[16];
    WData/*511:0*/ __Vtemp868[16];
    WData/*511:0*/ __Vtemp869[16];
    WData/*511:0*/ __Vtemp870[16];
    WData/*511:0*/ __Vtemp871[16];
    WData/*511:0*/ __Vtemp872[16];
    WData/*511:0*/ __Vtemp873[16];
    WData/*511:0*/ __Vtemp874[16];
    WData/*511:0*/ __Vtemp875[16];
    WData/*511:0*/ __Vtemp876[16];
    WData/*511:0*/ __Vtemp877[16];
    WData/*511:0*/ __Vtemp878[16];
    WData/*511:0*/ __Vtemp879[16];
    WData/*511:0*/ __Vtemp880[16];
    WData/*511:0*/ __Vtemp881[16];
    WData/*511:0*/ __Vtemp882[16];
    WData/*511:0*/ __Vtemp883[16];
    WData/*511:0*/ __Vtemp884[16];
    WData/*511:0*/ __Vtemp885[16];
    WData/*511:0*/ __Vtemp886[16];
    WData/*511:0*/ __Vtemp887[16];
    WData/*511:0*/ __Vtemp888[16];
    WData/*511:0*/ __Vtemp889[16];
    WData/*511:0*/ __Vtemp890[16];
    WData/*511:0*/ __Vtemp891[16];
    WData/*511:0*/ __Vtemp892[16];
    WData/*511:0*/ __Vtemp893[16];
    // Body
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
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp852[0U] = 1U;
            __Vtemp852[1U] = 0U;
            __Vtemp852[2U] = 0U;
            __Vtemp852[3U] = 0U;
            __Vtemp852[4U] = 0U;
            __Vtemp852[5U] = 0U;
            __Vtemp852[6U] = 0U;
            __Vtemp852[7U] = 0U;
            __Vtemp852[8U] = 0U;
            __Vtemp852[9U] = 0U;
            __Vtemp852[0xaU] = 0U;
            __Vtemp852[0xbU] = 0U;
            __Vtemp852[0xcU] = 0U;
            __Vtemp852[0xdU] = 0U;
            __Vtemp852[0xeU] = 0U;
            __Vtemp852[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp853, __Vtemp852, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp853[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_52 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp854[0U] = 1U;
            __Vtemp854[1U] = 0U;
            __Vtemp854[2U] = 0U;
            __Vtemp854[3U] = 0U;
            __Vtemp854[4U] = 0U;
            __Vtemp854[5U] = 0U;
            __Vtemp854[6U] = 0U;
            __Vtemp854[7U] = 0U;
            __Vtemp854[8U] = 0U;
            __Vtemp854[9U] = 0U;
            __Vtemp854[0xaU] = 0U;
            __Vtemp854[0xbU] = 0U;
            __Vtemp854[0xcU] = 0U;
            __Vtemp854[0xdU] = 0U;
            __Vtemp854[0xeU] = 0U;
            __Vtemp854[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp855, __Vtemp854, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp855[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_53 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp856[0U] = 1U;
            __Vtemp856[1U] = 0U;
            __Vtemp856[2U] = 0U;
            __Vtemp856[3U] = 0U;
            __Vtemp856[4U] = 0U;
            __Vtemp856[5U] = 0U;
            __Vtemp856[6U] = 0U;
            __Vtemp856[7U] = 0U;
            __Vtemp856[8U] = 0U;
            __Vtemp856[9U] = 0U;
            __Vtemp856[0xaU] = 0U;
            __Vtemp856[0xbU] = 0U;
            __Vtemp856[0xcU] = 0U;
            __Vtemp856[0xdU] = 0U;
            __Vtemp856[0xeU] = 0U;
            __Vtemp856[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp857, __Vtemp856, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp857[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_54 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp858[0U] = 1U;
            __Vtemp858[1U] = 0U;
            __Vtemp858[2U] = 0U;
            __Vtemp858[3U] = 0U;
            __Vtemp858[4U] = 0U;
            __Vtemp858[5U] = 0U;
            __Vtemp858[6U] = 0U;
            __Vtemp858[7U] = 0U;
            __Vtemp858[8U] = 0U;
            __Vtemp858[9U] = 0U;
            __Vtemp858[0xaU] = 0U;
            __Vtemp858[0xbU] = 0U;
            __Vtemp858[0xcU] = 0U;
            __Vtemp858[0xdU] = 0U;
            __Vtemp858[0xeU] = 0U;
            __Vtemp858[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp859, __Vtemp858, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp859[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_55 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp860[0U] = 1U;
            __Vtemp860[1U] = 0U;
            __Vtemp860[2U] = 0U;
            __Vtemp860[3U] = 0U;
            __Vtemp860[4U] = 0U;
            __Vtemp860[5U] = 0U;
            __Vtemp860[6U] = 0U;
            __Vtemp860[7U] = 0U;
            __Vtemp860[8U] = 0U;
            __Vtemp860[9U] = 0U;
            __Vtemp860[0xaU] = 0U;
            __Vtemp860[0xbU] = 0U;
            __Vtemp860[0xcU] = 0U;
            __Vtemp860[0xdU] = 0U;
            __Vtemp860[0xeU] = 0U;
            __Vtemp860[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp861, __Vtemp860, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp861[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_56 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp862[0U] = 1U;
            __Vtemp862[1U] = 0U;
            __Vtemp862[2U] = 0U;
            __Vtemp862[3U] = 0U;
            __Vtemp862[4U] = 0U;
            __Vtemp862[5U] = 0U;
            __Vtemp862[6U] = 0U;
            __Vtemp862[7U] = 0U;
            __Vtemp862[8U] = 0U;
            __Vtemp862[9U] = 0U;
            __Vtemp862[0xaU] = 0U;
            __Vtemp862[0xbU] = 0U;
            __Vtemp862[0xcU] = 0U;
            __Vtemp862[0xdU] = 0U;
            __Vtemp862[0xeU] = 0U;
            __Vtemp862[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp863, __Vtemp862, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp863[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_57 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp864[0U] = 1U;
            __Vtemp864[1U] = 0U;
            __Vtemp864[2U] = 0U;
            __Vtemp864[3U] = 0U;
            __Vtemp864[4U] = 0U;
            __Vtemp864[5U] = 0U;
            __Vtemp864[6U] = 0U;
            __Vtemp864[7U] = 0U;
            __Vtemp864[8U] = 0U;
            __Vtemp864[9U] = 0U;
            __Vtemp864[0xaU] = 0U;
            __Vtemp864[0xbU] = 0U;
            __Vtemp864[0xcU] = 0U;
            __Vtemp864[0xdU] = 0U;
            __Vtemp864[0xeU] = 0U;
            __Vtemp864[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp865, __Vtemp864, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp865[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_58 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp866[0U] = 1U;
            __Vtemp866[1U] = 0U;
            __Vtemp866[2U] = 0U;
            __Vtemp866[3U] = 0U;
            __Vtemp866[4U] = 0U;
            __Vtemp866[5U] = 0U;
            __Vtemp866[6U] = 0U;
            __Vtemp866[7U] = 0U;
            __Vtemp866[8U] = 0U;
            __Vtemp866[9U] = 0U;
            __Vtemp866[0xaU] = 0U;
            __Vtemp866[0xbU] = 0U;
            __Vtemp866[0xcU] = 0U;
            __Vtemp866[0xdU] = 0U;
            __Vtemp866[0xeU] = 0U;
            __Vtemp866[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp867, __Vtemp866, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp867[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_59 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp868[0U] = 1U;
            __Vtemp868[1U] = 0U;
            __Vtemp868[2U] = 0U;
            __Vtemp868[3U] = 0U;
            __Vtemp868[4U] = 0U;
            __Vtemp868[5U] = 0U;
            __Vtemp868[6U] = 0U;
            __Vtemp868[7U] = 0U;
            __Vtemp868[8U] = 0U;
            __Vtemp868[9U] = 0U;
            __Vtemp868[0xaU] = 0U;
            __Vtemp868[0xbU] = 0U;
            __Vtemp868[0xcU] = 0U;
            __Vtemp868[0xdU] = 0U;
            __Vtemp868[0xeU] = 0U;
            __Vtemp868[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp869, __Vtemp868, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp869[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_60 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp870[0U] = 1U;
            __Vtemp870[1U] = 0U;
            __Vtemp870[2U] = 0U;
            __Vtemp870[3U] = 0U;
            __Vtemp870[4U] = 0U;
            __Vtemp870[5U] = 0U;
            __Vtemp870[6U] = 0U;
            __Vtemp870[7U] = 0U;
            __Vtemp870[8U] = 0U;
            __Vtemp870[9U] = 0U;
            __Vtemp870[0xaU] = 0U;
            __Vtemp870[0xbU] = 0U;
            __Vtemp870[0xcU] = 0U;
            __Vtemp870[0xdU] = 0U;
            __Vtemp870[0xeU] = 0U;
            __Vtemp870[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp871, __Vtemp870, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp871[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_61 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp872[0U] = 1U;
            __Vtemp872[1U] = 0U;
            __Vtemp872[2U] = 0U;
            __Vtemp872[3U] = 0U;
            __Vtemp872[4U] = 0U;
            __Vtemp872[5U] = 0U;
            __Vtemp872[6U] = 0U;
            __Vtemp872[7U] = 0U;
            __Vtemp872[8U] = 0U;
            __Vtemp872[9U] = 0U;
            __Vtemp872[0xaU] = 0U;
            __Vtemp872[0xbU] = 0U;
            __Vtemp872[0xcU] = 0U;
            __Vtemp872[0xdU] = 0U;
            __Vtemp872[0xeU] = 0U;
            __Vtemp872[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp873, __Vtemp872, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp873[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_62 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp874[0U] = 1U;
            __Vtemp874[1U] = 0U;
            __Vtemp874[2U] = 0U;
            __Vtemp874[3U] = 0U;
            __Vtemp874[4U] = 0U;
            __Vtemp874[5U] = 0U;
            __Vtemp874[6U] = 0U;
            __Vtemp874[7U] = 0U;
            __Vtemp874[8U] = 0U;
            __Vtemp874[9U] = 0U;
            __Vtemp874[0xaU] = 0U;
            __Vtemp874[0xbU] = 0U;
            __Vtemp874[0xcU] = 0U;
            __Vtemp874[0xdU] = 0U;
            __Vtemp874[0xeU] = 0U;
            __Vtemp874[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp875, __Vtemp874, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp875[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_63 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp876[0U] = 1U;
            __Vtemp876[1U] = 0U;
            __Vtemp876[2U] = 0U;
            __Vtemp876[3U] = 0U;
            __Vtemp876[4U] = 0U;
            __Vtemp876[5U] = 0U;
            __Vtemp876[6U] = 0U;
            __Vtemp876[7U] = 0U;
            __Vtemp876[8U] = 0U;
            __Vtemp876[9U] = 0U;
            __Vtemp876[0xaU] = 0U;
            __Vtemp876[0xbU] = 0U;
            __Vtemp876[0xcU] = 0U;
            __Vtemp876[0xdU] = 0U;
            __Vtemp876[0xeU] = 0U;
            __Vtemp876[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp877, __Vtemp876, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp877[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_64 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp878[0U] = 1U;
            __Vtemp878[1U] = 0U;
            __Vtemp878[2U] = 0U;
            __Vtemp878[3U] = 0U;
            __Vtemp878[4U] = 0U;
            __Vtemp878[5U] = 0U;
            __Vtemp878[6U] = 0U;
            __Vtemp878[7U] = 0U;
            __Vtemp878[8U] = 0U;
            __Vtemp878[9U] = 0U;
            __Vtemp878[0xaU] = 0U;
            __Vtemp878[0xbU] = 0U;
            __Vtemp878[0xcU] = 0U;
            __Vtemp878[0xdU] = 0U;
            __Vtemp878[0xeU] = 0U;
            __Vtemp878[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp879, __Vtemp878, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp879[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_65 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp880[0U] = 1U;
            __Vtemp880[1U] = 0U;
            __Vtemp880[2U] = 0U;
            __Vtemp880[3U] = 0U;
            __Vtemp880[4U] = 0U;
            __Vtemp880[5U] = 0U;
            __Vtemp880[6U] = 0U;
            __Vtemp880[7U] = 0U;
            __Vtemp880[8U] = 0U;
            __Vtemp880[9U] = 0U;
            __Vtemp880[0xaU] = 0U;
            __Vtemp880[0xbU] = 0U;
            __Vtemp880[0xcU] = 0U;
            __Vtemp880[0xdU] = 0U;
            __Vtemp880[0xeU] = 0U;
            __Vtemp880[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp881, __Vtemp880, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp881[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_66 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp882[0U] = 1U;
            __Vtemp882[1U] = 0U;
            __Vtemp882[2U] = 0U;
            __Vtemp882[3U] = 0U;
            __Vtemp882[4U] = 0U;
            __Vtemp882[5U] = 0U;
            __Vtemp882[6U] = 0U;
            __Vtemp882[7U] = 0U;
            __Vtemp882[8U] = 0U;
            __Vtemp882[9U] = 0U;
            __Vtemp882[0xaU] = 0U;
            __Vtemp882[0xbU] = 0U;
            __Vtemp882[0xcU] = 0U;
            __Vtemp882[0xdU] = 0U;
            __Vtemp882[0xeU] = 0U;
            __Vtemp882[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp883, __Vtemp882, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp883[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_67 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp884[0U] = 1U;
            __Vtemp884[1U] = 0U;
            __Vtemp884[2U] = 0U;
            __Vtemp884[3U] = 0U;
            __Vtemp884[4U] = 0U;
            __Vtemp884[5U] = 0U;
            __Vtemp884[6U] = 0U;
            __Vtemp884[7U] = 0U;
            __Vtemp884[8U] = 0U;
            __Vtemp884[9U] = 0U;
            __Vtemp884[0xaU] = 0U;
            __Vtemp884[0xbU] = 0U;
            __Vtemp884[0xcU] = 0U;
            __Vtemp884[0xdU] = 0U;
            __Vtemp884[0xeU] = 0U;
            __Vtemp884[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp885, __Vtemp884, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp885[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_68 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp886[0U] = 1U;
            __Vtemp886[1U] = 0U;
            __Vtemp886[2U] = 0U;
            __Vtemp886[3U] = 0U;
            __Vtemp886[4U] = 0U;
            __Vtemp886[5U] = 0U;
            __Vtemp886[6U] = 0U;
            __Vtemp886[7U] = 0U;
            __Vtemp886[8U] = 0U;
            __Vtemp886[9U] = 0U;
            __Vtemp886[0xaU] = 0U;
            __Vtemp886[0xbU] = 0U;
            __Vtemp886[0xcU] = 0U;
            __Vtemp886[0xdU] = 0U;
            __Vtemp886[0xeU] = 0U;
            __Vtemp886[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp887, __Vtemp886, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp887[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_69 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp888[0U] = 1U;
            __Vtemp888[1U] = 0U;
            __Vtemp888[2U] = 0U;
            __Vtemp888[3U] = 0U;
            __Vtemp888[4U] = 0U;
            __Vtemp888[5U] = 0U;
            __Vtemp888[6U] = 0U;
            __Vtemp888[7U] = 0U;
            __Vtemp888[8U] = 0U;
            __Vtemp888[9U] = 0U;
            __Vtemp888[0xaU] = 0U;
            __Vtemp888[0xbU] = 0U;
            __Vtemp888[0xcU] = 0U;
            __Vtemp888[0xdU] = 0U;
            __Vtemp888[0xeU] = 0U;
            __Vtemp888[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp889, __Vtemp888, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp889[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_70 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp890[0U] = 1U;
            __Vtemp890[1U] = 0U;
            __Vtemp890[2U] = 0U;
            __Vtemp890[3U] = 0U;
            __Vtemp890[4U] = 0U;
            __Vtemp890[5U] = 0U;
            __Vtemp890[6U] = 0U;
            __Vtemp890[7U] = 0U;
            __Vtemp890[8U] = 0U;
            __Vtemp890[9U] = 0U;
            __Vtemp890[0xaU] = 0U;
            __Vtemp890[0xbU] = 0U;
            __Vtemp890[0xcU] = 0U;
            __Vtemp890[0xdU] = 0U;
            __Vtemp890[0xeU] = 0U;
            __Vtemp890[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp891, __Vtemp890, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp891[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_71 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp892[0U] = 1U;
            __Vtemp892[1U] = 0U;
            __Vtemp892[2U] = 0U;
            __Vtemp892[3U] = 0U;
            __Vtemp892[4U] = 0U;
            __Vtemp892[5U] = 0U;
            __Vtemp892[6U] = 0U;
            __Vtemp892[7U] = 0U;
            __Vtemp892[8U] = 0U;
            __Vtemp892[9U] = 0U;
            __Vtemp892[0xaU] = 0U;
            __Vtemp892[0xbU] = 0U;
            __Vtemp892[0xcU] = 0U;
            __Vtemp892[0xdU] = 0U;
            __Vtemp892[0xeU] = 0U;
            __Vtemp892[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp893, __Vtemp892, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp893[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_72 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
