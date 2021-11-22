// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__55(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__55\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp558[16];
    WData/*511:0*/ __Vtemp559[16];
    WData/*511:0*/ __Vtemp560[16];
    WData/*511:0*/ __Vtemp561[16];
    WData/*511:0*/ __Vtemp562[16];
    WData/*511:0*/ __Vtemp563[16];
    WData/*511:0*/ __Vtemp564[16];
    WData/*511:0*/ __Vtemp565[16];
    WData/*511:0*/ __Vtemp566[16];
    WData/*511:0*/ __Vtemp567[16];
    WData/*511:0*/ __Vtemp568[16];
    WData/*511:0*/ __Vtemp569[16];
    WData/*511:0*/ __Vtemp570[16];
    WData/*511:0*/ __Vtemp571[16];
    WData/*511:0*/ __Vtemp572[16];
    WData/*511:0*/ __Vtemp573[16];
    WData/*511:0*/ __Vtemp574[16];
    WData/*511:0*/ __Vtemp575[16];
    WData/*511:0*/ __Vtemp576[16];
    WData/*511:0*/ __Vtemp577[16];
    WData/*511:0*/ __Vtemp578[16];
    WData/*511:0*/ __Vtemp579[16];
    WData/*511:0*/ __Vtemp580[16];
    WData/*511:0*/ __Vtemp581[16];
    WData/*511:0*/ __Vtemp582[16];
    WData/*511:0*/ __Vtemp583[16];
    WData/*511:0*/ __Vtemp584[16];
    WData/*511:0*/ __Vtemp585[16];
    WData/*511:0*/ __Vtemp586[16];
    WData/*511:0*/ __Vtemp587[16];
    WData/*511:0*/ __Vtemp588[16];
    WData/*511:0*/ __Vtemp589[16];
    WData/*511:0*/ __Vtemp590[16];
    WData/*511:0*/ __Vtemp591[16];
    WData/*511:0*/ __Vtemp592[16];
    WData/*511:0*/ __Vtemp593[16];
    WData/*511:0*/ __Vtemp594[16];
    WData/*511:0*/ __Vtemp595[16];
    WData/*511:0*/ __Vtemp596[16];
    WData/*511:0*/ __Vtemp597[16];
    // Body
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
            if ((0x20000000U & __Vtemp543[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29 
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
            if ((0x10000000U & __Vtemp545[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
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
            if ((0x8000000U & __Vtemp547[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_27 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
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
            if ((0x4000000U & __Vtemp549[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
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
            if ((0x2000000U & __Vtemp551[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_25 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
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
            if ((0x1000000U & __Vtemp553[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_24 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
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
            if ((0x800000U & __Vtemp555[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23 
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
            if ((0x400000U & __Vtemp557[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp558[0U] = 1U;
            __Vtemp558[1U] = 0U;
            __Vtemp558[2U] = 0U;
            __Vtemp558[3U] = 0U;
            __Vtemp558[4U] = 0U;
            __Vtemp558[5U] = 0U;
            __Vtemp558[6U] = 0U;
            __Vtemp558[7U] = 0U;
            __Vtemp558[8U] = 0U;
            __Vtemp558[9U] = 0U;
            __Vtemp558[0xaU] = 0U;
            __Vtemp558[0xbU] = 0U;
            __Vtemp558[0xcU] = 0U;
            __Vtemp558[0xdU] = 0U;
            __Vtemp558[0xeU] = 0U;
            __Vtemp558[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp559, __Vtemp558, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp559[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_21 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp560[0U] = 1U;
            __Vtemp560[1U] = 0U;
            __Vtemp560[2U] = 0U;
            __Vtemp560[3U] = 0U;
            __Vtemp560[4U] = 0U;
            __Vtemp560[5U] = 0U;
            __Vtemp560[6U] = 0U;
            __Vtemp560[7U] = 0U;
            __Vtemp560[8U] = 0U;
            __Vtemp560[9U] = 0U;
            __Vtemp560[0xaU] = 0U;
            __Vtemp560[0xbU] = 0U;
            __Vtemp560[0xcU] = 0U;
            __Vtemp560[0xdU] = 0U;
            __Vtemp560[0xeU] = 0U;
            __Vtemp560[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp561, __Vtemp560, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp561[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp562[0U] = 1U;
            __Vtemp562[1U] = 0U;
            __Vtemp562[2U] = 0U;
            __Vtemp562[3U] = 0U;
            __Vtemp562[4U] = 0U;
            __Vtemp562[5U] = 0U;
            __Vtemp562[6U] = 0U;
            __Vtemp562[7U] = 0U;
            __Vtemp562[8U] = 0U;
            __Vtemp562[9U] = 0U;
            __Vtemp562[0xaU] = 0U;
            __Vtemp562[0xbU] = 0U;
            __Vtemp562[0xcU] = 0U;
            __Vtemp562[0xdU] = 0U;
            __Vtemp562[0xeU] = 0U;
            __Vtemp562[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp563, __Vtemp562, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp563[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp564[0U] = 1U;
            __Vtemp564[1U] = 0U;
            __Vtemp564[2U] = 0U;
            __Vtemp564[3U] = 0U;
            __Vtemp564[4U] = 0U;
            __Vtemp564[5U] = 0U;
            __Vtemp564[6U] = 0U;
            __Vtemp564[7U] = 0U;
            __Vtemp564[8U] = 0U;
            __Vtemp564[9U] = 0U;
            __Vtemp564[0xaU] = 0U;
            __Vtemp564[0xbU] = 0U;
            __Vtemp564[0xcU] = 0U;
            __Vtemp564[0xdU] = 0U;
            __Vtemp564[0xeU] = 0U;
            __Vtemp564[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp565, __Vtemp564, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp565[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_18 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp566[0U] = 1U;
            __Vtemp566[1U] = 0U;
            __Vtemp566[2U] = 0U;
            __Vtemp566[3U] = 0U;
            __Vtemp566[4U] = 0U;
            __Vtemp566[5U] = 0U;
            __Vtemp566[6U] = 0U;
            __Vtemp566[7U] = 0U;
            __Vtemp566[8U] = 0U;
            __Vtemp566[9U] = 0U;
            __Vtemp566[0xaU] = 0U;
            __Vtemp566[0xbU] = 0U;
            __Vtemp566[0xcU] = 0U;
            __Vtemp566[0xdU] = 0U;
            __Vtemp566[0xeU] = 0U;
            __Vtemp566[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp567, __Vtemp566, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp567[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp568[0U] = 1U;
            __Vtemp568[1U] = 0U;
            __Vtemp568[2U] = 0U;
            __Vtemp568[3U] = 0U;
            __Vtemp568[4U] = 0U;
            __Vtemp568[5U] = 0U;
            __Vtemp568[6U] = 0U;
            __Vtemp568[7U] = 0U;
            __Vtemp568[8U] = 0U;
            __Vtemp568[9U] = 0U;
            __Vtemp568[0xaU] = 0U;
            __Vtemp568[0xbU] = 0U;
            __Vtemp568[0xcU] = 0U;
            __Vtemp568[0xdU] = 0U;
            __Vtemp568[0xeU] = 0U;
            __Vtemp568[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp569, __Vtemp568, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp569[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp570[0U] = 1U;
            __Vtemp570[1U] = 0U;
            __Vtemp570[2U] = 0U;
            __Vtemp570[3U] = 0U;
            __Vtemp570[4U] = 0U;
            __Vtemp570[5U] = 0U;
            __Vtemp570[6U] = 0U;
            __Vtemp570[7U] = 0U;
            __Vtemp570[8U] = 0U;
            __Vtemp570[9U] = 0U;
            __Vtemp570[0xaU] = 0U;
            __Vtemp570[0xbU] = 0U;
            __Vtemp570[0xcU] = 0U;
            __Vtemp570[0xdU] = 0U;
            __Vtemp570[0xeU] = 0U;
            __Vtemp570[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp571, __Vtemp570, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp571[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_15 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp572[0U] = 1U;
            __Vtemp572[1U] = 0U;
            __Vtemp572[2U] = 0U;
            __Vtemp572[3U] = 0U;
            __Vtemp572[4U] = 0U;
            __Vtemp572[5U] = 0U;
            __Vtemp572[6U] = 0U;
            __Vtemp572[7U] = 0U;
            __Vtemp572[8U] = 0U;
            __Vtemp572[9U] = 0U;
            __Vtemp572[0xaU] = 0U;
            __Vtemp572[0xbU] = 0U;
            __Vtemp572[0xcU] = 0U;
            __Vtemp572[0xdU] = 0U;
            __Vtemp572[0xeU] = 0U;
            __Vtemp572[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp573, __Vtemp572, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp573[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp574[0U] = 1U;
            __Vtemp574[1U] = 0U;
            __Vtemp574[2U] = 0U;
            __Vtemp574[3U] = 0U;
            __Vtemp574[4U] = 0U;
            __Vtemp574[5U] = 0U;
            __Vtemp574[6U] = 0U;
            __Vtemp574[7U] = 0U;
            __Vtemp574[8U] = 0U;
            __Vtemp574[9U] = 0U;
            __Vtemp574[0xaU] = 0U;
            __Vtemp574[0xbU] = 0U;
            __Vtemp574[0xcU] = 0U;
            __Vtemp574[0xdU] = 0U;
            __Vtemp574[0xeU] = 0U;
            __Vtemp574[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp575, __Vtemp574, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp575[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp576[0U] = 1U;
            __Vtemp576[1U] = 0U;
            __Vtemp576[2U] = 0U;
            __Vtemp576[3U] = 0U;
            __Vtemp576[4U] = 0U;
            __Vtemp576[5U] = 0U;
            __Vtemp576[6U] = 0U;
            __Vtemp576[7U] = 0U;
            __Vtemp576[8U] = 0U;
            __Vtemp576[9U] = 0U;
            __Vtemp576[0xaU] = 0U;
            __Vtemp576[0xbU] = 0U;
            __Vtemp576[0xcU] = 0U;
            __Vtemp576[0xdU] = 0U;
            __Vtemp576[0xeU] = 0U;
            __Vtemp576[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp577, __Vtemp576, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp577[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_12 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp578[0U] = 1U;
            __Vtemp578[1U] = 0U;
            __Vtemp578[2U] = 0U;
            __Vtemp578[3U] = 0U;
            __Vtemp578[4U] = 0U;
            __Vtemp578[5U] = 0U;
            __Vtemp578[6U] = 0U;
            __Vtemp578[7U] = 0U;
            __Vtemp578[8U] = 0U;
            __Vtemp578[9U] = 0U;
            __Vtemp578[0xaU] = 0U;
            __Vtemp578[0xbU] = 0U;
            __Vtemp578[0xcU] = 0U;
            __Vtemp578[0xdU] = 0U;
            __Vtemp578[0xeU] = 0U;
            __Vtemp578[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp579, __Vtemp578, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp579[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp580[0U] = 1U;
            __Vtemp580[1U] = 0U;
            __Vtemp580[2U] = 0U;
            __Vtemp580[3U] = 0U;
            __Vtemp580[4U] = 0U;
            __Vtemp580[5U] = 0U;
            __Vtemp580[6U] = 0U;
            __Vtemp580[7U] = 0U;
            __Vtemp580[8U] = 0U;
            __Vtemp580[9U] = 0U;
            __Vtemp580[0xaU] = 0U;
            __Vtemp580[0xbU] = 0U;
            __Vtemp580[0xcU] = 0U;
            __Vtemp580[0xdU] = 0U;
            __Vtemp580[0xeU] = 0U;
            __Vtemp580[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp581, __Vtemp580, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp581[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp582[0U] = 1U;
            __Vtemp582[1U] = 0U;
            __Vtemp582[2U] = 0U;
            __Vtemp582[3U] = 0U;
            __Vtemp582[4U] = 0U;
            __Vtemp582[5U] = 0U;
            __Vtemp582[6U] = 0U;
            __Vtemp582[7U] = 0U;
            __Vtemp582[8U] = 0U;
            __Vtemp582[9U] = 0U;
            __Vtemp582[0xaU] = 0U;
            __Vtemp582[0xbU] = 0U;
            __Vtemp582[0xcU] = 0U;
            __Vtemp582[0xdU] = 0U;
            __Vtemp582[0xeU] = 0U;
            __Vtemp582[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp583, __Vtemp582, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp583[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp584[0U] = 1U;
            __Vtemp584[1U] = 0U;
            __Vtemp584[2U] = 0U;
            __Vtemp584[3U] = 0U;
            __Vtemp584[4U] = 0U;
            __Vtemp584[5U] = 0U;
            __Vtemp584[6U] = 0U;
            __Vtemp584[7U] = 0U;
            __Vtemp584[8U] = 0U;
            __Vtemp584[9U] = 0U;
            __Vtemp584[0xaU] = 0U;
            __Vtemp584[0xbU] = 0U;
            __Vtemp584[0xcU] = 0U;
            __Vtemp584[0xdU] = 0U;
            __Vtemp584[0xeU] = 0U;
            __Vtemp584[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp585, __Vtemp584, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp585[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp586[0U] = 1U;
            __Vtemp586[1U] = 0U;
            __Vtemp586[2U] = 0U;
            __Vtemp586[3U] = 0U;
            __Vtemp586[4U] = 0U;
            __Vtemp586[5U] = 0U;
            __Vtemp586[6U] = 0U;
            __Vtemp586[7U] = 0U;
            __Vtemp586[8U] = 0U;
            __Vtemp586[9U] = 0U;
            __Vtemp586[0xaU] = 0U;
            __Vtemp586[0xbU] = 0U;
            __Vtemp586[0xcU] = 0U;
            __Vtemp586[0xdU] = 0U;
            __Vtemp586[0xeU] = 0U;
            __Vtemp586[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp587, __Vtemp586, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp587[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp588[0U] = 1U;
            __Vtemp588[1U] = 0U;
            __Vtemp588[2U] = 0U;
            __Vtemp588[3U] = 0U;
            __Vtemp588[4U] = 0U;
            __Vtemp588[5U] = 0U;
            __Vtemp588[6U] = 0U;
            __Vtemp588[7U] = 0U;
            __Vtemp588[8U] = 0U;
            __Vtemp588[9U] = 0U;
            __Vtemp588[0xaU] = 0U;
            __Vtemp588[0xbU] = 0U;
            __Vtemp588[0xcU] = 0U;
            __Vtemp588[0xdU] = 0U;
            __Vtemp588[0xeU] = 0U;
            __Vtemp588[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp589, __Vtemp588, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp589[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp590[0U] = 1U;
            __Vtemp590[1U] = 0U;
            __Vtemp590[2U] = 0U;
            __Vtemp590[3U] = 0U;
            __Vtemp590[4U] = 0U;
            __Vtemp590[5U] = 0U;
            __Vtemp590[6U] = 0U;
            __Vtemp590[7U] = 0U;
            __Vtemp590[8U] = 0U;
            __Vtemp590[9U] = 0U;
            __Vtemp590[0xaU] = 0U;
            __Vtemp590[0xbU] = 0U;
            __Vtemp590[0xcU] = 0U;
            __Vtemp590[0xdU] = 0U;
            __Vtemp590[0xeU] = 0U;
            __Vtemp590[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp591, __Vtemp590, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp591[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp592[0U] = 1U;
            __Vtemp592[1U] = 0U;
            __Vtemp592[2U] = 0U;
            __Vtemp592[3U] = 0U;
            __Vtemp592[4U] = 0U;
            __Vtemp592[5U] = 0U;
            __Vtemp592[6U] = 0U;
            __Vtemp592[7U] = 0U;
            __Vtemp592[8U] = 0U;
            __Vtemp592[9U] = 0U;
            __Vtemp592[0xaU] = 0U;
            __Vtemp592[0xbU] = 0U;
            __Vtemp592[0xcU] = 0U;
            __Vtemp592[0xdU] = 0U;
            __Vtemp592[0xeU] = 0U;
            __Vtemp592[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp593, __Vtemp592, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp593[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp594[0U] = 1U;
            __Vtemp594[1U] = 0U;
            __Vtemp594[2U] = 0U;
            __Vtemp594[3U] = 0U;
            __Vtemp594[4U] = 0U;
            __Vtemp594[5U] = 0U;
            __Vtemp594[6U] = 0U;
            __Vtemp594[7U] = 0U;
            __Vtemp594[8U] = 0U;
            __Vtemp594[9U] = 0U;
            __Vtemp594[0xaU] = 0U;
            __Vtemp594[0xbU] = 0U;
            __Vtemp594[0xcU] = 0U;
            __Vtemp594[0xdU] = 0U;
            __Vtemp594[0xeU] = 0U;
            __Vtemp594[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp595, __Vtemp594, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp595[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp596[0U] = 1U;
            __Vtemp596[1U] = 0U;
            __Vtemp596[2U] = 0U;
            __Vtemp596[3U] = 0U;
            __Vtemp596[4U] = 0U;
            __Vtemp596[5U] = 0U;
            __Vtemp596[6U] = 0U;
            __Vtemp596[7U] = 0U;
            __Vtemp596[8U] = 0U;
            __Vtemp596[9U] = 0U;
            __Vtemp596[0xaU] = 0U;
            __Vtemp596[0xbU] = 0U;
            __Vtemp596[0xcU] = 0U;
            __Vtemp596[0xdU] = 0U;
            __Vtemp596[0xeU] = 0U;
            __Vtemp596[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp597, __Vtemp596, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp597[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__56(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__56\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp598[16];
    WData/*511:0*/ __Vtemp599[16];
    WData/*511:0*/ __Vtemp600[16];
    WData/*511:0*/ __Vtemp601[16];
    WData/*511:0*/ __Vtemp602[16];
    WData/*511:0*/ __Vtemp603[16];
    WData/*511:0*/ __Vtemp604[16];
    WData/*511:0*/ __Vtemp605[16];
    WData/*511:0*/ __Vtemp606[16];
    WData/*511:0*/ __Vtemp607[16];
    WData/*511:0*/ __Vtemp608[16];
    WData/*511:0*/ __Vtemp609[16];
    WData/*511:0*/ __Vtemp610[16];
    WData/*511:0*/ __Vtemp611[16];
    WData/*511:0*/ __Vtemp612[16];
    WData/*511:0*/ __Vtemp613[16];
    WData/*511:0*/ __Vtemp614[16];
    WData/*511:0*/ __Vtemp615[16];
    WData/*511:0*/ __Vtemp616[16];
    WData/*511:0*/ __Vtemp617[16];
    WData/*511:0*/ __Vtemp618[16];
    WData/*511:0*/ __Vtemp619[16];
    WData/*511:0*/ __Vtemp620[16];
    WData/*511:0*/ __Vtemp621[16];
    WData/*511:0*/ __Vtemp622[16];
    WData/*511:0*/ __Vtemp623[16];
    WData/*511:0*/ __Vtemp624[16];
    WData/*511:0*/ __Vtemp625[16];
    WData/*511:0*/ __Vtemp626[16];
    WData/*511:0*/ __Vtemp627[16];
    WData/*511:0*/ __Vtemp628[16];
    WData/*511:0*/ __Vtemp629[16];
    WData/*511:0*/ __Vtemp630[16];
    WData/*511:0*/ __Vtemp631[16];
    WData/*511:0*/ __Vtemp632[16];
    WData/*511:0*/ __Vtemp633[16];
    WData/*511:0*/ __Vtemp634[16];
    WData/*511:0*/ __Vtemp635[16];
    WData/*511:0*/ __Vtemp636[16];
    WData/*511:0*/ __Vtemp637[16];
    WData/*511:0*/ __Vtemp638[16];
    WData/*511:0*/ __Vtemp639[16];
    WData/*511:0*/ __Vtemp640[16];
    WData/*511:0*/ __Vtemp641[16];
    WData/*511:0*/ __Vtemp642[16];
    WData/*511:0*/ __Vtemp643[16];
    WData/*511:0*/ __Vtemp644[16];
    WData/*511:0*/ __Vtemp645[16];
    WData/*511:0*/ __Vtemp646[16];
    WData/*511:0*/ __Vtemp647[16];
    WData/*511:0*/ __Vtemp648[16];
    WData/*511:0*/ __Vtemp649[16];
    WData/*511:0*/ __Vtemp650[16];
    WData/*511:0*/ __Vtemp651[16];
    WData/*511:0*/ __Vtemp652[16];
    WData/*511:0*/ __Vtemp653[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp598[0U] = 1U;
            __Vtemp598[1U] = 0U;
            __Vtemp598[2U] = 0U;
            __Vtemp598[3U] = 0U;
            __Vtemp598[4U] = 0U;
            __Vtemp598[5U] = 0U;
            __Vtemp598[6U] = 0U;
            __Vtemp598[7U] = 0U;
            __Vtemp598[8U] = 0U;
            __Vtemp598[9U] = 0U;
            __Vtemp598[0xaU] = 0U;
            __Vtemp598[0xbU] = 0U;
            __Vtemp598[0xcU] = 0U;
            __Vtemp598[0xdU] = 0U;
            __Vtemp598[0xeU] = 0U;
            __Vtemp598[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp599, __Vtemp598, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp599[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_100 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp600[0U] = 1U;
            __Vtemp600[1U] = 0U;
            __Vtemp600[2U] = 0U;
            __Vtemp600[3U] = 0U;
            __Vtemp600[4U] = 0U;
            __Vtemp600[5U] = 0U;
            __Vtemp600[6U] = 0U;
            __Vtemp600[7U] = 0U;
            __Vtemp600[8U] = 0U;
            __Vtemp600[9U] = 0U;
            __Vtemp600[0xaU] = 0U;
            __Vtemp600[0xbU] = 0U;
            __Vtemp600[0xcU] = 0U;
            __Vtemp600[0xdU] = 0U;
            __Vtemp600[0xeU] = 0U;
            __Vtemp600[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp601, __Vtemp600, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp601[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_202 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp602[0U] = 1U;
            __Vtemp602[1U] = 0U;
            __Vtemp602[2U] = 0U;
            __Vtemp602[3U] = 0U;
            __Vtemp602[4U] = 0U;
            __Vtemp602[5U] = 0U;
            __Vtemp602[6U] = 0U;
            __Vtemp602[7U] = 0U;
            __Vtemp602[8U] = 0U;
            __Vtemp602[9U] = 0U;
            __Vtemp602[0xaU] = 0U;
            __Vtemp602[0xbU] = 0U;
            __Vtemp602[0xcU] = 0U;
            __Vtemp602[0xdU] = 0U;
            __Vtemp602[0xeU] = 0U;
            __Vtemp602[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp603, __Vtemp602, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp603[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp604[0U] = 1U;
            __Vtemp604[1U] = 0U;
            __Vtemp604[2U] = 0U;
            __Vtemp604[3U] = 0U;
            __Vtemp604[4U] = 0U;
            __Vtemp604[5U] = 0U;
            __Vtemp604[6U] = 0U;
            __Vtemp604[7U] = 0U;
            __Vtemp604[8U] = 0U;
            __Vtemp604[9U] = 0U;
            __Vtemp604[0xaU] = 0U;
            __Vtemp604[0xbU] = 0U;
            __Vtemp604[0xcU] = 0U;
            __Vtemp604[0xdU] = 0U;
            __Vtemp604[0xeU] = 0U;
            __Vtemp604[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp605, __Vtemp604, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp605[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_99 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp606[0U] = 1U;
            __Vtemp606[1U] = 0U;
            __Vtemp606[2U] = 0U;
            __Vtemp606[3U] = 0U;
            __Vtemp606[4U] = 0U;
            __Vtemp606[5U] = 0U;
            __Vtemp606[6U] = 0U;
            __Vtemp606[7U] = 0U;
            __Vtemp606[8U] = 0U;
            __Vtemp606[9U] = 0U;
            __Vtemp606[0xaU] = 0U;
            __Vtemp606[0xbU] = 0U;
            __Vtemp606[0xcU] = 0U;
            __Vtemp606[0xdU] = 0U;
            __Vtemp606[0xeU] = 0U;
            __Vtemp606[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp607, __Vtemp606, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp607[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_201 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp608[0U] = 1U;
            __Vtemp608[1U] = 0U;
            __Vtemp608[2U] = 0U;
            __Vtemp608[3U] = 0U;
            __Vtemp608[4U] = 0U;
            __Vtemp608[5U] = 0U;
            __Vtemp608[6U] = 0U;
            __Vtemp608[7U] = 0U;
            __Vtemp608[8U] = 0U;
            __Vtemp608[9U] = 0U;
            __Vtemp608[0xaU] = 0U;
            __Vtemp608[0xbU] = 0U;
            __Vtemp608[0xcU] = 0U;
            __Vtemp608[0xdU] = 0U;
            __Vtemp608[0xeU] = 0U;
            __Vtemp608[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp609, __Vtemp608, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp609[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_98 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp610[0U] = 1U;
            __Vtemp610[1U] = 0U;
            __Vtemp610[2U] = 0U;
            __Vtemp610[3U] = 0U;
            __Vtemp610[4U] = 0U;
            __Vtemp610[5U] = 0U;
            __Vtemp610[6U] = 0U;
            __Vtemp610[7U] = 0U;
            __Vtemp610[8U] = 0U;
            __Vtemp610[9U] = 0U;
            __Vtemp610[0xaU] = 0U;
            __Vtemp610[0xbU] = 0U;
            __Vtemp610[0xcU] = 0U;
            __Vtemp610[0xdU] = 0U;
            __Vtemp610[0xeU] = 0U;
            __Vtemp610[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp611, __Vtemp610, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp611[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_148 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp612[0U] = 1U;
            __Vtemp612[1U] = 0U;
            __Vtemp612[2U] = 0U;
            __Vtemp612[3U] = 0U;
            __Vtemp612[4U] = 0U;
            __Vtemp612[5U] = 0U;
            __Vtemp612[6U] = 0U;
            __Vtemp612[7U] = 0U;
            __Vtemp612[8U] = 0U;
            __Vtemp612[9U] = 0U;
            __Vtemp612[0xaU] = 0U;
            __Vtemp612[0xbU] = 0U;
            __Vtemp612[0xcU] = 0U;
            __Vtemp612[0xdU] = 0U;
            __Vtemp612[0xeU] = 0U;
            __Vtemp612[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp613, __Vtemp612, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp613[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_147 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp614[0U] = 1U;
            __Vtemp614[1U] = 0U;
            __Vtemp614[2U] = 0U;
            __Vtemp614[3U] = 0U;
            __Vtemp614[4U] = 0U;
            __Vtemp614[5U] = 0U;
            __Vtemp614[6U] = 0U;
            __Vtemp614[7U] = 0U;
            __Vtemp614[8U] = 0U;
            __Vtemp614[9U] = 0U;
            __Vtemp614[0xaU] = 0U;
            __Vtemp614[0xbU] = 0U;
            __Vtemp614[0xcU] = 0U;
            __Vtemp614[0xdU] = 0U;
            __Vtemp614[0xeU] = 0U;
            __Vtemp614[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp615, __Vtemp614, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp615[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_146 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp616[0U] = 1U;
            __Vtemp616[1U] = 0U;
            __Vtemp616[2U] = 0U;
            __Vtemp616[3U] = 0U;
            __Vtemp616[4U] = 0U;
            __Vtemp616[5U] = 0U;
            __Vtemp616[6U] = 0U;
            __Vtemp616[7U] = 0U;
            __Vtemp616[8U] = 0U;
            __Vtemp616[9U] = 0U;
            __Vtemp616[0xaU] = 0U;
            __Vtemp616[0xbU] = 0U;
            __Vtemp616[0xcU] = 0U;
            __Vtemp616[0xdU] = 0U;
            __Vtemp616[0xeU] = 0U;
            __Vtemp616[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp617, __Vtemp616, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp617[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_145 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp618[0U] = 1U;
            __Vtemp618[1U] = 0U;
            __Vtemp618[2U] = 0U;
            __Vtemp618[3U] = 0U;
            __Vtemp618[4U] = 0U;
            __Vtemp618[5U] = 0U;
            __Vtemp618[6U] = 0U;
            __Vtemp618[7U] = 0U;
            __Vtemp618[8U] = 0U;
            __Vtemp618[9U] = 0U;
            __Vtemp618[0xaU] = 0U;
            __Vtemp618[0xbU] = 0U;
            __Vtemp618[0xcU] = 0U;
            __Vtemp618[0xdU] = 0U;
            __Vtemp618[0xeU] = 0U;
            __Vtemp618[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp619, __Vtemp618, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp619[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_144 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp620[0U] = 1U;
            __Vtemp620[1U] = 0U;
            __Vtemp620[2U] = 0U;
            __Vtemp620[3U] = 0U;
            __Vtemp620[4U] = 0U;
            __Vtemp620[5U] = 0U;
            __Vtemp620[6U] = 0U;
            __Vtemp620[7U] = 0U;
            __Vtemp620[8U] = 0U;
            __Vtemp620[9U] = 0U;
            __Vtemp620[0xaU] = 0U;
            __Vtemp620[0xbU] = 0U;
            __Vtemp620[0xcU] = 0U;
            __Vtemp620[0xdU] = 0U;
            __Vtemp620[0xeU] = 0U;
            __Vtemp620[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp621, __Vtemp620, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp621[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_143 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp622[0U] = 1U;
            __Vtemp622[1U] = 0U;
            __Vtemp622[2U] = 0U;
            __Vtemp622[3U] = 0U;
            __Vtemp622[4U] = 0U;
            __Vtemp622[5U] = 0U;
            __Vtemp622[6U] = 0U;
            __Vtemp622[7U] = 0U;
            __Vtemp622[8U] = 0U;
            __Vtemp622[9U] = 0U;
            __Vtemp622[0xaU] = 0U;
            __Vtemp622[0xbU] = 0U;
            __Vtemp622[0xcU] = 0U;
            __Vtemp622[0xdU] = 0U;
            __Vtemp622[0xeU] = 0U;
            __Vtemp622[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp623, __Vtemp622, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp623[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_142 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp624[0U] = 1U;
            __Vtemp624[1U] = 0U;
            __Vtemp624[2U] = 0U;
            __Vtemp624[3U] = 0U;
            __Vtemp624[4U] = 0U;
            __Vtemp624[5U] = 0U;
            __Vtemp624[6U] = 0U;
            __Vtemp624[7U] = 0U;
            __Vtemp624[8U] = 0U;
            __Vtemp624[9U] = 0U;
            __Vtemp624[0xaU] = 0U;
            __Vtemp624[0xbU] = 0U;
            __Vtemp624[0xcU] = 0U;
            __Vtemp624[0xdU] = 0U;
            __Vtemp624[0xeU] = 0U;
            __Vtemp624[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp625, __Vtemp624, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp625[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_141 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp626[0U] = 1U;
            __Vtemp626[1U] = 0U;
            __Vtemp626[2U] = 0U;
            __Vtemp626[3U] = 0U;
            __Vtemp626[4U] = 0U;
            __Vtemp626[5U] = 0U;
            __Vtemp626[6U] = 0U;
            __Vtemp626[7U] = 0U;
            __Vtemp626[8U] = 0U;
            __Vtemp626[9U] = 0U;
            __Vtemp626[0xaU] = 0U;
            __Vtemp626[0xbU] = 0U;
            __Vtemp626[0xcU] = 0U;
            __Vtemp626[0xdU] = 0U;
            __Vtemp626[0xeU] = 0U;
            __Vtemp626[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp627, __Vtemp626, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp627[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_140 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp628[0U] = 1U;
            __Vtemp628[1U] = 0U;
            __Vtemp628[2U] = 0U;
            __Vtemp628[3U] = 0U;
            __Vtemp628[4U] = 0U;
            __Vtemp628[5U] = 0U;
            __Vtemp628[6U] = 0U;
            __Vtemp628[7U] = 0U;
            __Vtemp628[8U] = 0U;
            __Vtemp628[9U] = 0U;
            __Vtemp628[0xaU] = 0U;
            __Vtemp628[0xbU] = 0U;
            __Vtemp628[0xcU] = 0U;
            __Vtemp628[0xdU] = 0U;
            __Vtemp628[0xeU] = 0U;
            __Vtemp628[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp629, __Vtemp628, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp629[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_139 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp630[0U] = 1U;
            __Vtemp630[1U] = 0U;
            __Vtemp630[2U] = 0U;
            __Vtemp630[3U] = 0U;
            __Vtemp630[4U] = 0U;
            __Vtemp630[5U] = 0U;
            __Vtemp630[6U] = 0U;
            __Vtemp630[7U] = 0U;
            __Vtemp630[8U] = 0U;
            __Vtemp630[9U] = 0U;
            __Vtemp630[0xaU] = 0U;
            __Vtemp630[0xbU] = 0U;
            __Vtemp630[0xcU] = 0U;
            __Vtemp630[0xdU] = 0U;
            __Vtemp630[0xeU] = 0U;
            __Vtemp630[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp631, __Vtemp630, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp631[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_138 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp632[0U] = 1U;
            __Vtemp632[1U] = 0U;
            __Vtemp632[2U] = 0U;
            __Vtemp632[3U] = 0U;
            __Vtemp632[4U] = 0U;
            __Vtemp632[5U] = 0U;
            __Vtemp632[6U] = 0U;
            __Vtemp632[7U] = 0U;
            __Vtemp632[8U] = 0U;
            __Vtemp632[9U] = 0U;
            __Vtemp632[0xaU] = 0U;
            __Vtemp632[0xbU] = 0U;
            __Vtemp632[0xcU] = 0U;
            __Vtemp632[0xdU] = 0U;
            __Vtemp632[0xeU] = 0U;
            __Vtemp632[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp633, __Vtemp632, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp633[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_137 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp634[0U] = 1U;
            __Vtemp634[1U] = 0U;
            __Vtemp634[2U] = 0U;
            __Vtemp634[3U] = 0U;
            __Vtemp634[4U] = 0U;
            __Vtemp634[5U] = 0U;
            __Vtemp634[6U] = 0U;
            __Vtemp634[7U] = 0U;
            __Vtemp634[8U] = 0U;
            __Vtemp634[9U] = 0U;
            __Vtemp634[0xaU] = 0U;
            __Vtemp634[0xbU] = 0U;
            __Vtemp634[0xcU] = 0U;
            __Vtemp634[0xdU] = 0U;
            __Vtemp634[0xeU] = 0U;
            __Vtemp634[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp635, __Vtemp634, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp635[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_136 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp636[0U] = 1U;
            __Vtemp636[1U] = 0U;
            __Vtemp636[2U] = 0U;
            __Vtemp636[3U] = 0U;
            __Vtemp636[4U] = 0U;
            __Vtemp636[5U] = 0U;
            __Vtemp636[6U] = 0U;
            __Vtemp636[7U] = 0U;
            __Vtemp636[8U] = 0U;
            __Vtemp636[9U] = 0U;
            __Vtemp636[0xaU] = 0U;
            __Vtemp636[0xbU] = 0U;
            __Vtemp636[0xcU] = 0U;
            __Vtemp636[0xdU] = 0U;
            __Vtemp636[0xeU] = 0U;
            __Vtemp636[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp637, __Vtemp636, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp637[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_135 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp638[0U] = 1U;
            __Vtemp638[1U] = 0U;
            __Vtemp638[2U] = 0U;
            __Vtemp638[3U] = 0U;
            __Vtemp638[4U] = 0U;
            __Vtemp638[5U] = 0U;
            __Vtemp638[6U] = 0U;
            __Vtemp638[7U] = 0U;
            __Vtemp638[8U] = 0U;
            __Vtemp638[9U] = 0U;
            __Vtemp638[0xaU] = 0U;
            __Vtemp638[0xbU] = 0U;
            __Vtemp638[0xcU] = 0U;
            __Vtemp638[0xdU] = 0U;
            __Vtemp638[0xeU] = 0U;
            __Vtemp638[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp639, __Vtemp638, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp639[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_134 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp640[0U] = 1U;
            __Vtemp640[1U] = 0U;
            __Vtemp640[2U] = 0U;
            __Vtemp640[3U] = 0U;
            __Vtemp640[4U] = 0U;
            __Vtemp640[5U] = 0U;
            __Vtemp640[6U] = 0U;
            __Vtemp640[7U] = 0U;
            __Vtemp640[8U] = 0U;
            __Vtemp640[9U] = 0U;
            __Vtemp640[0xaU] = 0U;
            __Vtemp640[0xbU] = 0U;
            __Vtemp640[0xcU] = 0U;
            __Vtemp640[0xdU] = 0U;
            __Vtemp640[0xeU] = 0U;
            __Vtemp640[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp641, __Vtemp640, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp641[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_133 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp642[0U] = 1U;
            __Vtemp642[1U] = 0U;
            __Vtemp642[2U] = 0U;
            __Vtemp642[3U] = 0U;
            __Vtemp642[4U] = 0U;
            __Vtemp642[5U] = 0U;
            __Vtemp642[6U] = 0U;
            __Vtemp642[7U] = 0U;
            __Vtemp642[8U] = 0U;
            __Vtemp642[9U] = 0U;
            __Vtemp642[0xaU] = 0U;
            __Vtemp642[0xbU] = 0U;
            __Vtemp642[0xcU] = 0U;
            __Vtemp642[0xdU] = 0U;
            __Vtemp642[0xeU] = 0U;
            __Vtemp642[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp643, __Vtemp642, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp643[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_132 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp644[0U] = 1U;
            __Vtemp644[1U] = 0U;
            __Vtemp644[2U] = 0U;
            __Vtemp644[3U] = 0U;
            __Vtemp644[4U] = 0U;
            __Vtemp644[5U] = 0U;
            __Vtemp644[6U] = 0U;
            __Vtemp644[7U] = 0U;
            __Vtemp644[8U] = 0U;
            __Vtemp644[9U] = 0U;
            __Vtemp644[0xaU] = 0U;
            __Vtemp644[0xbU] = 0U;
            __Vtemp644[0xcU] = 0U;
            __Vtemp644[0xdU] = 0U;
            __Vtemp644[0xeU] = 0U;
            __Vtemp644[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp645, __Vtemp644, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp645[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_131 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp646[0U] = 1U;
            __Vtemp646[1U] = 0U;
            __Vtemp646[2U] = 0U;
            __Vtemp646[3U] = 0U;
            __Vtemp646[4U] = 0U;
            __Vtemp646[5U] = 0U;
            __Vtemp646[6U] = 0U;
            __Vtemp646[7U] = 0U;
            __Vtemp646[8U] = 0U;
            __Vtemp646[9U] = 0U;
            __Vtemp646[0xaU] = 0U;
            __Vtemp646[0xbU] = 0U;
            __Vtemp646[0xcU] = 0U;
            __Vtemp646[0xdU] = 0U;
            __Vtemp646[0xeU] = 0U;
            __Vtemp646[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp647, __Vtemp646, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp647[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_130 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp648[0U] = 1U;
            __Vtemp648[1U] = 0U;
            __Vtemp648[2U] = 0U;
            __Vtemp648[3U] = 0U;
            __Vtemp648[4U] = 0U;
            __Vtemp648[5U] = 0U;
            __Vtemp648[6U] = 0U;
            __Vtemp648[7U] = 0U;
            __Vtemp648[8U] = 0U;
            __Vtemp648[9U] = 0U;
            __Vtemp648[0xaU] = 0U;
            __Vtemp648[0xbU] = 0U;
            __Vtemp648[0xcU] = 0U;
            __Vtemp648[0xdU] = 0U;
            __Vtemp648[0xeU] = 0U;
            __Vtemp648[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp649, __Vtemp648, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp649[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_129 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp650[0U] = 1U;
            __Vtemp650[1U] = 0U;
            __Vtemp650[2U] = 0U;
            __Vtemp650[3U] = 0U;
            __Vtemp650[4U] = 0U;
            __Vtemp650[5U] = 0U;
            __Vtemp650[6U] = 0U;
            __Vtemp650[7U] = 0U;
            __Vtemp650[8U] = 0U;
            __Vtemp650[9U] = 0U;
            __Vtemp650[0xaU] = 0U;
            __Vtemp650[0xbU] = 0U;
            __Vtemp650[0xcU] = 0U;
            __Vtemp650[0xdU] = 0U;
            __Vtemp650[0xeU] = 0U;
            __Vtemp650[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp651, __Vtemp650, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp651[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_128 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp652[0U] = 1U;
            __Vtemp652[1U] = 0U;
            __Vtemp652[2U] = 0U;
            __Vtemp652[3U] = 0U;
            __Vtemp652[4U] = 0U;
            __Vtemp652[5U] = 0U;
            __Vtemp652[6U] = 0U;
            __Vtemp652[7U] = 0U;
            __Vtemp652[8U] = 0U;
            __Vtemp652[9U] = 0U;
            __Vtemp652[0xaU] = 0U;
            __Vtemp652[0xbU] = 0U;
            __Vtemp652[0xcU] = 0U;
            __Vtemp652[0xdU] = 0U;
            __Vtemp652[0xeU] = 0U;
            __Vtemp652[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp653, __Vtemp652, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp653[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_127 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
