// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCDMASpreading.h for the primary calling header

#include "VCDMASpreading.h"    // For This
#include "VCDMASpreading__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCDMASpreading) {
    VCDMASpreading__Syms* __restrict vlSymsp = __VlSymsp = new VCDMASpreading__Syms(this, name());
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCDMASpreading::__Vconfigure(VCDMASpreading__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCDMASpreading::~VCDMASpreading() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VCDMASpreading::_initial__TOP__1(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_initial__TOP__1\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,319,0,10);
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:124
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d6170U;
    __Vtemp1[2U] = 0x636f6465U;
    __Vtemp1[3U] = 0x76656c5fU;
    __Vtemp1[4U] = 0x6f706c65U;
    __Vtemp1[5U] = 0x2e765f74U;
    __Vtemp1[6U] = 0x64696e67U;
    __Vtemp1[7U] = 0x70726561U;
    __Vtemp1[8U] = 0x444d4153U;
    __Vtemp1[9U] = 0x43U;
    VL_READMEM_W (false,8,8, 0,10, __Vtemp1, vlTOPp->CDMASpreading__DOT__code_map
		  ,0,~0);
}

void VCDMASpreading::_settle__TOP__7(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_settle__TOP__7\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMASpreading.v:229
    vlTOPp->CDMASpreading__DOT___zz_1 = 0U;
    if (vlTOPp->w_en) {
	vlTOPp->CDMASpreading__DOT___zz_1 = 1U;
    }
    vlTOPp->mod_sub_iqs_0_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_i;
    vlTOPp->mod_sub_iqs_0_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_q;
    vlTOPp->mod_sub_iqs_0_valid = vlTOPp->CDMASpreading__DOT__computeUnit_8__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_1_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_i;
    vlTOPp->mod_sub_iqs_1_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_q;
    vlTOPp->mod_sub_iqs_1_valid = vlTOPp->CDMASpreading__DOT__computeUnit_9__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_2_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_i;
    vlTOPp->mod_sub_iqs_2_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_q;
    vlTOPp->mod_sub_iqs_2_valid = vlTOPp->CDMASpreading__DOT__computeUnit_10__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_3_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_i;
    vlTOPp->mod_sub_iqs_3_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_q;
    vlTOPp->mod_sub_iqs_3_valid = vlTOPp->CDMASpreading__DOT__computeUnit_11__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_4_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_i;
    vlTOPp->mod_sub_iqs_4_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_q;
    vlTOPp->mod_sub_iqs_4_valid = vlTOPp->CDMASpreading__DOT__computeUnit_12__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_5_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_i;
    vlTOPp->mod_sub_iqs_5_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_q;
    vlTOPp->mod_sub_iqs_5_valid = vlTOPp->CDMASpreading__DOT__computeUnit_13__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_6_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_i;
    vlTOPp->mod_sub_iqs_6_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_q;
    vlTOPp->mod_sub_iqs_6_valid = vlTOPp->CDMASpreading__DOT__computeUnit_14__DOT__mod_valid;
    vlTOPp->mod_sub_iqs_7_payload_cha_i = vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_i;
    vlTOPp->mod_sub_iqs_7_payload_cha_q = vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_q;
    vlTOPp->mod_sub_iqs_7_valid = vlTOPp->CDMASpreading__DOT__computeUnit_15__DOT__mod_valid;
}

void VCDMASpreading::_settle__TOP__10(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_settle__TOP__10\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CDMASpreading__DOT___zz_cnt = (7U & ((IData)(1U) 
						 + (IData)(vlTOPp->CDMASpreading__DOT__cnt)));
    vlTOPp->CDMASpreading__DOT__when_CDMASpreading_l65 
	= (0U == (IData)(vlTOPp->CDMASpreading__DOT__cnt));
    vlTOPp->CDMASpreading__DOT___zz_code_map_port0 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port1 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port2 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port3 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port4 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port5 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port6 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->CDMASpreading__DOT___zz_code_map_port7 
	= vlTOPp->CDMASpreading__DOT__code_map[vlTOPp->CDMASpreading__DOT__cnt];
    vlTOPp->base_iq_ready = ((0U == (IData)(vlTOPp->CDMASpreading__DOT__cnt)) 
			     & (~ (IData)(vlTOPp->clc)));
}

void VCDMASpreading::_settle__TOP__12(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_settle__TOP__12\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CDMASpreading__DOT__when_CDMASpreading_l51 
	= (((IData)(vlTOPp->base_iq_valid) & (IData)(vlTOPp->base_iq_ready)) 
	   | (0U != (IData)(vlTOPp->CDMASpreading__DOT__cnt)));
}

