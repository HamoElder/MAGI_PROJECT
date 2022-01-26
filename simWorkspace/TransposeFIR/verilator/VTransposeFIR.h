// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTransposeFIR_H_
#define _VTransposeFIR_H_

#include "verilated.h"
class VTransposeFIR__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTransposeFIR) {
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
    VL_IN16(raw_data_payload_0,15,0);
    //char	__VpadToAlign6[2];
    VL_OUT(filtered_data_payload_0,23,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(TransposeFIR__DOT__coff_mem_0,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_1,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_2,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_3,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_4,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_5,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_6,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_7,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_8,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_9,7,0);
    VL_SIG8(TransposeFIR__DOT__coff_mem_10,7,0);
    //char	__VpadToAlign27[1];
    VL_SIG(TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data,23,0);
    VL_SIG(TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data,23,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign118[2];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTransposeFIR__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTransposeFIR& operator= (const VTransposeFIR&);	///< Copying not allowed
    VTransposeFIR(const VTransposeFIR&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTransposeFIR(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTransposeFIR();
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
    static void _eval_initial_loop(VTransposeFIR__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTransposeFIR__Syms* symsp, bool first);
  private:
    static QData	_change_request(VTransposeFIR__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VTransposeFIR__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(VTransposeFIR__Syms* __restrict vlSymsp);
    static void	_combo__TOP__7(VTransposeFIR__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VTransposeFIR__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VTransposeFIR__Syms* __restrict vlSymsp);
    static void	_eval_initial(VTransposeFIR__Syms* __restrict vlSymsp);
    static void	_eval_settle(VTransposeFIR__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VTransposeFIR__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VTransposeFIR__Syms* __restrict vlSymsp);
    static void	traceChgThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
