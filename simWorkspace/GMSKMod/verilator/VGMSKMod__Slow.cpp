// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGMSKMod.h for the primary calling header

#include "VGMSKMod.h"
#include "VGMSKMod__Syms.h"

//==========

VL_CTOR_IMP(VGMSKMod) {
    VGMSKMod__Syms* __restrict vlSymsp = __VlSymsp = new VGMSKMod__Syms(this, name());
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VGMSKMod::__Vconfigure(VGMSKMod__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VGMSKMod::~VGMSKMod() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VGMSKMod::_initial__TOP__3(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_initial__TOP__3\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*671:0*/ __Vtemp1[21];
    WData/*671:0*/ __Vtemp2[21];
    // Body
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x61626c65U;
    __Vtemp1[2U] = 0x636f7354U;
    __Vtemp1[3U] = 0x76656c5fU;
    __Vtemp1[4U] = 0x6f706c65U;
    __Vtemp1[5U] = 0x2e765f74U;
    __Vtemp1[6U] = 0x4b4d6f64U;
    __Vtemp1[7U] = 0x2f474d53U;
    __Vtemp1[8U] = 0x6f625f31U;
    __Vtemp1[9U] = 0x6d702f6aU;
    __Vtemp1[0xaU] = 0x43542f74U;
    __Vtemp1[0xbU] = 0x524f4a45U;
    __Vtemp1[0xcU] = 0x47495f50U;
    __Vtemp1[0xdU] = 0x732f4d41U;
    __Vtemp1[0xeU] = 0x6a656374U;
    __Vtemp1[0xfU] = 0x6150726fU;
    __Vtemp1[0x10U] = 0x2f496465U;
    __Vtemp1[0x11U] = 0x646f776eU;
    __Vtemp1[0x12U] = 0x6d697373U;
    __Vtemp1[0x13U] = 0x6f6d652fU;
    __Vtemp1[0x14U] = 0x2f68U;
    VL_READMEM_N(false, 16, 2048, 0, VL_CVT_PACK_STR_NW(21, __Vtemp1)
                 , vlTOPp->GMSKMod__DOT__cosTable, 0
                 , ~VL_ULL(0));
    __Vtemp2[0U] = 0x2e62696eU;
    __Vtemp2[1U] = 0x61626c65U;
    __Vtemp2[2U] = 0x73696e54U;
    __Vtemp2[3U] = 0x76656c5fU;
    __Vtemp2[4U] = 0x6f706c65U;
    __Vtemp2[5U] = 0x2e765f74U;
    __Vtemp2[6U] = 0x4b4d6f64U;
    __Vtemp2[7U] = 0x2f474d53U;
    __Vtemp2[8U] = 0x6f625f31U;
    __Vtemp2[9U] = 0x6d702f6aU;
    __Vtemp2[0xaU] = 0x43542f74U;
    __Vtemp2[0xbU] = 0x524f4a45U;
    __Vtemp2[0xcU] = 0x47495f50U;
    __Vtemp2[0xdU] = 0x732f4d41U;
    __Vtemp2[0xeU] = 0x6a656374U;
    __Vtemp2[0xfU] = 0x6150726fU;
    __Vtemp2[0x10U] = 0x2f496465U;
    __Vtemp2[0x11U] = 0x646f776eU;
    __Vtemp2[0x12U] = 0x6d697373U;
    __Vtemp2[0x13U] = 0x6f6d652fU;
    __Vtemp2[0x14U] = 0x2f68U;
    VL_READMEM_N(false, 16, 2048, 0, VL_CVT_PACK_STR_NW(21, __Vtemp2)
                 , vlTOPp->GMSKMod__DOT__sinTable, 0
                 , ~VL_ULL(0));
}

void VGMSKMod::_settle__TOP__4(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_settle__TOP__4\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mod_iq_valid = vlTOPp->GMSKMod__DOT__mod_valid_next_regNext;
    vlTOPp->mod_iq_payload_fragment_cha_i = vlTOPp->GMSKMod__DOT___zz_cosTable_port0;
    vlTOPp->mod_iq_payload_fragment_cha_q = vlTOPp->GMSKMod__DOT___zz_sinTable_port0;
    vlTOPp->mod_iq_payload_last = vlTOPp->GMSKMod__DOT__mod_last_next_regNext;
    vlTOPp->GMSKMod__DOT__sum_value = (0xfffU & ((IData)(vlTOPp->GMSKMod__DOT__phi_integral) 
                                                 + 
                                                 VL_SHIFTRS_III(12,12,32, (IData)(vlTOPp->GMSKMod__DOT__symbol_filter__DOT__filtered_data), 3U)));
}

void VGMSKMod::_eval_initial(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_eval_initial\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = (1U & (~ (IData)(vlTOPp->clk)));
    vlTOPp->__Vclklast__TOP__reset = (1U & (~ (IData)(vlTOPp->reset)));
    vlTOPp->_initial__TOP__3(vlSymsp);
}

void VGMSKMod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::final\n"); );
    // Variables
    VGMSKMod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VGMSKMod::_eval_settle(VGMSKMod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_eval_settle\n"); );
    VGMSKMod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VGMSKMod::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGMSKMod::_ctor_var_reset\n"); );
    // Body
    unit_data_valid = VL_RAND_RESET_I(1);
    unit_data_payload_last = VL_RAND_RESET_I(1);
    unit_data_payload_fragment = VL_RAND_RESET_I(1);
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_payload_last = VL_RAND_RESET_I(1);
    mod_iq_payload_fragment_cha_i = VL_RAND_RESET_I(16);
    mod_iq_payload_fragment_cha_q = VL_RAND_RESET_I(16);
    clk = 0;
    reset = 0;
    GMSKMod__DOT___zz_cosTable_port0 = VL_RAND_RESET_I(16);
    GMSKMod__DOT___zz_sinTable_port0 = VL_RAND_RESET_I(16);
    GMSKMod__DOT__phi_integral = VL_RAND_RESET_I(12);
    GMSKMod__DOT__mod_valid_next = VL_RAND_RESET_I(1);
    GMSKMod__DOT__mod_last_next = VL_RAND_RESET_I(1);
    GMSKMod__DOT__sum_value = VL_RAND_RESET_I(12);
    GMSKMod__DOT__mod_valid_next_regNext = VL_RAND_RESET_I(1);
    GMSKMod__DOT__mod_last_next_regNext = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            GMSKMod__DOT__cosTable[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            GMSKMod__DOT__sinTable[__Vi0] = VL_RAND_RESET_I(16);
    }}
    GMSKMod__DOT__symbol_filter__DOT__raw_valid_next = VL_RAND_RESET_I(1);
    GMSKMod__DOT__symbol_filter__DOT__raw_last_next = VL_RAND_RESET_I(1);
    GMSKMod__DOT__symbol_filter__DOT__data_buf_0 = VL_RAND_RESET_I(2);
    GMSKMod__DOT__symbol_filter__DOT__data_buf_1 = VL_RAND_RESET_I(2);
    GMSKMod__DOT__symbol_filter__DOT__data_buf_2 = VL_RAND_RESET_I(2);
    GMSKMod__DOT__symbol_filter__DOT__filtered_data = VL_RAND_RESET_I(12);
    GMSKMod__DOT__symbol_filter__DOT__raw_valid_next_regNext = VL_RAND_RESET_I(1);
    GMSKMod__DOT__symbol_filter__DOT__raw_last_next_regNext = VL_RAND_RESET_I(1);
    __Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_0 = VL_RAND_RESET_I(2);
    __Vdly__GMSKMod__DOT__symbol_filter__DOT__data_buf_1 = VL_RAND_RESET_I(2);
    __Vm_traceActivity = 0;
}
