// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VModulatorRTL.h for the primary calling header

#include "VModulatorRTL.h"
#include "VModulatorRTL__Syms.h"

//==========
SData/*15:0*/ VModulatorRTL::__Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[8];
SData/*15:0*/ VModulatorRTL::__Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[8];

VL_CTOR_IMP(VModulatorRTL) {
    VModulatorRTL__Syms* __restrict vlSymsp = __VlSymsp = new VModulatorRTL__Syms(this, name());
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VModulatorRTL::__Vconfigure(VModulatorRTL__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VModulatorRTL::~VModulatorRTL() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VModulatorRTL::_settle__TOP__3(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_settle__TOP__3\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = (7U & ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data) 
                                  >> 3U));
    vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i 
        = vlTOPp->__Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i
        [vlTOPp->__Vtableidx1];
    vlTOPp->__Vtableidx2 = (7U & (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_data));
    vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q 
        = vlTOPp->__Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q
        [vlTOPp->__Vtableidx2];
    vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
        = ((0U == (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data))
            ? 0xa57ea57eU : ((1U == (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data))
                              ? 0xa57e5a82U : ((2U 
                                                == (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_data))
                                                ? 0x5a82a57eU
                                                : 0x5a825a82U)));
    vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56 
        = ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__unit_valid) 
           & (~ (IData)(vlTOPp->w_en)));
    vlTOPp->data_flow_mod_iq_valid = ((4U & (IData)(vlTOPp->select_1))
                                       ? (IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                       : ((2U & (IData)(vlTOPp->select_1))
                                           ? ((1U & (IData)(vlTOPp->select_1))
                                               ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                               : (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid))
                                           : ((1U & (IData)(vlTOPp->select_1))
                                               ? (IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                               : (IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid))));
    vlTOPp->data_flow_mod_iq_payload_cha_i = (0xffffU 
                                              & ((4U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                                   ? 
                                                  (vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 
                                                   >> 0x10U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->select_1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                                     ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                          >> 2U)))
                                                      ? 0xc349U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                           >> 2U)))
                                                       ? 0xebc3U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data) 
                                                            >> 2U)))
                                                        ? 0x3cb6U
                                                        : 0x143cU)))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                                     ? 
                                                    (vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 
                                                     >> 0x10U)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                                                     ? 
                                                    (((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                                       ? 0x7fff0000U
                                                       : 0x80010000U) 
                                                     >> 0x10U)
                                                     : 0U)))));
    vlTOPp->data_flow_mod_iq_payload_cha_q = (0xffffU 
                                              & ((4U 
                                                  & (IData)(vlTOPp->select_1))
                                                  ? 
                                                 ((IData)(vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56)
                                                   ? vlTOPp->ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlTOPp->select_1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT__unit_valid)
                                                     ? (IData)(vlTOPp->ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q)
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_valid)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                      ? 0xc349U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                       ? 0xebc3U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlTOPp->ModulatorRTL__DOT__qam16_mod__DOT__unit_data)))
                                                        ? 0x3cb6U
                                                        : 0x143cU)))
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlTOPp->select_1))
                                                    ? 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid)
                                                     ? vlTOPp->ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid)
                                                     ? 
                                                    ((IData)(vlTOPp->ModulatorRTL__DOT__bpsk_mod__DOT__unit_data)
                                                      ? 0x7fff0000U
                                                      : 0x80010000U)
                                                     : 0U)))));
}

void VModulatorRTL::_eval_initial(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_eval_initial\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VModulatorRTL::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::final\n"); );
    // Variables
    VModulatorRTL__Syms* __restrict vlSymsp = this->__VlSymsp;
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VModulatorRTL::_eval_settle(VModulatorRTL__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_eval_settle\n"); );
    VModulatorRTL* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VModulatorRTL::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VModulatorRTL::_ctor_var_reset\n"); );
    // Body
    data_flow_unit_data_valid = VL_RAND_RESET_I(1);
    data_flow_unit_data_payload = VL_RAND_RESET_I(32);
    data_flow_mod_iq_valid = VL_RAND_RESET_I(1);
    data_flow_mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    data_flow_mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    w_en = VL_RAND_RESET_I(1);
    w_addr = VL_RAND_RESET_I(11);
    w_data = VL_RAND_RESET_I(32);
    select_1 = VL_RAND_RESET_I(3);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__bpsk_mod__DOT__unit_data = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__bpsk_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__qpsk_mod__DOT___zz___05Fzz_mod_iq_0 = VL_RAND_RESET_I(32);
    ModulatorRTL__DOT__qpsk_mod__DOT__unit_data = VL_RAND_RESET_I(2);
    ModulatorRTL__DOT__qpsk_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__qam16_mod__DOT__unit_data = VL_RAND_RESET_I(4);
    ModulatorRTL__DOT__qam16_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    ModulatorRTL__DOT__qam64_mod__DOT__unit_data = VL_RAND_RESET_I(6);
    ModulatorRTL__DOT__qam64_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__lookup_mod__DOT___zz_code_map_port1 = VL_RAND_RESET_I(32);
    ModulatorRTL__DOT__lookup_mod__DOT__unit_data = VL_RAND_RESET_I(11);
    ModulatorRTL__DOT__lookup_mod__DOT__unit_valid = VL_RAND_RESET_I(1);
    ModulatorRTL__DOT__lookup_mod__DOT__when_lookUpMod_l56 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            ModulatorRTL__DOT__lookup_mod__DOT__code_map[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = 0;
    __Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[0] = 0xbae1U;
    __Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[1] = 0xcea0U;
    __Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[2] = 0xf620U;
    __Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[3] = 0xe260U;
    __Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[4] = 0x451fU;
    __Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[5] = 0x3160U;
    __Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[6] = 0x3160U;
    __Vtable1_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_i[7] = 0x3160U;
    __Vtableidx2 = 0;
    __Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[0] = 0xbae1U;
    __Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[1] = 0xcea0U;
    __Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[2] = 0xf620U;
    __Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[3] = 0xe260U;
    __Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[4] = 0x451fU;
    __Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[5] = 0x3160U;
    __Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[6] = 0x3160U;
    __Vtable2_ModulatorRTL__DOT__qam64_mod__DOT___zz_mod_iq_payload_cha_q[7] = 0x3160U;
    __Vm_traceActivity = 0;
}
