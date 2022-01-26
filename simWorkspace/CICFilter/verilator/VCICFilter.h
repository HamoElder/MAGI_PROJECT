// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCICFilter_H_
#define _VCICFilter_H_

#include "verilated.h"
class VCICFilter__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VCICFilter) {
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
    VL_IN16(raw_data_payload,15,0);
    //char	__VpadToAlign6[2];
    VL_OUT(filtered_data_payload,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(CICFilter__DOT__integrator__DOT___zz_internal_en,4,0);
    VL_SIG8(CICFilter__DOT__integrator__DOT__internal_en,3,0);
    VL_SIG8(CICFilter__DOT__integrator__DOT__when_CICIntegrator_l22,0,0);
    VL_SIG8(CICFilter__DOT__integrator__DOT__when_CICIntegrator_l27,0,0);
    VL_SIG8(CICFilter__DOT__integrator__DOT__when_CICIntegrator_l27_1,0,0);
    VL_SIG8(CICFilter__DOT__decimator_1__DOT___zz_cnt,2,0);
    VL_SIG8(CICFilter__DOT__decimator_1__DOT__cnt,2,0);
    VL_SIG8(CICFilter__DOT__decimator_1__DOT__out_valid_1,0,0);
    VL_SIG8(CICFilter__DOT__decimator_1__DOT__when_Decimator_l22,0,0);
    VL_SIG8(CICFilter__DOT__combor__DOT__result_data_valid_1,0,0);
    VL_SIG16(CICFilter__DOT__integrator__DOT__raw_data_buf,15,0);
    VL_SIG(CICFilter__DOT__integrator__DOT__internal_data_vec_0,16,0);
    VL_SIG(CICFilter__DOT__integrator__DOT__internal_data_vec_1,16,0);
    VL_SIG(CICFilter__DOT__integrator__DOT__internal_data_vec_2,16,0);
    VL_SIG(CICFilter__DOT__decimator_1__DOT__out_data,20,0);
    VL_SIG(CICFilter__DOT__combor__DOT__internal_data_vec_0,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__internal_data_vec_1,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__internal_data_vec_2,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__delay_data_vec_0,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__delay_data_vec_1,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__delay_data_vec_2,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__pipe_data_vec_0,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__pipe_data_vec_1,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__pipe_data_vec_2,16,0);
    VL_SIG(CICFilter__DOT__combor__DOT__result_data_payload_1,16,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vdly__CICFilter__DOT__decimator_1__DOT__cnt,2,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    VL_SIG8(__Vclklast__TOP__reset,0,0);
    //char	__VpadToAlign91[1];
    VL_SIG(__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_0,16,0);
    VL_SIG(__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_1,16,0);
    VL_SIG(__Vdly__CICFilter__DOT__integrator__DOT__internal_data_vec_2,16,0);
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCICFilter__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VCICFilter& operator= (const VCICFilter&);	///< Copying not allowed
    VCICFilter(const VCICFilter&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VCICFilter(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCICFilter();
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
    static void _eval_initial_loop(VCICFilter__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCICFilter__Syms* symsp, bool first);
  private:
    static QData	_change_request(VCICFilter__Syms* __restrict vlSymsp);
    static QData	_change_request_1(VCICFilter__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__8(VCICFilter__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VCICFilter__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VCICFilter__Syms* __restrict vlSymsp);
    static void	_eval_initial(VCICFilter__Syms* __restrict vlSymsp);
    static void	_eval_settle(VCICFilter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VCICFilter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VCICFilter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VCICFilter__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VCICFilter__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VCICFilter__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(VCICFilter__Syms* __restrict vlSymsp);
    static void	traceChgThis(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