void VCDMASpreading::_eval_initial(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_eval_initial\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCDMASpreading::final() {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::final\n"); );
    // Variables
    VCDMASpreading__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCDMASpreading::_eval_settle(VCDMASpreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_eval_settle\n"); );
    VCDMASpreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__10(vlSymsp);
    vlTOPp->_settle__TOP__12(vlSymsp);
}

void VCDMASpreading::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_ctor_var_reset\n"); );
    // Body
    w_en = VL_RAND_RESET_I(1);
    w_addr = VL_RAND_RESET_I(3);
    w_data = VL_RAND_RESET_I(8);
    clc = VL_RAND_RESET_I(1);
    cnt_limit = VL_RAND_RESET_I(3);
    base_iq_valid = VL_RAND_RESET_I(1);
    base_iq_ready = VL_RAND_RESET_I(1);
    base_iq_payload_0_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_0_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_1_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_1_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_2_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_2_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_3_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_3_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_4_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_4_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_5_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_5_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_6_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_6_cha_q = VL_RAND_RESET_I(16);
    base_iq_payload_7_cha_i = VL_RAND_RESET_I(16);
    base_iq_payload_7_cha_q = VL_RAND_RESET_I(16);
    mod_sub_iqs_0_valid = VL_RAND_RESET_I(1);
    mod_sub_iqs_0_payload_cha_i = VL_RAND_RESET_I(16);
    mod_sub_iqs_0_payload_cha_q = VL_RAND_RESET_I(16);
    mod_sub_iqs_1_valid = VL_RAND_RESET_I(1);
    mod_sub_iqs_1_payload_cha_i = VL_RAND_RESET_I(16);
    mod_sub_iqs_1_payload_cha_q = VL_RAND_RESET_I(16);
    mod_sub_iqs_2_valid = VL_RAND_RESET_I(1);
    mod_sub_iqs_2_payload_cha_i = VL_RAND_RESET_I(16);
    mod_sub_iqs_2_payload_cha_q = VL_RAND_RESET_I(16);
    mod_sub_iqs_3_valid = VL_RAND_RESET_I(1);
    mod_sub_iqs_3_payload_cha_i = VL_RAND_RESET_I(16);
    mod_sub_iqs_3_payload_cha_q = VL_RAND_RESET_I(16);
    mod_sub_iqs_4_valid = VL_RAND_RESET_I(1);
    mod_sub_iqs_4_payload_cha_i = VL_RAND_RESET_I(16);
    mod_sub_iqs_4_payload_cha_q = VL_RAND_RESET_I(16);
    mod_sub_iqs_5_valid = VL_RAND_RESET_I(1);
    mod_sub_iqs_5_payload_cha_i = VL_RAND_RESET_I(16);
    mod_sub_iqs_5_payload_cha_q = VL_RAND_RESET_I(16);
    mod_sub_iqs_6_valid = VL_RAND_RESET_I(1);
    mod_sub_iqs_6_payload_cha_i = VL_RAND_RESET_I(16);
    mod_sub_iqs_6_payload_cha_q = VL_RAND_RESET_I(16);
    mod_sub_iqs_7_valid = VL_RAND_RESET_I(1);
    mod_sub_iqs_7_payload_cha_i = VL_RAND_RESET_I(16);
    mod_sub_iqs_7_payload_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code_map_port0 = VL_RAND_RESET_I(8);
    CDMASpreading__DOT___zz_code_map_port1 = VL_RAND_RESET_I(8);
    CDMASpreading__DOT___zz_code_map_port2 = VL_RAND_RESET_I(8);
    CDMASpreading__DOT___zz_code_map_port3 = VL_RAND_RESET_I(8);
    CDMASpreading__DOT___zz_code_map_port4 = VL_RAND_RESET_I(8);
    CDMASpreading__DOT___zz_code_map_port5 = VL_RAND_RESET_I(8);
    CDMASpreading__DOT___zz_code_map_port6 = VL_RAND_RESET_I(8);
    CDMASpreading__DOT___zz_code_map_port7 = VL_RAND_RESET_I(8);
    CDMASpreading__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMASpreading__DOT___zz_1 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__cnt = VL_RAND_RESET_I(3);
    CDMASpreading__DOT__flow_iq_data_vec_0_cha_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_0_cha_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_1_cha_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_1_cha_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_2_cha_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_2_cha_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_3_cha_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_3_cha_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_4_cha_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_4_cha_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_5_cha_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_5_cha_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_6_cha_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_6_cha_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_7_cha_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_data_vec_7_cha_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__flow_iq_valid = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code_1 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code_2 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code_3 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code_4 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code_5 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code_6 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT___zz_code_7 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__when_CDMASpreading_l51 = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__when_CDMASpreading_l65 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    CDMASpreading__DOT__code_map[__Vi0] = VL_RAND_RESET_I(8);
    }}
    CDMASpreading__DOT__computeUnit_8__DOT__mod_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_8__DOT__mod_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_8__DOT__mod_valid = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__computeUnit_9__DOT__mod_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_9__DOT__mod_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_9__DOT__mod_valid = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__computeUnit_10__DOT__mod_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_10__DOT__mod_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_10__DOT__mod_valid = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__computeUnit_11__DOT__mod_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_11__DOT__mod_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_11__DOT__mod_valid = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__computeUnit_12__DOT__mod_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_12__DOT__mod_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_12__DOT__mod_valid = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__computeUnit_13__DOT__mod_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_13__DOT__mod_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_13__DOT__mod_valid = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__computeUnit_14__DOT__mod_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_14__DOT__mod_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_14__DOT__mod_valid = VL_RAND_RESET_I(1);
    CDMASpreading__DOT__computeUnit_15__DOT__mod_i = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_15__DOT__mod_q = VL_RAND_RESET_I(16);
    CDMASpreading__DOT__computeUnit_15__DOT__mod_valid = VL_RAND_RESET_I(1);
    __Vdly__CDMASpreading__DOT__cnt = VL_RAND_RESET_I(3);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VCDMASpreading::_configure_coverage(VCDMASpreading__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMASpreading::_configure_coverage\n"); );
}
