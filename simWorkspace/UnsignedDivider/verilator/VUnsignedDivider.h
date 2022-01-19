// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VUnsignedDivider_H_
#define _VUnsignedDivider_H_

#include "verilated.h"
class VUnsignedDivider__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VUnsignedDivider) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(flush,0,0);
    VL_IN8(cmd_valid,0,0);
    VL_OUT8(cmd_ready,0,0);
    VL_OUT8(rsp_valid,0,0);
    VL_IN8(rsp_ready,0,0);
    VL_OUT8(rsp_payload_error,0,0);
    VL_IN16(cmd_payload_numerator,15,0);
    VL_IN16(cmd_payload_denominator,15,0);
    VL_OUT16(rsp_payload_quotient,15,0);
    VL_OUT16(rsp_payload_remainder,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_1,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_2,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_3,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_4,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_5,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_6,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_7,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_8,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_9,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_10,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_11,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_12,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_13,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_14,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_15,0,0);
    VL_SIG8(UnsignedDivider__DOT___zz_rsp_valid_16,0,0);
    //char	__VpadToAlign37[1];
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_1,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_2,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_3,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_4,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_5,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_6,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_7,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_8,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_9,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_10,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_11,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_12,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_13,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_14,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_15,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_16,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_17,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_18,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_19,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_20,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_21,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_22,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_23,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_24,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_25,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_26,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_27,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_28,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_29,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_30,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_31,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_32,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_error,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_33,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_34,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_35,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_36,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_37,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_38,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_39,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_40,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_41,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_42,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_43,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_44,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_45,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_46,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_47,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_quotient_48,15,0);
    VL_SIG16(UnsignedDivider__DOT___zz_rsp_payload_remainder,15,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_49,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_50,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_51,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_52,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_53,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_54,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_55,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_56,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_57,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_58,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_59,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_60,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_61,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_62,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_63,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_64,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_65,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_66,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_67,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_68,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_69,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_70,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_71,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_72,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_73,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_74,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_75,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_76,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_77,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_78,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_79,16,0);
    VL_SIG(UnsignedDivider__DOT___zz_rsp_payload_quotient_80,16,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_5,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_6,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_7,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_8,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_9,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_10,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_11,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_12,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_13,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_14,0,0);
    VL_SIG8(__Vdly__UnsignedDivider__DOT___zz_rsp_valid_15,0,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign285[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VUnsignedDivider__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VUnsignedDivider& operator= (const VUnsignedDivider&);	///< Copying not allowed
    VUnsignedDivider(const VUnsignedDivider&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VUnsignedDivider(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VUnsignedDivider();
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
    static void _eval_initial_loop(VUnsignedDivider__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VUnsignedDivider__Syms* symsp, bool first);
  private:
    static QData	_change_request(VUnsignedDivider__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VUnsignedDivider__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__7(VUnsignedDivider__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VUnsignedDivider__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	_eval_initial(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	_eval_settle(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(VUnsignedDivider__Syms* __restrict vlSymsp);
    static void	traceChgThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VUnsignedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
