// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDecimator_H_
#define _VDecimator_H_

#include "verilated.h"
class VDecimator__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VDecimator) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(in_valid,0,0);
    VL_OUT8(out_valid,0,0);
    VL_IN16(in_payload,11,0);
    VL_OUT16(out_payload,11,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(Decimator__DOT___zz_cnt,2,0);
    VL_SIG8(Decimator__DOT__cntDataType,2,0);
    VL_SIG8(Decimator__DOT__cnt,2,0);
    VL_SIG8(Decimator__DOT__out_valid_1,0,0);
    VL_SIG8(Decimator__DOT__when_Decimator_l22,0,0);
    //char	__VpadToAlign17[1];
    VL_SIG16(Decimator__DOT__out_data,11,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign26[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign36[4];
    VDecimator__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VDecimator& operator= (const VDecimator&);	///< Copying not allowed
    VDecimator(const VDecimator&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VDecimator(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDecimator();
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
    static void _eval_initial_loop(VDecimator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDecimator__Syms* symsp, bool first);
  private:
    static QData	_change_request(VDecimator__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VDecimator__Syms* __restrict vlSymsp);
    void	_configure_coverage(VDecimator__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VDecimator__Syms* __restrict vlSymsp);
    static void	_eval_initial(VDecimator__Syms* __restrict vlSymsp);
    static void	_eval_settle(VDecimator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VDecimator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VDecimator__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VDecimator__Syms* __restrict vlSymsp);
    static void	traceChgThis(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VDecimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
