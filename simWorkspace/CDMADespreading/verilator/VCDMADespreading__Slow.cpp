// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCDMADespreading.h for the primary calling header

#include "VCDMADespreading.h"  // For This
#include "VCDMADespreading__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VCDMADespreading) {
    VCDMADespreading__Syms* __restrict vlSymsp = __VlSymsp = new VCDMADespreading__Syms(this, name());
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VCDMADespreading::__Vconfigure(VCDMADespreading__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VCDMADespreading::~VCDMADespreading() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VCDMADespreading::_initial__TOP__1(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_initial__TOP__1\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,319,0,10);
    // Body
    // INITIAL at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:111
    __Vtemp1[0U] = 0x2e62696eU;
    __Vtemp1[1U] = 0x5f6d6170U;
    __Vtemp1[2U] = 0x636f6465U;
    __Vtemp1[3U] = 0x76656c5fU;
    __Vtemp1[4U] = 0x6f706c65U;
    __Vtemp1[5U] = 0x2e765f74U;
    __Vtemp1[6U] = 0x64696e67U;
    __Vtemp1[7U] = 0x70726561U;
    __Vtemp1[8U] = 0x41446573U;
    __Vtemp1[9U] = 0x43444dU;
    VL_READMEM_W (false,8,8, 0,10, __Vtemp1, vlTOPp->CDMADespreading__DOT__code_map
		  ,0,~0);
}

void VCDMADespreading::_settle__TOP__15(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_settle__TOP__15\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/crystal/project/MAGI_PROJECT/tmp/job_1/CDMADespreading.v:232
    vlTOPp->CDMADespreading__DOT___zz_1 = 0U;
    if (vlTOPp->w_en) {
	vlTOPp->CDMADespreading__DOT___zz_1 = 1U;
    }
    vlTOPp->base_sub_iqs_0_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_0_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_1_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_1_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_2_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_2_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_3_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_3_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_4_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_4_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_5_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_5_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_6_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_6_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_7_payload_cha_i = vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next_regNext;
    vlTOPp->base_sub_iqs_7_payload_cha_q = vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next_regNext;
    vlTOPp->base_sub_iqs_0_valid = vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_1_valid = vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_2_valid = vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_3_valid = vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_4_valid = vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_5_valid = vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_6_valid = vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT___zz_base_iq_valid;
    vlTOPp->base_sub_iqs_7_valid = vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT___zz_base_iq_valid;
    vlTOPp->CDMADespreading__DOT___zz_code_map_port0 
	= vlTOPp->CDMADespreading__DOT__code_map[0U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port1 
	= vlTOPp->CDMADespreading__DOT__code_map[1U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port2 
	= vlTOPp->CDMADespreading__DOT__code_map[2U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port3 
	= vlTOPp->CDMADespreading__DOT__code_map[3U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port4 
	= vlTOPp->CDMADespreading__DOT__code_map[4U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port5 
	= vlTOPp->CDMADespreading__DOT__code_map[5U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port6 
	= vlTOPp->CDMADespreading__DOT__code_map[6U];
    vlTOPp->CDMADespreading__DOT___zz_code_map_port7 
	= vlTOPp->CDMADespreading__DOT__code_map[7U];
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT___zz_cnt 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt)));
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port0) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port0) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port1) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port1) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port2) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port2) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port3) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port3) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port4) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port4) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port5) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port5) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port6) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port6) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_i 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port7) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_i)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_i))));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_q 
	= (0xffffU & ((1U & ((IData)(vlTOPp->CDMADespreading__DOT___zz_code_map_port7) 
			     >> (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__cnt)))
		       ? (IData)(vlTOPp->mod_iq_payload_cha_q)
		       : VL_NEGATE_I((IData)(vlTOPp->mod_iq_payload_cha_q))));
}

void VCDMADespreading::_settle__TOP__17(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_settle__TOP__17\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_i) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_i)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7)));
    vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q_next 
	= (0xffffU & (((IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__base_q) 
		       + (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__data_q)) 
		      - (IData)(vlTOPp->CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7)));
}

