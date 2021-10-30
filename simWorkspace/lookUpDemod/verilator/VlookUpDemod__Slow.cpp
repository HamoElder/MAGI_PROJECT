// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VlookUpDemod.h for the primary calling header

#include "VlookUpDemod.h"
#include "VlookUpDemod__Syms.h"

//==========

VL_CTOR_IMP(VlookUpDemod) {
    VlookUpDemod__Syms* __restrict vlSymsp = __VlSymsp = new VlookUpDemod__Syms(this, name());
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VlookUpDemod::__Vconfigure(VlookUpDemod__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VlookUpDemod::~VlookUpDemod() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VlookUpDemod::_settle__TOP__8(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_settle__TOP__8\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_flow_unit_data_valid = vlTOPp->lookUpDemod__DOT__unit_valid;
    vlTOPp->data_flow_unit_data_payload = (0x7fU & 
                                           (((IData)(vlTOPp->lookUpDemod__DOT__unit_data_i) 
                                             << (IData)(vlTOPp->iq_shift)) 
                                            | (IData)(vlTOPp->lookUpDemod__DOT__unit_data_q)));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7ffeU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | VL_LTS_III(32,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_0), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7ffdU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_1), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 1U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7ffbU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_2), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 2U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7ff7U 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_3), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 3U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7fefU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_4), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 4U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7fdfU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_5), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 5U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7fbfU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_6), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 6U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7f7fU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_7), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 7U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7effU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_8), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 8U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7dffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_9), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 9U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x7bffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_10), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xaU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x77ffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_11), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xbU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x6fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_12), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xcU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x5fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_13), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xdU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_i = ((0x3fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_i)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_i_14), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_i)) 
                                               << 0xeU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7ffeU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | VL_LTS_III(32,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_0), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7ffdU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_1), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 1U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7ffbU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_2), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 2U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7ff7U 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_3), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 3U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7fefU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_4), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 4U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7fdfU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_5), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 5U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7fbfU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_6), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 6U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7f7fU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_7), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 7U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7effU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_8), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 8U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7dffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_9), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 9U));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x7bffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_10), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xaU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x77ffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_11), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xbU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x6fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_12), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xcU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x5fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_13), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xdU));
    vlTOPp->lookUpDemod__DOT__comp_cmp_q = ((0x3fffU 
                                             & (IData)(vlTOPp->lookUpDemod__DOT__comp_cmp_q)) 
                                            | (VL_LTS_III(1,16,16, (IData)(vlTOPp->lookUpDemod__DOT__comp_mem_q_14), (IData)(vlTOPp->lookUpDemod__DOT__demod_data_q)) 
                                               << 0xeU));
}

void VlookUpDemod::_eval_initial(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_eval_initial\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VlookUpDemod::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::final\n"); );
    // Variables
    VlookUpDemod__Syms* __restrict vlSymsp = this->__VlSymsp;
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VlookUpDemod::_eval_settle(VlookUpDemod__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_eval_settle\n"); );
    VlookUpDemod* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__8(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VlookUpDemod::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VlookUpDemod::_ctor_var_reset\n"); );
    // Body
    w_en = VL_RAND_RESET_I(1);
    w_addr = VL_RAND_RESET_I(4);
    w_data = VL_RAND_RESET_I(32);
    w_sel = VL_RAND_RESET_I(2);
    iq_shift = VL_RAND_RESET_I(2);
    data_flow_unit_data_valid = VL_RAND_RESET_I(1);
    data_flow_unit_data_payload = VL_RAND_RESET_I(8);
    data_flow_mod_iq_valid = VL_RAND_RESET_I(1);
    data_flow_mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    data_flow_mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    lookUpDemod__DOT__demod_data_i = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__demod_data_q = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__demod_valid_iq = VL_RAND_RESET_I(1);
    lookUpDemod__DOT__comp_mem_i_0 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_1 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_2 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_3 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_4 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_5 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_6 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_7 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_8 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_9 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_10 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_11 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_12 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_13 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_i_14 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_0 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_1 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_2 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_3 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_4 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_5 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_6 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_7 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_8 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_9 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_10 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_11 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_12 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_13 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__comp_mem_q_14 = VL_RAND_RESET_I(16);
    lookUpDemod__DOT__code_mem_i_0 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_1 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_2 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_3 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_4 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_5 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_6 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_7 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_8 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_9 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_10 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_11 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_12 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_13 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_14 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_i_15 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_0 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_1 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_2 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_3 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_4 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_5 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_6 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_7 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_8 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_9 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_10 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_11 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_12 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_13 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_14 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__code_mem_q_15 = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__comp_cmp_i = VL_RAND_RESET_I(15);
    lookUpDemod__DOT__comp_cmp_q = VL_RAND_RESET_I(15);
    lookUpDemod__DOT__compTable_i = VL_RAND_RESET_I(15);
    lookUpDemod__DOT__compTable_q = VL_RAND_RESET_I(15);
    lookUpDemod__DOT__demod_valid = VL_RAND_RESET_I(1);
    lookUpDemod__DOT__unit_data_i = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__unit_data_q = VL_RAND_RESET_I(4);
    lookUpDemod__DOT__unit_valid = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
