// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCICComb_H_
#define _VCICComb_H_

#include "verilated.h"
class VCICComb__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCICComb) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(result_data_valid,0,0);
    VL_IN(raw_data_payload,20,0);
    VL_OUT(result_data_payload,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(CICComb__DOT__result_data_valid_1,0,0);
    //char	__VpadToAlign17[3];
    VL_SIG(CICComb__DOT__internal_data_vec_0,16,0);
    VL_SIG(CICComb__DOT__internal_data_vec_1,16,0);
    VL_SIG(CICComb__DOT__internal_data_vec_2,16,0);
    VL_SIG(CICComb__DOT__delay_data_vec_0,16,0);
    VL_SIG(CICComb__DOT__delay_data_vec_1,16,0);
    VL_SIG(CICComb__DOT__delay_data_vec_2,16,0);
    VL_SIG(CICComb__DOT__pipe_data_vec_0,16,0);
    VL_SIG(CICComb__DOT__pipe_data_vec_1,16,0);
    VL_SIG(CICComb__DOT__pipe_data_vec_2,16,0);
    VL_SIG(CICComb__DOT__result_data_payload_1,16,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign66[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign76[4];
    VCICComb__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCICComb& operator= (const VCICComb&);	///< Copying not allowed
    VCICComb(const VCICComb&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCICComb(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCICComb();
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
    static void _eval_initial_loop(VCICComb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCICComb__Syms* symsp, bool first);
  private:
    static QData	_change_request(VCICComb__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VCICComb__Syms* __restrict vlSymsp);
    void	_configure_coverage(VCICComb__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VCICComb__Syms* __restrict vlSymsp);
    static void	_eval_initial(VCICComb__Syms* __restrict vlSymsp);
    static void	_eval_settle(VCICComb__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VCICComb__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(VCICComb__Syms* __restrict vlSymsp);
    static void	traceChgThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