void VCDMADespreading::_eval_initial(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_eval_initial\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

void VCDMADespreading::final() {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::final\n"); );
    // Variables
    VCDMADespreading__Syms* __restrict vlSymsp = this->__VlSymsp;
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VCDMADespreading::_eval_settle(VCDMADespreading__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_eval_settle\n"); );
    VCDMADespreading* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlTOPp->_settle__TOP__17(vlSymsp);
}

void VCDMADespreading::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_ctor_var_reset\n"); );
    // Body
    w_en = VL_RAND_RESET_I(1);
    w_addr = VL_RAND_RESET_I(3);
    w_data = VL_RAND_RESET_I(8);
    clc = VL_RAND_RESET_I(1);
    cnt_limit = VL_RAND_RESET_I(3);
    mod_iq_valid = VL_RAND_RESET_I(1);
    mod_iq_ready = VL_RAND_RESET_I(1);
    mod_iq_payload_cha_i = VL_RAND_RESET_I(16);
    mod_iq_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_0_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_0_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_0_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_1_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_1_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_1_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_2_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_2_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_2_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_3_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_3_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_3_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_4_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_4_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_4_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_5_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_5_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_5_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_6_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_6_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_6_payload_cha_q = VL_RAND_RESET_I(16);
    base_sub_iqs_7_valid = VL_RAND_RESET_I(1);
    base_sub_iqs_7_payload_cha_i = VL_RAND_RESET_I(16);
    base_sub_iqs_7_payload_cha_q = VL_RAND_RESET_I(16);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    CDMADespreading__DOT___zz_code_map_port0 = VL_RAND_RESET_I(8);
    CDMADespreading__DOT___zz_code_map_port1 = VL_RAND_RESET_I(8);
    CDMADespreading__DOT___zz_code_map_port2 = VL_RAND_RESET_I(8);
    CDMADespreading__DOT___zz_code_map_port3 = VL_RAND_RESET_I(8);
    CDMADespreading__DOT___zz_code_map_port4 = VL_RAND_RESET_I(8);
    CDMADespreading__DOT___zz_code_map_port5 = VL_RAND_RESET_I(8);
    CDMADespreading__DOT___zz_code_map_port6 = VL_RAND_RESET_I(8);
    CDMADespreading__DOT___zz_code_map_port7 = VL_RAND_RESET_I(8);
    CDMADespreading__DOT___zz_1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
	    CDMADespreading__DOT__code_map[__Vi0] = VL_RAND_RESET_I(8);
    }}
    CDMADespreading__DOT__computeUnit_8__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_8__DOT__base_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__base_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_8__DOT__data_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__data_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__base_i_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__base_q_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_9__DOT__base_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__base_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_9__DOT__data_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__data_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__base_i_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__base_q_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_10__DOT__base_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__base_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_10__DOT__data_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__data_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__base_i_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__base_q_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_11__DOT__base_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__base_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_11__DOT__data_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__data_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__base_i_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__base_q_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_12__DOT__base_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__base_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_12__DOT__data_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__data_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__base_i_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__base_q_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_13__DOT__base_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__base_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_13__DOT__data_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__data_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__base_i_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__base_q_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_14__DOT__base_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__base_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_14__DOT__data_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__data_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__base_i_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__base_q_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT___zz_cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_15__DOT__base_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__base_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__cnt = VL_RAND_RESET_I(3);
    CDMADespreading__DOT__computeUnit_15__DOT__data_i = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__data_q = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__base_i_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__base_q_next = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__base_i_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__base_q_next_regNext = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT___zz_base_iq_valid = VL_RAND_RESET_I(1);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_7 = VL_RAND_RESET_I(16);
    __Vdlyvdim0__CDMADespreading__DOT__code_map__v0 = VL_RAND_RESET_I(3);
    __Vdlyvval__CDMADespreading__DOT__code_map__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__CDMADespreading__DOT__code_map__v0 = VL_RAND_RESET_I(1);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_8__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_9__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_10__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_11__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_12__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_13__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_14__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_16__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_0 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_1 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_2 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_3 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_4 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_5 = VL_RAND_RESET_I(16);
    __Vdly__CDMADespreading__DOT__computeUnit_15__DOT__shiftRegister_17__DOT__shift_reg_6 = VL_RAND_RESET_I(16);
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__reset = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VCDMADespreading::_configure_coverage(VCDMADespreading__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VCDMADespreading::_configure_coverage\n"); );
}
