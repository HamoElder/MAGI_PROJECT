// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMixedDivider_H_
#define _VMixedDivider_H_

#include "verilated.h"
class VMixedDivider__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VMixedDivider) {
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
    VL_IN8(cmd_payload_signed,0,0);
    VL_OUT8(rsp_valid,0,0);
    VL_IN8(rsp_ready,0,0);
    VL_OUT8(rsp_payload_error,0,0);
    //char	__VpadToAlign9[1];
    VL_IN16(cmd_payload_numerator,15,0);
    VL_IN16(cmd_payload_denominator,15,0);
    VL_OUT16(rsp_payload_quotient,15,0);
    VL_OUT16(rsp_payload_remainder,15,0);
    //char	__VpadToAlign18[2];
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(MixedDivider__DOT__divider_cmd_payload_context,1,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92,1,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT___zz_cmd_ready,0,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT___zz_rsp_valid,0,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT___zz_1,0,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT___zz_2,0,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT___zz_3,3,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT___zz_4,3,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT___zz_6,0,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT___zz_rsp_payload_context,1,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT__cmd_fire,0,0);
    VL_SIG8(MixedDivider__DOT__divider__DOT__rsp_fire,0,0);
    VL_SIG16(MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient,15,0);
    VL_SIG16(MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_1,15,0);
    VL_SIG16(MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_2,15,0);
    //char	__VpadToAlign42[2];
    VL_SIG(MixedDivider__DOT__divider__DOT___zz___05Fzz_rsp_payload_quotient,16,0);
    VL_SIG(MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_3,16,0);
    VL_SIG(MixedDivider__DOT__divider__DOT___zz_rsp_payload_quotient_4,16,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__MixedDivider__DOT__divider__DOT__switch_UnsignedDivider_l92,1,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign63[1];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMixedDivider__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VMixedDivider& operator= (const VMixedDivider&);	///< Copying not allowed
    VMixedDivider(const VMixedDivider&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VMixedDivider(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMixedDivider();
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
    static void _eval_initial_loop(VMixedDivider__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMixedDivider__Syms* symsp, bool first);
  private:
    static QData	_change_request(VMixedDivider__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VMixedDivider__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__4(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_combo__TOP__8(VMixedDivider__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VMixedDivider__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_eval_initial(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_eval_settle(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__9(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_settle__TOP__10(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VMixedDivider__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VMixedDivider__Syms* __restrict vlSymsp);
    static void	traceChgThis(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VMixedDivider__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
