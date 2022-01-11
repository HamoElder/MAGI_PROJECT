// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCDMASpreading_H_
#define _VCDMASpreading_H_

#include "verilated.h"
#include "VCDMASpreading__Inlines.h"
class VCDMASpreading__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCDMASpreading) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(w_en,0,0);
    VL_IN8(w_addr,2,0);
    VL_IN8(w_data,7,0);
    VL_IN8(clc,0,0);
    VL_IN8(cnt_limit,2,0);
    VL_IN8(base_iq_valid,0,0);
    VL_OUT8(base_iq_ready,0,0);
    VL_OUT8(mod_sub_iqs_0_valid,0,0);
    VL_OUT8(mod_sub_iqs_1_valid,0,0);
    VL_OUT8(mod_sub_iqs_2_valid,0,0);
    VL_OUT8(mod_sub_iqs_3_valid,0,0);
    VL_OUT8(mod_sub_iqs_4_valid,0,0);
    VL_OUT8(mod_sub_iqs_5_valid,0,0);
    VL_OUT8(mod_sub_iqs_6_valid,0,0);
    VL_OUT8(mod_sub_iqs_7_valid,0,0);
    //char	__VpadToAlign17[1];
    VL_IN16(base_iq_payload_0_cha_i,15,0);
    VL_IN16(base_iq_payload_0_cha_q,15,0);
    VL_IN16(base_iq_payload_1_cha_i,15,0);
    VL_IN16(base_iq_payload_1_cha_q,15,0);
    VL_IN16(base_iq_payload_2_cha_i,15,0);
    VL_IN16(base_iq_payload_2_cha_q,15,0);
    VL_IN16(base_iq_payload_3_cha_i,15,0);
    VL_IN16(base_iq_payload_3_cha_q,15,0);
    VL_IN16(base_iq_payload_4_cha_i,15,0);
    VL_IN16(base_iq_payload_4_cha_q,15,0);
    VL_IN16(base_iq_payload_5_cha_i,15,0);
    VL_IN16(base_iq_payload_5_cha_q,15,0);
    VL_IN16(base_iq_payload_6_cha_i,15,0);
    VL_IN16(base_iq_payload_6_cha_q,15,0);
    VL_IN16(base_iq_payload_7_cha_i,15,0);
    VL_IN16(base_iq_payload_7_cha_q,15,0);
    VL_OUT16(mod_sub_iqs_0_payload_cha_i,15,0);
    VL_OUT16(mod_sub_iqs_0_payload_cha_q,15,0);
    VL_OUT16(mod_sub_iqs_1_payload_cha_i,15,0);
    VL_OUT16(mod_sub_iqs_1_payload_cha_q,15,0);
    VL_OUT16(mod_sub_iqs_2_payload_cha_i,15,0);
    VL_OUT16(mod_sub_iqs_2_payload_cha_q,15,0);
    VL_OUT16(mod_sub_iqs_3_payload_cha_i,15,0);
    VL_OUT16(mod_sub_iqs_3_payload_cha_q,15,0);
    VL_OUT16(mod_sub_iqs_4_payload_cha_i,15,0);
    VL_OUT16(mod_sub_iqs_4_payload_cha_q,15,0);
    VL_OUT16(mod_sub_iqs_5_payload_cha_i,15,0);
    VL_OUT16(mod_sub_iqs_5_payload_cha_q,15,0);
    VL_OUT16(mod_sub_iqs_6_payload_cha_i,15,0);
    VL_OUT16(mod_sub_iqs_6_payload_cha_q,15,0);
    VL_OUT16(mod_sub_iqs_7_payload_cha_i,15,0);
    VL_OUT16(mod_sub_iqs_7_payload_cha_q,15,0);
    //char	__VpadToAlign82[2];
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(CDMASpreading__DOT___zz_code_map_port0,7,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_map_port1,7,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_map_port2,7,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_map_port3,7,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_map_port4,7,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_map_port5,7,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_map_port6,7,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_map_port7,7,0);
    VL_SIG8(CDMASpreading__DOT___zz_cnt,2,0);
    VL_SIG8(CDMASpreading__DOT___zz_1,0,0);
    VL_SIG8(CDMASpreading__DOT__cnt,2,0);
    VL_SIG8(CDMASpreading__DOT__flow_iq_valid,0,0);
    VL_SIG8(CDMASpreading__DOT___zz_code,0,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_1,0,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_2,0,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_3,0,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_4,0,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_5,0,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_6,0,0);
    VL_SIG8(CDMASpreading__DOT___zz_code_7,0,0);
    VL_SIG8(CDMASpreading__DOT__when_CDMASpreading_l51,0,0);
    VL_SIG8(CDMASpreading__DOT__when_CDMASpreading_l65,0,0);
    VL_SIG8(CDMASpreading__DOT__computeUnit_8__DOT__mod_valid,0,0);
    VL_SIG8(CDMASpreading__DOT__computeUnit_9__DOT__mod_valid,0,0);
    VL_SIG8(CDMASpreading__DOT__computeUnit_10__DOT__mod_valid,0,0);
    VL_SIG8(CDMASpreading__DOT__computeUnit_11__DOT__mod_valid,0,0);
    VL_SIG8(CDMASpreading__DOT__computeUnit_12__DOT__mod_valid,0,0);
    VL_SIG8(CDMASpreading__DOT__computeUnit_13__DOT__mod_valid,0,0);
    VL_SIG8(CDMASpreading__DOT__computeUnit_14__DOT__mod_valid,0,0);
    VL_SIG8(CDMASpreading__DOT__computeUnit_15__DOT__mod_valid,0,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_0_cha_i,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_0_cha_q,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_1_cha_i,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_1_cha_q,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_2_cha_i,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_2_cha_q,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_3_cha_i,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_3_cha_q,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_4_cha_i,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_4_cha_q,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_5_cha_i,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_5_cha_q,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_6_cha_i,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_6_cha_q,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_7_cha_i,15,0);
    VL_SIG16(CDMASpreading__DOT__flow_iq_data_vec_7_cha_q,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_8__DOT__mod_i,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_8__DOT__mod_q,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_9__DOT__mod_i,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_9__DOT__mod_q,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_10__DOT__mod_i,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_10__DOT__mod_q,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_11__DOT__mod_i,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_11__DOT__mod_q,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_12__DOT__mod_i,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_12__DOT__mod_q,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_13__DOT__mod_i,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_13__DOT__mod_q,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_14__DOT__mod_i,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_14__DOT__mod_q,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_15__DOT__mod_i,15,0);
    VL_SIG16(CDMASpreading__DOT__computeUnit_15__DOT__mod_q,15,0);
    //char	__VpadToAlign182[2];
    VL_SIG8(CDMASpreading__DOT__code_map[8],7,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__CDMASpreading__DOT__cnt,2,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign199[1];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCDMASpreading__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCDMASpreading& operator= (const VCDMASpreading&);	///< Copying not allowed
    VCDMASpreading(const VCDMASpreading&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCDMASpreading(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCDMASpreading();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCDMASpreading__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCDMASpreading__Syms* symsp, bool first);
  private:
    static QData	_change_request(VCDMASpreading__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VCDMASpreading__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__11(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_combo__TOP__6(VCDMASpreading__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VCDMASpreading__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_eval_initial(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_eval_settle(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__9(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_settle__TOP__10(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_settle__TOP__12(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VCDMASpreading__Syms* __restrict vlSymsp);
    static void	traceChgThis(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VCDMASpreading__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
