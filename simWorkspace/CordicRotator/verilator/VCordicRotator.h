// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCordicRotator_H_
#define _VCordicRotator_H_

#include "verilated.h"
class VCordicRotator__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCordicRotator) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(iter_limit,4,0);
    VL_IN8(rotate_mode,0,0);
    VL_IN8(x_u,1,0);
    VL_IN8(w_en,0,0);
    VL_IN8(w_addr,7,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_OUT8(result_valid,0,0);
    //char	__VpadToAlign10[2];
    VL_IN(w_data,31,0);
    VL_IN(raw_data_payload_x,31,0);
    VL_IN(raw_data_payload_y,31,0);
    VL_IN(raw_data_payload_z,31,0);
    VL_OUT(result_payload_x,31,0);
    VL_OUT(result_payload_y,31,0);
    VL_OUT(result_payload_z,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x,4,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_regNext,4,0);
    VL_SIG8(CordicRotator__DOT___zz_result_valid,0,0);
    VL_SIG8(CordicRotator__DOT___zz_result_payload_x_9,0,0);
    VL_SIG8(CordicRotator__DOT___zz_raw_data_ready,0,0);
    VL_SIG8(CordicRotator__DOT___zz_2,0,0);
    VL_SIG8(CordicRotator__DOT___zz_3,1,0);
    VL_SIG8(CordicRotator__DOT___zz_4,1,0);
    VL_SIG8(CordicRotator__DOT__raw_data_fire,0,0);
    //char	__VpadToAlign53[3];
    VL_SIG(CordicRotator__DOT___zz___05Fzz_1_port1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_1_2,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_1_3,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_2,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_2_1,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_3,31,0);
    VL_SIG(CordicRotator__DOT___zz___05Fzz_result_payload_x_3_1,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_1,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_2,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_3,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_4,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_y,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_z,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_5,31,0);
    VL_SIG(CordicRotator__DOT___zz_result_payload_x_6,31,0);
    //char	__VpadToAlign116[4];
    VL_SIG(CordicRotator__DOT___zz_1[16],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_CordicRotator__DOT___zz_4[64],1,0);
    VL_SIG8(__Vtableidx1,5,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign191[1];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCordicRotator__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCordicRotator& operator= (const VCordicRotator&);	///< Copying not allowed
    VCordicRotator(const VCordicRotator&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCordicRotator(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCordicRotator();
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
    static void _eval_initial_loop(VCordicRotator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCordicRotator__Syms* symsp, bool first);
  private:
    static QData	_change_request(VCordicRotator__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VCordicRotator__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__5(VCordicRotator__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VCordicRotator__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_eval_initial(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_eval_settle(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_initial__TOP__3(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VCordicRotator__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VCordicRotator__Syms* __restrict vlSymsp);
    static void	traceChgThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
