// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCICIntegrator_H_
#define _VCICIntegrator_H_

#include "verilated.h"
class VCICIntegrator__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCICIntegrator) {
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
    VL_OUT8(filtered_data_valid,0,0);
    VL_IN16(raw_data_payload,11,0);
    //char	__VpadToAlign6[2];
    VL_OUT(filtered_data_payload,20,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(CICIntegrator__DOT___zz_internal_en,4,0);
    VL_SIG8(CICIntegrator__DOT__internal_en,3,0);
    VL_SIG8(CICIntegrator__DOT__when_CICIntegrator_l22,0,0);
    VL_SIG8(CICIntegrator__DOT__when_CICIntegrator_l27,0,0);
    VL_SIG8(CICIntegrator__DOT__when_CICIntegrator_l27_1,0,0);
    //char	__VpadToAlign21[1];
    VL_SIG16(CICIntegrator__DOT__raw_data_buf,11,0);
    VL_SIG(CICIntegrator__DOT__internal_data_vec_0,20,0);
    VL_SIG(CICIntegrator__DOT__internal_data_vec_1,20,0);
    VL_SIG(CICIntegrator__DOT__internal_data_vec_2,20,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign42[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign52[4];
    VCICIntegrator__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCICIntegrator& operator= (const VCICIntegrator&);	///< Copying not allowed
    VCICIntegrator(const VCICIntegrator&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCICIntegrator(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCICIntegrator();
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
    static void _eval_initial_loop(VCICIntegrator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCICIntegrator__Syms* symsp, bool first);
  private:
    static QData	_change_request(VCICIntegrator__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VCICIntegrator__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__5(VCICIntegrator__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VCICIntegrator__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VCICIntegrator__Syms* __restrict vlSymsp);
    static void	_eval_initial(VCICIntegrator__Syms* __restrict vlSymsp);
    static void	_eval_settle(VCICIntegrator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VCICIntegrator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VCICIntegrator__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VCICIntegrator__Syms* __restrict vlSymsp);
    static void	traceChgThis(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VCICIntegrator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
