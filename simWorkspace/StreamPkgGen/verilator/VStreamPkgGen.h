// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VStreamPkgGen_H_
#define _VStreamPkgGen_H_

#include "verilated.h"
class VStreamPkgGen__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VStreamPkgGen) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_stream_valid,0,0);
    VL_OUT8(raw_data_stream_ready,0,0);
    VL_IN8(raw_data_stream_payload_last,0,0);
    VL_IN8(raw_data_stream_payload_fragment_strb,3,0);
    VL_OUT8(pkg_data_valid,0,0);
    VL_IN8(pkg_data_ready,0,0);
    VL_OUT8(pkg_data_payload_last,0,0);
    VL_OUT8(pkg_data_payload_fragment,7,0);
    VL_IN16(slices_limit,11,0);
    VL_OUT16(slices_cnt,11,0);
    //char	__VpadToAlign14[2];
    VL_IN(raw_data_stream_payload_fragment_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(StreamPkgGen__DOT__strb_buf,3,0);
    VL_SIG8(StreamPkgGen__DOT__raw_data_stream_fire,0,0);
    VL_SIG8(StreamPkgGen__DOT__split_core__DOT__cnt,2,0);
    VL_SIG8(StreamPkgGen__DOT__split_core__DOT__raw_data_fire,0,0);
    VL_SIG8(StreamPkgGen__DOT__split_core__DOT__split_data_fire,0,0);
    //char	__VpadToAlign29[1];
    VL_SIG16(StreamPkgGen__DOT___zz_pkg_slices_cnt_1,11,0);
    VL_SIG16(StreamPkgGen__DOT__pkg_slices_cnt,11,0);
    //char	__VpadToAlign34[2];
    VL_SIG(StreamPkgGen__DOT__split_core__DOT__data_buf,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign46[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VStreamPkgGen__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VStreamPkgGen& operator= (const VStreamPkgGen&);	///< Copying not allowed
    VStreamPkgGen(const VStreamPkgGen&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VStreamPkgGen(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VStreamPkgGen();
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
    static void _eval_initial_loop(VStreamPkgGen__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VStreamPkgGen__Syms* symsp, bool first);
  private:
    static QData	_change_request(VStreamPkgGen__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VStreamPkgGen__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__4(VStreamPkgGen__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VStreamPkgGen__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VStreamPkgGen__Syms* __restrict vlSymsp);
    static void	_eval_initial(VStreamPkgGen__Syms* __restrict vlSymsp);
    static void	_eval_settle(VStreamPkgGen__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VStreamPkgGen__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VStreamPkgGen__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VStreamPkgGen__Syms* __restrict vlSymsp);
    static void	traceChgThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
